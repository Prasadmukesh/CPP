#include <iostream>  
using namespace std; 
class Llist
{
 struct Node  
{  
   int data;  
   struct Node *next;  
};  

 public: Llist()
 {
 	head = NULL;  
 }
  struct Node* head;

void push ( struct Node** head, int nodeData )  
{  
   struct Node* newNode1 = new Node;  
   
   newNode1 -> data = nodeData;  
   newNode1 -> next = (*head);  
   
   (*head) = newNode1;  
}  
void insertAfter ( struct Node* prevNode, int nodeData )  
{  
if ( prevNode == NULL )  
{  
   cout << "the given previous node is required,cannot be NULL";   
   return;   
      
}   
   struct Node* newNode1 =new Node;   
   newNode1 -> data = nodeData;  
   newNode1 -> next = prevNode -> next;  
    prevNode -> next = newNode1;  
}  
void append ( struct Node** head, int nodeData )  
{  
struct Node* newNode1 = new Node;  
   
struct Node *last = *head;  
newNode1 -> data = nodeData;  
newNode1 -> next = NULL;  
if ( *head == NULL )  
{  
*head = newNode1;  
return;  
}  
while ( last -> next != NULL )  
last = last -> next;  
last -> next = newNode1;  
return;  
}  
void displayList ( struct Node *node )  
{  
   while ( node != NULL )  
   {  
      cout << node -> data << "-->";  
      node = node -> next;  
   }  
   
if ( node== NULL)  
cout<<"null";   
} 
};
int main ()   
{
Llist list; 

list.append(&list.head, 15 );   
list.push ( &list.head, 25 );   
list.push ( &list.head, 35 );   
list.append ( &list.head, 45 );  
list.insertAfter ( list.head -> next, 55 );  
   
cout << "Final linked list: " << endl;  
list.displayList (list.head);  
   
return 0;  
}  