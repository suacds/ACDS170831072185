//FIRST STRUCURE PROGRAM
//structure program
/*Write a program in c++ to perform addition,subtraction,multiplication,division
using structure*/

#include<iostream.h>
#include<conio.h>
struct calculate
{
	int num1,num2;

void addition()
{
	cout<<"\n*************************************\n";
	cout<<"\n Addition is      ::"<<(num1+num2);
}
void subtraction()
{
	cout<<"\n Subtraction is   ::"<<(num1-num2);
}
void mul()
{
	cout<<"\n Multiplication is::"<<(num1*num2);
}
void div()
{
	cout<<"\n Division is      ::"<<(num1/num2);
	cout<<"\n**************************************\n";
}
};
int main()
{
	clrscr();
	calculate c;
	cout<<"\n Enter first number ::";
	cin>>c.num1;
	cout<<"\n Enter second number::";
	cin>>c.num2;
	c.addition();
	c.subtraction();
	c.mul();
	c.div();
	getch();
	return 0;
}