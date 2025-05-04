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
    void push_F(int val)
    {

        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_b(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_f(){
        if (head == NULL){
            cout<< "LL is empty"<<endl;
            return;
        }else{
            Node *temp = head;
            head = head->next;
            temp-> next = NULL;
            delete temp;
        }
    }
    void pri()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    List l;

    l.push_F(2);
    l.push_F(7);
    l.push_F(9);
    l.push_b(3);
    l.pri();
    l.pop_f();
    l.pri();
    return 0;
}
