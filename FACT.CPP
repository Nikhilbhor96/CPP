#include<iostream.h>
#include<conio.h>
int main ()
{
int num;
int store=1;
int ans;
cout<<"Enter a number to find factorial";
cin>>num;
for (int i=0; i<=num; i++)
{
store=store*i;
ans=store;
}
cout<<"factorial number is "<<ans;
getch()
return 0;
}