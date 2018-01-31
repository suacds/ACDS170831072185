//2.Write a program in c++ using all flow control statements (if, else, for , while //and switch)
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n,fact=1;
	cout<<"::Enter value of n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"::factorial is ::"<<"\n"<<fact;
	getch();
	return 0;
}
