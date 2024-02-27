#include<iostream>
using namespace std;
int main()
{
	int n,i,r;
	int sum=0;
	cout<<"Enter the number:";
	cin>>n;
	int temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<"\nIt is an armstrong number.";
	}
	else
	{
		cout<<"\nIt is not an armstrong number";
	}
}
