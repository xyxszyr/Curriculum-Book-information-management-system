#include<iostream.h>
#include<string.h>
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