#include <iostream.h>
#include <string.h>
class User{
private://˽�е�����
	int id;
	char userName[20];
	char pwd[20];
public://���еĹ��췽��
	User();
	User(int id, char *userName, char *pwd);
	//���еķ�����
	void setId(int id);
	int getId();
	void setUserName(char *userName);
	char* getUserName();
	void setPwd(char *pwd);
	char* getPwd();
};

