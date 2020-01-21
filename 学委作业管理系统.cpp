#include<iostream>
using namespace std;
typedef struct student* student_pointer;
typedef struct work* work_pointer;
typedef struct submission* submission_pointer;
struct work {
	int work_num;
	char major_name[20];
	int work_times;
	string work_concent;
	int work_settime;
	int work_stoppushtime;
	string other;
	work_pointer next;
};
typedef work_pointer work_lklist;
struct submission{
	int calss;
	int number;
	int work_num;
	int work_pushtime;
	int times;
	string other;
	submission_pointer next;
	char major_name[20];
};
typedef submission_pointer submission_lklist;
struct student {
	int calss;
	int number; 
	int key;
	char identity[10];//身份 可以分为两种 学委 
	string other;
	student_pointer next;
};
typedef student_pointer student_lklist;
int main() {
	student_lklist chushihua_student();
	submission_pointer chushihua_submission();
	work_pointer chushihua_work();
	void identity_verification(int number, int key, student_lklist head, work_lklist work_head, submission_lklist submission_head);
	void master_method(student_lklist head);
	void add_student(student_lklist head);
	int yanzheng_student(student_lklist head, int studentnum);
	void chaxun_student(student_lklist head);
	void delete_student(student_lklist head);
	void xiugai_student(student_lklist head);
	student_lklist H;
	H = chushihua_student();
	work_lklist K;
	K = chushihua_work();
	submission_lklist L;
	L = chushihua_submission();
	int login_number;
	int login_key;
	while (1) {
		cout << "                         ******************************" << "\n";
		cout << "                         *                            *" << "\n";
		cout << "                         *   学 委 作 业 管 理 系 统  *" << "\n";
		cout << "                         *                            *" << "\n";
		cout << "                         ******************************" << "\n";
		cout << "          ---------------------------分页符-----------------------------" << "\n";
		cout << "                               登入学委作业管理系统" << "\n";
		cout << "学号：";cin >> login_number;
		cout << "密码：";cin >> login_key;
		identity_verification(login_number, login_key, H,K,L);
		cout << "          ---------------------------分页符-----------------------------" << "\n";
	}
	return 0;
}
void identity_verification(int number, int key, student_lklist head, work_lklist work_head,submission_lklist submission_head) {
	void master_method(student_lklist head);
	void student_method(work_lklist work_head,int number,submission_lklist submission_head);
	void xuewei_method(work_lklist work_head, submission_lklist submission_lkist);
	int j = 0;//计数器
	student_pointer p;
	p = head->next;
	if (number == 666666 && key == 666666)
	{
		master_method(head);
		return;
		
	}
	while (p != NULL)
	{
		if (p->number == number)
			if (p->key == key)
			{
				if (strcmp(p->identity,"xuewei")==0)
				{
					xuewei_method(work_head, submission_head);return;
				}
				else if(strcmp(p->identity,"xuesheng")==0)
				{
					student_method(work_head,number,submission_head);return;
				}
			}
			else {
				cout << "Number is wrong !" << "\n";return;
				return;
			}
		p = p->next;
	}
}
void master_method(student_lklist head) {
	void chaxun_student(student_lklist head);
	void add_student(student_lklist head);
	void delete_student(student_lklist head);
	void xiugai_student(student_lklist head);
	cout << "                         ***********************************" << "\n";
	cout << "                         *            管 理 员 模 式       *" << "\n";
	cout << "                         *        1. 增 加 学 生 信 息     *" << "\n";
	cout << "                         *        2. 删 除 学 生 信 息     *" << "\n";
	cout << "                         *        3. 修 改 学 生 信 息     *" << "\n";
	cout << "                         *        4. 查 询 学 生 信 息     *" << "\n";
	cout << "                         ***********************************" << "\n";
	cout << "          -----------------------------分页符----------------------------" << "\n";
	int n;
	cin >> n;
	switch (n)
	{
	case 1:add_student(head);break;
	case 2:delete_student(head);break;
	case 3:xiugai_student(head);break;
	case 4:chaxun_student(head);break;
	default:cout << "Set in error\n";
		break;
	}
}
void xuewei_method(work_lklist work_head,submission_lklist submission_head) {
	void add_work(work_lklist work_head);
	void delete_work(work_lklist work_head);
	void xiugai_work(work_lklist work_head);
	void chaxun_all_work(work_lklist work_head);
	void chaxun_time_work(work_lklist work_head);
	void chaxun_majorname(work_lklist work_head);
	void add_submission(submission_lklist submission_head);
	void delete_submission(submission_lklist submission_head);
	void xiugai_submission(submission_lklist submission_head);
	void chaxun_all_submission(submission_lklist submission_head);
	void chaxun_major_submission(submission_lklist submission_head);
	void chaxun_number_submission(submission_lklist submission_head);
	cout << "                         ************************************" << "\n";
	cout << "                         *             学 委 模 式          *" << "\n";
	cout << "                         *        1. 增加作业信息           *" << "\n";
	cout << "                         *        2. 删除作业信息           *" << "\n";
	cout << "                         *        3. 修改作业信息           *" << "\n";
	cout << "                         *        4. 查询所有作业           *" << "\n";
	cout << "                         *        5. 按设置时间范围查作业   *" << "\n";
	cout << "                         *        6. 按课程查作业           *" << "\n";
	cout << "                         *        7. 增加作业提交情况       *" << "\n";
	cout << "                         *        8. 删除作业提交情况       *" << "\n";
	cout << "                         *        9. 修改作业提交情况       *" << "\n";
	cout << "                         *       10. 查询所有提交列表       *" << "\n";
	cout << "                         *       11. 按课程查询作业提交情况 *" << "\n";
	cout << "                         *       12. 查询某同学作业提交情况 *" << "\n";
	cout << "                         ************************************" << "\n";
	cout << "              -----------------------------分页符----------------------------" << "\n";
	int n;
	cin >> n;
	switch (n)
	{
	case 1:add_work(work_head);break;
	case 2:delete_work(work_head);break;
	case 3:xiugai_work(work_head);break;
	case 4:chaxun_all_work(work_head);break;
	case 5:chaxun_time_work(work_head);break;
	case 6:chaxun_majorname(work_head);break;
	case 7:add_submission(submission_head);break;
	case 8:delete_submission(submission_head);break;
	case 9:xiugai_submission(submission_head);break;
	case 10:chaxun_all_submission(submission_head);break;
	case 11:chaxun_major_submission(submission_head);break;
	case 12:chaxun_number_submission(submission_head);break;
	default:cout << "Set in error\n";
		break;
	}
}
void student_method(work_lklist work_head,int number,submission_lklist submission_head) {
	void chaxun_all_work(work_lklist work_head);

	void chaxun_student_submission(submission_lklist submission_head, int number);
	cout << "                         ***********************************" << "\n";
	cout << "                         *            学 生 模 式          *" << "\n";
	cout << "                         *       1. 查   看   作   业      *" << "\n";
	cout << "                         *       2. 查看本人作业提交情况       *" << "\n";
	cout << "                         ***********************************" << "\n";
	cout << "             -----------------------------分页符----------------------------" << "\n";
	int n;
	cin >> n;
	switch (n)
	{
	case 1:chaxun_all_work(work_head);break;
	case 2:chaxun_student_submission(submission_head, number);break;
	default:cout << "Set in error\n";
		break;
	}
}
void add_student(student_lklist head) {
	int yanzheng_student(student_lklist head, int studentnum);
    student_pointer s;
	s = new student;
	int calss, number, key;
	string  other;
	int i = 0;
	char identity[10];
	cout << "输入学生信息:\n";
	cout << "班级：";cin >> calss;
	cout << "学号：";cin >> number;
	cout << "密码：";cin >> key;
	cout << "身份：";cin >> identity;
	cout << "备注：";cin >> other;
	if (yanzheng_student(head, number))
	{
		s->calss = calss;
		for (i = 0;i < 10;i++)
		{
			s->identity[i] = identity[i];
		}
		s->key = key;
		s->number = number;
		s->other = other;
		s->next = head->next;
		head->next = s;
		cout << "添加成功！\n";
	}
	else cout << "学生信息输入错误\n";
	
}
int yanzheng_student(student_lklist head, int studentnum) {
	student_pointer p;
	p = head->next;
	int j = 0;
	string xueweiidentity = "xuewei";
	while (p != NULL) {
		if (strcmp(p->identity,"xuewei") == 0)                      //compare函数 BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG 
			j++;
		if (p->number == studentnum)return 0;
		p = p->next;
	}
	if (j == 0||j == 1)
		return 1;
	else return 0;
}
void chaxun_student(student_lklist head) {
	int studentnum;
	cout << "输入要查询的学生学号:";
	cin >> studentnum;
	student_pointer p;
	p = head->next;
	while (p != NULL) {
		if (p->number == studentnum)break;
		p = p->next;
	}
	if (p != NULL)
	{
		cout << "                                     学 生 信 息          " << "\n";
		cout << "                                 班级："<<p->calss<< "\n";
		cout << "                                 学号："<<p->number << "\n";
		cout << "                                 密码："<<p->key << "\n";
		cout << "                                 身份："<<p->identity << "\n";
		cout << "                                 其他："<<p->other << "\n";
	}
	else
	{
		cout << "学号输入错误！\n";
	}
}
void delete_student(student_lklist head) {
	int studentnum;
	int i = 0;
	cout << "输入要删除的学生学号:";
	cin >> studentnum;
	student_pointer p,q;
	p = head->next;
	char z;
	while (p != NULL) {
		if (p->number == studentnum)break;
		p = p->next;
	}
	if (p != NULL)
	{
		cout << "                                 查询到学生信息          " << "\n";
		cout << "                                 班级：" << p->calss << "\n";
		cout << "                                 学号：" << p->number << "\n";
		cout << "                                 密码：" << p->key << "\n";
		cout << "                                 身份：" << p->identity << "\n";
		cout << "                                 其他：" << p->other << "\n";
		cout << "是否要删除学生信息 是（Y）:";cin >> z;
		if (z == 'Y' || z == 'y')
		{
			q = p->next;
			p->calss = q->calss;
			for (i = 0;i < 10;i++)
			{
				p->identity[i] = q->identity[i];
			}
			p->key = q->key;
			p->number = q->number;
			p->other = q->other;
			p->next = q->next;
			delete q;
			cout << "删除成功!\n";
		}
	}
	else
	{
		cout << "学号输入错误！\n";
	}
}
void xiugai_student(student_lklist head) {
	int calss, number, key;
	string identity, other;
	int studentnum;
	char z;
	int i = 0;
	cout << "输入要修改的学生学号:";
	cin >> studentnum;
	student_pointer p;
	p = head->next;
	while (p != NULL) {
		if (p->number == studentnum)break;
		p = p->next;
	}
	if (p != NULL)
	{
		cout << "                                 查找到学生信息          " << "\n";
		cout << "                                 班级：" << p->calss << "\n";
		cout << "                                 学号：" << p->number << "\n";
		cout << "                                 密码：" << p->key << "\n";
		cout << "                                 身份：" << p->identity << "\n";
		cout << "                                 其他：" << p->other << "\n";
		cout << "是否需要修改学生信息 是（Y）：";cin >> z;
		if (z == 'y'||z == 'Y')
		{
			cout << "输入学生信息:\n";
			cout << "班级：";cin >> calss;
			cout << "学号：";cin >> number;
			cout << "密码：";cin >> key;
			cout << "身份：";cin >> identity;
			cout << "备注：";cin >> other;
			if (yanzheng_student(head, number))
			{
				p->calss = calss;
				for (i = 0;i < 10;i++)
				{
					p->identity[i] = identity[i];
				}
				p->key = key;
				p->number = number;
				p->other = other;
			}
			else cout << "学生信息输入错误\n";
		}

	}
	else
	{
		cout << "学号输入错误！\n";
	}
	cout << "          -----------------------------分页符----------------------------" << "\n";
}
void add_work(work_lklist work_head) {
	int yanzhen_work(work_lklist work_head, int number);
	char a;
	int num;
	int work_num, work_times, work_settime, work_stoppushtime;
	char major_name[20];string work_concent, other;
	work_pointer s;
	s = new work;
	cout << "输入作业信息:\n";
	cout << "作业编号：";cin >> work_num;
	cout << "课程名称：";cin >> major_name;
	cout << "作业次数：";cin >> work_times;
	cout << "作业内容：";cin >> work_concent;
	cout << "布置时间：";cin >> work_settime;
	cout << "截止时间：";cin >> work_stoppushtime;
	cout << "备注：";cin >> other;
	if (yanzhen_work(work_head, work_num))
	{
		s->work_num = work_num;
		for (int i = 0;i < 20;i++)
		{
			s->major_name[i] = major_name[i];
		}
		s->other = other;
		s->work_concent = work_concent;
		s->work_settime = work_settime;
		s->work_times = work_times;
		s->work_stoppushtime = work_stoppushtime;
		s->next = work_head->next;
		work_head->next = s;
		cout << "添加成功！\n";
	}
	cout << "添加失败！\n";
}
void delete_work(work_lklist work_head) {
	int num,i;
	char a;
	cout << "输入要删除的作业编号：";cin >> num;
	work_pointer p,q;
	p = work_head->next;
	while (p != NULL) {
		if (p->work_num == num)break;
		p = p->next;
	}
	if (p != NULL) {
		cout << "                       查询到作业信息:\n";
		cout << "                作业编号："<<p->work_num<<"\n";
		cout << "                课程名称："<<p->major_name<<"\n";
		cout << "                作业次数："<<p->work_times<<"\n";
		cout << "                作业内容："<<p->work_concent<<"\n";
		cout << "                布置时间："<<p->work_settime<<"\n";
		cout << "                截止时间："<<p->work_stoppushtime<<"\n";
		cout << "                备注："<<p->other<<"\n";
		cout << "是否要删除作业 是(Y/y)";cin >> a;
		if (a == 'Y' || a == 'y')
		{
			q = p->next;
			p->work_num = q->work_num;
			for (i = 0;i < 10;i++)
			{
				p->major_name[i] = q->major_name[i];
			}
			p->work_times = q->work_times;
			p->work_concent = q->work_concent;
			p->work_settime = q->work_settime;
			p->work_settime = q->work_settime;
			p->other = q->other;
			p->next = q->next;
			delete q;
			cout << "删除成功!\n";
		}
		
	}
	else cout << "输入错误！\n";
}
void xiugai_work(work_lklist work_head)
{
	int yanzhen_work(work_lklist work_head, int number);
	char a;
	int num;
	int work_num, work_times, work_settime, work_stoppushtime;
	char major_name[20];string work_concent,other;
	cout << "输入修改的作业编号：";cin >> num;
	work_pointer p, q;
	p = work_head->next;
	while (p != NULL) {
		if (p->work_num == num)break;
		p = p->next;
	}
	if (p != NULL) {
		cout << "                       查询到作业信息:\n";
		cout << "                作业编号：" << p->work_num << "\n";
		cout << "                课程名称：" << p->major_name << "\n";
		cout << "                作业次数：" << p->work_times << "\n";
		cout << "                作业内容：" << p->work_concent << "\n";
		cout << "                布置时间：" << p->work_settime << "\n";
		cout << "                截止时间：" << p->work_stoppushtime << "\n";
		cout << "                备注：" << p->other << "\n";
		cout << "是否修改作业 是(Y/y):";cin >> a;
		if (a == 'y' || a == 'Y')
		{
			cout << "输入作业信息:\n";
			cout << "作业编号：";cin >> work_num;
			cout << "课程名称：";cin >> major_name;
			cout << "作业次数：";cin >> work_times;
			cout << "作业内容：";cin >> work_concent;
			cout << "布置时间：";cin >> work_settime;
			cout << "截止时间：";cin >> work_stoppushtime;
			cout << "备注：";cin >> other;
			if (yanzhen_work(work_head, work_num)) {
				p->work_num = work_num;
				for (int i = 0;i < 20;i++)
				{
					p->major_name[i] = major_name[i];
				}
				p->other = other;
				p->work_concent = work_concent;
				p->work_settime = work_settime;
				p->work_times = work_times;
				p->work_stoppushtime = work_stoppushtime;
			}
		}
	}
}
void chaxun_all_work(work_lklist work_head) {
	void work_sort(work_lklist work_head);
	work_sort(work_head);
	work_pointer p;
	p = work_head->next;
	while (p != NULL) {
		cout << "作业编号    课程名称   作业次数   作业内容   布置时间   截止时间    备注\n";
		cout << p->work_num << "            " << p->major_name << "         " << p->work_times << "      " << p->work_concent << "    " << p->work_settime << "    " << p->work_stoppushtime << "      " << p->other;
		cout << "\n";
		p = p->next;
	}
}
void chaxun_time_work(work_lklist work_head) {
	void work_sort(work_lklist work_head);
	work_sort(work_head);
	int start,end, i=0;
	char a;
	cout << "输入查询的开始时间：";cin >> start;
	cout << "输入查询的结束时间：";cin >> end;
	work_pointer p, q;
	p = work_head->next;
	while (p != NULL) {
		if (p->work_settime >= start && p->work_settime <= end)
		{
			i++;
			cout << "作业编号  课程名称   作业次数   作业内容   布置时间   截止时间    备注\n";
			cout << p->work_num << "            " << p->major_name << "         " << p->work_times << "     " << p->work_concent << "      " << p->work_settime << "    " << p->work_stoppushtime << "      " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)
	{
		cout << "输入错误！\n";
	}
		
}
void chaxun_majorname(work_lklist work_head)
{
	int i = 0;
	char major[20];
	void work_sort(work_lklist work_head);
	work_sort(work_head);
	cout << "输入你要查询的课程名称:";cin >> major;
	work_pointer p;
	p = work_head->next;
	while (p != NULL)
	{
		if (strcmp(major, p->major_name) == 0)
		{
			i++;
			cout << "作业编号    课程名称   作业次数   作业内容   布置时间   截止时间    备注\n";
			cout << p->work_num << "           " << p->major_name << "       " << p->work_times << "        " << p->work_concent << "       " << p->work_settime << "     " << p->work_stoppushtime << "     " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)cout << "输入错误！\n";
}
int yanzhen_work(work_lklist work_head, int number) {//验证作业编号是否相等
	work_pointer p, q;
	p = work_head->next;
	while (p != NULL) {
		if (p->work_num == number)return 0;
		p = p->next;
	}
	return 1;
}
void work_sort(work_lklist work_head) {//冒泡排序
       work_pointer  p,  q;
	   int temp1, temp3, temp4, temp5,i=0;
	   string temp2, temp6;
	   char temp7[20];
       for (p = work_head->next; p != NULL; p = p->next)
		    for (q = p->next; q != NULL; q = q->next)
		            if (p->work_settime > q->work_settime)
		            {
						temp1 = p->work_settime;
						p->work_settime = q->work_settime;
						q->work_settime = temp1;
						temp2 = p->work_concent;
						p->work_concent = q->work_concent;
						q->work_concent = temp2;
						temp3 = p->work_num;
						p->work_num = q->work_num;
						q->work_num = temp3;
						temp4 = p->work_times;
						p->work_times = q->work_times;
						q->work_times = temp4;
						temp5 = p->work_stoppushtime;
						p->work_stoppushtime = q->work_stoppushtime;
						q->work_stoppushtime = temp5;
						temp6 = p->other;
						p->other = q->other;
						q->other = temp6;
						for (i = 0;i < 20;i++)
						{
							temp7[i] = p->major_name[i];
							p->major_name[i] = q->major_name[i];
							q->major_name[i] = temp7[i];
						}
		            }
	
		
}
void add_submission(submission_lklist submission_head) {
	submission_pointer s;
	s = new submission;
	cout << "输入添加的提交状况\n";
	cout << "作业编号：";cin >> s->work_num;
	cout << "学号：";cin >> s->number;
	cout << "班级：";cin >> s->calss;
	cout << "课程名称：";cin >> s->major_name;
	cout << "提交次数：";cin >> s->times;
	cout << "提交时间：";cin >> s->work_pushtime;
	cout << "备注：";cin >> s->other;
	s->next = submission_head->next;
	submission_head->next = s;
	cout << "添加成功！\n";
}
void delete_submission(submission_lklist submission_head)
{
	char a;
	int work_num, num;
	cout << "输入删除的作业编号：";cin >> work_num;
	cout << "输入删除的学号：";cin >> num;
	submission_pointer p, q;
	p = submission_head->next;
	while (p != NULL) {
		if (p->work_num == work_num && p->number == num)break;
		p = p->next;
	}
	if (p != NULL) {
		cout << "                       查询到作业提交情况:\n";
		cout << "                作业编号：" << p->work_num << "\n";
		cout << "                学号：" << p->number << "\n";
		cout << "                班级：" << p->calss << "\n";
		cout << "                课程名称：" << p->major_name << "\n";
		cout << "                提交次数：" << p->times << "\n";
		cout << "                提交时间：" << p->work_pushtime << "\n";
		cout << "                备注：" << p->other << "\n";
		cout << "是否要删除作业提交情况 是(Y/y)";cin >> a;
		if (a == 'y' || a == 'Y')
		{
			q = p->next;
			p->calss = q->calss;
			p->number = q->number;
			p->other = q->other;
			p->times = q->times;
			p->work_num = q->work_num;
			p->work_pushtime = q->work_pushtime;
			for (int i = 0;i < 20;i++)
			{
				p->major_name[i] = q->major_name[i];
			}
			p->next = q->next;
			delete q;
			cout << "删除成功！\n";
		}
	}
	else cout << "输入错误！\n";
}
void xiugai_submission(submission_lklist submission_head) {
	char a;
	int work_num, num;
	cout << "输入修改的作业编号：";cin >> work_num;
	cout << "输入修改的学号：";cin >> num;
	submission_pointer p;
	p = submission_head->next;
	while (p != NULL) {
		if (p->work_num == work_num && p->number == num)break;
		p = p->next;
	}
	if (p != NULL) {
		cout << "                       查询到作业提交情况:\n";
		cout << "                作业编号：" << p->work_num << "\n";
		cout << "                学号：" << p->number << "\n";
		cout << "                班级：" << p->calss << "\n";
		cout << "                课程名称：" << p->major_name << "\n";
		cout << "                提交次数：" << p->times << "\n";
		cout << "                提交时间：" << p->work_pushtime << "\n";
		cout << "                备注：" << p->other << "\n";
		cout << "是否要修改作业 是(Y/y)";cin >> a;
		if (a == 'y' || a == 'Y') {
			cout << "输入新的作业提交情况";
			cout << "作业编号：";cin >> p->work_num;
			cout << "学号：";cin >> p->number;
			cout << "班级：";cin >> p->calss;
			cout << "课程名称：";cin >> p->major_name;
			cout << "提交次数：";cin >> p->times;
			cout << "提交时间：";cin >> p->work_pushtime;
			cout << "备注：";cin >> p->other;
			cout << "修改成功！\n";
		}
	}
	else cout << "输入错误！";
}
void chaxun_all_submission(submission_lklist submission_head) {
	void submission_sort(submission_lklist submission_head);
	submission_sort(submission_head);
	submission_pointer p;
	p = submission_head->next;
	while (p != NULL) {
		cout << "班级    学号   作业编号   作业提交时间   提交次数   课程名称    备注\n";
		cout << p->calss << "      " << p->number << "   " << p->work_num << "         " << p->work_pushtime << "         " << p->times << "         " << p->major_name << "   " << p->other;
		cout << "\n";
		p = p->next;
	}
}
void chaxun_major_submission(submission_lklist submission_head) {
	void submission_sort(submission_lklist submission_head);
	submission_sort(submission_head);
	char majorname[20];
	cout << "输入要查询的课程名称：";cin >> majorname;
	int i = 0;
	submission_pointer p;
	p = submission_head->next;
	while (p != NULL)
	{
		if (strcmp(majorname, p->major_name) == 0)
		{
			i++;
			cout << "班级    学号   作业编号   作业提交时间   提交次数   课程名称    备注\n";
			cout << p->calss << "      " << p->number << "   " << p->work_num << "          " << p->work_pushtime << "       " << p->times << "          " << p->major_name << "   " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)cout << "输入错误！\n";
}
void chaxun_number_submission(submission_lklist submission_head) {
	void submission_sort(submission_lklist submission_head);
	submission_sort(submission_head);
	int number;
	cout << "输入要查询的学号：";cin >> number;
	submission_pointer p;
	p = submission_head->next;
	int i = 0;
	while (p != NULL)
	{
		if (p->number==number)
		{
			i++;
			cout << "班级    学号   作业编号   作业提交时间   提交次数   课程名称    备注\n";
			cout << p->calss << "     " << p->number << "    " << p->work_num << "         " << p->work_pushtime << "        " << p->times << "        " << p->major_name << "   " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)cout << "输入错误！\n";
}
void submission_sort(submission_lklist submission_head) {
	submission_pointer  p, q;
	int temp1, temp2, temp3, temp4,temp5, i = 0;
	string temp6;
	char temp7[20];
	for (p = submission_head->next; p != NULL; p = p->next)
		for (q = p->next; q != NULL; q = q->next)
			if (p->work_pushtime > q->work_pushtime)
			{
				if (p->times > q->times)
				{
					temp1 = p->calss;
					p->calss = q->calss;
					q->calss = temp1;
					temp2 = p->number;
					p->number = q->number;
					q->number = temp2;
					temp3 = p->work_num;
					p->work_num = q->work_num;
					q->work_num = temp3;
					temp4 = p->work_pushtime;
					p->work_pushtime = q->work_pushtime;
					q->work_pushtime = temp4;
					temp5 = p->times;
					p->times = q->times;
					q->times = temp5;
					temp6 = p->other;
					p->other = q->other;
					q->other = temp6;
					for (i = 0;i < 20;i++)
					{
						temp7[i] = p->major_name[i];
						p->major_name[i] = q->major_name[i];
						q->major_name[i] = temp7[i];
					}
				}
			}


}
void chaxun_student_submission(submission_lklist submission_head,int number) {
	void submission_sort(submission_lklist submission_head);
	submission_sort(submission_head);
	submission_pointer p;
	p = submission_head->next;
	int i = 0;
	while (p != NULL)
	{
		if (p->number == number)
		{
			i++;
			cout << "班级    学号       作业编号    作业提交时间    提交次数    课程名称    备注\n";
			cout << p->calss << "      " << p->number << "        " << p->work_num << "          " << p->work_pushtime << "         " << p->times << "        " << p->major_name << "     " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)cout << "输入错误！\n";
}
student_pointer chushihua_student() {
	student_pointer Head;
	student_pointer p, q, r;
	Head = new student;p = new student;q = new student;r = new student;
	Head->next = p;
	p->calss = 1;strcpy_s(p->identity, "xuewei");p->number = 20190101;p->key = 123456;p->other = " ";
	p->next = q;
	q->calss = 1;strcpy_s(q->identity, "xuesheng");q->number = 20190102;q->key = 123456;q->other = " ";
	q->next = r;
	r->calss = 1;strcpy_s(r->identity, "xuesheng");r->number = 20190103;r->key = 123456;r->other = " ";
	r->next = NULL;
	return Head;
}
work_pointer chushihua_work(){
	work_pointer Head;
	work_pointer p, q, r;
	Head = new work;p = new work;q = new work;r = new work;
	Head->next = p;
	p->work_num = 1;strcpy_s(p->major_name, "Math");p->work_times = 1;p->work_concent = "P1-P5";p->work_settime = 20190101;p->work_stoppushtime = 20190110;p->other = " ";
	p->next = q;
	q->work_num = 2;strcpy_s(q->major_name, "English");q->work_times = 1;q->work_concent = "P6-P10";q->work_settime = 20190110;q->work_stoppushtime = 20190120;q->other = " ";
	q->next = r;
	r->work_num = 3;strcpy_s(r->major_name, "Chinese");r->work_times = 1;r->work_concent = "P11-P15";r->work_settime = 20190115;r->work_stoppushtime = 20190130;r->other = " ";
	r->next = NULL;
	return Head;
}
submission_pointer chushihua_submission(){
	submission_pointer Head;
	submission_pointer p, q, r;
	Head = new submission;p = new submission;q = new submission;r = new submission;
	Head->next = p;
	p->calss = 1;strcpy_s(p->major_name, "Math");p->number = 20190101;p->work_num = 1;p->work_pushtime = 20190105;p->times = 1;p->other = " ";
	p->next = q;
	q->calss = 1;strcpy_s(q->major_name, "Math");q->number = 20190102;q->work_num = 1;q->work_pushtime = 20190105;q->times = 1;q->other = " ";
	q->next = r;
	r->calss = 1;strcpy_s(r->major_name, "Math");r->number = 20190103;r->work_num = 1;r->work_pushtime = 20190105;r->times = 1;r->other = " ";
	r->next = NULL;
	return Head;
}