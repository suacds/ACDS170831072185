//2.Write a program in c++ using all flow control statements (if, else, for , while //and switch)
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n,ch;
	cout<<"\n Enter number \n";
	cin>>n;
	do
	{
		cout<<"\n 1.inc \n";
		cout<<"\n 2.dec \n";
		cout<<"\n 3.exit \n";
		cout<<"\n Enter your choice \n";
		cin>>ch;
		switch(ch)
		{

			case 1:
			cout<<"\n increment is:: \n";
			n++;
			cout<<n;
			break;

			case 2:
			cout<<"\n decrement is:: \n";
			n--;
			cout<<n;
			break;

		}

	}while(ch<3);
	getch();
	return 0;
}
