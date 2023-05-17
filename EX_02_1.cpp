#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
	cout<<"Input a-->";
	cin>>a;
	cout<<"Input b-->";
	cin>>b;
	c=a; //початкове значення а зберегли у с
	a=b; //в а занесли значення b
	b=c; //в b занесли значення, що зберігається у с початкове значення а
	cout<<"Result a="<<a<<endl;
	cout<<"Result b="<<b<<endl;
	return 0;

}
