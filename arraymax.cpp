#include<iostream.h>
#include<conio.h>
void main()
{
int a[100000],b,c;
cin>>b;
for(int i=0;i<b;i++)
{
cin>>a[i];
}
c=a[0];
for(int j=1;j<b;j++)
{
if(a[j]>c)
{
c=a[j];
}
}
cout<<c;
}
