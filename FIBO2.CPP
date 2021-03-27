#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   long double a, b=1, c=0;
   cout<<"Enter the greatest number: ";
   cin>>a;
   while (c<=a)
      {
	 cout<<c<<"   ";
	 c=b+c;
	 b=c-b;
      }
   getch();
}