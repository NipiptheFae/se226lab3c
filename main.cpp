#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int x, Node *n){
        data=x;
        next=n;
    }

};

Node *head = new Node(7, nullptr);
Node *tail = new Node(3, nullptr);


int main() {
    Node *head = new Node(7, nullptr);
    Node *tail = new Node(3, nullptr);
    head->next = tail;











    return 0;
}
//FUNCTIONS (enqueue, dequeue, top, isempty, size)
void enqueue(int i) {
    Node *node = new Node(i, nullptr);
    Node *p = nullptr;
    p = head;
    for (p = head; p != nullptr; p = p->next) {
        if (p->next == nullptr) {
            p->next = node;
        }
    }
}

void dequeue() {
    Node *p = nullptr;
    p = head;
    for (p = head; p != nullptr; p = p->next) {
        if (p->next == nullptr) {
            p = nullptr;
        }
    }
}

void top(){
    Node *p = nullptr;
    p = head;
    for (p = head; p != nullptr; p = p->next) {
        if (p->next == nullptr) {
            cout << p->data << endl;
        }
    }

}
 bool isEmpty(){
    Node *p = nullptr;
    p = head;
    if (p->next != nullptr){
        return false;
    } else return true;
}

int size() {
    Node *p = nullptr;
    p = head;
    int i;
    for (p = head; p != nullptr; p = p->next) {
        i++
        if (p->next == nullptr) {
            cout << i << endl;
        }
    }
}

















