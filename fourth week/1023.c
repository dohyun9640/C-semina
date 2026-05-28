#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insertNode(Node** head_ref, int index, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) return;
    newNode->data = data;
    Node** current = head_ref;

    while (index > 0 && *current != NULL) {
        current = &((*current)->next);
        index--;
    }

    newNode->next = *current;
    *current = newNode;
}

int main() {
    Node* head = NULL;
    int M;
    int index, data;

    if (scanf("%d", &M) != 1) return 0;

    for (int i = 0; i < M; i++) {
        scanf("%d %d", &index, &data);
        insertNode(&head, index, data);
    }

    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}