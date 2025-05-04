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
    Node *tail;
    Node *head;
    List()
    {
        tail = head = NULL;
    }
    void push_f(int val)
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
    void pop_f()
    {
        if (head == NULL)
        {
            cout << "error" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void pop_b()
    {
        if (head == NULL)
        {
            cout << "error" << endl;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }
};

int main()
{
    List l;

    l.push_f(10);
    l.push_f(20);
    l.push_f(30);
    cout << "After push_f(): ";
    l.print();
    cout << endl;

    l.push_b(40);
    l.push_b(50);
    cout << "After push_b(): ";
    l.print();
    cout << endl;

    l.pop_f();
    cout << "After pop_f(): ";
    l.print();
    cout << endl;

    l.pop_b();
    cout << "After pop_b(): ";
    l.print();
    cout << endl;

    return 0;
}