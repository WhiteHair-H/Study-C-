//#include <stdio.h>
//#include "cursor.h"
//#include <new>
//
//int main()
//{
//	int* pi[1000] = { NULL, };
//	int i;
//
//	try
//	{
//		for (i = 0;; i++)
//		{
//			pi[i] = new int[1000000];
//			if (pi[i])
//			{
//				printf("%d��° �Ҵ� ����\n", i);
//			}
//			else
//			{
//				printf("%d��° �Ҵ� ����\n", i);
//			}
//			delay(1000);
//		}
//	}
//	catch (std::bad_alloc &b)
//	{
//		puts("���� �߻�");
//		b.what();
//	}
//	for (i = 0;; i++)
//	{
//		delete[]pi[i];
//	}
//
//	return 0;
//}