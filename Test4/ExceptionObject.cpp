//#include <stdio.h>
//
//class Exception
//{
//private:
//	int ErrorCode;
//public:
//	Exception(int ae): ErrorCode(ae){}
//	int GetErrorCode() { return ErrorCode; }
//	void ReportError() {
//		switch (ErrorCode)
//		{
//		case 1:
//			puts("�޸𸮺���!!");
//			break;
//		case 2:
//			puts("���� ���� �ʰ�!!");
//			break;
//		case 3:
//			puts("�ϵ� ��ũ�� ������!!");
//			break;
//		}
//	}
//};
//
//
//void report() 
//{
//	if (true)throw Exception(3);
//}
//
//int main()
//{
//	try
//	{
//		report();
//		puts("�۾��Ϸ�!!");
//	}
//	catch (Exception &e)
//	{
//		printf("���� �ڵ� = %d -> ", e.GetErrorCode());
//		e.ReportError();
//	}
//
//	return 0;
//}