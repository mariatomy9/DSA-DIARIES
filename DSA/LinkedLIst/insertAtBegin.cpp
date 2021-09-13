#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

//Single linked list
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
//insert at begin
Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
    
}
//print a singly linked list
void printList(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr -> next;
    }
}

int main(){

Node *head = NULL;
head = insertBegin(head, 30);
head = insertBegin(head, 20);
head = insertBegin(head, 10);
printList(head);
return 0;

}

