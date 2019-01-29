#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int s,a[1000],i,j,temp;
cin>>s;
for(i=0; i<s; i++)
{
cin>>a[i];
}
for(i=0; i<s; i++)
{
for(j=i+1; j<s; j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0; i<s; i++)
{
cout<<a[i]<<" ";
}
getch();
}
