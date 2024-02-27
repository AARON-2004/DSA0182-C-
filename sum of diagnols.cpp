#include <iostream>
using namespace std; 
int main()
{
	int n,i,j;
	cout<<"Enter the size of the matrix:";
	cin>>n;
	int m[n][n];
	int ldiag=0, rdiag=0;
	cout<<"\nEnter the elements in to the matrix:";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>m[i][j];
			if(i==j)
			{
				ldiag=ldiag+m[i][j];
			}
			if(i+j==n-1)
			{
				rdiag=rdiag+m[i][j];
			}
		}
	}
	cout<<"\nThe sum of the left diagnol is:"<<ldiag;
	cout<<"\nThe sum of the right diagnol is:"<<rdiag;
}
