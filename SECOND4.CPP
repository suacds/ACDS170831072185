/*Declare a structure to represent a complex number(a number having real part and imaginary part).
write c++ functions to add,subtract,multiply and divide two complex numbers.*/

#include<iostream.h>
#include<conio.h>
struct complex
{
	float real;
	float img;
};
complex add(complex,complex);
int main()
{
	clrscr();
	complex n1,n2, result;
	int ch;
	cout<<"\nEnter 2 complex numbers \n";
	cout<<"\n Enter first number \n";
	cout<<"\n Real=";
	cin>>n1.real;
	cout<<"\n Imaginary=";
	cin>>n1.img;
	cout<<"\n Enter second number \n";
	cout<<"\n Real=";
	cin>>n2.real;
	cout<<"\n Imaginary=";
	cin>>n2.img;
	complex add(complex n1,complex n2);
	{
		complex result;
		result.real=n1.real+n2.real;
		result.img=n1.img+n2.img;
		cout<<"\n::Sum of::"<<n1.real<<"+i"<<n1.img<<" & "<<n2.real<<"+i"<<n2.img<<" is= "<<result.real<<"+i"<<"("<<result.img<<")";
	}
	complex subtract(complex n1,complex n2);
	{
		result.real=n1.real-n2.real;
		result.img=n1.img-n2.img;
		cout<<"\n::Subtraction of::"<<n1.real<<"+i"<<n1.img<<" & "<<n2.real<<"+i"<<n2.img<<" is= "<<result.real<<"+i"<<"("<<result.img<<")";
	}
	complex multiply(complex n1,complex n2);
	{
		result.real=n1.real*n2.real;
		result.img=n1.img*n2.img;
		cout<<"\n::Multiplication of::"<<n1.real<<"+i"<<n1.img<<" & "<<n2.real<<"+i"<<n2.img<<" is= "<<result.real<<"+i"<<"("<<result.img<<")";

	}
	complex divide(complex n1,complex n2);
	{
		result.real=n1.real/n2.real;
		result.img=n1.img/n2.img;
		cout<<"\n::Division of::"<<n1.real<<"+i"<<n1.img<<" & 			"<<n2.real<<"+i"<<n2.img<<" is= 				"<<result.real<<"+i"<<"("<<result.img<<")";

	}
	
	getch();
	return 0;
}
