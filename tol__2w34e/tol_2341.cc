#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a,int b)
{   
	int c=a+b;
    return c;
}
int summ(int a,int b)
{
    int c=a-b;
    return c;
}
 void main()
{
int c,a,b;
cin>>a>>b;
c=summ(a,b);
cout<<c;
system("pause");
}
 