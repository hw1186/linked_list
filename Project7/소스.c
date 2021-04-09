#include <stdio.h> 
#include <stdlib.h>



typedef struct {
    int data;
    struct Node* next;
} Node;


void addFront(Node* head, int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = head->next;
    head->next = node;
}

void removeFront(Node* head) {
    Node* front = head->next;
    head->next = front->next;
    free(front);
}


void freeAll(Node* head) {
    Node* cur = head->next;
    while (cur != NULL) {
        Node* next = cur->next;
        free(cur);
        cur = next;
    }
}

void showAll(Node* head) {
    Node* cur = head->next;
    while (cur != NULL) {
        printf("%d", cur->data);
        cur = cur->next;
    }
    return 0;
}

int main(void) {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    addFront(head, 2);
    addFront(head, 1);
    addFront(head, 7);
    addFront(head, 9);
    addFront(head, 8);
    removeFront(head);
    showAll(head);
    freeAll(head);






    system("pause");
    return 0;
}