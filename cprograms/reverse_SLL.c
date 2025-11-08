#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertatbegin();
void insertatend();
void insertatanyposition();
void display();
void deleteatbegin();
void deleteatend();
void deleteatanyposition();
void reverselist(); 

int main() {
    int choice;
    while (1) {
        printf("\n1. Insert at begin\n2. Insert at end\n3. Insert at any position\n4. Display\n5. Delete at begin\n6. Delete at end\n7. Delete at any position\n8. Reverse list\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insertatbegin();
                break;
            case 2:
                insertatend();
                break;
            case 3:
                insertatanyposition();
                break;
            case 4:
                display();
                break;
            case 5:
                deleteatbegin();
                break;
            case 6:
                deleteatend();
                break;
            case 7:
                deleteatanyposition();
                break;
            case 8:
                reverselist();
                break;
            case 9:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void insertatbegin() {
    int item;
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &item);
    newnode->data = item;
    newnode->next = head;
    head = newnode;
    printf("Inserted %d at the beginning.\n", newnode->data);
}

void insertatend() {
    int item;
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &item);
    newnode->data = item;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("Inserted %d at the end.\n", newnode->data);
}

void insertatanyposition() {
    int item, pos, i;
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &item);
    printf("Enter the position: ");
    scanf("%d", &pos);
    newnode->data = item;
    newnode->next = NULL;
    if (pos == 1) {
        newnode->next = head;
        head = newnode;
    } else {
        struct node *temp = head;
        for (i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp != NULL) {
            newnode->next = temp->next;
            temp->next = newnode;
        } else {
            printf("Position out of range.\n");
            free(newnode);
            return;
        }
    }
    printf("Inserted %d at position %d.\n", newnode->data, pos);
}

void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteatbegin() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    printf("Deleted %d from the beginning.\n", temp->data);
    free(temp);
}

void deleteatend() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = head, *prev = NULL;
    if (head->next == NULL) {
        head = NULL;
    } else {
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
    }
    printf("Deleted %d from the end.\n", temp->data);
    free(temp);
}

void deleteatanyposition() {
    int pos, i;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    if (pos == 1) {
        struct node *temp = head;
        head = head->next;
        printf("Deleted %d from position 1.\n", temp->data);
        free(temp);
    } else {
        struct node *temp = head, *prev = NULL;
        for (i = 1; i < pos && temp != NULL; i++) {
            prev = temp;
            temp = temp->next;
        }
        if (temp != NULL) {
            prev->next = temp->next;
            printf("Deleted %d from position %d.\n", temp->data, pos);
            free(temp);
        } else {
            printf("Position out of range.\n");
        }
    }
}

void reverselist() {
    struct node *prev = NULL, *current = head, *next = NULL;
    while (current != NULL) {
        next = current->next; 
        current->next = prev; 
        prev = current;      
        current = next;      
    }
    head = prev;
    printf("Linked list reversed.\n");
}