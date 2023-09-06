#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertatb(Node *&head, Node *&tail, int data)
{
    // step 1: create a new node
    Node *newnode = new Node(data);
    // step 2: point to head node
    newnode->next = head;
    // step 3: move to head to newnode
    if (head == NULL)
    {
        tail = newnode;
    }
    head = newnode;
}

void insertatt(Node *&head, Node *&tail, int data)
{
    // step 1: create a new node
    Node *newnode = new Node(data);
    // step 2: point the tail node to newnode
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
    }
    // step 3: move to head to newnode
    if (head == NULL)
    {
        head = newnode;
    }
    tail = newnode;
}

int findlength(Node * &head)
{
    int len =0;
    Node *temp =head;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertatpos(int data, int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    if(position == 0)
    {
        insertatb(head,tail,data);
        return;
    }

    // insert at tail 
    int length= findlength(head);
    if(position >= length)
    {
        insertatt(head, tail,data);
        return;
    }
    // step 1: find the position of prev and curr
    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    // step 2: create a newnode
    Node *newnode = new Node(data);
    // step 3: point newnode to curr add
    newnode->next = curr;
    // step 4: point prev node to newnode;
    prev->next = newnode;
}

int main()
{
    Node *head = NULL; // creation of link list
    Node *tail = NULL;
    insertatb(head, tail, 20);
    insertatb(head, tail, 70);
    insertatb(head, tail, 80);

    insertatt(head, tail, 100);
    insertatt(head, tail, 130);
    print(head);
    cout<<endl;
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

    insertatpos(102, 3, head, tail);
    cout<<endl;
    print(head);
    cout<<endl;
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    return 0;
}