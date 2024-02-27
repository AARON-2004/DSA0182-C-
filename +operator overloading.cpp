#include<iostream>
using namespace std;
class comp
{
	private:
		float real;
		float imag;
	public:
		comp(): real(0),imag(0){ }
		void inp()
		{
			cout<<"\nEnter the real and imaginary part of the number:";
			cin>>real;
			cin>>imag;
		}
		comp operator+(comp cb)
		{
			comp temp;
			temp.real=real+cb.real;
			temp.imag=imag+cb.imag;
			return temp;
		}
		void disp()
		{
			if(imag<0){
				cout<<"\nThe complex number is:"<<real<<imag<<"i";
			}
			else{
				cout<<"\nThe complex number is:"<<real<<"+"<<imag<<"i";
			}
		}
};
int main()
{
	comp ca,cb,result;
	cout<<"\nEnter the first complex number:";
	ca.inp();
	cout<<"\nEnter the second complex number:";
	cb.inp();
	result=ca+cb;
	result.disp();
}
