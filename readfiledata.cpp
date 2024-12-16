//Q: write a single file handling program in c++ to reading and writing data on a file.
 
#include<iostream>
#include<fstream>
   
using namespace std;
main()
{
      int rno,fee;
      char name[50];
   

      ifstream fin("student.txt");
   
      fin>>rno>>name>>fee;   //read data from the file student
   
      fin.close();
   
      cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
   
    return 0;    
}