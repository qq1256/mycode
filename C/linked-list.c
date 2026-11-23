#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node {
//     int value;
//     struct _node *next;
// } Node;

int main() {
    List list;
    int num;
    list.head = NULL;
    do {
        scanf("%d", &num);
        if (num != -1) {
            add(&list, num);
        }
    } while (num != -1);
    print(&list);
    scanf("%d", &num);
    Node *p,*q;
    for (q = NULL, p = list.head; p; q = p, p = p -> next) {
        if (p -> value == num) {
            if (q) {
                q -> next = p -> next;
            }
            else {
                list.head = p -> next;
            } 
            free(p);
            break;
            
        }
    }
    for (p = list.head; p; p = q) {
        q = p -> next;
        free(p);
    }
    return 0;
}   

void add(List *pList, int num) {
    Node *p = (Node*)malloc(sizeof(Node));    
    p -> value = num;
    p -> next = NULL;
    Node *last = pList -> head;
    if (last) {
        while (last -> next) {
            last = last -> next;
        }
        last -> next = p;
    } else {
        pList -> head = p;
    } 
}

void print(List *pList) {
    Node *p;
    for (p = pList -> head; p; p = p -> next) {
        printf("%d\n", p -> value);
    }
    printf("\n");
}