//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//class CTest
//{
//private:
//	int num;
//public:
//	CTest(int anum)
//	{
//		num = anum;
//		cout << num <<" CTest ������!!\n" << endl;
//	};
//	virtual void func()
//	{
//		cout << " CTest Fucntion()\n" << endl;
//	}
//	virtual ~CTest() { cout << num << " CTest �ı�!\n" << endl; }
//};
//
//class CTestSub : public CTest
//{
//private:
//	int subN;
//public:
//	CTestSub(int num, int asubN) :CTest(num)
//	{
//		subN = asubN;
//		cout << subN << " CTestSub ������!\n" << endl;
//	};
//	~CTestSub() { cout << subN << " CTestSub �ı�!\n"; }
//	void func()
//	{
//		cout << " CTestSub Fuction()\n" << endl;
//	}
//	
//};
//
//
//int main()
//{
//	CTest b(10);
//	b.func();
//	CTestSub s(10, 20);
//	s.func();
//
//	CTest* pb = new CTestSub(30, 33); // �߻��ڷ������� �ڽİ�ü�� ����Ű�� �Ѵ�.
//	pb->func();
//
//	delete pb;
//
//	return 0;
//}