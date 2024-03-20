#include <iostream>

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int sumPositive() {
        int sum = 0;
        Node* current = head;
        while (current != nullptr) {
            if (current->data > 0) {
                sum += current->data;
            }
            current = current->next;
        }
        return sum;
    }

    void printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList list;

    list.insert(5);
    list.insert(-2);
    list.insert(10);
    list.insert(-3);
    list.insert(8);

    std::cout << "Elements: ";
    list.printList();

    int sum = list.sumPositive();
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
