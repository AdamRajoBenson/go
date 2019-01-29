#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],n;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
cout<<a[i]<<" "<<i<<"\n";
}
getch();
}
