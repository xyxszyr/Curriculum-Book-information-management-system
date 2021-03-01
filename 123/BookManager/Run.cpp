#include <iostream.h>
#include "UserBiz.h"
#include "BookInfo.h"
User inputUserInfo() {
	int id;
	char userName[20];
	char pwd[20];
	cout << "input id:";
	cin >> id;
	cout << "input userName:";
	cin >> userName;
	cout << "input pwd:";
	cin >> pwd;
	/*
	User user;
	user.setId(id);
	user.setUserName(userName);
	user.setPwd(pwd);
	*/
	User user(id, userName, pwd);
	return user;
}
void main() {
	int type = 0;
	User user;
	UserBiz userBiz;
	int ok;
	int id;
	do 
	{
		cout << "------------�û�����-----------------" << endl;
		cout << "------------1 ����-----------------" << endl;
		cout << "------------2 �޸�-----------------" << endl;
		cout << "------------3 ɾ��-----------------" << endl;
		cout << "------------4 ����-----------------" << endl;
		cout << "------------5 ��ʽ-----------------" << endl;
		cout << "------------0 �˳�-----------------" << endl;
		cout << "��ѡ��:" ;
		cin >> type;
		switch (type){
		case 1:
			cout << "�û����� -> ����:" << endl;
			user = inputUserInfo();
			ok = userBiz.add(user);
			if(ok) {
				cout << "�����û���Ϣ�ɹ�!" << endl;
			} else {
				cout << "�����û���Ϣʧ��!" << endl;
			}
			break;
		case 2:
			cout << "�û����� -> �޸�:" << endl;
			user = inputUserInfo();
			ok = userBiz.update(user);
			if(ok) {
				cout << "�޸��û���Ϣ�ɹ�!" << endl;
			} else {
				cout << "�޸��û���Ϣʧ��!" << endl;
			}
			break;
		case 3:
			cout << "�û����� -> ɾ��:" << endl;
			cout << "������Ҫɾ���ı��:";
			cin >> id;
			ok = userBiz.deleteById(id);
			if(ok) {
				cout << "ɾ���û���Ϣ�ɹ�!" << endl;
			} else {
				cout << "ɾ���û���Ϣʧ��!" << endl;
			}
			break;
		case 4:
			cout << "�û����� -> ��ѯ:" << endl;
			cout << "������Ҫ��ѯ���û����:";
			cin >> id;
			user = userBiz.findById(id);
			if(user.getId() == 0){
				cout << "�û�������" << endl;
			} else {
				cout << user.getId() << ", " << user.getUserName() << ", " << user.getPwd() << endl;
			}
			break;
		case 5:
			cout << "�û����� -> ��ʽ:" << endl;
			userBiz.findAll();
			break;
		}
	} while (type != 0);	
}











void testUser() {
/*
	User user;
	user.setId(1);
	user.setUserName("zhangsan");
	user.setPwd("meiyou");
	*/
	User user(2, "lisi", "meiyou");
	cout << "id = " << user.getId() << endl;
	cout << "userName = " << user.getUserName() << endl;
	cout << "pwd = " << user.getPwd() << endl;
}
void testBaseBook() {
	BaseBook baseBook(1001, "��ƽ�������硷", 100);
	cout << "code = " << baseBook.getCode() << endl;
	cout << "bookName = " << baseBook.getBookName() << endl;
	cout << "count = " << baseBook.getCount() << endl;
}
void testBookInfo() {
	BookInfo bookInfo(1001, "��ƽ�������硷", 100, "·ң", 1);
	//bookInfo.setCode()
	cout << "code = " << bookInfo.getCode() << endl;
	cout << "bookName = " << bookInfo.getBookName() << endl;
	cout << "count = " << bookInfo.getCount() << endl;
	cout << "author = " << bookInfo.getAuthor() << endl;
	cout << "innerTypeCode = " << bookInfo.getInnerTypeCode() << endl;

}
