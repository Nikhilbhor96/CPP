#include<iostream.h>
#include<conio.h>
int main ()
{
int ans;
int limit;
int a=0;
int b=1;
cout<<"Enter step limit of Ribbonacci serios";
cin>>limit;
for (int i=1 ; i<=limit; i++;)
{
ans=a*b;
cout<<ans;
a=b;
b=ans;
}
getch();
return 0;
}