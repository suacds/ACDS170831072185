   //3.Write a menu driven C++ program to do following operation //on two dimensional array B of size a x b. You should use user //defined functions which accept 2-D array A and its size a and b //as arguments. The options are:
//To input elements into matrix of size a x b
//To display elements of matrix of size a x b 


#include<iostream.h>
#include<conio.h>
void read_mat(int a[10][10],int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<"\n Enter elements ::\n";
			cin>>a[i][j];
		}
	}
}
void display(int a[10][10],int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}

}
int main()
{
	clrscr();
	int a[10][10],r,c,ch;
	cout<<"\n Enter number of rows \n";
	cin>>r;
	cout<<"\n Enter number of columns \n";
	cin>>c;
	do
	{
		cout<<"\n 1.readmatrix";
		cout<<"\n 2.display";
		cout<<"\n 3.exit";
		cout<<"\n Enter your choice \n";
		cin>>ch;
		switch(ch)
		{
			case 1: read_mat(a,r,c);
			break;
			case 2:   display(a,r,c);
			break;

		}


	}while(ch<2);

       //	read_mat()


	getch();
	return 0;
}