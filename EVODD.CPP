#include<iostream.h>
#include<conio.h>
int main ()
{
int limit;
cout<<"Enter a limit to find even or add numbers";
cin>>limit;
cout<<"odd numbers";
for(int i=1; i<=limit; i++)
{
if(i%2!=0)
{
cout<<i;
}
}
cout<<" even numbers";
for (int e=1; e<=limit; e++)
{
if(e%2==0)
cout<<e;
}
getch();
return 0;
}