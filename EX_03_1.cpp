//  Програма цикличного зсуву значень змінних a, b, c, d
//  з використанням c использование порозрядних логічних операцій 

#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Input a-->";
	cin>>a;
	cout<<"Input b-->";
	cin>>b;
	cout<<"Input c-->";
	cin>>c;
	cout<<"Input d-->";
	cin>>d;
	a^=b^c^d;  
    b^=a^c^d;  
    c^=a^b^d;  
	d^=a^b^c;  
	cout<<"Result a="<<a<<endl;
	cout<<"Result b="<<b<<endl;
	cout<<"Result c="<<c<<endl;
	cout<<"Result d="<<d<<endl;
	return 0;
}