#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

//if we only want to print reverse
// void printReverse(Node* head){
//     if(head==NULL){
//         return;
//     }
//     printReverse(head->next);
//     cout<<head->data<<" ";
// }




Node* reverseLL(Node *head){
    //AGAR LINKED LIST MEIN SIRF 0 YA 1 ELEMENT HI HAI
    if(head==NULL||head->next==NULL){
        return head;
    }
    //recursion call krke uski value smallans name ke variable mein store kra lenge
   //ye likhte hi hum bol skte hain ki n-1 ki list reverse hogyi hai

    Node *smallAns=reverseLL(head->next);

//ab humein bas apne first element ko last mein jaakke connect krna hai

//so we need to travel the list,last mein jaane ke liye

    Node *temp=smallAns;

    //aur humein tb tk travel krna hai jb tk hmara temp ka next null nhi ho jata or(jb hum last node tk
   // nhi phunch jaate)

while(temp->next!=NULL){
    temp=temp->next;
}

//jb hum is se bahar ayenge to temp ke paas hmare reversed list ke last node ka address pda hoga
//bs humein use apne head se connect krna hai


temp->next=head;
head->next=NULL;
return smallAns;
}



Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();
 Node* reversehOJA= reverseLL(head);
   print(reversehOJA);
    return 0;
}