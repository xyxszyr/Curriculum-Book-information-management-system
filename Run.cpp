#include"Method.h"
void control();//����Ա���ƽ���
void enterInterface(); //��¼����
void LoginInterface(); //ע�����
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

