/*Write a program in c++ to swap values of two variables using pointers.*/
#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int *temp,i;
	temp=&i;
	*temp=*a;
	*a=*b;
	*b=*temp;
}
int main()
{
	clrscr();
	int i,j;
	cout<<"\n Enter value of i \n";
	cin>>i;
	cout<<"\n Enter value of j \n";
	cin>>j;
	cout<<"Before swapping::"<<"i="<<i<<"\t"<<"j="<<j<<"\n";
	swap(&i,&j);
	cout<<"After swapping::"<<"i="<<i<<"\t"<<"j="<<j;
	getch();
	return 0;
}