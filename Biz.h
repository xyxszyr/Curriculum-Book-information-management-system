#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<windows.h>
#include"Library.h"
#include"Magazines.h"
#include"Teacher.h"
#include"Student.h"
#include"User.h"

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