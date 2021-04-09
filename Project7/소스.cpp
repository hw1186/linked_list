int main(void) {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;

    addFront(head, 2);
    addFront(head, 1);
    addFront(head, 7);
    addFront(head, 9);
    addFront(head, 8);
    showAll(head);
    freeAll(head);
    system("pause");
    return 0;
}