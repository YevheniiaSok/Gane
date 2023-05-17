#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
	cout<<"Input a-->";
	cin>>a;
	cout<<"Input b-->";
	cin>>b;
	a+=b;	//в а доданок початкових значень а і b
    b=a-b;	//в b покласти початкове значення а
    a-=b;	//в a покласти початкове значення b
	cout<<"Result a="<<a<<endl;
	cout<<"Result b="<<b<<endl;
	return 0;

}
