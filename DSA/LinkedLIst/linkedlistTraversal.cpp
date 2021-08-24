#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
struct Node{

    int mdata;

    Node* next;
    Node(int x)
    {
        data = x;
        next=NULL;
    }
};
void printlist(Node* head)
{
 Node* curr = head;
 while(curr != NULL)
 {
    cout<<curr->data<<" ";
    curr = curr->next;
 }
}
int main(){
Node* head = new Node(10);
head->next = new Node(15);
head->next->next = new Node(30);

printlist(head);
return 0;
}

