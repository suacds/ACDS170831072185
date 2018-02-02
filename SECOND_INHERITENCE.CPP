//SECOND INHERITENCE PROGRAM
//INHERITENCE PROGRAM
/*Write a c++ program using multiple inheritence*/
#include<iostream.h>
#include<conio.h>
class M
{
	protected:
	int m;
	public:
	void get_m(int);
};
class N
{
	protected:
	int n;
	public:
	void get_n(int);
};
class P:public M,public N
{
	public:
	void  display() ;
};
void M::get_m(int x)
{
	m=x;
}
void N::get_n(int y)
{
	n=y;
}
void P::display()
{
	cout<<"\n The value of M is::"<<"m="<<m<<"\n";
	cout<<"\n The value of N is::"<<"n="<<n<<"\n";
	cout<<"\n----------------------------------------------\n";
	cout<<"Muliplication of    ::"<<"(m*n) is="<<m*n<<"\n";
	cout<<"\n-----------------------------------------------";
}
int main()
{
	clrscr();
	P p1;
	p1.get_m(10);
	p1.get_n(20);
	p1.display();
	getch();
	return 0;
}