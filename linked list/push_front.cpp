#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void pri(){
        Node* temp = head;
        while (temp != NULL){
            cout<<temp->data<< "-> ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};

int main()
{
    List l;
    l.push_front(1);
    l.push_front(9);
    l.push_front(3);

    l.pri();
    cout<<"hello";

    return 0;
}