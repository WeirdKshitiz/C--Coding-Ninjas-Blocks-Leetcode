#include <iostream>
using namespace std;
#include "node.cpp"


class Pair{
    public:
    Node *head;
    Node *tail;
};

Pair reverseLL_2(Node *head){

 if(head==NULL||head->next==NULL){
        Pair ans; //creating an object of this class
        //creating properties of the object
        //jb hmare paas ek hi node hai to vhi node head mein chli jaayegi
//aur vhi node tail meinn chli jaayego
        ans.head=head;
        ans.tail=head;
        return ans;
    }

Pair smallAns=reverseLL_2(head->next);

smallAns.tail->next=head;
head->next=NULL; //NULL ISLIYE DAALA TAKI LOOP NA BAN JAAYE

//returning ans
Pair ans;
ans.head=smallAns.head; // linking last node of og ll with head
ans.tail=head; //linking first node of og ll with tail
return ans;
}


Node* reverseLL_better(Node *head){
    return reverseLL_2(head).head;
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



int main(){
Node *head=takeinput();
head=reverseLL_better(head);
print(head);
cout<<endl;
return 0;
}