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
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void f_middle()
    {
        Node *temp = head;
        int Lsize = 0;
        if (temp == NULL)
        {
            cout << "ERROR!!";
        }
        else
        {
            while (temp != NULL)
            {
                Lsize += 1;
                temp = temp->next;
                cout << Lsize << endl;
            }
        }
        int mid = (Lsize / 2) ;
        
        temp = head;
        for(int i = 0 ; i < mid ; i++){
            temp = temp -> next;
        }
        cout << "Middle element: " << temp->data << endl;

    }
    void pri()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List l;
    l.push_back(9);
    l.push_back(4);
    l.push_back(1);
    l.push_back(2);
    l.f_middle();
    l.pri();
    return 0;
}