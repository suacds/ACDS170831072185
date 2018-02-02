//FIRST POINTER PROGRAM
//PONITERS WITH ARRAYS
/*Write a program to access array of numbers and sum up the even
number of array using pointers*/
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int num[10],*ptr;
	int n,sum;
	cout<<"\n Enter count \n";
	cin>>n;
	cout<<"\n Enter numbers one by one \n";
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		ptr=num;

	}
	for( i=0;i<n;i++)
	{
		if(*ptr%2==0)
			sum=sum+*ptr;
		ptr++;
	}
	cout<<"\n Sum of even numbers::"<<sum;
	getch();
	return 0;
}


