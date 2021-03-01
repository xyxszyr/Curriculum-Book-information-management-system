#include <string.h>
#include <iostream.h>
#include <fstream.h>

#include "UserBiz.h"

int UserBiz::add(User &user){
	/*
	cout << "Ҫ�������û���Ϣ��:";
	cout << user.getId() << ", " << user.getUserName() << ", " << user.getPwd() << endl;
	*/
	fstream iof;
	//���ļ�
	iof.open("user.dat", ios::in|ios::out);
	//���ļ�ָ���ƶ���ĩβ
	iof.seekp(0, ios::end);
	//д������
	iof.write((char*)&user, sizeof(User));
	//�ر�
	iof.close();
	return 1;
}
//�޸�  1�ɹ� 0ʧ��
int UserBiz::update(User &user){
	/*
	cout << "Ҫ�޸ĵ��û���Ϣ��:";
	cout << user.getId() << ", " << user.getUserName() << ", " << user.getPwd() << endl;
	*/
	int tag = 0;
	User oldUser;
	fstream iof;
	//���ļ�
	iof.open("user.dat", ios::in|ios::out);
	//���ļ�ָ���ƶ���ĩβ
	iof.seekp(0, ios::end);
	//��¼ĩβλ��
	long poEnd = iof.tellp();
	//�ƶ�����ʼ
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&oldUser, sizeof(User));
		//�����ǰ�û���Ҫ�޸ĵ��û�
		if(oldUser.getId() == user.getId()) {
			//�ƶ���ǰһ������λ��
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
//ɾ��  1�ɹ� 0ʧ��
int UserBiz::deleteById(int id){
	int tag = 0;
	User user;
	fstream iof;
	iof.open("user.dat", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//�ҵ���,����
			user.setId(0);
			//ǰ��
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
//���ݱ�Ų���ĳ����Ϣ 4
User UserBiz::findById(int id){
	User user;
	int tag = 0;//�û�������
	fstream iof;
	iof.open("user.dat", ios::in|ios::out);
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
//�ҳ�������Ϣ
void UserBiz::findAll(){
	User user;
	fstream iof;
	iof.open("user.dat", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	//�����ǰλ�ò���ĩβ
	cout << "====================================" << endl;
	cout << "���\t ����\t ����" << endl; 
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if(user.getId() != 0) {
			cout << user.getId() << "\t" << user.getUserName() << "\t" << user.getPwd() << endl;
		}
	}
	cout << "====================================" << endl;
	iof.close();
}
