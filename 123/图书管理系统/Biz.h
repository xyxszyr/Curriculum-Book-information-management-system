#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include"Library.h"
#include"Magazines.h"
#include"Teacher.h"
#include"Student.h"

class Biz{
public:
	int addLibrary(Library &lib); //ͼ�� ¼��ͱ���
	int updateLibrary(Library &lib); //ͼ�� �޸�
	int deleteByIdLibrary(int id); //ͼ�� ɾ��
	void findByIdLibrary(int id); //ͼ�� ����  ���ݱ�Ų���
	void findAllLibrary(); // ͼ�� ��������

	int addMagazines(Magazines &maga); //��־ ¼��ͱ���
	int updateMagazines(Magazines &maga); //��־ �޸�
	int deleteByIdMagazines(int id); //��־ ɾ��
	void findByIdMagazines(int id); // ��־ ����  ���ݱ�Ų���
	void findAllMagazines(); //��־ ��������

	int addStudent(Student &stu); //ѧ�� ¼��ͱ���
	int updateStudent(Student &stu); // ѧ�� �޸�
	int deleteByIdStudent(int id); //ѧ�� ɾ��
	void findByIdStudent(int id); //ѧ�� ����  ���ݱ�Ų���
	void findAllStudent(); //ѧ�� ��������

	int addTeacher(Teacher &tea); //��ʦ ¼��ͱ���
	int updateTeacher(Teacher &tea); //��ʦ �޸�
	int deleteByIdTeacher(int id); //��ʦ ɾ��
	void findByIdTeacher(int id); //��ʦ ����  ���ݱ�Ų���
	void findAllTeacher(); //��ʦ ��������

};