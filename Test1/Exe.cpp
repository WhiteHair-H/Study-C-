//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//using namespace std;
//
//// 3�� ȸ������ �Է½� 3�� ȸ������ ���
//
//class CMember
//{
//private:
//	char name[20];
//	char phone[20];
//	char address[30];
//	static int cnt;
//
//public:
//	void getData(const char* gname, const char* gphone, const char* gaddress);
//	void setData();
//	~CMember() {}
//};
//
//int CMember::cnt = 0;
//void CMember::getData(const char* gname, const char* gphone, const char* gaddress)
//{
//	strcpy(name, gname);
//	strcpy(phone, gphone);
//	strcpy(address, gaddress);
//	cnt++;
//}
//void CMember::setData()
//{
//
//	printf("cnt = %d\nȸ���̸� : %s\n��ȭ��ȣ : %s\n�ּ� : %s\n", cnt, name, phone, address);
//	printf("-------------------\n");
//}
//
//int main()
//{
//	
//	CMember c1;
//	c1.getData("jinwoo", "010-1111-5555", "�뿬��");
//	c1.setData();
//	CMember c2;
//	c2.getData("nick", "010-2222-2222", "�ؿ��");
//	c2.setData();
//	CMember c3, * pc4;
//	pc4 = new CMember;
//	pc4->getData("wen", "010-3333-3333", "����");
//	pc4->setData();
//	delete pc4;
//	pc4->setData();
//	if (pc4 == NULL)printf("ȸ�������� ���������ʽ��ϴ�.\n");
//	c3.getData("qou", "010-5555-5555", "������");
//	c3.setData();
//	printf("c1ũ�� = %d , c2ũ�� = %d , c3ũ�� = %d\n", sizeof(c1), sizeof(c2), sizeof(c3));
//
//
//	return 0;
//}
