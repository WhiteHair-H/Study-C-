//#include <stdio.h>
//
//class StaticTest
//{
//	static int a;	//static �������
//	int b;
//public:
//	StaticTest();
//	static void setData(int); // static ����Լ��� static ��������� ����Ѵ�.
//	void getData();
//};
//
//StaticTest::StaticTest()
//{
//	this->b = 20; // this������ ���
//}
//void StaticTest::getData()
//{
//	printf("b = %d , a = %d\n", b , a);
//}
//
//int StaticTest::a = 10; // static ������� �ʱ�ȭ
//
//void StaticTest::setData(int aa)
//{
////	this->a = aa; // static a�� ��ü�� ���Ե��� �ʱ⿡ this������ ���Ұ���
//	a = aa;
//	printf("a�� �ٲٱ� = %d\n", a);
//}
//
//int main()
//{
//	// ��ü�� ���ؼ� ȣ��
//	StaticTest s1;
//	s1.getData();
//	StaticTest s2;
//	s2.getData();
//	s2.setData(30);
//	s2.getData();
//	s2.getData();
//
//	// class�� ���ؼ� ȣ�Ⱑ��
//	StaticTest::setData(50);
//	s1.getData();
//	s2.getData();
//
//
//	return 0;
//}