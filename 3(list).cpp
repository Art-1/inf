#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

class LinkedList {
    Node *head;
    Node *tail;

public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insert(int num) {
        Node *newNode = new Node;
        newNode->data = num;
        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void print() {
        if(head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node *temp = head;

        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    void insertBeforePositive() {
        if(head == NULL) return;

        Node *temp = head;

        while(temp != NULL) {
            if(temp->data > 0) {
                Node *newNode = new Node;
                newNode->data = 25;
                newNode->prev = temp->prev;
                newNode->next = temp;

                if(temp == head) {
                    head = newNode;
                    temp->prev = newNode;
                } else {
                    temp->prev->next = newNode;
                    temp->prev = newNode;
                }
            }

            temp = temp->next;
        }
    }

    void removeNegatives() {
        if(head == NULL) return;

        Node *temp = head;

        while(temp != NULL) {
            if(temp->data < 0) {
                if(temp == head) {
                    head = temp->next;
                    if(head != NULL) head->prev = NULL;
                } else if(temp == tail) {
                    tail = temp->prev;
                    tail->next = NULL;
                } else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }

                Node *deleteNode = temp;
                temp = temp->next;
                delete deleteNode;
            } else {
                temp = temp->next;
            }
        }
    }
};

int main() {
    LinkedList list;
    int n;
    cout << "Enter n: \n";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        list.insert(value);
    }

    list.print();

    list.insertBeforePositive();

    list.print();

    list.removeNegatives();

    list.print();

    return 0;
}
