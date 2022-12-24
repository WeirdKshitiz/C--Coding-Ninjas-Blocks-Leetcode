#include <iostream>
using namespace std;
#include "node.cpp"

// Node* takeInputBetter(){
//     //first node ka data
//     int data;
//     cin>>data;
//     Node *head=NULL;
//     Node *tail=NULL;

//     while(data!=-1){
//         // Node n(data);
//         Node *newNode=new Node(data);
//         if(head==NULL){
//         // head=&n;
//         head=newNode;
//         tail=newNode;
//         }

//         else{
//             tail->next=newNode;
//             tail=tail->next;
//             //oor
//             //tail=newNode;
//         }

// //new node ka data
//         cin>>data;
//     }
//     return head;
// }




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

// void deleteNode(Node* t){
//     t->data=t->next->data;
//     t->next=t->next->next;
//     return;
// }

Node* getNode(Node* head,int val){
    while(head->data!=val){
        head=head->next;
    }
    return head;
}














void deleteNode(Node** head_ref, int position)
{
  
    // If linked list is empty
    if (*head_ref == NULL)
        return;
  
    // Store head node
    Node* temp = *head_ref;
  
    // If head needs to be removed
    if (position == 0) {
  
        // Change head
        *head_ref = temp->next;
  
        // Free old head
        free(temp);
        return;
    }
  
    // Find previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
  
    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
        return;
  
    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    Node* next = temp->next->next;
  
    // Unlink the node from linked list
    free(temp->next); // Free memory
  
    // Unlink the deleted node from list
    temp->next = next;
}
  
// This function prints contents of linked
// list starting from the given node
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}




int main(){

//taking input
Node *head=takeInput();
print(head);
int i,data;



// cin>>i;
// cin>>data;
// head=insertNode(head,i,data);
// print(head);



// int x;
// cin>>x;
Node* t=getNode(head,20);
// deleteNode(t);
int x;
cin>>x;
deleteNode(&head,x);
print(head);
//------------------------------------------------------------------------------------




 
    //statically object creation




//     Node n1(1); //1st node ka data ye hona chahiye
//     //ye line likhte hi n1 node ke data ke andar 1 set hogya  aur uske next mein null set hogya

// //we created head name ka pointer variable bnaya jismein
// //humein n1 ka address store krvaya hai
//    Node *head=&n1;
//    //aisa krne se hmare head mein n1 ka address store hojayega
   
//     Node n2(2);

// //n1 block ke next mein null replace hoke n2 ka address
// //aa gya
//     // n1.next=&n2;

// //printing n1 and n2 ka data
// // cout<<n1.data<<" "<<n2.data<<" "<<endl;

// // //n2 ka next print krvaya
// // cout<<n2.next;


// //head ki help se n1 aur n2 print krna hai

// //head ki help se n1 ko print
// // cout<<head->data;

// Node n3(3);
// Node n4(4);
// Node n5(5);

// n1.next=&n2;
// n2.next=&n3;
// n3.next=&n4;
// n4.next=&n5;

// print(head);


//---------------------------------------------------------------------------


//Dynamically object creation
// Node *n3=new Node(10);
// Node *head=n3;

// Node *n4=new Node(20);
// n3->next=n4;

// return 0;
}