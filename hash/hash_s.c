#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Node structure for storing key-value pairs
typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

// Hash table array
Node* hashTable[SIZE];

// Hash function
int hash(int key) {
    return key % SIZE;
}

// Insert key-value pair into hash table
void insert(int key, int value) {
    int index = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

// Search for a key in the hash table and return its value
int search(int key) {
    int index = hash(key);
    Node* current = hashTable[index];
    while (current) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }
    return -1; // Key not found
}

int main() {
    insert(1, 10);
    insert(2, 20);
    insert(11, 30); // This will collide with key 1

    printf("Value for key 1: %d\n", search(1));
    printf("Value for key 2: %d\n", search(2));
    printf("Value for key 11: %d\n", search(11));

    return 0;
}

