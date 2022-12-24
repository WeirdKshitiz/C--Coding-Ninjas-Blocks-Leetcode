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

int getNthNode(Node *head,int index){
    Node* current=head;
    int count=0;
    while(current!=NULL){
        if(count==index){
            return(current->data);
        }
        count++;
        current=current->next;
    }
    /* if we get to this line,
    the caller was asking
    for a non-existent element
    so we assert fail */
    assert(0);
}



void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){

//taking input
Node *head=takeInput();
print(head);
int x;
cin>>x;

cout<<"ELEMENT AT INDEX "<<x<<" is "<<getNthNode(head,x);
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