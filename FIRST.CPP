
//1.Declare a 1 – Dimensional array in C++ and find the smallest //and largest value in the array.

#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int array[10],no,i,small,large;
	cout<<"\n:: Enter number of elements ::\n";
	cin>>no;
	for(i=0;i<=no;i++)
	{
		cout<<"\n ::Enter elements ::\n";
		cin>>array[i];
	}
	cout<<"\n------------------------------\n";
	cout<<"\n The elements are::\n";
	for(i=0;i<=no;i++)
	{
		cout<<"\n"<<array[i]<<"\n";
	}

	small=array[0];
	large=array[0];
	for(i=1;i<=no;i++)
	{
		if(array[i]<small)
			small=array[i];
		if(array[i]>large)
			large=array[i];
	}
	cout<<"\n -------------------------------------\n";
	cout<<"\n Smallest element is  \n"<<small;
	cout<<"\n---------------------------------------\n";
	cout<<"\n Largest elements is \n"<<large;
	cout<<"\n----------------------------------------\n";

	getch();
	return 0;
}