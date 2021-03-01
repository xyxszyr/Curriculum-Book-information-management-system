#include"Biz.h"
/*
int addLibrary(Library &lib); //ͼ�� ¼��ͱ���
int updateLibrary(Library &lib); //ͼ�� �޸�
int deleteByIdLibrary(int libraryCode); //ͼ�� ɾ��
Library findByIdLibrary(int libraryCode); //ͼ�� ����  ���ݱ�Ų���
void findAllLibrary(); // ͼ�� ��������
void libraryStudentLend();// ͼ��ѧ������
void findByIdLibraryStudentLend(int studentNumber); //���ݽ���֤�Ų���ѧ��������Ϣ
void libraryTeacherLend();// ͼ���ʦ����
void findByIdLibraryTeacherLend(int teacherNumber); //���ݽ���֤�Ų��ҽ�ʦ������Ϣ
void libraryStudentReturn();// ͼ��ѧ���黹
void libraryTeacherReturn();// ͼ���ʦ�黹


int addMagazines(Magazines &maga); //��־ ¼��ͱ���
int updateMagazines(Magazines &maga); //��־ �޸�
int deleteByIdMagazines(int magazinesCode); //��־ ɾ��
Magazines findByIdMagazines(int magazinesCode); // ��־ ����  ���ݱ�Ų���
void findAllMagazines(); //��־ ��������
void magazinesStudentLend();// ��־ѧ������
void findByIdMagazinesStudentLend(int studentNumber); //���ݽ���֤�Ų���ѧ��������Ϣ
void magazinesTeacherLend();// ��־��ʦ����
void findByIdMagazinesTeacherLend(int teacherNumber); //���ݽ���֤�Ų��ҽ�ʦ������Ϣ
void magazinesStudentReturn();// ��־ѧ���黹
void magazinesTeacherReturn();// ��־��ʦ�黹


int addStudent(Student &stu); //ѧ�� ¼��ͱ���
int updateStudent(Student &stu); // ѧ�� �޸�
int deleteByIdStudent(int studentNumber); //ѧ�� ɾ��
Student findByIdStudent(int studentNumber); //ѧ�� ����  ���ݽ���֤�Ų���
void findAllStudent(); //ѧ�� ��������

int addTeacher(Teacher &tea); //��ʦ ¼��ͱ���
int updateTeacher(Teacher &tea); //��ʦ �޸�
int deleteByIdTeacher(int teacherNumber); //��ʦ ɾ��
Teacher findByIdTeacher(int teacherNumber); //��ʦ ����  ���ݽ���֤�Ų���
void findAllTeacher(); //��ʦ ��������

int addUser(User &user); //�û� ¼��ͱ���
int updateUser(User &user); //�û� �޸�
int deleteByIdUser(int id); //�û� ɾ��
User findByIdUser(int id); //�û� ����  ���ݱ�Ų���
void findAllUser();//�û� ��������

int addUserStudent(User &user); //ѧ���û� ¼��ͱ���
int updateUserStudent(User &user); //ѧ���û� �޸�
int deleteByIdUserStudent(int id); //ѧ���û� ɾ��
User findByIdUserStudent(int id); //ѧ���û� ����  ���ݱ�Ų���
void findAllUserStudent();//ѧ���û� ��������

int addUserTeacher(User &user); //��ʦ�û� ¼��ͱ���
int updateUserTeacher(User &user); //��ʦ�û� �޸�
int deleteByIdUserTeacher(int id); //��ʦ�û� ɾ��
User findByIdUserTeacher(int id); //��ʦ�û� ����  ���ݱ�Ų���
void findAllUserTeacher();//��ʦ�û� ��������
*/
int Biz::addLibrary(Library &lib){
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&lib, sizeof(Library));
	iof.close();
	return 1;
} 
int Biz::updateLibrary(Library &lib){
	int tag = 0;
	Library oldLibrary;
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&oldLibrary, sizeof(Library));
		if(oldLibrary.getLibraryCode() == lib.getLibraryCode()){
			iof.seekp(-sizeof(Library), ios::cur);
			iof.write((char*)&lib, sizeof(Library));
			tag = 1;
			break;
		}
	}
	return tag;
}
int Biz::deleteByIdLibrary(int libraryCode){
	int tag = 0;
	Library lib;
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&lib, sizeof(Library));
		if (lib.getLibraryCode() == libraryCode){//�ҵ���,����
			lib.setLibraryCode(0);
			iof.seekp(-sizeof(Library), ios::cur);
			iof.write((char*)&lib, sizeof(Library));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
Library Biz::findByIdLibrary(int libraryCode){ //����������в���
	Library lib;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&lib, sizeof(Library));
		if (lib.getLibraryCode() == libraryCode){//�ҵ���,����
			tag = 1;//����
			break;
		}
	}
	if (tag == 0){
		lib.setLibraryCode(0);
	}
	iof.close();
	return lib;
}
void Biz::findAllLibrary(){
	Library lib;
	fstream iof;
	int a = 1;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "================================================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&lib, sizeof(Library));
		if(lib.getLibraryCode() != 0) {
			cout << "                               ��" << a++ << "��ͼ��" << endl;
			cout << "---------------------------------------------------------------------------------------" << endl;
			cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
			cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
			cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
			cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
			cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
			cout << "---------------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "================================================================================================================================" << endl;
	iof.close();
}

void Biz::findByIdLibraryStudentLend(int studentNumber){
	Library lib;
	Student stu;
	int a = 1;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("LibraryStudentLend.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&stu, sizeof(Student));
		iof.read((char*)&lib, sizeof(Library));
		if (studentNumber == 0){
			cout << "                               �û�������" << endl;
		}
		else{
			if (stu.getStudentNumber() == studentNumber){//�ҵ���,����
				cout << "                               ѧ��" << stu.getStudentName() << "���ĵĵ�" << a++ << "��ͼ��" << endl;
				cout << "==================================================================================================" << endl;
				cout << "                               ѧ����      ������" << stu.getStudentName() << endl;
				cout << "                               ѧ����  ����֤�ţ�" << stu.getStudentNumber() << endl;
				cout << "----------------------------------------------------------------------------------" << endl;
				cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
				cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
				cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
				cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
				cout << "==================================================================================================" << endl;
			}
		}
	}
	iof.close();
}

void Biz::libraryStudentLend(){// ͼ��ѧ������
	Biz biz;
	Library lib;
	Library oldlib;
	Library oldliba;
	Student stu;
	Student oldstu;
	int number = 0;
	int libraryCode;
	int studentNumber;
	cout << "                               ������Ҫ���ĵ�ͼ�����룺" ;
	cin >> libraryCode;
	lib = biz.findByIdLibrary(libraryCode);
	if(lib.getLibraryCode() == 0){
		cout << "                               ͼ�鲻����" << endl;
	} 
	else if(lib.getLibraryStorage() == 0){
		cout << "                               ��ͼ���ѱ�����" << endl;
	}
	else {
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
		cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
		cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
		cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
		cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "                               ������ѧ���Ľ���֤�ţ�" ;
		cin >> studentNumber;
		stu = biz.findByIdStudent(studentNumber);
		if(stu.getStudentNumber() == 0){
			cout << "                               �û�������" << endl;
		} 
		else {
			cout << "-----------------------------------------------------------------------------------------" << endl;
			cout << "                               ѧ����     ������" << stu.getStudentName() << endl;
			cout << "                               ѧ���� ����֤�ţ�" << stu.getStudentNumber() << endl;
			cout << "-----------------------------------------------------------------------------------------" << endl; 
			fstream iofc;
			iofc.open("LibraryStudentLend.txt", ios::in|ios::out);
			iofc.seekg(0,ios::end);
			long poEnda = iofc.tellg();
			iofc.seekg(0, ios::beg);
			while(iofc.tellg() != poEnda) {
				iofc.read((char*)&oldstu, sizeof(Student));
				iofc.read((char*)&oldliba, sizeof(Library));
				if (oldstu.getStudentNumber() == studentNumber){//�ҵ���,����
					number++;
				}
			}
			iofc.close();
			if(number >= 3){
				cout << "                               �Ѿ���3��ͼ�飬�ﵽ���ޣ������ٽ�" << endl;
			}else{
				fstream iofa;
				fstream iof;
				iofa.open("LibraryStudentLend.txt", ios::in|ios::out);
				iofa.seekp(0,ios::end);
				iofa.write((char*)&stu, sizeof(Student));
				iofa.write((char*)&lib, sizeof(Library));
				cout << "                               ����ɹ�" << endl;
				iof.open("Library.txt", ios::in|ios::out);
				iof.seekg(0, ios::end);
				long poEnd = iof.tellg();
				iof.seekg(0, ios::beg);
				while(iof.tellg() != poEnd) {
					iof.read((char*)&oldlib, sizeof(Library));
					if (oldlib.getLibraryCode() == libraryCode){//�ҵ���,����
						oldlib.setLibraryStorage(oldlib.getLibraryStorage() - 1);
						iof.seekp(-sizeof(Library), ios::cur);
						iof.write((char*)&oldlib, sizeof(Library));
						break;
					}
				}
				iof.close();
				cout << "==================================================================================================" << endl;
				cout << "                               ѧ����      ������" << stu.getStudentName() << endl;
				cout << "                               ѧ����  ����֤�ţ�" << stu.getStudentNumber() << endl;
				cout << "----------------------------------------------------------------------------------" << endl;
				cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
				cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
				cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
				cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
				cout << "==================================================================================================" << endl;
				iofa.close();
			}
		}
	}
}

void Biz::libraryStudentReturn(){// ͼ��ѧ���黹
	Biz biz;
	Library lib;
	Library liba;
	Library oldlib;
	Student stu;
	Student stua;
	int libraryCode;
	int studentNumber;
	cout << "                               ������Ҫ�黹��ͼ�����룺" ;
	cin >> libraryCode;
	lib = biz.findByIdLibrary(libraryCode);
	if(lib.getLibraryCode() == 0){
		cout << "                               ͼ�鲻����" << endl;
	}else{
		cout << "                               ������ѧ���Ľ���֤�ţ�" ;
		cin >> studentNumber;
		fstream iofb;
		iofb.open("LibraryStudentLend.txt", ios::in|ios::out);
		iofb.seekg(0, ios::end);
		long poEndb = iofb.tellg();
		iofb.seekg(0, ios::beg);
		while(iofb.tellg() != poEndb) {
			iofb.read((char*)&stua, sizeof(Student));
			iofb.read((char*)&liba, sizeof(Library));
			if(liba.getLibraryCode() == libraryCode){
				if(stua.getStudentNumber() == studentNumber) { 
					iofb.close();
					fstream iofa;
					fstream iof;
					cout << "                               ����ɹ�" << endl;
					iof.open("Library.txt", ios::in|ios::out);
					iof.seekg(0, ios::end);
					long poEnd = iof.tellg();
					iof.seekg(0, ios::beg);
					while(iof.tellg() != poEnd) {
						iof.read((char*)&oldlib, sizeof(Library));
						if (oldlib.getLibraryCode() == libraryCode){//�ҵ���,����
							oldlib.setLibraryStorage(oldlib.getLibraryStorage() + 1);
							iof.seekp(-sizeof(Library), ios::cur);
							iof.write((char*)&oldlib, sizeof(Library));
							break;
						}
					}	
					cout << "=============================================================================================" << endl;
					cout << "                               ͼ�飺       ���ߣ�" << oldlib.getAuthor() << endl; 
					cout << "                               ͼ�飺       ���룺" << oldlib.getLibraryCode() << endl; 
					cout << "                               ͼ�飺       ������" << oldlib.getLibraryNmae() << endl;
					cout << "                               ͼ�飺 �ڲ�����ţ�" << oldlib.getLibrarynumber() << endl;
					cout << "                               ͼ�飺     �������" << oldlib.getLibraryStorage() << endl;
					cout << "=============================================================================================" << endl;
					iof.close();
					iofa.open("LibraryStudentLend.txt", ios::in|ios::out);
					iofa.seekg(0, ios::end);
					long poEnda = iofa.tellg();
					iofa.seekg(0, ios::beg);
					while(iofa.tellg() != poEnda) {
						iofa.read((char*)&stu, sizeof(Student));
						iofa.read((char*)&lib, sizeof(Library));
						if (lib.getLibraryCode() == libraryCode && stu.getStudentNumber() ==studentNumber){ //�ҵ���,����
							stu.setStudentNumber(0);
							iofa.seekp(-sizeof(Library), ios::cur);
							iofa.seekp(-sizeof(Student), ios::cur);
							iofa.write((char*)&stu, sizeof(Student));
							iofa.write((char*)&oldlib, sizeof(Library));
							break;
						}
					}
					iofa.close();
					break;
				}
			}
		}
		iofb.close();
	}
}

void Biz::libraryTeacherReturn(){// ͼ���ʦ�黹
	Biz biz;
	Library lib;
	Library oldlib;
	Teacher tea;
	int libraryCode;
	int teacherNumber;
	cout << "                               ������Ҫ�黹��ͼ�����룺" ;
	cin >> libraryCode;
	lib = biz.findByIdLibrary(libraryCode);
	if(lib.getLibraryCode() == 0){
		cout << "                               ͼ�鲻����" << endl;
	}else{
		cout << "                               �������ʦ�Ľ���֤�ţ�" ;
		cin >> teacherNumber;
		fstream iofb;
		iofb.open("LibraryTeacherLend.txt", ios::in|ios::out);
		iofb.seekg(0, ios::end);
		long poEndb = iofb.tellg();
		iofb.seekg(0, ios::beg);
		while(iofb.tellg() != poEndb) {
			iofb.read((char*)&tea, sizeof(Teacher));
			iofb.read((char*)&lib, sizeof(Library));
			if(lib.getLibraryCode() == libraryCode){
				if(tea.getTeacherNumber() == teacherNumber) { 
					iofb.close();
					fstream iofa;
					fstream iof;
					cout << "                               ����ɹ�" << endl;
					iof.open("Library.txt", ios::in|ios::out);
					iof.seekg(0, ios::end);
					long poEnd = iof.tellg();
					iof.seekg(0, ios::beg);
					while(iof.tellg() != poEnd) {
						iof.read((char*)&oldlib, sizeof(Library));
						if (oldlib.getLibraryCode() == libraryCode){//�ҵ���,����
							oldlib.setLibraryStorage(oldlib.getLibraryStorage() + 1);
							iof.seekp(-sizeof(Library), ios::cur);
							iof.write((char*)&oldlib, sizeof(Library));
							break;
						}
					}	
					cout << "=============================================================================================" << endl;
					cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
					cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
					cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
					cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
					cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
					cout << "=============================================================================================" << endl;
					iof.close();
					iofa.open("LibraryTeacherLend.txt", ios::in|ios::out);
					iofa.seekg(0, ios::end);
					long poEnda = iofa.tellg();
					iofa.seekg(0, ios::beg);
					while(iofa.tellg() != poEnda) {
						iofa.read((char*)&tea, sizeof(Teacher));
						iofa.read((char*)&lib, sizeof(Library));
						if (lib.getLibraryCode() == libraryCode && tea.getTeacherNumber() == teacherNumber){ //�ҵ���,����
							tea.setTeacherNumber(0);
							iofa.seekp(-sizeof(Library), ios::cur);
							iofa.seekp(-sizeof(Teacher), ios::cur);
							iofa.write((char*)&tea, sizeof(Teacher));
							iofa.write((char*)&lib, sizeof(Library));
							break;
						}
					}
					iofa.close();
					break;
				}
			}
		}
		iofb.close();
	}		
}

void Biz::libraryTeacherLend(){// ͼ���ʦ����
	Biz biz;
	Library lib;
	Library oldlib;
	Library oldliba;
	Teacher tea;
	Teacher oldtea;
	int libraryCode;
	int teacherNumber;
	int b = 1;
	int number = 0;
	cout << "                               ������Ҫ���ĵ�ͼ�����룺" ;
	cin >> libraryCode;
	lib = biz.findByIdLibrary(libraryCode);
	if(lib.getLibraryCode() == 0){
		cout << "                               ͼ�鲻����" << endl;
	} 
	else if(lib.getLibraryStorage() == 0){
		cout << "                               ��ͼ���ѱ�����" << endl;
	}
	else {
		cout << "----------------------------------------------------------------------------------------------" << endl;
		cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
		cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
		cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
		cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
		cout << "                               ͼ�飺     �������" << lib.getLibraryStorage() << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "                               �������ʦ�Ľ���֤�ţ�" ;
		cin >> teacherNumber;
		tea = biz.findByIdTeacher(teacherNumber);
		if(tea.getTeacherNumber() == 0){
			cout << "                               �û�������" << endl;
		} 
		else {
			cout << "-----------------------------------------------------------------------------------------------" << endl;
			cout << "                               ��ʦ��     ������" << tea.getTeacherName() << endl;
			cout << "                               ��ʦ�� ����֤�ţ�" << tea.getTeacherNumber() << endl;
			cout << "-----------------------------------------------------------------------------------------------" << endl;
			fstream iofc;
			iofc.open("LibraryTeacherLend.txt", ios::in|ios::out);
			iofc.seekg(0,ios::end);
			long poEnda = iofc.tellg();
			iofc.seekg(0, ios::beg);
			while(iofc.tellg() != poEnda) {
				iofc.read((char*)&oldtea, sizeof(Student));
				iofc.read((char*)&oldliba, sizeof(Library));
				if (oldtea.getTeacherNumber() == teacherNumber){//�ҵ���,����
					number++;
				}
			}
			iofc.close();
			if(number >= 5){
				cout << "                               �Ѿ���5��ͼ�飬�ﵽ���ޣ������ٽ�" << endl;
			}else{
				fstream iofa;
				fstream iof;
				iofa.open("LibraryTeacherLend.txt", ios::in|ios::out);
				iofa.seekp(0,ios::end);
				iofa.write((char*)&tea, sizeof(Teacher));
				iofa.write((char*)&lib, sizeof(Library));
				cout << "                               ����ɹ�" << endl;
				iof.open("Library.txt", ios::in|ios::out);
				iof.seekg(0, ios::end);
				long poEnd = iof.tellg();
				iof.seekg(0, ios::beg);
				while(iof.tellg() != poEnd) {
					iof.read((char*)&oldlib, sizeof(Library));
					if (oldlib.getLibraryCode() == libraryCode){//�ҵ���,����
						oldlib.setLibraryStorage(oldlib.getLibraryStorage() - 1);
						iof.seekp(-sizeof(Library), ios::cur);
						iof.write((char*)&oldlib, sizeof(Library));
						break;
					}
				}
				iof.close();
				cout << "=============================================================================================" << endl;
				cout << "                               ��ʦ��      ������" << tea.getTeacherName() << endl;
				cout << "                               ��ʦ��  ����֤�ţ�" << tea.getTeacherNumber() << endl;
				cout << "-------------------------------------------------------------------------------" << endl;
				cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
				cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
				cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
				cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
				cout << "=============================================================================================" << endl;
				iofa.close();
			}
		}
	}
}

void Biz::findByIdLibraryTeacherLend(int teacherNumber){//���ݽ���֤�Ų��ҽ�ʦ������Ϣ
		Library lib;
		Teacher tea;
		int tag = 0;//�û�������
		int a = 1;
		fstream iof;
		iof.open("LibraryTeacherLend.txt", ios::in|ios::out);
		iof.seekg(0, ios::end);
		long poEnd = iof.tellg();
		iof.seekg(0, ios::beg);
		while(iof.tellg() != poEnd) {
			iof.read((char*)&tea, sizeof(Teacher));
			iof.read((char*)&lib, sizeof(Library));
			if (teacherNumber == 0){
				cout << "                               �û�������" << endl;
			}
			else{
				if (tea.getTeacherNumber() == teacherNumber){//�ҵ���,����
					cout << "                               ��ʦ" << tea.getTeacherName() << "���ĵĵ�" << a++ << "��ͼ��" << endl;
					cout << "============================================================================================" << endl;
					cout << "                               ��ʦ��      ������" << tea.getTeacherName() << endl;
					cout << "                               ��ʦ��  ����֤�ţ�" << tea.getTeacherNumber() << endl;
					cout << "---------------------------------------------------------------------------" << endl;
					cout << "                               ͼ�飺       ���ߣ�" << lib.getAuthor() << endl; 
					cout << "                               ͼ�飺       ���룺" << lib.getLibraryCode() << endl; 
					cout << "                               ͼ�飺       ������" << lib.getLibraryNmae() << endl;
					cout << "                               ͼ�飺 �ڲ�����ţ�" << lib.getLibrarynumber() << endl;
					cout << "============================================================================================" << endl;
				}
			}
		}
		iof.close();
}


int Biz::addMagazines(Magazines &maga){
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&maga, sizeof(Magazines));
	iof.close();
	return 1;
}
int Biz::updateMagazines(Magazines &maga){
	int tag = 0;
	Magazines old;
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(Magazines));
		if(old.getMagazinesCode() == maga.getMagazinesCode()){
			iof.seekp(-sizeof(Magazines), ios::cur);
			iof.write((char*)&maga, sizeof(Magazines));
			tag = 1;
			break;
		}
	}
	return tag;
}
int Biz::deleteByIdMagazines(int magazinesCode){
	int tag = 0;
	Magazines maga;
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&maga, sizeof(Magazines));
		if (maga.getMagazinesCode() == magazinesCode){//�ҵ���,����
			maga.setMagazinesCode(0);
			iof.seekp(-sizeof(Magazines), ios::cur);
			iof.write((char*)&maga, sizeof(Magazines));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
Magazines Biz::findByIdMagazines(int magazinesCode){
	Magazines maga;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&maga, sizeof(Magazines));
		if (maga.getMagazinesCode() == magazinesCode){//�ҵ���,����
			tag = 1;//����
			break;
		}
	}
	//������û�ҵ�
	if (tag == 0){
		maga.setMagazinesCode(0);
	}
	iof.close();
	return maga;
}
void Biz::findAllMagazines(){
	Magazines maga;
	fstream iof;
	int a = 1;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "==============================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&maga, sizeof(Magazines));
		if(maga.getMagazinesCode() != 0) {
			cout << "                               ��" << a++ << "����־" << endl;
			cout << "------------------------------------------------------------------------------------------" << endl;
			cout << "                               ��־��   ������" << maga.getMagazinesName() << endl;
			cout << "                               ��־��   ���룺" << maga.getMagazinesCode() << endl;
			cout << "                               ��־��   ��ţ�" << maga.getMagazinesNumber() << endl;
			cout << "                               ��־�� �������" << maga.getMagazinesStorage() << endl;
			cout << "------------------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "==============================================================================================================" << endl;
	iof.close();
}
void Biz::magazinesStudentLend(){// ��־ѧ������
	Biz biz;
	Magazines maga;
	Magazines oldmaga;
	Magazines oldmagab;
	Student stu;
	Student oldstu;
	int magazinesCode;
	int studentNumber;
	int number;
	int b = 1;
	cout << "                               ������Ҫ���ĵ���־���룺" ;
	cin >> magazinesCode;
	maga = biz.findByIdMagazines(magazinesCode);
	if(maga.getMagazinesCode() == 0){
		cout << "                               ��־������" << endl;
	} 
	else if(maga.getMagazinesStorage() == 0){
		cout << "                               ����־�ѱ�����" << endl;
	}
	else {
		cout << "--------------------------------------------------------------------------------------------" << endl;
		cout << "                               ��־��   ������" << maga.getMagazinesName() << endl;
		cout << "                               ��־��   ���룺" << maga.getMagazinesCode() << endl;
		cout << "                               ��־��   ��ţ�" << maga.getMagazinesNumber() << endl;
		cout << "                               ��־�� �������" << maga.getMagazinesStorage() << endl;
		cout << "--------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "                               ������ѧ���Ľ���֤�ţ�" ;
		cin >> studentNumber;
		stu = biz.findByIdStudent(studentNumber);
		if(stu.getStudentNumber() == 0){
			cout << "                               �û�������" << endl;
		} 
		else {
			cout << "-----------------------------------------------------------------------------------------------" << endl;
			cout << "                               ѧ����     ������" << stu.getStudentName() << endl;
			cout << "                               ѧ���� ����֤�ţ�" << stu.getStudentNumber() << endl;
			cout << "-----------------------------------------------------------------------------------------------" << endl; 
			fstream iofc;
			iofc.open("MagazinesStudentLend.txt", ios::in|ios::out);
			iofc.seekg(0,ios::end);
			long poEnda = iofc.tellg();
			iofc.seekg(0, ios::beg);
			while(iofc.tellg() != poEnda) {
				iofc.read((char*)&oldstu, sizeof(Student));
				iofc.read((char*)&oldmagab, sizeof(Magazines));
				if (oldstu.getStudentNumber() == studentNumber){//�ҵ���,����
					number++;
				}
			}
			iofc.close();
			if(number >= 5){
				cout << "                               �Ѿ���5����־���ﵽ���ޣ������ٽ�" << endl;
			}else{
				fstream iofa;
				fstream iof;
				iofa.open("MagazinesStudentLend.txt", ios::in|ios::out);
				iofa.seekp(0,ios::end);
				iofa.write((char*)&stu, sizeof(Student));
				iofa.write((char*)&maga, sizeof(Magazines));
				cout << "                               ����־�ɹ�" << endl;
				iof.open("Magazines.txt", ios::in|ios::out);
				iof.seekg(0, ios::end);
				long poEnd = iof.tellg();
				iof.seekg(0, ios::beg);
				while(iof.tellg() != poEnd) {
					iof.read((char*)&oldmaga, sizeof(Magazines));
					if (maga.getMagazinesCode() == magazinesCode){//�ҵ���,����
						oldmaga.setMagazinesStorage(oldmaga.getMagazinesStorage() - 1);
						iof.seekp(-sizeof(Magazines), ios::cur);
						iof.write((char*)&oldmaga, sizeof(Magazines));
						break;
					}
				}
				iof.close();
				cout << "===============================================================================================" << endl;
				cout << "                               ѧ����     ������" << stu.getStudentName() << endl;
				cout << "                               ѧ���� ����֤�ţ�" << stu.getStudentNumber() << endl;
				cout << "----------------------------------------------------------------------------------" << endl;
				cout << "                               ��־��     ������" << maga.getMagazinesName() << endl;
				cout << "                               ��־��     ���룺" << maga.getMagazinesCode() << endl;
				cout << "                               ��־��     ��ţ�" << maga.getMagazinesNumber() << endl;
				cout << "===============================================================================================" << endl;
				iofa.close();
			}
		}
	}
}

void Biz::magazinesStudentReturn(){// ��־ѧ���黹
	Biz biz;
	Magazines maga;
	Magazines oldmaga;
	Student stu;
	int magazinesCode;
	int studentNumber;
	cout << "                               ������Ҫ�黹����־���룺" ;
	cin >> magazinesCode;
	maga = biz.findByIdMagazines(magazinesCode);
	if(maga.getMagazinesCode() == 0){
		cout << "                               ��־������" << endl;
	}else{
		cout << "                               ������ѧ���Ľ���֤�ţ�" ;
		cin >> studentNumber;
		fstream iofb;
		iofb.open("MagazinesStudentLend.txt", ios::in|ios::out);
		iofb.seekg(0, ios::end);
		long poEndb = iofb.tellg();
		iofb.seekg(0, ios::beg);
		while(iofb.tellg() != poEndb) {
			iofb.read((char*)&stu, sizeof(Student));
			iofb.read((char*)&maga, sizeof(Magazines));
			if(maga.getMagazinesCode() == magazinesCode){
				if(stu.getStudentNumber() == studentNumber) { 
					iofb.close();
					fstream iofa;
					fstream iof;
					cout << "                               ����ɹ�" << endl;
					iof.open("Magazines.txt", ios::in|ios::out);
					iof.seekg(0, ios::end);
					long poEnd = iof.tellg();
					iof.seekg(0, ios::beg);
					while(iof.tellg() != poEnd) {
						iof.read((char*)&oldmaga, sizeof(Magazines));
						if (oldmaga.getMagazinesCode() == magazinesCode){//�ҵ���,����
							oldmaga.setMagazinesStorage(oldmaga.getMagazinesStorage() + 1);
							iof.seekp(-sizeof(Magazines), ios::cur);
							iof.write((char*)&oldmaga, sizeof(Magazines));
							break;
						}
					}	
					cout << "============================================================================================" << endl;
					cout << "                               ��־��   ������" << maga.getMagazinesName() << endl;
					cout << "                               ��־��   ���룺" << maga.getMagazinesCode() << endl;
					cout << "                               ��־��   ��ţ�" << maga.getMagazinesNumber() << endl;
					cout << "                               ��־�� �������" << maga.getMagazinesStorage() << endl;
					cout << "============================================================================================" << endl;
					iof.close();
					iofa.open("MagazinesStudentLend.txt", ios::in|ios::out);
					iofa.seekg(0, ios::end);
					long poEnda = iofa.tellg();
					iofa.seekg(0, ios::beg);
					while(iofa.tellg() != poEnda) {
						iofa.read((char*)&stu, sizeof(Student));
						iofa.read((char*)&maga, sizeof(Magazines));
						if (maga.getMagazinesCode() == magazinesCode && stu.getStudentNumber() ==studentNumber){ //�ҵ���,����
							stu.setStudentNumber(0);
							iofa.seekp(-sizeof(Magazines), ios::cur);
							iofa.seekp(-sizeof(Student), ios::cur);
							iofa.write((char*)&stu, sizeof(Student));
							iofa.write((char*)&maga, sizeof(Magazines));
							break;
						}
					}
					iofa.close();
					break;
				}
			}
		}
		iofb.close();
	}		
}
void Biz::magazinesTeacherReturn(){// ��־��ʦ�黹
	Biz biz;
	Magazines maga;
	Magazines oldmaga;
	Teacher tea;
	int magazinesCode;
	int teacherNumber;
	cout << "                               ������Ҫ�黹����־���룺" ;
	cin >> magazinesCode;
	maga = biz.findByIdMagazines(magazinesCode);
	if(maga.getMagazinesCode() == 0){
		cout << "                               ��־������" << endl;
	}else{
		cout << "                               �������ʦ�Ľ���֤�ţ�" ;
		cin >> teacherNumber;
		fstream iofb;
		iofb.open("MagazinesTeacherLend.txt", ios::in|ios::out);
		iofb.seekg(0, ios::end);
		long poEndb = iofb.tellg();
		iofb.seekg(0, ios::beg);
		while(iofb.tellg() != poEndb) {
			iofb.read((char*)&tea, sizeof(Teacher));
			iofb.read((char*)&maga, sizeof(Magazines));
			if(maga.getMagazinesCode() == magazinesCode){
				if(tea.getTeacherNumber() == teacherNumber) { 
					iofb.close();
					fstream iofa;
					fstream iof;
					cout << "                               ����ɹ�" << endl;
					iof.open("Magazines.txt", ios::in|ios::out);
					iof.seekg(0, ios::end);
					long poEnd = iof.tellg();
					iof.seekg(0, ios::beg);
					while(iof.tellg() != poEnd) {
						iof.read((char*)&oldmaga, sizeof(Magazines));
						if (oldmaga.getMagazinesCode() == magazinesCode){//�ҵ���,����
							oldmaga.setMagazinesStorage(oldmaga.getMagazinesStorage() + 1);
							iof.seekp(-sizeof(Magazines), ios::cur);
							iof.write((char*)&oldmaga, sizeof(Magazines));
							break;
						}
					}	
					cout << "==========================================================================================" << endl;
					cout << "                               ��־��   ������" << maga.getMagazinesName() << endl;
					cout << "                               ��־��   ���룺" << maga.getMagazinesCode() << endl;
					cout << "                               ��־��   ��ţ�" << maga.getMagazinesNumber() << endl;
					cout << "                               ��־�� �������" << maga.getMagazinesStorage() << endl;
					cout << "==========================================================================================" << endl;
					iof.close();
					iofa.open("MagazinesTeacherLend.txt", ios::in|ios::out);
					iofa.seekg(0, ios::end);
					long poEnda = iofa.tellg();
					iofa.seekg(0, ios::beg);
					while(iofa.tellg() != poEnda) {
						iofa.read((char*)&tea, sizeof(Teacher));
						iofa.read((char*)&maga, sizeof(Magazines));
						if (maga.getMagazinesCode() == magazinesCode && tea.getTeacherNumber() == teacherNumber){ //�ҵ���,����
							tea.setTeacherNumber(0);
							iofa.seekp(-sizeof(Magazines), ios::cur);
							iofa.seekp(-sizeof(Teacher), ios::cur);
							iofa.write((char*)&tea, sizeof(Teacher));
							iofa.write((char*)&maga, sizeof(Magazines));
							break;
						}
					}
					iofa.close();
					break;
				}
			}
		}
		iofb.close();
	}		
}

void Biz::findByIdMagazinesStudentLend(int studentNumber){ //���ݽ���֤�Ų���ѧ��������Ϣ
	Student stu;
	Magazines maga;
	int tag = 0;//�û�������
	fstream iof;
	int a = 1;
	iof.open("MagazinesStudentLend.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&stu, sizeof(Student));
		iof.read((char*)&maga, sizeof(Magazines));
		if (studentNumber == 0){
			cout << "                               �û�������" << endl;
		}
		else{
			if (stu.getStudentNumber() == studentNumber){//�ҵ���,����
				cout << "                               ѧ��" << stu.getStudentName() << "���ĵĵ�" << a++ << "����־" << endl;
				cout << "==============================================================================================" << endl;
				cout << "                               ѧ����     ������" << stu.getStudentName() << endl;
				cout << "                               ѧ���� ����֤�ţ�" << stu.getStudentNumber() << endl;
				cout << "-----------------------------------------------------" << endl;
				cout << "                               ��־��     ������" << maga.getMagazinesName() << endl;
				cout << "                               ��־��     ���룺" << maga.getMagazinesCode() << endl;
				cout << "                               ��־��     ��ţ�" << maga.getMagazinesNumber() << endl;
				cout << "==============================================================================================" << endl;
			}
		}
	}
	iof.close();
}
void Biz::magazinesTeacherLend(){// ��־��ʦ����
	Biz biz;
	Magazines maga;
	Magazines oldmaga;
	Magazines oldmagab;
	Teacher tea;
	Teacher oldtea;
	int magazinesCode;
	int teacherNumber;
	int number;
	int b = 1;
	cout << "                               ������Ҫ���ĵ���־���룺" ;
	cin >> magazinesCode;
	maga = biz.findByIdMagazines(magazinesCode);
	if(maga.getMagazinesCode() == 0){
		cout << "                               ��־������" << endl;
	} 
	else if(maga.getMagazinesStorage() == 0){
		cout << "                               ����־�ѱ�����" << endl;
	}
	else {
		cout << "-----------------------------------------------------------------------------------------" << endl;
		cout << "                               ��־��   ������" << maga.getMagazinesName() << endl;
		cout << "                               ��־��   ���룺" << maga.getMagazinesCode() << endl;
		cout << "                               ��־��   ��ţ�" << maga.getMagazinesNumber() << endl;
		cout << "                               ��־�� �������" << maga.getMagazinesStorage() << endl;
		cout << "-----------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "                              �������ʦ�Ľ���֤�ţ�" ;
		cin >> teacherNumber;
		tea = biz.findByIdTeacher(teacherNumber);
		if(tea.getTeacherNumber() == 0){
			cout << "                              �û�������" << endl;
		} 
		else {
			cout << "-----------------------------------------------------------------------------------------" << endl;
			cout << "                              ��ʦ��     ������" << tea.getTeacherName() << endl;
			cout << "                              ��ʦ�� ����֤�ţ�" << tea.getTeacherNumber() << endl;
			cout << "-----------------------------------------------------------------------------------------" << endl; 
			fstream iofc;
			iofc.open("MagazinesTeacherLend.txt", ios::in|ios::out);
			iofc.seekg(0,ios::end);
			long poEnda = iofc.tellg();
			iofc.seekg(0, ios::beg);
			while(iofc.tellg() != poEnda) {
				iofc.read((char*)&oldtea, sizeof(Student));
				iofc.read((char*)&oldmagab, sizeof(Magazines));
				if (oldtea.getTeacherNumber() == teacherNumber){//�ҵ���,����
					number++;
				}
			}
			iofc.close();
			if(number >= 10){
				cout << "                               �Ѿ���10����־���ﵽ���ޣ������ٽ�" << endl;
			}else{
				fstream iofa;
				fstream iof;
				iofa.open("MagazinesTeacherLend.txt", ios::in|ios::out);
				iofa.seekp(0,ios::end);
				iofa.write((char*)&tea, sizeof(Teacher));
				iofa.write((char*)&maga, sizeof(Magazines));
				cout << "                              ����ɹ�" << endl;
				iof.open("Magazines.txt", ios::in|ios::out);
				iof.seekg(0, ios::end);
				long poEnd = iof.tellg();
				iof.seekg(0, ios::beg);
				while(iof.tellg() != poEnd) {
					iof.read((char*)&oldmaga, sizeof(Magazines));
					if (maga.getMagazinesCode() == magazinesCode){//�ҵ���,����
						oldmaga.setMagazinesStorage(oldmaga.getMagazinesStorage() - 1);
						iof.seekp(-sizeof(Magazines), ios::cur);
						iof.write((char*)&oldmaga, sizeof(Magazines));
						break;
					}
				}
				iof.close();
				cout << "================================================================================================" << endl;
				cout << "                              ��ʦ��     ������" << tea.getTeacherName() << endl;
				cout << "                              ��ʦ�� ����֤�ţ�" << tea.getTeacherNumber() << endl;
				cout << "----------------------------------------------------------------------------------" << endl;
				cout << "                              ��־��   ������" << maga.getMagazinesName() << endl;
				cout << "                              ��־��   ���룺" << maga.getMagazinesCode() << endl;
				cout << "                              ��־��   ��ţ�" << maga.getMagazinesNumber() << endl;
				cout << "================================================================================================" << endl;
				iofa.close();
			}
		}
	}
}
void Biz::findByIdMagazinesTeacherLend(int teacherNumber){ //���ݽ���֤�Ų��ҽ�ʦ������Ϣ
	Teacher tea;
	Magazines maga;
	int tag = 0;//�û�������
	int a = 1;
	fstream iof;
	iof.open("MagazinesTeacherLend.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&tea, sizeof(Teacher));
		iof.read((char*)&maga, sizeof(Magazines));
		if (teacherNumber == 0){
			cout << "                              �û�������" << endl;
		}
		else{
			if (tea.getTeacherNumber() == teacherNumber){//�ҵ���,����
				cout << "                               ��ʦ" << tea.getTeacherName() << "���ĵĵ�" << a++ << "����־" << endl;
				cout << "=====================================================================================================" << endl;
				cout << "                              ��ʦ������     ��" << tea.getTeacherName() << endl;
				cout << "                              ��ʦ������֤�� ��" << tea.getTeacherNumber() << endl;
				cout << "-----------------------------------------------------------------------------------" << endl;
				cout << "                              ��־������   ��" << maga.getMagazinesName() << endl;
				cout << "                              ��־������   ��" << maga.getMagazinesCode() << endl;
				cout << "                              ��־�����   ��" << maga.getMagazinesNumber() << endl;
				cout << "=====================================================================================================" << endl;
			}
		}
	}
	iof.close();
}


int Biz::addStudent(Student &stu){
	fstream iof;
	iof.open("Student.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&stu, sizeof(Student));
	iof.close();
	return 1;
}
int Biz::updateStudent(Student &stu){
	int tag = 0;
	Student old;
	fstream iof;
	iof.open("Student.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(Student));
		if(old.getStudentNumber() == stu.getStudentNumber()){
			iof.seekp(-sizeof(Student), ios::cur);
			iof.write((char*)&stu, sizeof(Student));
			tag = 1;
			break;
		}
	}
	return tag;
}
int Biz::deleteByIdStudent(int studentNumber){
	int tag = 0;
	Student stu;
	fstream iof;
	iof.open("Student.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&stu, sizeof(Student));
		if (stu.getStudentNumber() == studentNumber){//�ҵ���,����
			stu.setStudentNumber(0);
			iof.seekp(-sizeof(Student), ios::cur);
			iof.write((char*)&stu, sizeof(Student));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
Student Biz::findByIdStudent(int studentNumber){
	Student stu;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("Student.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&stu, sizeof(Student));
		if (stu.getStudentNumber() == studentNumber){//�ҵ���,����
			tag = 1;//����
			break;
		}
	}
	//������û�ҵ�
	if (tag == 0){
		stu.setStudentNumber(0);
	}
	iof.close();
	return stu;
}
void Biz::findAllStudent(){
	Student stu;
	fstream iof;
	int a = 1;
	iof.open("student.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "========================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&stu, sizeof(Student));
		if(stu.getStudentNumber() != 0){
			cout << "                              ��" << a++ << "��ѧ��" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			cout << "                              ѧ����     ������" << stu.getStudentName() << endl;
			cout << "                              ѧ���� ����֤�ţ�" << stu.getStudentNumber() << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "========================================================================================================" << endl;
	iof.close();
}



int Biz::addTeacher(Teacher &tea){
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&tea, sizeof(Teacher));
	iof.close();
	return 1;
}
int Biz::updateTeacher(Teacher &tea){
	int tag = 0;
	Teacher old;
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(Teacher));
		if(old.getTeacherNumber() == tea.getTeacherNumber()){
			iof.seekp(-sizeof(Teacher), ios::cur);
			iof.write((char*)&tea, sizeof(Teacher));
			tag = 1;
			break;
		}
	}
	return tag;
}
int Biz::deleteByIdTeacher(int teacherNumber){
	int tag = 0;
	Teacher tea;
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&tea, sizeof(Teacher));
		if (tea.getTeacherNumber() == teacherNumber){//�ҵ���,����
			tea.setTeacherNumber(0);
			iof.seekp(-sizeof(Teacher), ios::cur);
			iof.write((char*)&tea, sizeof(Teacher));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
Teacher Biz::findByIdTeacher(int teacherNumber){
	Teacher tea;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&tea, sizeof(Teacher));
		if (tea.getTeacherNumber() == teacherNumber){//�ҵ���,����
			tag = 1;//����
			break;
		}
	}
	//������û�ҵ�
	if (tag == 0){
		tea.setTeacherNumber(0);
	}
	iof.close();
	return tea;
}
void Biz::findAllTeacher(){
	Teacher tea;
	fstream iof;
	int a = 1;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "========================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&tea, sizeof(Teacher));
		if(tea.getTeacherNumber() != 0){
			cout << "                              ��" << a++ << "����ʦ" << endl;
			cout << "-----------------------------------------------------------------------------------" << endl;
			cout << "                              ��ʦ��     ������" << tea.getTeacherName() << endl;
			cout << "                              ��ʦ�� ����֤�ţ�" << tea.getTeacherNumber() << endl;
			cout << "------------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "========================================================================================================" << endl;
	iof.close();
}

int Biz::addUser(User &user){
	fstream iof;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&user, sizeof(User));
	iof.close();
	return 1;
}
int Biz::updateUser(User &user){
	int tag = 0;
	User old;
	fstream iof;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(User));
		if(old.getId() == user.getId()){
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	return tag;
} 
int Biz::deleteByIdUser(int id){
	int tag = 0;
	User user;
	fstream iof;
	iof.open("user.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//�ҵ���,����
			user.setId(0);
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
} 
User Biz::findByIdUser(int id){
	User user;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//�ҵ���,����
			tag = 1;//����
			break;
		}
	}
	//������û�ҵ�
	if (tag == 0){
		user.setId(0);
	}
	iof.close();
	return user;
} 
void Biz::findAllUser(){
	User user;
	fstream iof;
	int a = 1;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "====================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&user, sizeof(User));
		if(user.getId() != 0) {
			cout << "                              ��" << a++ << "������Ա" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			cout << "                              �û���   id��" << user.getId() << endl;
			cout << "                              �û��� ������" << user.getUserName() << endl;
			cout << "                              �û��� ���룺" << user.getPwd() << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "====================================================================================================" << endl;
	iof.close();
}

int Biz::addUserStudent(User &user){
	fstream iof;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&user, sizeof(User));
	iof.close();
	return 1;
} //ѧ���û� ¼��ͱ���
int Biz::updateUserStudent(User &user){
	int tag = 0;
	User old;
	fstream iof;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(User));
		if(old.getId() == user.getId()){
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	return tag;
} //ѧ���û� �޸�
int Biz::deleteByIdUserStudent(int id){
	int tag = 0;
	User user;
	fstream iof;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//�ҵ���,����
			user.setId(0);
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
} //ѧ���û� ɾ��
User Biz::findByIdUserStudent(int id){
	User user;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//�ҵ���,����
			tag = 1;//����
			break;
		}
	}
	//������û�ҵ�
	if (tag == 0){
		user.setId(0);
	}
	iof.close();
	return user;
}//ѧ���û� ����  ���ݱ�Ų���
void Biz::findAllUserStudent(){
	User user;
	fstream iof;
	int b = 1;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "===============================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&user, sizeof(User));
		if(user.getId() != 0) {
			cout << "                              ��" << b++ << "��ѧ��" << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << "                              ѧ����  id��" << user.getId() << endl;
			cout << "                              ѧ����������" << user.getUserName() << endl;
			cout << "                              ѧ�������룺" << user.getPwd() << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "===============================================================================================" << endl;
	iof.close();
}

int Biz::addUserTeacher(User &user){
	fstream iof;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&user, sizeof(User));
	iof.close();
	return 1;
}//��ʦ�û� ¼��ͱ���
int Biz::updateUserTeacher(User &user){
	int tag = 0;
	User old;
	fstream iof;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(User));
		if(old.getId() == user.getId()){
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	return tag;
}//��ʦ�û� �޸�
int Biz::deleteByIdUserTeacher(int id){
	int tag = 0;
	User user;
	fstream iof;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//�ҵ���,����
			user.setId(0);
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
} //��ʦ�û� ɾ��
User Biz::findByIdUserTeacher(int id){
	User user;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//�ҵ���,����
			tag = 1;//����
			break;
		}
	}
	//������û�ҵ�
	if (tag == 0){
		user.setId(0);
	}
	iof.close();
	return user;
} //��ʦ�û� ����  ���ݱ�Ų���
void Biz::findAllUserTeacher(){
	User user;
	fstream iof;
	int b = 1;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "===============================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&user, sizeof(User));
		if(user.getId() != 0) {
			cout << "                              ��" << b++ << "����ʦ" << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << "                              ��ʦ��  id��" << user.getId() << endl;
			cout << "                              ��ʦ��������" << user.getUserName() << endl;
			cout << "                              ��ʦ�����룺" << user.getPwd() << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "===============================================================================================" << endl;
	iof.close();
}