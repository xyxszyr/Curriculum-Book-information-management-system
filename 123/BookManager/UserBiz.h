#include "User.h"
class UserBiz{
public:
	//����  1�ɹ� 0ʧ��
	int add(User &user);
	//�޸�  1�ɹ� 0ʧ��
	int update(User &user);
	//ɾ��  1�ɹ� 0ʧ��
	int deleteById(int id);
	//���ݱ�Ų���ĳ����Ϣ
	User findById(int id);
	//�ҳ�������Ϣ
	void findAll();
};
