//����׷� ȣ�⽺�� Ȯ��
#include <iostream>

void f1();
void f2();
void f3();
void f1()
{
	f2();
}
void f2()
{
	f3();
}
void f3()
{
	int a = 0;
}

int main()
{
	f1();
}
