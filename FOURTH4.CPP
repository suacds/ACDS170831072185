

/*Write the definition for a class called budget that has floating point data
members income and tax. The class has the following member functions:
void show(float, float) to set the specified value in object
void display() to display income and tax
void calculate () to calculate tax on the basis of income (Rs 10000.0) and
tax rate (18.0)
*/
#include<iostream.h>
#include<conio.h>
class budget
{
	float income;
	double rate;
	public:
	void show()
	{
		income=10000;
		rate=18;
	}
	void display();
	void calculate();
};
void budget::display()
{
	cout<<"\n The income is::"<<income;
	cout<<"\n The rate is::"<<rate;
}
void budget::calculate()
{
	float tax=income*(rate/100);
	cout<<"\n YOUR INCOME TAX IS::"<<tax;
}

int main()
{
	clrscr();
	budget b;
	b.show();
	b.display();
	b.calculate();
	getch();
	return 0;
}