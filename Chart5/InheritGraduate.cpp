//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//private:
//	char name[20];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("�̸� = %s , ���� = %d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
//	{
//		stunum = astunum;
//	}
//	void study()
//	{
//		printf("���̴� �� , �̻��� ��, �̻���\n");
//	}
//};
//
//class graduate : public Student
//{
//protected:
//	char thesis[32];
//
//public :
//	graduate(const char* aname, int aage, int astunum, const char* athsis) : Student(aname, aage, astunum)
//	{
//		strcpy(thesis, athsis);
//	}
//	void research()
//	{
//		printf("%s�� �����ϰ� ���� ����.\n", thesis);
//	}
//};
//
//
//int main()
//{
//	graduate moon("������", 27, 960111, "������������");
//	moon.research();
//	return 0;
//}