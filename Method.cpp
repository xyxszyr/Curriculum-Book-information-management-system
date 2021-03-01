#include"Biz.h"

void studentInterface(); //ѧ������
void teacherInterface(); //��ʦ����
void control();//����Ա���ƽ���

Student inputStuInfo(); //ѧ��֤�ŵ�����
Teacher inputTeaInfo(); //��ʦ֤�ŵ�����
void studentMethod(); //ѧ��֤�Ź������
void teacherMethod(); //��ʦ֤�Ź������
void userMethod(); //����Ա֤�Ź������

Library inputLibInfo(); //ͼ����Ϣ������
void libraryMethod(); //ͼ����Ϣ�������

Magazines inputMagaInfo(); //��־��Ϣ������
void magazinesMethod(); //��־��Ϣ�������

User inputuserInfo(); //id ���� ���������
void LoginInterface(); //ע�����
void studentLogin(); //ѧ��ע��
void teacherLogin(); //��ʦע��

void enterInterface(); //��¼����
void studentEnter(); //ѧ����¼
void teacherEnter(); //��ʦ��¼
void enter(); //����Ա��¼

void userInterface(); //�û���Ϣ�������룩����
void userStudentMethod(); //ѧ������������
void userTeacherMethod(); //��ʦ����������
//23������

