//#include <stdio.h>
//
//enum E_Error {OUTOMEMORY, OVERRANGE , HARDFULL};
//void report() throw(E_Error)
//{
//	if (true)throw OVERRANGE;
//}
//
//int main()
//{
//	try
//	{
//		report();
//		puts("�۾��� �Ϸ��߽��ϴ�.");
//	}
//	catch (E_Error e)
//	{
//		switch (e)
//		{
//		case OUTOMEMORY:
//			puts("�޸𸮰� �����մϴ�.");
//			break;
//		case OVERRANGE:
//			puts("��������� �ʰ��߽��ϴ�.");
//			break;
//		case HARDFULL:
//			puts("�ϵ��ũ�� ����á���ϴ�.");
//		}
//	}
//
//	return 0;
//}