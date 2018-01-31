//2.Write a program in c++ using all flow control statements (if, else, for , while //and switch)
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n;
	cout<<"Enter value of n \n";
	cin>>n;
	if(n%2==0)
	{
		cout<<"::Even number::";
	}
	else
	{
		cout<<"::odd number::";
	}
	getch();
	return 0;
}
