#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
typedef struct Node 
{
    int data; // You can change 'int' to any other data type
    struct Node* next;
} Node;

Node* createNode(int data) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Error allocating memory for new node\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void cleanUpNodes(Node **head)
{
    Node *previous = *head;
    Node *current = previous->next;
    while(current != NULL)
    {
        free(previous);
        previous = current;
        current = current->next;
    }
    free(previous);
}

void printLinkedList(Node **head)
{
    Node *current = *head;
    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}


void addLast(Node **head, int data)
{
    Node *newTail = createNode(data);    
    if (*head == NULL)
    {
        *head = newTail;
        return;
    }

    Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newTail;

}

int main(int argc, char** argv)
{
    // Node *head = createNode(0);
    Node* head = (Node*)malloc(sizeof(Node));
    head = NULL;
    addLast(&head, 3);
    addLast(&head, 4);
    printLinkedList(&head);
    cleanUpNodes(&head);
    return 0;
}