
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
Node* kappend(Node* &head,int k,int length){

    //creating new pointers
Node* newHead;
Node* newTail;

//hum lenge tail of original aur hum isko initialize krenge head se
Node* tail=head;



//ho skta hai ki mujhe k ki value l se bde di ho
//so
k=k%length;

int count=1; //ye humein btayega ki hum apni linked list mein kahan tak phunche

//BCAZ HUM CHAHTE HAIN KI TAIL END OF THE LINKED LIST PE RUKE
while(tail->next!=NULL){
if(count==length-k){
    newTail=tail;
}
if(count==length-k+1){
    newHead=tail;
}
tail=tail->next;
count++;
}
newTail->next=NULL;
tail->next=head;

return newHead;

}
Node* removeDuplicates(Node* root){
    Node*head=root;
    if(!head) return NULL;
    while(head->next!=NULL){
        if(head->data==head->next->data){
            head->next=head->next->next;
        }
        else{
            head=head->next;
        }
    }
    return root;
}



Node* insertNode(Node *head,int i,int data){
    //humne insert krne ke liye new node bna di
    Node *newNode=new Node(data);

Node *temp=head;
    int count=0;

if(i==0){
    newNode->next=head;
    //updating head
    head=newNode;

    //local head mein hi change aaya hai \
    //so we need to return the value to our int main

}

    while(temp!=NULL && count<i-1){
temp=temp->next;
count++;
    }

if(temp!=NULL){
    //so ek baar nya pointer bna lete hain jismein temp ka next 
    //hum usmein save krlenge
    Node *a=temp->next;
    temp->next=newNode;
    newNode->next=a;
}
return head;
}


void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
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


Node* removeDuplicate=removeDuplicates(head);
print(removeDuplicate);




}