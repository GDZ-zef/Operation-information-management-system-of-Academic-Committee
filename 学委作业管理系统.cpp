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
	char identity[10];//��� ���Է�Ϊ���� ѧί 
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
		cout << "                         *   ѧ ί �� ҵ �� �� ϵ ͳ  *" << "\n";
		cout << "                         *                            *" << "\n";
		cout << "                         ******************************" << "\n";
		cout << "          ---------------------------��ҳ��-----------------------------" << "\n";
		cout << "                               ����ѧί��ҵ����ϵͳ" << "\n";
		cout << "ѧ�ţ�";cin >> login_number;
		cout << "���룺";cin >> login_key;
		identity_verification(login_number, login_key, H,K,L);
		cout << "          ---------------------------��ҳ��-----------------------------" << "\n";
	}
	return 0;
}
void identity_verification(int number, int key, student_lklist head, work_lklist work_head,submission_lklist submission_head) {
	void master_method(student_lklist head);
	void student_method(work_lklist work_head,int number,submission_lklist submission_head);
	void xuewei_method(work_lklist work_head, submission_lklist submission_lkist);
	int j = 0;//������
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
	cout << "                         *            �� �� Ա ģ ʽ       *" << "\n";
	cout << "                         *        1. �� �� ѧ �� �� Ϣ     *" << "\n";
	cout << "                         *        2. ɾ �� ѧ �� �� Ϣ     *" << "\n";
	cout << "                         *        3. �� �� ѧ �� �� Ϣ     *" << "\n";
	cout << "                         *        4. �� ѯ ѧ �� �� Ϣ     *" << "\n";
	cout << "                         ***********************************" << "\n";
	cout << "          -----------------------------��ҳ��----------------------------" << "\n";
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
	cout << "                         *             ѧ ί ģ ʽ          *" << "\n";
	cout << "                         *        1. ������ҵ��Ϣ           *" << "\n";
	cout << "                         *        2. ɾ����ҵ��Ϣ           *" << "\n";
	cout << "                         *        3. �޸���ҵ��Ϣ           *" << "\n";
	cout << "                         *        4. ��ѯ������ҵ           *" << "\n";
	cout << "                         *        5. ������ʱ�䷶Χ����ҵ   *" << "\n";
	cout << "                         *        6. ���γ̲���ҵ           *" << "\n";
	cout << "                         *        7. ������ҵ�ύ���       *" << "\n";
	cout << "                         *        8. ɾ����ҵ�ύ���       *" << "\n";
	cout << "                         *        9. �޸���ҵ�ύ���       *" << "\n";
	cout << "                         *       10. ��ѯ�����ύ�б�       *" << "\n";
	cout << "                         *       11. ���γ̲�ѯ��ҵ�ύ��� *" << "\n";
	cout << "                         *       12. ��ѯĳͬѧ��ҵ�ύ��� *" << "\n";
	cout << "                         ************************************" << "\n";
	cout << "              -----------------------------��ҳ��----------------------------" << "\n";
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
	cout << "                         *            ѧ �� ģ ʽ          *" << "\n";
	cout << "                         *       1. ��   ��   ��   ҵ      *" << "\n";
	cout << "                         *       2. �鿴������ҵ�ύ���       *" << "\n";
	cout << "                         ***********************************" << "\n";
	cout << "             -----------------------------��ҳ��----------------------------" << "\n";
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
	cout << "����ѧ����Ϣ:\n";
	cout << "�༶��";cin >> calss;
	cout << "ѧ�ţ�";cin >> number;
	cout << "���룺";cin >> key;
	cout << "��ݣ�";cin >> identity;
	cout << "��ע��";cin >> other;
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
		cout << "��ӳɹ���\n";
	}
	else cout << "ѧ����Ϣ�������\n";
	
}
int yanzheng_student(student_lklist head, int studentnum) {
	student_pointer p;
	p = head->next;
	int j = 0;
	string xueweiidentity = "xuewei";
	while (p != NULL) {
		if (strcmp(p->identity,"xuewei") == 0)                      //compare���� BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG BUG 
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
	cout << "����Ҫ��ѯ��ѧ��ѧ��:";
	cin >> studentnum;
	student_pointer p;
	p = head->next;
	while (p != NULL) {
		if (p->number == studentnum)break;
		p = p->next;
	}
	if (p != NULL)
	{
		cout << "                                     ѧ �� �� Ϣ          " << "\n";
		cout << "                                 �༶��"<<p->calss<< "\n";
		cout << "                                 ѧ�ţ�"<<p->number << "\n";
		cout << "                                 ���룺"<<p->key << "\n";
		cout << "                                 ��ݣ�"<<p->identity << "\n";
		cout << "                                 ������"<<p->other << "\n";
	}
	else
	{
		cout << "ѧ���������\n";
	}
}
void delete_student(student_lklist head) {
	int studentnum;
	int i = 0;
	cout << "����Ҫɾ����ѧ��ѧ��:";
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
		cout << "                                 ��ѯ��ѧ����Ϣ          " << "\n";
		cout << "                                 �༶��" << p->calss << "\n";
		cout << "                                 ѧ�ţ�" << p->number << "\n";
		cout << "                                 ���룺" << p->key << "\n";
		cout << "                                 ��ݣ�" << p->identity << "\n";
		cout << "                                 ������" << p->other << "\n";
		cout << "�Ƿ�Ҫɾ��ѧ����Ϣ �ǣ�Y��:";cin >> z;
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
			cout << "ɾ���ɹ�!\n";
		}
	}
	else
	{
		cout << "ѧ���������\n";
	}
}
void xiugai_student(student_lklist head) {
	int calss, number, key;
	string identity, other;
	int studentnum;
	char z;
	int i = 0;
	cout << "����Ҫ�޸ĵ�ѧ��ѧ��:";
	cin >> studentnum;
	student_pointer p;
	p = head->next;
	while (p != NULL) {
		if (p->number == studentnum)break;
		p = p->next;
	}
	if (p != NULL)
	{
		cout << "                                 ���ҵ�ѧ����Ϣ          " << "\n";
		cout << "                                 �༶��" << p->calss << "\n";
		cout << "                                 ѧ�ţ�" << p->number << "\n";
		cout << "                                 ���룺" << p->key << "\n";
		cout << "                                 ��ݣ�" << p->identity << "\n";
		cout << "                                 ������" << p->other << "\n";
		cout << "�Ƿ���Ҫ�޸�ѧ����Ϣ �ǣ�Y����";cin >> z;
		if (z == 'y'||z == 'Y')
		{
			cout << "����ѧ����Ϣ:\n";
			cout << "�༶��";cin >> calss;
			cout << "ѧ�ţ�";cin >> number;
			cout << "���룺";cin >> key;
			cout << "��ݣ�";cin >> identity;
			cout << "��ע��";cin >> other;
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
			else cout << "ѧ����Ϣ�������\n";
		}

	}
	else
	{
		cout << "ѧ���������\n";
	}
	cout << "          -----------------------------��ҳ��----------------------------" << "\n";
}
void add_work(work_lklist work_head) {
	int yanzhen_work(work_lklist work_head, int number);
	char a;
	int num;
	int work_num, work_times, work_settime, work_stoppushtime;
	char major_name[20];string work_concent, other;
	work_pointer s;
	s = new work;
	cout << "������ҵ��Ϣ:\n";
	cout << "��ҵ��ţ�";cin >> work_num;
	cout << "�γ����ƣ�";cin >> major_name;
	cout << "��ҵ������";cin >> work_times;
	cout << "��ҵ���ݣ�";cin >> work_concent;
	cout << "����ʱ�䣺";cin >> work_settime;
	cout << "��ֹʱ�䣺";cin >> work_stoppushtime;
	cout << "��ע��";cin >> other;
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
		cout << "��ӳɹ���\n";
	}
	cout << "���ʧ�ܣ�\n";
}
void delete_work(work_lklist work_head) {
	int num,i;
	char a;
	cout << "����Ҫɾ������ҵ��ţ�";cin >> num;
	work_pointer p,q;
	p = work_head->next;
	while (p != NULL) {
		if (p->work_num == num)break;
		p = p->next;
	}
	if (p != NULL) {
		cout << "                       ��ѯ����ҵ��Ϣ:\n";
		cout << "                ��ҵ��ţ�"<<p->work_num<<"\n";
		cout << "                �γ����ƣ�"<<p->major_name<<"\n";
		cout << "                ��ҵ������"<<p->work_times<<"\n";
		cout << "                ��ҵ���ݣ�"<<p->work_concent<<"\n";
		cout << "                ����ʱ�䣺"<<p->work_settime<<"\n";
		cout << "                ��ֹʱ�䣺"<<p->work_stoppushtime<<"\n";
		cout << "                ��ע��"<<p->other<<"\n";
		cout << "�Ƿ�Ҫɾ����ҵ ��(Y/y)";cin >> a;
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
			cout << "ɾ���ɹ�!\n";
		}
		
	}
	else cout << "�������\n";
}
void xiugai_work(work_lklist work_head)
{
	int yanzhen_work(work_lklist work_head, int number);
	char a;
	int num;
	int work_num, work_times, work_settime, work_stoppushtime;
	char major_name[20];string work_concent,other;
	cout << "�����޸ĵ���ҵ��ţ�";cin >> num;
	work_pointer p, q;
	p = work_head->next;
	while (p != NULL) {
		if (p->work_num == num)break;
		p = p->next;
	}
	if (p != NULL) {
		cout << "                       ��ѯ����ҵ��Ϣ:\n";
		cout << "                ��ҵ��ţ�" << p->work_num << "\n";
		cout << "                �γ����ƣ�" << p->major_name << "\n";
		cout << "                ��ҵ������" << p->work_times << "\n";
		cout << "                ��ҵ���ݣ�" << p->work_concent << "\n";
		cout << "                ����ʱ�䣺" << p->work_settime << "\n";
		cout << "                ��ֹʱ�䣺" << p->work_stoppushtime << "\n";
		cout << "                ��ע��" << p->other << "\n";
		cout << "�Ƿ��޸���ҵ ��(Y/y):";cin >> a;
		if (a == 'y' || a == 'Y')
		{
			cout << "������ҵ��Ϣ:\n";
			cout << "��ҵ��ţ�";cin >> work_num;
			cout << "�γ����ƣ�";cin >> major_name;
			cout << "��ҵ������";cin >> work_times;
			cout << "��ҵ���ݣ�";cin >> work_concent;
			cout << "����ʱ�䣺";cin >> work_settime;
			cout << "��ֹʱ�䣺";cin >> work_stoppushtime;
			cout << "��ע��";cin >> other;
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
		cout << "��ҵ���    �γ�����   ��ҵ����   ��ҵ����   ����ʱ��   ��ֹʱ��    ��ע\n";
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
	cout << "�����ѯ�Ŀ�ʼʱ�䣺";cin >> start;
	cout << "�����ѯ�Ľ���ʱ�䣺";cin >> end;
	work_pointer p, q;
	p = work_head->next;
	while (p != NULL) {
		if (p->work_settime >= start && p->work_settime <= end)
		{
			i++;
			cout << "��ҵ���  �γ�����   ��ҵ����   ��ҵ����   ����ʱ��   ��ֹʱ��    ��ע\n";
			cout << p->work_num << "            " << p->major_name << "         " << p->work_times << "     " << p->work_concent << "      " << p->work_settime << "    " << p->work_stoppushtime << "      " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)
	{
		cout << "�������\n";
	}
		
}
void chaxun_majorname(work_lklist work_head)
{
	int i = 0;
	char major[20];
	void work_sort(work_lklist work_head);
	work_sort(work_head);
	cout << "������Ҫ��ѯ�Ŀγ�����:";cin >> major;
	work_pointer p;
	p = work_head->next;
	while (p != NULL)
	{
		if (strcmp(major, p->major_name) == 0)
		{
			i++;
			cout << "��ҵ���    �γ�����   ��ҵ����   ��ҵ����   ����ʱ��   ��ֹʱ��    ��ע\n";
			cout << p->work_num << "           " << p->major_name << "       " << p->work_times << "        " << p->work_concent << "       " << p->work_settime << "     " << p->work_stoppushtime << "     " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)cout << "�������\n";
}
int yanzhen_work(work_lklist work_head, int number) {//��֤��ҵ����Ƿ����
	work_pointer p, q;
	p = work_head->next;
	while (p != NULL) {
		if (p->work_num == number)return 0;
		p = p->next;
	}
	return 1;
}
void work_sort(work_lklist work_head) {//ð������
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
	cout << "������ӵ��ύ״��\n";
	cout << "��ҵ��ţ�";cin >> s->work_num;
	cout << "ѧ�ţ�";cin >> s->number;
	cout << "�༶��";cin >> s->calss;
	cout << "�γ����ƣ�";cin >> s->major_name;
	cout << "�ύ������";cin >> s->times;
	cout << "�ύʱ�䣺";cin >> s->work_pushtime;
	cout << "��ע��";cin >> s->other;
	s->next = submission_head->next;
	submission_head->next = s;
	cout << "��ӳɹ���\n";
}
void delete_submission(submission_lklist submission_head)
{
	char a;
	int work_num, num;
	cout << "����ɾ������ҵ��ţ�";cin >> work_num;
	cout << "����ɾ����ѧ�ţ�";cin >> num;
	submission_pointer p, q;
	p = submission_head->next;
	while (p != NULL) {
		if (p->work_num == work_num && p->number == num)break;
		p = p->next;
	}
	if (p != NULL) {
		cout << "                       ��ѯ����ҵ�ύ���:\n";
		cout << "                ��ҵ��ţ�" << p->work_num << "\n";
		cout << "                ѧ�ţ�" << p->number << "\n";
		cout << "                �༶��" << p->calss << "\n";
		cout << "                �γ����ƣ�" << p->major_name << "\n";
		cout << "                �ύ������" << p->times << "\n";
		cout << "                �ύʱ�䣺" << p->work_pushtime << "\n";
		cout << "                ��ע��" << p->other << "\n";
		cout << "�Ƿ�Ҫɾ����ҵ�ύ��� ��(Y/y)";cin >> a;
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
			cout << "ɾ���ɹ���\n";
		}
	}
	else cout << "�������\n";
}
void xiugai_submission(submission_lklist submission_head) {
	char a;
	int work_num, num;
	cout << "�����޸ĵ���ҵ��ţ�";cin >> work_num;
	cout << "�����޸ĵ�ѧ�ţ�";cin >> num;
	submission_pointer p;
	p = submission_head->next;
	while (p != NULL) {
		if (p->work_num == work_num && p->number == num)break;
		p = p->next;
	}
	if (p != NULL) {
		cout << "                       ��ѯ����ҵ�ύ���:\n";
		cout << "                ��ҵ��ţ�" << p->work_num << "\n";
		cout << "                ѧ�ţ�" << p->number << "\n";
		cout << "                �༶��" << p->calss << "\n";
		cout << "                �γ����ƣ�" << p->major_name << "\n";
		cout << "                �ύ������" << p->times << "\n";
		cout << "                �ύʱ�䣺" << p->work_pushtime << "\n";
		cout << "                ��ע��" << p->other << "\n";
		cout << "�Ƿ�Ҫ�޸���ҵ ��(Y/y)";cin >> a;
		if (a == 'y' || a == 'Y') {
			cout << "�����µ���ҵ�ύ���";
			cout << "��ҵ��ţ�";cin >> p->work_num;
			cout << "ѧ�ţ�";cin >> p->number;
			cout << "�༶��";cin >> p->calss;
			cout << "�γ����ƣ�";cin >> p->major_name;
			cout << "�ύ������";cin >> p->times;
			cout << "�ύʱ�䣺";cin >> p->work_pushtime;
			cout << "��ע��";cin >> p->other;
			cout << "�޸ĳɹ���\n";
		}
	}
	else cout << "�������";
}
void chaxun_all_submission(submission_lklist submission_head) {
	void submission_sort(submission_lklist submission_head);
	submission_sort(submission_head);
	submission_pointer p;
	p = submission_head->next;
	while (p != NULL) {
		cout << "�༶    ѧ��   ��ҵ���   ��ҵ�ύʱ��   �ύ����   �γ�����    ��ע\n";
		cout << p->calss << "      " << p->number << "   " << p->work_num << "         " << p->work_pushtime << "         " << p->times << "         " << p->major_name << "   " << p->other;
		cout << "\n";
		p = p->next;
	}
}
void chaxun_major_submission(submission_lklist submission_head) {
	void submission_sort(submission_lklist submission_head);
	submission_sort(submission_head);
	char majorname[20];
	cout << "����Ҫ��ѯ�Ŀγ����ƣ�";cin >> majorname;
	int i = 0;
	submission_pointer p;
	p = submission_head->next;
	while (p != NULL)
	{
		if (strcmp(majorname, p->major_name) == 0)
		{
			i++;
			cout << "�༶    ѧ��   ��ҵ���   ��ҵ�ύʱ��   �ύ����   �γ�����    ��ע\n";
			cout << p->calss << "      " << p->number << "   " << p->work_num << "          " << p->work_pushtime << "       " << p->times << "          " << p->major_name << "   " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)cout << "�������\n";
}
void chaxun_number_submission(submission_lklist submission_head) {
	void submission_sort(submission_lklist submission_head);
	submission_sort(submission_head);
	int number;
	cout << "����Ҫ��ѯ��ѧ�ţ�";cin >> number;
	submission_pointer p;
	p = submission_head->next;
	int i = 0;
	while (p != NULL)
	{
		if (p->number==number)
		{
			i++;
			cout << "�༶    ѧ��   ��ҵ���   ��ҵ�ύʱ��   �ύ����   �γ�����    ��ע\n";
			cout << p->calss << "     " << p->number << "    " << p->work_num << "         " << p->work_pushtime << "        " << p->times << "        " << p->major_name << "   " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)cout << "�������\n";
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
			cout << "�༶    ѧ��       ��ҵ���    ��ҵ�ύʱ��    �ύ����    �γ�����    ��ע\n";
			cout << p->calss << "      " << p->number << "        " << p->work_num << "          " << p->work_pushtime << "         " << p->times << "        " << p->major_name << "     " << p->other;
			cout << "\n";
		}
		p = p->next;
	}
	if (i == 0)cout << "�������\n";
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