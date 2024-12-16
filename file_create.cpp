#include<bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
	// Create a file stream object
	fstream file; 
	
	// Opening file in write mode 
	file.open("welcome.txt",ios::out);
	
	// If file do not open
	if(!file)
	{
		cout<<"Failed to open file.\n";
		return 1;
	}
	
	else
	{
		cout<<"File opened";
	}
	
	// Closing the file when the task is done
	file.close();
	
	return 0;
}