#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   long double a, b=1, c=0;
   cout<<"Enter the number of digits of the Fibonacci Series you would like to see: ";
   cin>>a;
   for (int i=1; i<=a; i++)
      {
	 cout<<c<<"  ";
	 c=b+c;
	 b=c-b;
      }
   getch();
}