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
//	virtual void intro()
//	{
//		printf("�̸� = %s, ���� = %d\n", name, age);
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
//	virtual void study()
//	{
//		printf("���̴� �� , �̻��� ��, �̻���\n");
//	}
//};
//
//void IntroSomeBody(Human* ph) { ph->intro(); }
//
//int main()
//{
//	Human h("������", 27);
//	student s("���л�", 15, 123456);
//
//	IntroSomeBody(&h);
//	IntroSomeBody(&s);
//
//
//
//	return 0;
//}