//#include <stdio.h>
//
//class Shape
//{
//public:
//	virtual void draw() { puts("���� ������Ʈ�Դϴ�."); }
//};
//
//class Line : public Shape
//{
//public:
//	void draw() { puts("���� �߽��ϴ�."); }
//};
//
//class Circle : public Shape
//{
//public:
//	void draw() { puts("���׶�� �׷ȴ� ġ��"); }
//};
//
//class Rect : public Shape
//{
//	void draw() { puts("��� �簢���Դϴ�."); }
//};
//
//int main()
//{
//	// 5���� ������ �迭
//	Shape* ar[] = { new Shape(), new Rect(), new Circle , new Rect , new Line() };
//
//	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
//	{
//		ar[i]->draw();
//	}
//	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
//	{
//		delete ar[i];
//	}
//
//	return 0;
//}