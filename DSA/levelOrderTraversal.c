/*
-sample input:
    3
   / \
  9   20
      /\
    15  7

-sample output: [[3], [9, 20], [15, 17]]

left --> right

*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Define a structure for a queue node
struct QueueNode {
    struct TreeNode* data;
    struct QueueNode* next;
};

// Define the structure for a queue
struct Queue {
    struct QueueNode* front;
    struct QueueNode* rear;
};

// Function to create a new node
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to enqueue a tree node in the queue
void enqueue(struct Queue* queue, struct TreeNode* node) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    newNode->data = node;
    newNode->next = NULL;

    if (queue->front == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Function to dequeue a tree node from the queue
struct TreeNode* dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        return NULL;
    }

    struct QueueNode* temp = queue->front;
    struct TreeNode* node = temp->data;

    queue->front = temp->next;
    free(temp);

    return node;
}

