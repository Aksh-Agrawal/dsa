#include <iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* next;

Node(int val){
    data = val;
    next = NULL;
}
};

class list_ {
    Node* Head;
    Node* Tail;
public:
    list_(){
        Head = Tail = NULL;
    }
};

int main() {
   
    return 0;
}
