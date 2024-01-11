#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list


// Function to insert a node at the end of the linked list


// Function to delete a node with a given value


// Function to print the linked list


// Function to free the memory allocated for the linked list

int main() {
    struct Node* head = NULL;

    // Insert elements at the beginning
   
    // Print the linked list
    

    // Insert elements at the end
    
    // Print the linked list
    

    // Delete a node
    

    // Print the linked list
    

    // Free memory
    

    return 0;
}
