#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the table to display:";
	cin>>n;
	cout<<"\nTill what number to display?\n";
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}
