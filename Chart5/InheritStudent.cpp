//#include <stdio.h>
//#include <string.h>
//
//// ������ ȣ�� ����
//// 1. �Ļ�class ������ ȣ��
//// 2. �θ�class ������ ȣ�� �� ����
//// 3. �Ļ�class ������ ����
//
//
//class Human
//{
//private:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage)
//	{
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro()
//	{
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//class Student : public Human // ���� ������ public �л��� ����̴�
//{
//private:
//	int stunum;
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
//	{
//		stunum = astunum;
//	}
//	void study()
//	{
//		printf("���̴� �� , �̻��� �� , �̻� ��\n");
//	}
//};
//
//int main()
//{
//	Human ha("������", 27);
//	ha.intro();
//	Student han("�Ѵ�", 13, 12312);
//	han.intro();
//	han.study();
//
//	return 0;
//}