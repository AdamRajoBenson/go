#include<iostream.h>
#include<conio.h>
void main()
{
int n,a,d,b,s=0;
cin>>n>>a>>d;
b=a;
for(int i=a;i<=n;i++)
{
s+=b;
b+=d;
}
cout<<s;
  getch();
}
