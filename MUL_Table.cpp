#include<iostream>
using namespace std;
#define R 11
#define C 10
int main()
{
	int i,j;
	for(i=1;i<=R;i++)
	{
		for(j=1;j<=R;j++)
		{
			if (i==1 || i==11 || j==1 || j==11)
			{
					cout<<"*"<<" ";
			}
			else if(i==6 && j==6)
			{
				cout<<"E"<<" ";	
			}
			else{
					cout<<" "<<" ";
			}
		
		}
	
		cout<<"\n";
	}
}