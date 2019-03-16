#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST
#include "stdio.h"
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

/**
 * @brief positions for element insertion / deletion in the linked list
 * 
 */
#define BEGINING 0
#define CUSTOM   1
#define END      2
#define FULL     3

struct Node
{
    int data;
    struct Node* next;
};

void insertNode(struct Node** head, int val, uint8_t pos, struct Node** customPos);
void deleteNode(struct Node** head, int val, uint8_t pos);
void printList(struct Node** head);
void traverseList(struct Node** head, uint8_t pos, int customVal);

#endif