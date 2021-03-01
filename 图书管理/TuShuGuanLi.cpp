#include<iostream>
#include<string.h>
#include<fstream.h>
#include<windows.h>
class User{
private:
	int id; 
	char userName[30];
	char pwd[30];
public:
	User();
	User(int id, char userName[], char pwd[]);
	~User();
	void setId(int id);
	int getId();
	void setUserName(char userName[]);
	char* getUserName();
	void setIPwd(char pwd[]);
	char* getPwd();
};
//#include"User.h"

User::User(){
	
}
User::~User(){
	
}
User::User(int id, char userName[], char pwd[]):id(id){
	strcpy(this->userName, userName);
	strcpy(this->pwd, pwd);
}
void User::setId(int id){
	this->id = id;
}
int User::getId(){
	return id;
}
void User::setUserName(char userName[]){
	strcpy(this->userName, userName);
}
char* User::getUserName(){
	return userName;
}
void User::setIPwd(char pwd[]){
	strcpy(this->pwd, pwd);
}
char* User::getPwd(){
	return pwd;
}

//#include<iostream.h>
//#include<string.h>
class Teacher {
private:
	char teacherName[30]; //��ʦ����
	int teacherNumber; //��ʦ����֤��
public:
	Teacher();
	Teacher(char teacherName[], int teacherNumber);
	~Teacher();
	void setTeacherName(char teacherName[]);
	char* getTeacherName();
	void setTeacherNumber(int teacherNumber);
	int getTeacherNumber();
};
//#include"Teacher.h"
Teacher::Teacher(){
}
Teacher::Teacher(char teacherName[], int teacherNumber):teacherNumber(teacherNumber){
	strcpy(this->teacherName, teacherName);
}
Teacher::~Teacher(){
}
void Teacher::setTeacherName(char teacherName[]){
	strcpy(this->teacherName, teacherName);
}
char* Teacher::getTeacherName(){
	return teacherName;
}
void Teacher::setTeacherNumber(int teacherNumber){
	this->teacherNumber = teacherNumber;
}
int Teacher::getTeacherNumber(){
	return teacherNumber;
}
//#include<iostream.h>
//#include<string.h>
class Student {
private:
	char studentName[30]; //ѧ������
	int studentNumber; //ѧ������֤��90001
public:
	Student();
	Student(char studentName[], int studentNumber);
	~Student();
	void setStudentName(char studentName[]);
	char* getStudentName();
	void setStudentNumber(int studentNumber);
	int getStudentNumber();
};

//#include"Student.h"
Student::Student(){
}
Student::Student(char studentName[], int studentNumber):studentNumber(studentNumber){
	strcpy(this->studentName, studentName);
}
Student::~Student(){
}
void Student::setStudentName(char studentName[]){
	strcpy(this->studentName, studentName);
}
char* Student::getStudentName(){
	return studentName;
}
void Student::setStudentNumber(int studentNumber){
	this->studentNumber = studentNumber;
}
int Student::getStudentNumber(){
	return studentNumber;
}
//#include<iostream.h>
//#include<string.h>
class Magazines {
private:
	char magazinesName[30]; //����
	int magazinesCode; //����
	int magazinesNumber; //���
	int magazinesStorage; //�����
public:
	Magazines();
	Magazines(char magazinesName[], int magazinesCode, int magazinesNumber, int magazinesStorage);
	~Magazines();
	void setMagazinesName(char magazinesName[]);
	char* getMagazinesName();
	void setMagazinesCode(int magazinesCode);
	int getMagazinesCode();
	void setMagazinesNumber(int magazinesNumber);
	int getMagazinesNumber();
	void setMagazinesStorage(int magazinesStorage);
	int getMagazinesStorage();
};

//#include"Magazines.h"
Magazines::Magazines(){
}
Magazines::Magazines(char magazinesName[], int magazinesCode, int magazinesNumber, int magazinesStorage):magazinesCode(magazinesCode), magazinesNumber(magazinesNumber), magazinesStorage(magazinesStorage){
	strcpy(this->magazinesName, magazinesName);
}
Magazines::~Magazines(){
}
void Magazines::setMagazinesName(char magazinesName[]){
	strcpy(this->magazinesName, magazinesName);
}
char* Magazines::getMagazinesName(){
	return magazinesName;
}
void Magazines::setMagazinesCode(int magazinesCode){
	this->magazinesCode = magazinesCode;
}
int Magazines::getMagazinesCode(){
	return magazinesCode;
}
void Magazines::setMagazinesNumber(int magazinesNumber){
	this->magazinesNumber = magazinesNumber;
}
int Magazines::getMagazinesNumber(){
	return magazinesNumber;
}
void Magazines::setMagazinesStorage(int magazinesStorage){
	this->magazinesStorage = magazinesStorage;
}
int Magazines::getMagazinesStorage(){
	return magazinesStorage;
}

