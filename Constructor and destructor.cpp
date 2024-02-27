#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		int age;
	public:
		student(string n,int a)
		{
			name=n;
			age=a;
			cout<<"\nConstructor has been called for the name:"<<name;
		}
		~student()
		{
			cout<<"\nDestructor has been called for the name:"<<name;
		}
		void dis()
		{
			cout<<"Name:"<<name<<"\nAge:"<<age;
		}
};
int main()
{
	student sa("Rahul",25);
	student sb("Sonia",23);
	sa.dis();
	sb.dis();
}
