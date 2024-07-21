#include <iostream>

// Define the Node class

class Node {
public:
    int data;   // To change 'int' to any other data type
    Node* next;

    // Constructor to create a node with given data
    Node(int data) : data(data), next(nullptr) {}
};

class Linkedlist {
private:
    Node* head;     // Pointer to the first node of the list

public:
    // Constructor
    Linkedlist() : head(nullptr) {}

    // Desctructor to clean up memory
    ~Linkedlist() {
        clear();
    }

    // Function to clear the list and free memory
    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void print() {
        Node* current = head;
        while(current != nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "NULL" << std::endl;
    }

    void addLast(int data) {
        Node *newTail = new Node(data);
        if (this->head == nullptr)
        {
            this->head = newTail;
        }
        else
        {
            Node *current = this->head;
            while(current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newTail;
        }

    }
};

int main(int agrc, char** argv) {

    Linkedlist *linkedList = new Linkedlist();
    linkedList->addLast(3);
    linkedList->addLast(4);

    linkedList->print();

    return 0;
}