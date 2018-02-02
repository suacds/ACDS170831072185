//SECOND POINTER PROGRAM
/*Write a program to perform arithmetic operations using pointers*/
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();

	int numbers[]={56,72,22,18,90};
	int *ptr,i;
	cout<<"\n The array values are::\n";
	for(i=0;i<5;i++)
	{
		cout<<numbers[i]<<"\n";
	}
	ptr=numbers;
	cout<<"\n-----------------------------\n";
	cout<<"\n value of ptr  :: "<<*ptr;
	cout<<"\n";
	ptr++;
	cout<<"\n value of ptr++:: "<<*ptr;
	cout<<"\n";
	ptr--;
	cout<<"\n value of ptr--:: "<<*ptr;
	cout<<"\n";
	ptr=ptr+2;
	cout<<"\n value of ptr+2:: "<<*ptr;
	cout<<"\n";
	ptr=ptr-1;
	cout<<"\n value of ptr-1:: "<<*ptr;
	cout<<"\n";
	ptr+=3;
	cout<<"\n value of ptr+=:: "<<*ptr;
	ptr-=2;
	cout<<"\n";
	cout<<"\n value of ptr-=2::"<<*ptr;
	cout<<"\n";
	cout<<"\n-----------------------------\n";
	getch();
	return 0;


}