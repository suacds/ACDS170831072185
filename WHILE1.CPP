//2.Write a program in c++ using all flow control statements (if, else, for , while //and switch)
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n,reverse=0;
	cout<<"\n Enter a number to reverse \n";
	cin>>n;
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	cout<<"\n reverse of entered number is= \n"<<reverse;
	getch();
	return 0;


}
