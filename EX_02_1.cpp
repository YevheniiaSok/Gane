#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
	cout<<"Input a-->";
	cin>>a;
	cout<<"Input b-->";
	cin>>b;
	c=a; //��������� �������� � �������� � �
	a=b; //� � ������� �������� b
	b=c; //� b ������� ��������, �� ���������� � � ��������� �������� �
	cout<<"Result a="<<a<<endl;
	cout<<"Result b="<<b<<endl;
	return 0;

}
