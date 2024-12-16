#include <regex>  
#include <iostream>  
using namespace std;  
   
bool validatePassword(string password)  
{  
    // regex pattern for password validation  
    regex pattern("(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[@#$%^&+=])(?=\\S+$).{8,}");  
   
    // check if the password matches the pattern  
    if (regex_match(password, pattern))  
    {  
        return true;  
    }  
    else  
    {  
        return false;  
    }  
}  
   
int main()  
{  
    string password;  
    cout << "Enter password: ";  
    getline(cin, password);  
   
    if (validatePassword(password))  
    {  
        cout << "Password is valid." << endl;  
    }  
    else  
    {  
        cout << "Password is invalid." << endl;  
    }  
   
    return 0;  
}  