#include<iostream.h>
#include<conio.h>
void main()
{
int m1,m2,h1,h2,m,h;
cin>>h1>>m1>>h2>>m2;
if(h1>h2)
h=h1-h2;
else
h=h2-h1;
if(m1>m2)
m=m1-m2;
else
m=m2-m1;
cout<<h<<" "<<m;
getch();
}
