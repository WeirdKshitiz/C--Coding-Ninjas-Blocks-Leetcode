#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

using namespace std;

Node *skipMdeleteN(Node *head, int M, int N)
{
    if (head == NULL)
    {
        return head;
    }
    if (M == 0)
    {
        return NULL;
    }
    if (N == 0)
    {
        return head;
    }
    Node *temp1 = head, *temp2 = NULL;
    int c1 = 1, c2 = 1;
    while (temp1 != NULL)
    {
        if (c1 == M)
        {
            temp2 = temp1->next;
            while (temp2 != NULL && c2 != N)
            {
                temp2 = temp2->next;
                c2++;
            }
            if (temp2 != NULL)
            {
                temp2 = temp2->next;
                temp1->next = temp2;
                temp1 = temp2;
                c1 = 1;
                c2 = 1;
            }
            else
            {
                temp1->next = NULL;
                temp1 = NULL;
            }
        }
        c1++;
        if (temp1 != NULL)
        {
            temp1 = temp1->next;
        }
    }
    return head;
}

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    
        Node *head = takeinput();
        int m, n;
        cin >> m >> n;
        head = skipMdeleteN(head, m, n);
        print(head);
    
    return 0;
}