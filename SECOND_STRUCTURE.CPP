//SECOND STRUCTURE PROGRAM
/* Write a c++ program to store student information in structure and display it  */
#include<iostream.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
}s[2];
int main()
{
	clrscr();
	cout<<"\n\t::ENTER INFORMATION OF STUDENTS ::";
	for(int i=0;i<2;i++)
	{
		s[i].rollno=i+1;
		cout<<"\n For Roll Number"<<s[i].rollno<<","<<"\n";
		cout<<"\n Enter name::";
		cin>>s[i].name;
		cout<<"\n Enter Marks::";
		cin>>s[i].marks;
		cout<<"\n";
	}
	cout<<"\n*********************************************\n";
	cout<<"\n\t::DISPLAYING INFORMATION OF STUDENTS::"<<"\n";
	cout<<"\n*********************************************\n";
	for( i=0;i<2;i++)
	{
		cout<<"\n Roll Number is::"<<i+1<<"\n";
		cout<<"\n Name is       ::"<<s[i].name<<"\n";
		cout<<"\n Marks is	::"<<s[i].marks<<"\n";
	}
	cout<<"\n*************************************\n";
	getch();
	return 0;
}