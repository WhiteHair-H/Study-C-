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
//	void eat() {
//		puts("�ȳȳ�");
//	}
//	virtual void intro()
//	{
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//protected:
//	int stunum;
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
//	{
//		stunum = astunum;
//	}
//	void intro()
//	{
//		printf("%d�й� %s�Դϴ�.\n", stunum, name);
//	}
//};
//
//int main()
//{
//	Human h("����", 10);	// ���� ��ġ�� �Ұ�
//	Student s("���л�", 16, 123124); // ��ġ���Ұ� ���ķ� ���� �Ұ������� �����
//	Human* ph;
//
//	ph = &h;
//	ph->intro();
//	ph->eat();
//	ph = &s;
//	ph->intro();
//	ph->eat();
//
//	return 0;
//}