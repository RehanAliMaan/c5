#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,a,b;
	cout<<"enter the three digits"<<endl;
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"reverse digit is"<<n<<b<<a<<endl;
	
}