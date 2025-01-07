#include<iostream.h>
#include<conio.h>
int main ()
{
int limit:
cout<<" Enter a limit to print numbers";
cin>>limit;
int i=1;
do
{
cout<<i;
i++;
}
while (i<=limit);
getch ();
return 0;
}