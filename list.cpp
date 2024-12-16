#include <iostream>
#include <list>

using namespace std;

int main() {

    // create a list
    list<int> numbers = {12, 222, 223, 334, 225};
    
    // display the list
    cout << endl << "Final List: ";
    for(int number : numbers) {
        cout << number << ", ";
    }
  
    // display the first element
    cout << "\nFirst Element: " << numbers.front() << endl;
  
    // display the last element
    cout << "Last Element: " << numbers.back();
  // add element at the beginning
  	int num;
  	cout<<"\nEnter a new data ";
  	cin>>num;
    numbers.push_front(num);

    // add element at the end
    cout<<"\nEnter a new data ";
  	cin>>num;
    numbers.push_back(num);

    // display the modified list
    cout << endl << "Final List: ";
    for(int number : numbers) {
        cout << number << ", ";
    }
    return 0;
    
}