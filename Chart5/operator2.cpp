//#include <stdio.h>
//
//
//
//class Mytest
//{
//	friend const Mytest operator/(const Mytest& me, const Mytest& other);
//private:
//	int x, y;
//public:
//	Mytest() {}
//	Mytest(int sx, int sy) { x = sx, y = sy; printf("!!�μ� 2�� ������ ȣ��!!\n"); }
//	Mytest(Mytest& res) : x(res.x), y(res.y)
//	{
//		printf("!!��������� ȣ��!!\n");
//	}
//	void printData()
//	{
//		printf("��� --> %d , %d\n\n", this->x, this->y);
//	}
//	const Mytest& operator +(const Mytest& other) const // &�����ڰ� ���� ��� ���������(�ӽð�ü)�� ������������
//	{
//		Mytest m;
//		printf("---------���ϱ⿬����---------\n");
//		m.x = this->x + other.x;
//		printf("obj1(%d) + obj2(%d) = obj3(%d)\n", x, other.x, m.x);
//		m.y = this->y + other.y;
//		printf("obj1(%d) + obj2(%d) = obj3(%d)\n", y, other.y, m.y);
//		return m;
//	}
//	const Mytest& operator -(const Mytest& other) const
//	{
//		Mytest m;
//		printf("---------���⿬����---------\n");
//		m.x = this->x - other.x;
//		printf("obj1(%d) - obj2(%d) = obj3(%d)\n", x, other.x, m.x);
//		m.y = this->y - other.y;
//		printf("obj1(%d) - obj2(%d) = obj3(%d)\n", y, other.y, m.y);
//		return m;
//	}
//	/*const Mytest& operator =(const Mytest& other)
//	{
//		printf("---------���Կ�����---------\n");
//		x = other.x;
//		y = other.y;
//		return *this;
//	}*/
//	const Mytest& multi(const Mytest& other)const
//	{
//		Mytest m;
//		printf("---------���ϱ⿬����---------\n");
//		m.x = this->x * other.x;
//		printf("obj1(%d) * obj2(%d) = obj3(%d)\n", x, other.x, m.x);
//		m.y = this->y * other.y;
//		printf("obj1(%d) * obj2(%d) = obj3(%d)\n", y, other.y, m.y);
//		return m;
//	}
//};
//const Mytest operator/(const Mytest& me, const Mytest& other)
//{
//	Mytest m;
//	printf("---------�����⿬����---------\n");
//	m.x = me.x / other.x;
//	printf("obj1(%d) / obj2(%d) = obj3(%d)\n", me.x, other.x, m.x);
//	m.y = me.y / other.y;
//	printf("obj1(%d) / obj2(%d) = obj3(%d)\n", me.y, other.y, m.y);
//	return m;
//}
//
//
//
//int main()
//{
//	Mytest obj1(10, 20); // 10 , 20
//	Mytest obj2(30, 40); // 30 , 40
//	Mytest obj3;			 // ��
//	Mytest obj4;
//	Mytest obj5;
//	Mytest obj6;
//	obj3 = obj1 + obj2; // (10 + 30) , (20 + 40)
//	//obj3 = obj1.operator=(obj2);
//	obj3.printData();
//	obj4 = obj2.operator-(obj1);
//	obj4.printData();
//	obj5 = obj2.multi(obj1);
//	obj5.printData();
//	obj6 = obj2 / obj1;
//	obj6.printData();
//
//
//	return 0;
//}