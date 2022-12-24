#include <iostream>
using namespace std;
#include "nodee.cpp"

Node* createll(){
    int n;
    cin>>n;
    Node* head=NULL;
    Node* tail=NULL;
    Node* prev=NULL;

    while (n--)
    {
        int x;
        cin>>x;
        if(head==NULL){
            Node* cur=new Node(x);
            head=cur;
            tail=cur;


        }

        else{
            Node* cur=new Node(x);
            tail->next=cur;
            cur->prev=tail;
            tail=cur;
        }
    }
    return head;
}
void print(Node* head){
    Node*cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}
int main(){

Node* head=createll();
print(head);
cout<<endl;
return 0;
}