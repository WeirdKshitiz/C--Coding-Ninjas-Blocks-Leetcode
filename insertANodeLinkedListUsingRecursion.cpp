#include <iostream>
using namespace std;
#include "node.cpp"


Node* takeInput(){
    //first node ka data
    int data;
    int count=1;
    cin>>data;
    Node *head=NULL;
    while(data!=-1){
        // Node n(data);
        Node *newNode=new Node(data);
        if(head==NULL){
        // head=&n;
        head=newNode;
         
        
        }

        else{
            //linked list mein travel krne ke liye temp create krdiya
            Node *temp=head;
            while(temp->next!=NULL){
                count++;
                temp=temp->next;
            }
            temp->next=newNode;
            
        }

//new node ka data
        cin>>data;
        
    }
    return head;
   
}


Node* insertNode(Node *head,int i,int data){
if(head==NULL){
    return NULL;
}
if(i==0){
    Node* temp=new Node(data);
    temp->next=head;
    return temp;
}
if(i==1){
    Node* temp=new Node(data);
    temp->next=head->next;
    head->next=temp;
    return head;
}
Node* curr=insertNode(head->next,i-1,data);
return head;
}


void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void deleteNode(Node* t){
    t->data=t->next->data;
    t->next=t->next->next;
    return;
}

Node* getNode(Node* head,int val){
    while(head->data!=val){
        head=head->next;
    }
    return head;
}
int main(){

//taking input
Node *head=takeInput();
print(head);
int i,data;

insertNode(head,2,80);
print(head);
}