Library inputLibInfo(){ //ͼ����Ϣ������
	char libraryNmae[30]; //����
	int libraryCode; //����
	int librarynumber; //�ڲ������
	char author[30]; //����
	int libraryStorage; //�����
	cout << "                                     ���������ߣ�";
	cin >>  author;
	cout << "                                     ���������룺";
	cin >> libraryCode;
	cout << "                                     ������������";
	cin >> libraryNmae;
	cout << "                               �������ڲ�����ţ�";
	cin >> librarynumber;
	cout << "                                   ������������";
	cin >> libraryStorage;
	Library lib(libraryNmae, libraryCode, librarynumber, author, libraryStorage);
	return lib;
}
void libraryMethod(){ //ͼ����Ϣ�������
	Biz biz;
	Library lib;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int libraryCode;
	int studentNumber;
	int teacherNumber;
	do{
		system("cls");
		cout << "-----------------------------ͼ����Ϣ����-----------------------------" << endl;
		cout << "                               1 ����" << endl;
		cout << "                               2 �޸�" << endl;
		cout << "                               3 ����" << endl;
		cout << "                               4 ɾ��" << endl;
		cout << "                               5 �б���ʽ" << endl;
		cout << "                               6 ѧ������" << endl;
		cout << "                               7 ��ʦ����" << endl;
		cout << "                               8 ѧ��������Ϣ�б���ʽ" << endl;
		cout << "                               9 ��ʦ������Ϣ�б���ʽ" << endl;
		cout << "                               10 ѧ���黹" << endl;
		cout << "                               11 ��ʦ�黹" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               ͼ����Ϣ���� << ����:" << endl;
			lib = inputLibInfo();
			bb = biz.addLibrary(lib);
			if(bb) {
				cout << "                               ����ͼ����Ϣ�ɹ�" << endl;
			} else {
				cout << "                               ����ͼ����Ϣʧ��" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               ͼ����Ϣ���� << �޸�:" << endl;
			cout << "                               ������Ҫ�޸ĵ�ͼ������:";
			cin >> libraryCode;
			lib = biz.findByIdLibrary(libraryCode);
			if(lib.getLibraryCode() == 0){
				cout << "                               ͼ�鲻����" << endl;
			} else {
				cout << "-------------------------------------------------------------------------------" << endl;
				cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
				cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
				cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
				cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
				cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
				cout << "-------------------------------------------------------------------------------" << endl;
				cout << "                               ������Ҫ�޸ĵ�ͼ����Ϣ:" << endl;
				lib = inputLibInfo();
				ok = biz.updateLibrary(lib);
				if(ok) {
					cout << "======================================================================================================" << endl;
					cout << "                               �޸�ͼ����Ϣ�ɹ�!" << endl;
					cout << "---------------------------------------------------------------------------" << endl;
					cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
					cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
					cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
					cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
					cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
					cout << "---------------------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸�ͼ����Ϣʧ��!" << endl;
				}
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               ͼ����Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ��ͼ������:";
			cin >> libraryCode;
			lib = biz.findByIdLibrary(libraryCode);
			if(lib.getLibraryCode() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-------------------------------------------------------------------------------------" << endl;
				cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
				cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
				cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
				cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
				cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
				cout << "-------------------------------------------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               ͼ����Ϣ���� << ɾ��:" << endl;
			cout << "                               ������Ҫɾ����ͼ�����룺" ;
			cin >> libraryCode;
			ok = biz.deleteByIdLibrary(libraryCode);
			if(ok) {
				cout << "                               ɾ��ͼ��ɹ�!" << endl;
			} else {
				cout << "                               ɾ��ͼ��ʧ��!" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               ͼ����Ϣ���� << �б���ʽ:" << endl;
			biz.findAllLibrary();
			system("pause");
			system("cls");
			break;
		case 6:
			cout << "                               ͼ����Ϣ���� << ѧ������:" << endl;
			biz.libraryStudentLend();
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "                               ͼ����Ϣ���� << ��ʦ����:" << endl;
			biz.libraryTeacherLend();
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "                               ͼ����Ϣ���� << ѧ��������Ϣ�б���ʽ:" << endl;
			cout << "                               ������ѧ���Ľ���֤�ţ�" ;
			cin >> studentNumber;
			biz.findByIdLibraryStudentLend(studentNumber);
			system("pause");
			system("cls");
			break;
		case 9:
			cout << "                               ͼ����Ϣ���� << ��ʦ������Ϣ�б���ʽ:" << endl;
			cout << "                               �������ʦ�Ľ���֤�ţ�" ;
			cin >> teacherNumber;
			biz.findByIdLibraryTeacherLend(teacherNumber);
			system("pause");
			system("cls");
			break;
		case 10:
			cout << "                               ͼ����Ϣ���� << ѧ���黹:" << endl;
			biz.libraryStudentReturn();
			system("pause");
			system("cls");
			break;
		case 11:
			cout << "                               ͼ����Ϣ���� << ��ʦ�黹:" << endl;
			biz.libraryTeacherReturn();
			system("pause");
			system("cls");
			break;
		default:
            cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);
}

Magazines inputMagaInfo(){ //��־��Ϣ������
	char magazinesName[30]; //����
	int magazinesCode; //����
	int magazinesNumber; //���
	int magazinesStorage; //�����
	cout << "                               ������������";
	cin >> magazinesName;
	cout << "                               ���������룺";
	cin >> magazinesCode;
	cout << "                               �������ţ�";
	cin >> magazinesNumber;
	cout << "                             ������������";
	cin >> magazinesStorage;
	Magazines maga(magazinesName, magazinesCode, magazinesNumber, magazinesStorage);
	return maga;
}
void magazinesMethod(){ //��־��Ϣ�������
	Biz biz;
	Magazines maga;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int magazinesCode;
	int studentNumber;
	int teacherNumber;
	do{
		cout << "----------------------------��־��Ϣ����------------------------------" << endl;
		cout << "                               1 ����" << endl;
		cout << "                               2 �޸�" << endl;
		cout << "                               3 ����" << endl;
		cout << "                               4 ɾ��" << endl;
		cout << "                               5 �б���ʽ" << endl;
		cout << "                               6 ѧ������" << endl;
		cout << "                               7 ��ʦ����" << endl;
		cout << "                               8 ѧ��������Ϣ�б���ʽ" << endl;
		cout << "                               9 ��ʦ������Ϣ�б���ʽ" << endl;
		cout << "                               10 ѧ���黹" << endl;
		cout << "                               11 ��ʦ�黹" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               ��־��Ϣ���� << ����:" << endl;
			maga = inputMagaInfo();
			bb = biz.addMagazines(maga);
			if(bb) {
				cout << "                               ������־��Ϣ�ɹ�" << endl;
			} else {
				cout << "                               ������־��Ϣʧ��" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               ��־��Ϣ���� << �޸�:" << endl;
			cout << "                               ������Ҫ��ѯ����־����:";
			cin >> magazinesCode;
			maga = biz.findByIdMagazines(magazinesCode);
			if(maga.getMagazinesCode() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "------------------------------------------------------------------------------------" << endl;
				cout << "                               ��־��   ������" << maga.getMagazinesName() << endl;
				cout << "                               ��־��   ���룺" << maga.getMagazinesCode() << endl;
				cout << "                               ��־��   ��ţ�" << maga.getMagazinesNumber() << endl;
				cout << "                               ��־�� �������" << maga.getMagazinesStorage() << endl;
				cout << "------------------------------------------------------------------------------------" << endl;
				cout << "                               ������Ҫ�޸ĵ���־��Ϣ:" << endl;
				maga = inputMagaInfo();
				ok = biz.updateMagazines(maga);
				if(ok) {
					cout << "===========================================================================================" << endl;
					cout << "                               �޸���־��Ϣ�ɹ�!" << endl;
					cout << "--------------------------------------------------------------------------" << endl;
					cout << "                               ��־��   ������" << maga.getMagazinesName() << endl;
					cout << "                               ��־��   ���룺" << maga.getMagazinesCode() << endl;
					cout << "                               ��־��   ��ţ�" << maga.getMagazinesNumber() << endl;
					cout << "                               ��־�� �������" << maga.getMagazinesStorage() << endl;
					cout << "--------------------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸���־��Ϣʧ��!" << endl;
				}
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               ��־��Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ����־����:";
			cin >> magazinesCode;
			maga = biz.findByIdMagazines(magazinesCode);
			if(maga.getMagazinesCode() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-----------------------------------------------------" << endl;
				cout << "                               ��־������   ��" << maga.getMagazinesName() << endl;
				cout << "                               ��־������   ��" << maga.getMagazinesCode() << endl;
				cout << "                               ��־�����   ��" << maga.getMagazinesNumber() << endl;
				cout << "                               ��־������� ��" << maga.getMagazinesStorage() << endl;
				cout << "-----------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               ��־��Ϣ���� << ɾ��:" << endl;
			cout << "                               ������Ҫɾ������־���룺" ;
			cin >> magazinesCode;
			ok = biz.deleteByIdMagazines(magazinesCode);
			if(ok) {
				cout << "                               ɾ����־�ɹ�!" << endl;
			} else {
				cout << "                               ɾ����־ʧ��!" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               ��־��Ϣ���� << �б���ʽ:" << endl;
			biz.findAllMagazines();
			system("pause");
			system("cls");
			break;
		case 6:
			cout << "                               ��־��Ϣ���� << ѧ������:" << endl;
			biz.magazinesStudentLend();
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "                               ��־��Ϣ���� << ��ʦ����:" << endl;
			biz.magazinesTeacherLend();
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "                               ��־��Ϣ���� << ѧ��������Ϣ�б���ʽ:" << endl;
			cout << "                               ������ѧ���Ľ���֤�ţ�" ;
			cin >> studentNumber;
			biz.findByIdMagazinesStudentLend(studentNumber);
			system("pause");
			system("cls");
			break;
		case 9:
			cout << "                               ��־��Ϣ���� << ��ʦ������Ϣ�б���ʽ:" << endl;
			cout << "                               �������ʦ�Ľ���֤�ţ�" ;
			cin >> teacherNumber;
			biz.findByIdMagazinesTeacherLend(teacherNumber);
			system("pause");
			system("cls");
			break;
		case 10:
			cout << "                               ��־��Ϣ���� << ѧ���黹:" << endl;
			biz.magazinesStudentReturn();
			system("pause");
			system("cls");
			break;
		case 11:
			cout << "                               ��־��Ϣ���� << ��ʦ�黹:" << endl;
			biz.magazinesTeacherReturn();
			system("pause");
			system("cls");
			break;
		default:
            cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);
}


Student inputStuInfo(){ //ѧ��֤�ŵ�����
	char studentName[30];
	int studentNumber;
	cout << "                                    ������������";
	cin >> studentName;
	cout << "                                ���������֤�ţ�";
	cin >> studentNumber;
	Student stu(studentName, studentNumber);
	return stu;
}
void studentMethod(){ //ѧ��֤�Ź������
	Biz biz;
	Student stu;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int studentNumber;
	do{
		cout << "---------------------------ѧ������֤�Ź���---------------------------" << endl;
		cout << "                               1 ����" << endl;
		cout << "                               2 �޸�" << endl;
		cout << "                               3 ����" << endl;
		cout << "                               4 ɾ��" << endl;
		cout << "                               5 �б���ʽ" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               ѧ������֤�Ź��� << ����:" << endl;
			stu = inputStuInfo();
			bb = biz.addStudent(stu);
			if(bb) {
				cout << "                               ����ѧ������֤�ųɹ�" << endl;
			} else {
				cout << "                               ����ѧ������֤��ʧ��" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               ѧ������֤�Ź��� << �޸�:" << endl;
			cout << "                               ������Ҫ��ѯ��ѧ������֤�ţ�" ;
			cin >> studentNumber;
			stu = biz.findByIdStudent(studentNumber);
			if(stu.getStudentNumber() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "------------------------------------------------------------------------------" << endl;
				cout << "                               ѧ����     ������" << stu.getStudentName() << endl;
				cout << "                               ѧ���� ����֤�ţ�" << stu.getStudentNumber() << endl;
				cout << "------------------------------------------------------------------------------" << endl;
				cout << "                               ������Ҫ�޸ĵ�ѧ��֤����Ϣ:" << endl;
				stu = inputStuInfo();
				ok = biz.updateStudent(stu);
				if(ok) {
					cout << "==============================================================================================" << endl;
					cout << "                               �޸�ѧ��֤����Ϣ�ɹ�!" << endl;
					cout << "--------------------------------------------------------------------------" << endl;
					cout << "                               ѧ����     ������" << stu.getStudentName() << endl;
					cout << "                               ѧ���� ����֤�ţ�" << stu.getStudentNumber() << endl;
					cout << "--------------------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸�ѧ��֤����Ϣʧ��!" << endl;
				}
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               ѧ������֤�Ź��� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ��ѧ������֤�ţ�" ;
			cin >> studentNumber;
			stu = biz.findByIdStudent(studentNumber);
			if(stu.getStudentNumber() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-----------------------------------------------------------------------------" << endl;
				cout << "                               ѧ����     ������" << stu.getStudentName() << endl;
				cout << "                               ѧ���� ����֤�ţ�" << stu.getStudentNumber() << endl;
				cout << "-----------------------------------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               ѧ������֤�Ź��� << ɾ��:" << endl;
			cout << "                               ������Ҫɾ����ѧ������֤�ţ�" ;
			cin >> studentNumber;
			ok = biz.deleteByIdStudent(studentNumber);
			if(ok) {
				cout << "                               ɾ���ɹ�!" << endl;
			} else {
				cout << "                               ɾ��ʧ��!" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               ѧ������֤�Ź��� << �б���ʽ:" << endl;
			biz.findAllStudent();
			system("pause");
			system("cls");
			break;
		default:
			cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}


Teacher inputTeaInfo(){ //��ʦ֤�ŵ�����
	char teacherName[30];
	int teacherNumber;
	cout << "                                    ������������";
	cin >> teacherName;
	cout << "                                ���������֤�ţ�";
	cin >> teacherNumber;
	Teacher tea(teacherName, teacherNumber);
	return tea;
}
void teacherMethod(){ //��ʦ֤�Ź������
	Biz biz;
	Teacher tea;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int teacherNumber;
	do{
		cout << "---------------------------��ʦ����֤�Ź���--------------------------" << endl;
		cout << "                               1 ����" << endl;
		cout << "                               2 �޸�" << endl;
		cout << "                               3 ����" << endl;
		cout << "                               4 ɾ��" << endl;
		cout << "                               5 �б���ʽ" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               ��ʦ����֤�Ź��� << ����:" << endl;
			tea = inputTeaInfo();
			bb = biz.addTeacher(tea);
			if(bb) {
				cout << "                               ������ʦ����֤����Ϣ�ɹ�" << endl;
			} else {
				cout << "                               ������ʦ����֤����Ϣʧ��" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 2:
			cout << "                               ��ʦ����֤�Ź��� << �޸�:" << endl;
			cout << "                               ������Ҫ��ѯ�Ľ�ʦ����֤�ţ�" ;
			cin >> teacherNumber;
			tea = biz.findByIdTeacher(teacherNumber);
			if(tea.getTeacherNumber() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "------------------------------------------------------------------------" << endl;
				cout << "                               ��ʦ��     ������" << tea.getTeacherName() << endl;
				cout << "                               ��ʦ�� ����֤�ţ�" << tea.getTeacherNumber() << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cout << "                               ������Ҫ�޸ĵĽ�ʦ֤����Ϣ:" << endl;
				tea = inputTeaInfo();
				ok = biz.updateTeacher(tea);
				if(ok) {
					cout << "=====================================================================================" << endl;
					cout << "                               �޸Ľ�ʦ֤�ųɹ�!" << endl;
					cout << "--------------------------------------------------------------------" << endl;
					cout << "                               ��ʦ��     ������" << tea.getTeacherName() << endl;
					cout << "                               ��ʦ�� ����֤�ţ�" << tea.getTeacherNumber() << endl;
					cout << "--------------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸Ľ�ʦ֤��ʧ��!" << endl;
				}
			}
			system("pause");
            system("cls");
			break;
		case 3:
			cout << "                               ��ʦ����֤�Ź��� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ�Ľ�ʦ����֤�ţ�" ;
			cin >> teacherNumber;
			tea = biz.findByIdTeacher(teacherNumber);
			if(tea.getTeacherNumber() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-------------------------------------------------------------------" << endl;
				cout << "                               ��ʦ��     ������" << tea.getTeacherName() << endl;
				cout << "                               ��ʦ�� ����֤�ţ�" << tea.getTeacherNumber() << endl;
				cout << "-------------------------------------------------------------------" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 4:
			cout << "                               ��ʦ����֤�Ź��� << ɾ��:" << endl;
			cout << "                               ������Ҫɾ���Ľ�ʦ����֤�ţ�" ;
			cin >> teacherNumber;
			ok = biz.deleteByIdTeacher(teacherNumber);
			if(ok) {
				cout << "                               ɾ���ɹ�!" << endl;
			} else {
				cout << "                               ɾ��ʧ��!" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 5:
			cout << "                               ��ʦ����֤�Ź��� << �б���ʽ:" << endl;
			biz.findAllTeacher();
			system("pause");
            system("cls");
			break;
		default:
            cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}

User inputuserInfo(){ //id ���� ���������
	int id; //10001
	char userName[30];
	char pwd[30];//����111222333
	cout << "                                 ������id��";
	cin >> id;
	cout << "                               ������������";
	cin >> userName;
	cout << "                               ���������룺";
	cin >> pwd;
	User user(id, userName, pwd);
	return user;
}
void userMethod(){ //����Ա֤�Ź������
	Biz biz;
	User user;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int id;
	do{
		cout << "---------------------------����Ա��Ϣ����---------------------------" << endl;
		cout << "                               1 ����" << endl;
		cout << "                               2 �޸�" << endl;
		cout << "                               3 ����" << endl;
		cout << "                               4 ɾ��" << endl;
		cout << "                               5 �б���ʽ" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               �û���Ϣ���� << ����:" << endl;
			user = inputuserInfo();
			bb = biz.addUser(user);
			if(bb) {
				cout << "                               �����û���Ϣ�ɹ�" << endl;
			} else {
				cout << "                               �����û���Ϣʧ��" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 2:                               
			cout << "                               �û���Ϣ���� << �޸�:" << endl;
			cout << "                               ������Ҫ��ѯ���û��˺ţ�" ;
			cin >> id;
			user = biz.findByIdUser(id);
			if(user.getId() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "---------------------------------------------------------------------" << endl;
				cout << "                               �û���  id��" << user.getId() << endl;
				cout << "                               �û���������" << user.getUserName() << endl;
				cout << "                               �û������룺" << user.getPwd() << endl;
				cout << "---------------------------------------------------------------------" << endl;
				cout << "                               ������Ҫ�޸ĵ��û���Ϣ:" << endl;
				user = inputuserInfo();
				ok = biz.updateUser(user);
				if(ok) {
					cout << "==============================================================================" << endl;
					cout << "                               �޸Ľ�ʦ��Ϣ�ɹ�!" << endl;
					cout << "-----------------------------------------------------------------" << endl;
					cout << "                               �û���  id��" << user.getId() << endl;
					cout << "                               �û���������" << user.getUserName() << endl;
					cout << "                               �û������룺" << user.getPwd() << endl;
					cout << "-----------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸Ľ�ʦ��Ϣʧ��!" << endl;
				}
			}
			system("pause");
            system("cls");
			break;
		case 3:
			cout << "                               �û���Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ���û��˺ţ�" ;
			cin >> id;
			user = biz.findByIdUser(id);
			if(user.getId() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-------------------------------------------------------------------" << endl;
				cout << "                               �û���  id��" << user.getId() << endl;
				cout << "                               �û���������" << user.getUserName() << endl;
				cout << "                               �û������룺" << user.getPwd() << endl;
				cout << "-------------------------------------------------------------------" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 4:
			cout << "                               �û���Ϣ���� << ɾ��:" << endl;
			cout << "                               ������Ҫ��ѯ���û��˺ţ�" ;
			cin >> id;
			ok = biz.deleteByIdUser(id);
			if(ok) {
				cout << "                               ɾ���û���Ϣ�ɹ�!" << endl;
			} else {                               
				cout << "                               ɾ���û���Ϣʧ��!" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 5:
			cout << "                               �û���Ϣ���� << �б���ʽ:" << endl;
			biz.findAllUser();
			system("pause");
            system("cls");
			break;
		default:
            cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}

void userStudentMethod(){ //ѧ������������
	Biz biz;
	User user;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int id;
	do{
		system("cls");
		cout << "----------------------------ѧ���������----------------------------" << endl;
		cout << "                               1 ����" << endl;
		cout << "                               2 �޸�" << endl;
		cout << "                               3 ����" << endl;
		cout << "                               4 ɾ��" << endl;
		cout << "                               5 �б���ʽ" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               �û���Ϣ���� << ����:" << endl;
			user = inputuserInfo();
			bb = biz.addUserStudent(user);
			if(bb) {
				cout << "                               �����û���Ϣ�ɹ�" << endl;
			} else {
				cout << "                               �����û���Ϣʧ��" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 2:
			cout << "                               �û���Ϣ���� << �޸�:" << endl;
			cout << "                               ������Ҫ��ѯ���û��˺ţ�" ;
			cin >> id;
			user = biz.findByIdUserStudent(id);
			if(user.getId() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "------------------------------------------------------------------" << endl;
				cout << "                               �û���  id��" << user.getId() << endl;
				cout << "                               �û���������" << user.getUserName() << endl;
				cout << "                               �û������룺" << user.getPwd() << endl;
				cout << "------------------------------------------------------------------" << endl;
				cout << "                               ������Ҫ�޸ĵ��û���Ϣ:" << endl;
				user = inputuserInfo();
				ok = biz.updateUserStudent(user);
				if(ok) {
					cout << "===================================================================================" << endl;
					cout << "                               �޸Ľ�ʦ��Ϣ�ɹ�!" << endl;
					cout << "-------------------------------------------------------------------" << endl;
					cout << "                               �û���  id��" << user.getId() << endl;
					cout << "                               �û���������" << user.getUserName() << endl;
					cout << "                               �û������룺" << user.getPwd() << endl;
					cout << "-------------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸Ľ�ʦ��Ϣʧ��!" << endl;
				}
			}
			system("pause");
            system("cls");
			break;
		case 3:
			cout << "                               �û���Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ���û��˺ţ�" ;
			cin >> id;
			user = biz.findByIdUserStudent(id);
			if(user.getId() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "------------------------------------------------------------------------" << endl;
				cout << "                               �û���  id��" << user.getId() << endl;
				cout << "                               �û���������" << user.getUserName() << endl;
				cout << "                               �û������룺" << user.getPwd() << endl;
				cout << "------------------------------------------------------------------------" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 4:
			cout << "                               �û���Ϣ���� << ɾ��:" << endl;
			cout << "                               ������Ҫɾ�����û��˺ţ�" ;
			cin >> id;
			ok = biz.deleteByIdUserStudent(id);
			if(ok) {
				cout << "                               ɾ���û���Ϣ�ɹ�!" << endl;
			} else {
				cout << "                               ɾ���û���Ϣʧ��!" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 5:
			cout << "                               �û���Ϣ���� << �б���ʽ:" << endl;
			biz.findAllUserStudent();
			system("pause");
            system("cls");
			break;
		default:
            cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}

void userTeacherMethod(){ //��ʦ����������
	Biz biz;
	User user;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int id;
	do{
		cout << "----------------------------��ʦ�������----------------------------" << endl;
		cout << "                               1 ����" << endl;
		cout << "                               2 �޸�" << endl;
		cout << "                               3 ����" << endl;
		cout << "                               4 ɾ��" << endl;
		cout << "                               5 �б���ʽ" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               �û���Ϣ���� << ����:" << endl;
			user = inputuserInfo();
			bb = biz.addUserTeacher(user);
			if(bb) {
				cout << "                               �����û���Ϣ�ɹ�" << endl;
			} else {
				cout << "                               �����û���Ϣʧ��" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 2:
			cout << "                               �û���Ϣ���� << �޸�:" << endl;
			cout << "                               ������Ҫ��ѯ���û��˺ţ�" ;
			cin >> id;
			user = biz.findByIdUserTeacher(id);
			if(user.getId() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-------------------------------------------------------------------" << endl;
				cout << "                               �û���  id��" << user.getId() << endl;
				cout << "                               �û���������" << user.getUserName() << endl;
				cout << "                               �û������룺" << user.getPwd() << endl;
				cout << "-------------------------------------------------------------------" << endl;
				cout << "                               ������Ҫ�޸ĵ��û���Ϣ:" << endl;
				user = inputuserInfo();
				ok = biz.updateUserTeacher(user);
				if(ok) {
					cout << "===============================================================================" << endl;
					cout << "                               �޸Ľ�ʦ��Ϣ�ɹ�!" << endl;
					cout << "---------------------------------------------------------------" << endl;
					cout << "                               �û���  id��" << user.getId() << endl;
					cout << "                               �û���������" << user.getUserName() << endl;
					cout << "                               �û������룺" << user.getPwd() << endl;
					cout << "---------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸Ľ�ʦ��Ϣʧ��!" << endl;
				}
			}
			system("pause");
            system("cls");
			break;
		case 3:
			cout << "                               �û���Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ���û��˺ţ�" ;
			cin >> id;
			user = biz.findByIdUserTeacher(id);
			if(user.getId() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "----------------------------------------------------------------------" << endl;
				cout << "                               �û���	id��" << user.getId() << endl;
				cout << "                               �û���������" << user.getUserName() << endl;
				cout << "                               �û������룺" << user.getPwd() << endl;
				cout << "----------------------------------------------------------------------" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 4:
			cout << "                               �û���Ϣ���� << ɾ��:" << endl;
			cout << "                               ������Ҫɾ�����û��˺ţ�" ;
			cin >> id;
			ok = biz.deleteByIdUserTeacher(id);
			if(ok) {
				cout << "                               ɾ���û���Ϣ�ɹ�!" << endl;
			} else {
				cout << "                               ɾ���û���Ϣʧ��!" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 5:
			cout << "                               �û���Ϣ���� << �б���ʽ:" << endl;
			biz.findAllUserTeacher();
			system("pause");
            system("cls");
			break;
		default:
            cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}

void userInterface(){ //�û���Ϣ�������룩����
	
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "--------------------------------�û���Ϣ����--------------------------------" << endl;
		cout << "                               1 ѧ��������Ϣ" << endl;
		cout << "                               2 ��ʦ������Ϣ" << endl;
		cout << "                               3 ����Ա������Ϣ" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "                               ����Ҫ���еĲ�����" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			userStudentMethod();
			system("pause");
			break;
		case 2:
			system("cls");
			userTeacherMethod();
			system("pause");
			break;
		case 3:
			system("cls");
			userMethod();
			system("pause");
			break;
		default:
			cout << "                               �����������������" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0);
}


void control(){ //����Ա���ƽ���
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "----------------------------ͼ��ݽ��Ĺ���ϵͳ----------------------------" << endl;
		cout << "                               1 ͼ����Ϣ" << endl;
		cout << "                               2 ��־��Ϣ" << endl;
		cout << "                               3 ��ʦ֤����Ϣ" << endl;
		cout << "                               4 ѧ��֤����Ϣ" << endl;
		cout << "                               5 �û���Ϣ" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "                               ����Ҫ���еĲ�����" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			libraryMethod();		
			break;
		case 2:
			system("cls");
			magazinesMethod();
			break;
		case 3:
			system("cls");
			teacherMethod();
			break;
		case 4:
			system("cls");
			studentMethod();
			break;
		case 5:
			system("cls");
			userInterface();
			break;
		default:
			cout << "                               �����������������" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0);
}


void enter(){ //����Ա��¼
	int id; //10001
	char userName[30];
	char pwd[30];
	cout << "                                 ������id��";
	cin >> id;
	cout << "                               ������������";
	cin >> userName;
	cout << "                               ���������룺";
	cin >> pwd;
	User user;
	fstream iof;
	int bb = 0;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (strcmp(user.getPwd(), pwd) == 0 && user.getId() == id && strcmp(user.getUserName(), userName) == 0){//�ҵ���,����
			cout << "                               ��½�ɹ�" << endl;
			system("pause");
			control();
			bb = 1;
			break;
		}
	}
	if(bb == 0){
		cout << "                               �û������ڣ���½ʧ��" << endl;
	}
}

void studentLogin(){ //ѧ��ע��
	Biz biz;
	User user;
	user = inputuserInfo();
	biz.addUserStudent(user);
	cout << "                               �����û���Ϣ�ɹ�" << endl;
}

void studentEnter(){ //ѧ����¼
	int id; //10001
	char userName[30];
	char pwd[30];//����111222333
	cout << "                                 ������id��";
	cin >> id;
	cout << "                               ������������";
	cin >> userName;
	cout << "                               ���������룺";
	cin >> pwd;
	User user;
	fstream iof;
	int bb = 0;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (strcmp(user.getPwd(), pwd) == 0 && user.getId() == id && strcmp(user.getUserName(), userName) == 0){//�ҵ���,����
			cout << "                               ��½�ɹ�" << endl;
			system("pause");
			studentInterface();
			bb = 1;
			break;
		}
	}
	if(bb == 0){
		cout << "                               �û������ڣ���½ʧ��" << endl;
	}
}

void teacherLogin(){ //��ʦע��
	Biz biz;
	User user;
	user = inputuserInfo();
	biz.addUserTeacher(user);
	cout << "                               �����û���Ϣ�ɹ�" << endl;
}

void teacherEnter(){ //��ʦ��¼
	int id; //10001
	char userName[30];
	char pwd[30];//����111222333
	cout << "                                 ������id��";
	cin >> id;
	cout << "                               ������������";
	cin >> userName;
	cout << "                               ���������룺";
	cin >> pwd;
	User user;
	fstream iof;
	int bb = 0;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (strcmp(user.getPwd(), pwd) == 0 && user.getId() == id && strcmp(user.getUserName(), userName) == 0){//�ҵ���,����
			cout << "                               ��½�ɹ�" << endl;
			system("pause");
			teacherInterface();
			bb = 1;
			break;
		}
	}
	if(bb == 0){
		cout << "                               �û������ڣ���½ʧ��" << endl;
	}
}

void LoginInterface(){ //ע�����
	
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "-----------------------------ͼ��ݽ��Ĺ���ϵͳ-----------------------------" << endl;
		cout << "                               1 ѧ��ע��" << endl;
		cout << "                               2 ��ʦע��" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "                               ����Ҫ���еĲ�����" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			studentLogin();
			system("pause");
			break;
		case 2:
			system("cls");
			teacherLogin();
			system("pause");
			break;
		default:
			cout << "                               �����������������" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0);
}

void enterInterface(){ //��¼����
	
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "----------------------------ͼ��ݽ��Ĺ���ϵͳ----------------------------" << endl;
		cout << "                               1 ѧ����¼" << endl;
		cout << "                               2 ��ʦ��¼" << endl;
		cout << "                               3 ����Ա��¼" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "                               ����Ҫ���еĲ�����" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			studentEnter();
			system("pause");
			system("cls");
			break;
		case 2:
			teacherEnter();
			system("pause");
			system("cls");
			break;
		case 3:
			enter();	
			system("pause");
			system("cls");
			break;
		default:
			cout << "                               �����������������" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0);
}

void studentInterface(){ //ѧ������
	Biz biz;
	Magazines maga;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int magazinesCode;
	int studentNumber;
	Library lib;
	int libraryCode;
	do{
		system("cls");
		cout << "----------------------------ѧ���������------------------------------" << endl;
		cout << "                               1 ѧ��֤�Ź���" << endl;
		cout << "                               2 ͼ�����" << endl;
		cout << "                               3 ͼ���б���ʽ" << endl;
		cout << "                               4 ѧ����ͼ�����" << endl;
		cout << "                               5 ѧ����ͼ������б���ʽ" << endl;
		cout << "                               6 ѧ����ͼ��黹" << endl;
		cout << "                               7 ��־����" << endl;
		cout << "                               8 ��־�б���ʽ" << endl;
		cout << "                               9 ѧ������־����" << endl;
		cout << "                               10 ѧ������־�����б���ʽ" << endl;
		cout << "                               11 ѧ������־�黹" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			studentMethod();
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               ͼ����Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ��ͼ������:";
			cin >> libraryCode;
			lib = biz.findByIdLibrary(libraryCode);
			if(lib.getLibraryCode() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-------------------------------------------------------------------------------------" << endl;
				cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
				cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
				cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
				cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
				cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
				cout << "-------------------------------------------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               ͼ����Ϣ���� << �б���ʽ:" << endl;
			biz.findAllLibrary();
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               ͼ����Ϣ���� << ѧ������:" << endl;
			biz.libraryStudentLend();
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               ͼ����Ϣ���� << ѧ��������Ϣ�б���ʽ:" << endl;
			cout << "                               ������ѧ���Ľ���֤�ţ�" ;
			cin >> studentNumber;
			biz.findByIdLibraryStudentLend(studentNumber);
			system("pause");
			system("cls");
			break;
		case 6:
			cout << "                               ͼ����Ϣ���� << ѧ���黹:" << endl;
			biz.libraryStudentReturn();
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "                               ��־��Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ����־����:";
			cin >> magazinesCode;
			maga = biz.findByIdMagazines(magazinesCode);
			if(maga.getMagazinesCode() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-----------------------------------------------------" << endl;
				cout << "                               ��־������   ��" << maga.getMagazinesName() << endl;
				cout << "                               ��־������   ��" << maga.getMagazinesCode() << endl;
				cout << "                               ��־�����   ��" << maga.getMagazinesNumber() << endl;
				cout << "                               ��־������� ��" << maga.getMagazinesStorage() << endl;
				cout << "-----------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "                               ��־��Ϣ���� << �б���ʽ:" << endl;
			biz.findAllMagazines();
			system("pause");
			system("cls");
			break;
		case 9:
			cout << "                               ��־��Ϣ���� << ѧ������:" << endl;
			biz.magazinesStudentLend();
			system("pause");
			system("cls");
			break;
		case 10:
			cout << "                               ��־��Ϣ���� << ѧ��������Ϣ�б���ʽ:" << endl;
			cout << "                               ������ѧ���Ľ���֤�ţ�" ;
			cin >> studentNumber;
			biz.findByIdMagazinesStudentLend(studentNumber);
			system("pause");
			system("cls");
			break;
		case 11:
			cout << "                               ��־��Ϣ���� << ѧ���黹:" << endl;
			biz.magazinesStudentReturn();
			system("pause");
			system("cls");
			break;
		default:
            cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);
}

void teacherInterface(){ //��ʦ����
	Biz biz;
	Magazines maga;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int magazinesCode;
	int teacherNumber;
	Library lib;
	int libraryCode;
	do{
		system("cls");
		cout << "----------------------------��ʦ�������------------------------------" << endl;
		cout << "                               1 ��ʦ֤�Ź���" << endl;
		cout << "                               2 ͼ�����" << endl;
		cout << "                               3 ͼ���б���ʽ" << endl;
		cout << "                               4 ��ʦ��ͼ�����" << endl;
		cout << "                               5 ��ʦ��ͼ������б���ʽ" << endl;
		cout << "                               6 ��ʦ��ͼ��黹" << endl;
		cout << "                               7 ��־����" << endl;
		cout << "                               8 ��־�б���ʽ" << endl;
		cout << "                               9 ��ʦ����־����" << endl;
		cout << "                               10 ��ʦ����־�����б���ʽ" << endl;
		cout << "                               11 ��ʦ����־�黹" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               ��ѡ�����:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			teacherMethod();
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               ͼ����Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ��ͼ������:";
			cin >> libraryCode;
			lib = biz.findByIdLibrary(libraryCode);
			if(lib.getLibraryCode() == 0){
				cout << "                               �û�������" << endl;
			} else {
				cout << "-------------------------------------------------------------------------------------" << endl;
				cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
				cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
				cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
				cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
				cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
				cout << "-------------------------------------------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               ͼ����Ϣ���� << �б���ʽ:" << endl;
			biz.findAllLibrary();
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               ͼ����Ϣ���� << ��ʦ����:" << endl;
			biz.libraryTeacherLend();
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               ͼ����Ϣ���� << ��ʦ������Ϣ�б���ʽ:" << endl;
			cout << "                               �������ʦ�Ľ���֤�ţ�" ;
			cin >> teacherNumber;
			biz.findByIdLibraryTeacherLend(teacherNumber);
			system("pause");
			system("cls");
			break;
		case 6:
			cout << "                               ͼ����Ϣ���� << ��ʦ�黹:" << endl;
			biz.libraryTeacherReturn();
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "                               ��־��Ϣ���� << ����:" << endl;
			cout << "                               ������Ҫ��ѯ����־����:";
			cin >> magazinesCode;
			maga = biz.findByIdMagazines(magazinesCode);
			if(maga.getMagazinesCode() == 0){
				cout << "                               ��־������" << endl;
			} else {
				cout << "-----------------------------------------------------" << endl;
				cout << "                               ��־������   ��" << maga.getMagazinesName() << endl;
				cout << "                               ��־������   ��" << maga.getMagazinesCode() << endl;
				cout << "                               ��־�����   ��" << maga.getMagazinesNumber() << endl;
				cout << "                               ��־������� ��" << maga.getMagazinesStorage() << endl;
				cout << "-----------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "                               ��־��Ϣ���� << �б���ʽ:" << endl;
			biz.findAllMagazines();
			system("pause");
			system("cls");
			break;
		case 9:
			cout << "                               ��־��Ϣ���� << ��ʦ����:" << endl;
			biz.magazinesTeacherLend();
			system("pause");
			system("cls");
			break;
		case 10:
			cout << "                               ��־��Ϣ���� << ��ʦ������Ϣ�б���ʽ:" << endl;
			cout << "                               ������ѧ���Ľ���֤�ţ�" ;
			cin >> teacherNumber;
			biz.findByIdMagazinesTeacherLend(teacherNumber);
			system("pause");
			system("cls");
			break;
		case 11:
			cout << "                               ��־��Ϣ���� << ��ʦ�黹:" << endl;
			biz.magazinesTeacherReturn();
			system("pause");
			system("cls");
			break;
		default:
            cout << "                               �������" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);
}