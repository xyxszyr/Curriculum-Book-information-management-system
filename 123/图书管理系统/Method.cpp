#include"Biz.h"
Student inputStuInfo(){
	char studentName[30];
	int studentNumber;

	cout << "input studentName:";
	cin >> studentName;
	cout << "input studentNumber:";
	cin >> studentNumber;

	Student stu(studentName, studentNumber);

	return stu;
}
void studentMethod(){
	Biz stuBiz;
	Student stu;
	int tag = 0;
	int isOK = 0;
	do{
		cout << "-----------ѧ���������ϵͳ-----------" << endl;
		cout << "--------1 ¼��--------" << endl;
		cout << "--------2 �޸�--------" << endl;
		cout << "--------3 ɾ��--------" << endl;
		cout << "--------4 ����--------" << endl;
		cout << "--------5 ��ʽ--------" << endl;
		cout << "--------0 �˳�--------" << endl;
		cout << "��ѡ�����:";
		cin >> tag;
		switch(tag) {
		case 1:
			cout << "ѧ����Ϣ���� << ¼��:" << endl;
			stu = inputStuInfo();
			isOK = stuBiz.addStudent(stu);
			if(isOK) {
				cout << "����ѧ����Ϣ�ɹ�" << endl;
			} else {
				cout << "����ѧ����Ϣʧ��" << endl;
			}
			break;
		case 2:
			cout << "ѧ����Ϣ���� << �޸�:" << endl;

			break;
		case 3:
			cout << "ѧ����Ϣ���� << ����:" << endl;
			break;
		case 4:
			cout << "ѧ����Ϣ���� << ɾ��:" << endl;
			break;
		case 5:
			cout << "ѧ����Ϣ���� << ��ʽ:" << endl;
			stuBiz.findAllStudent();
			break;
		}
	}while(tag != 0);	
}