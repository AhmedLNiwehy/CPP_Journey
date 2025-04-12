#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;

    // Declare LinkedList as a friend so it can access private members
    friend class LinkedList;

public:
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insertAtFront(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    list.insertAtFront(30);
    list.insertAtFront(20);
    list.insertAtFront(10);

    list.printList();  // Output: 10 -> 20 -> 30 -> NULL

    return 0;
}