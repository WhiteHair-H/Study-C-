//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//protected:
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
//		printf("�̸� = %s, ���� = %d", name, age);
//	}
//};
//
//class student : public Human
//{
//protected:
//	int stunum;
//public:
//	student(const char* aname, int aage, int astunum) :Human(aname, aage)
//	{
//		stunum = astunum;
//	}
//	void intro()
//	{
//		printf("%d�й� %s�Դϴ�.\n", stunum, name);
//	}
//	void study()
//	{
//		printf("���̴� �� , �̻��� ��, �̻���\n");
//	}
//};
//
//int main()
//{
//	Human h("����", 10);
//	student s("���л�", 15, 123456);
//	Human* ph;
//	student* ps;
//
//	ph = &h;
//	ps = &s;
//	ph = &s;		   // upcasting
//
//	ps = (student*)&h; // downcasting
//	ps->intro();
//	ph->intro();
//
//
//	return 0;
//}