//#include<iostream.h>
//#include<string.h>
class Library {
private:
	char libraryNmae[30]; //����
	int libraryCode; //����
	int librarynumber; //�ڲ������
	char author[30]; //����
	int libraryStorage; //�����
public:
	Library();
	Library(char libraryNmae[], int libraryCode, int librarynumber, char author[], int libraryStorage);
	~Library();
	void setLibraryNmae(char libraryNmae[]);
	char* getLibraryNmae();
	void setLibraryCode(int libraryCode);
	int getLibraryCode();
	void setLibrarynumber(int librarynumber);
	int getLibrarynumber();
	void setAuthor(char author[]);
	char* getAuthor();
	void setLibraryStorage(int libraryStorage);
	int getLibraryStorage();
};

//#include"Library.h"

Library::Library(){
}
Library::Library(char libraryNmae[], int libraryCode, int librarynumber, char author[], int libraryStorage):libraryCode(libraryCode), librarynumber(librarynumber), libraryStorage(libraryStorage){
	strcpy(this->libraryNmae, libraryNmae);
	strcpy(this->author, author);
}
Library::~Library(){
}
void Library::setLibraryNmae(char libraryNmae[]){
	strcpy(this->libraryNmae, libraryNmae);
}
char* Library::getLibraryNmae(){
	return libraryNmae;
}
void Library::setLibraryCode(int libraryCode){
	this->libraryCode = libraryCode;
}
int Library::getLibraryCode(){
	return libraryCode;
}
void Library::setLibrarynumber(int librarynumber){
	this->librarynumber = librarynumber;
}
int Library::getLibrarynumber(){
	return librarynumber;
}
void Library::setAuthor(char author[]){
	strcpy(this->author, author);
}
char* Library::getAuthor(){
	return author;
}
void Library::setLibraryStorage(int libraryStorage){
	this->libraryStorage =libraryStorage;
}
int Library::getLibraryStorage(){
	return libraryStorage;
}
/*#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<windows.h>
#include"Library.h"
#include"Magazines.h"
#include"Teacher.h"
#include"Student.h"
#include"User.h"*/

class Biz{
	//47������
public:
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
	void magazinesStudentReturn();// ͼ��ѧ���黹
	void magazinesTeacherReturn();// ͼ���ʦ�黹
	
	
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
};
//#include"Biz.h"
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
//#include"Biz.h"

/*void studentInterface(); //ѧ������
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
*/
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
			cout << "                               ������Ҫ�޸ĵ��û��˺ţ�" ;
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
					cout << "                               �޸Ĺ���Ա��Ϣ�ɹ�!" << endl;
					cout << "-----------------------------------------------------------------" << endl;
					cout << "                               �û���  id��" << user.getId() << endl;
					cout << "                               �û���������" << user.getUserName() << endl;
					cout << "                               �û������룺" << user.getPwd() << endl;
					cout << "-----------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸Ĺ���Ա��Ϣʧ��!" << endl;
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
					cout << "                               �޸�ѧ����Ϣ�ɹ�!" << endl;
					cout << "-------------------------------------------------------------------" << endl;
					cout << "                               �û���  id��" << user.getId() << endl;
					cout << "                               �û���������" << user.getUserName() << endl;
					cout << "                               �û������룺" << user.getPwd() << endl;
					cout << "-------------------------------------------------------------------" << endl;
				} else {
					cout << "                               �޸�ѧ����Ϣʧ��!" << endl;
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



/*#include"Method.h"
void control();//����Ա���ƽ���
void enterInterface(); //��¼����
void LoginInterface(); //ע�����*/
void main(){
	//control();//����Ա����
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "--------------------------ͼ��ݽ��Ĺ���ϵͳ--------------------------" << endl;
		cout << "                               1 ��¼" << endl;
		cout << "                               2 ע��" << endl;
		cout << "                               0 �˳�" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               ����Ҫ���еĲ�����" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;	
		case 1:
			system("pause");
			system("cls");
			enterInterface();
			system("pause");
			break;
		case 2:
			system("cls");
			LoginInterface();
			system("pause");
			break;
		default:
			cout << "                               �����������������" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0); 
}

