//#include <stdio.h>
//#include <typeinfo>
//#include <iostream>
//
//class parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); }
//};
//
//class Child : public parent
//{
//private:
//	int num;
//public:
//	Child(int anum) : num(anum){}	
//	virtual void PrintMe() { printf("I am Child\n"); }
//	void PrintNum() { printf("Hello Child = %d\n", num); }
//};
//
//void func(parent *p)
//{
//	p->PrintMe();
//	if (typeid(*p) == typeid(Child))
//	{
//		((Child*)p)->PrintNum();
//	}
//	else
//	{
//		puts("�� ��ü�� num�� ������ ���� �ʽ��ϴ�.");
//	}
//}
//
//int main()
//{
//	parent P;
//	Child C(5);
//
//	func(&C);
//	func(&P);
//
//
//	return 0;
//}