//FIRST INHERITENCE PROGRAM
//SingleInheritence
/*Write a program shows base class B and derived class D*/
#include<iostream.h>
#include<conio.h>
class B
{
	int a;
	public:
	int b;
	void get_ab();
	int get_a();
	void show_a();
};
class D:public B
{
	int c;
	public:
	void mul();
	void display();
};
void B::get_ab()
{
	cout<<"\n Enter value of a and b \n";
	cin>>a>>b;
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"\n***********\n";
	cout<<"a="<<a<<"\n";
}
void D::mul()
{
	c=b*get_a();
}
void D::display()
{
	cout<<"a="<<get_a()<<"\n";
	cout<<"b="<<b<<"\n";
	cout<<"\n****************************************\n";
	cout<<"Multiplication of a and b is::"<<c<<"\n";
	cout<<"\n****************************************\n";
}
int main()
{
	clrscr();
	D d;
	d.get_ab();
	d.mul();
	d.show_a();
	d.display();

	getch();
	return 0;
}