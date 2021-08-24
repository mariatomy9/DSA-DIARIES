#include <bits/stdc++.h> 

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int main(){
Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data;
	return 0;
} 




return 0;
}

