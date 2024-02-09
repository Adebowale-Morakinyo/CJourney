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

// Function to create a new tree node
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

// Function to perform level order traversal of the tree
void levelOrderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    // Create a queue for level order traversal
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;

    // Enqueue the root
    enqueue(queue, root);

    while (queue->front != NULL) {
        // Dequeue the front node
        struct TreeNode* current = dequeue(queue);
        printf("%d ", current->data);

        // Enqueue the left child if it exists
        if (current->left != NULL) {
            enqueue(queue, current->left);
        }

        // Enqueue the right child if it exists
        if (current->right != NULL) {
            enqueue(queue, current->right);
        }
    }

    // Free the queue
    free(queue);
}

int main() {
    // Create the sample binary tree
    struct TreeNode* root = createNode(3);
    root->left = createNode(9);
    root->right = createNode(20);
    root->right->left = createNode(15);
    root->right->right = createNode(7);

    // Perform level order traversal
    printf("Level Order Traversal: ");
    levelOrderTraversal(root);

    return 0;
}
