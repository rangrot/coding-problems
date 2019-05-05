#include "singlyLinkedList.h"
/**
 * @brief 
 * Does various insert operations to the linked list based on the pos variable.
 * @param head: head pointer to the linked list.
 * @param val: value the new node should have.
 * @param pos: Where to insert the newNode, beginning, end or a custom location.
 * @param customPos: pointer to the node after which we want to insert the newNode, should be NULL if pos != CUSTOM
 */
void insertNode(struct Node **head, int val, uint8_t pos, struct Node **customPos)
{
  struct Node *newNode;
  struct Node *tmp = *head;
  /*Allocate memory for the new node*/
  newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = val;

  /*If the list is empty automatically create the list and add to the front of the list*/
  if (*head == NULL)
  {
    *head = newNode;
    newNode->next = NULL;
    return;
  }
  else
  {
    if (pos == BEGINING)
    {
      /*Adjust the head according to the new node.*/
      newNode->next = *head;
      *head = newNode;
      return;
    }
    else if (pos == CUSTOM)
    {
      /*If we have to insert after a custom position, make sure the pointer is not null.*/
      if ((*customPos != NULL))
      {
        newNode->next = (*customPos)->next;
        (*customPos)->next = newNode;
        return;
      }
      else
      {
        printf("Custom position is empty!\r\n");
        return;
      }
    }
    else if (pos == END)
    {
      /*Traverse to the end of the list.
      Make appropriate connections.*/
      traverseList(&tmp, END, 0);
      newNode->next = NULL;
      tmp->next = newNode;
      return;
    }
  }
}

/**
 * @brief 
 * Delete the node based on the value passed.
 * Or delete the first, last node, or the entire list
 * @param head: head node of the list
 * @param val: value of the corresponding node to be deleted,only if CUSTOM pos is selected.
 * @param pos: First node, last node, or the entire list
 */
void deleteNode(struct Node **head, int val, uint8_t pos)
{
  if (*head == NULL)
  {
    printf("List is empty!");
    return;
  }

  struct Node *tmp = *head;
  struct Node *delNode = NULL;
  if (pos == BEGINING)
  {
    *head = tmp->next;
    free(tmp);
    return;
  }
  else if (pos == END)
  {
    while (tmp->next->next != NULL)
    {
      tmp = tmp->next;
    }
    delNode = tmp->next;
    tmp->next = NULL;
    free(delNode);
    return;
  }
  else if (pos == CUSTOM)
  {
    while(tmp->next->data != val)
    {
      tmp = tmp->next;
    }
    delNode = tmp->next;
    tmp->next = delNode->next;
    free(delNode);
    return;
  }
  else if (pos == FULL)
  {
    delNode = tmp;
    while(delNode != NULL)
    {
      tmp = delNode->next;
      free(delNode);
      delNode = tmp;
    }
    *head = NULL;
    return;
  }
}

/**
 * @brief 
 * Iterate through the list one by one till the end
 * @param head: pointer to the head of the list.
 */
void printList(struct Node **head)
{
  /*Assign to a temp pointer so that we don't loose track of the original list*/
  struct Node *tmp = *head;
  if (tmp == NULL)
  {
    printf("Empty List!");
  }
  else
  {
    while (tmp != NULL)
    {
      printf(" %d ", tmp->data);
      tmp = tmp->next;
    }
  }
  printf("\r\n");
}

/**
 * @brief 
 * After this function executes, the pointer points to the node
 * according to the pos variable, either end of the list
 * or at the node with a custom position, assuming there are no duplicates.
 * @param head : pointer to the head
 * @param pos: till which node traversal is needed, end or custom
 * @param customVal: custom value till where the traversal is needed, assuming no duplicate
 * if there are duplicates, the function will traverse till the first occurrence.
 */
void traverseList(struct Node **head, uint8_t pos, int customVal)
{
  if (pos == END)
  {
    while ((*head)->next != NULL)
    {
      *head = (*head)->next;
    }
  }
  else if (pos == CUSTOM)
  {
    while ((*head)->data != customVal)
    {
      (*head) = (*head)->next;
    }
  }
}

/**
 * @brief 
 * 
 * @return int 
 */
void testSinglyLinkedList()
{
  struct Node *newList = NULL;
  struct Node *customNode = NULL;
  /*Create the list*/
  insertNode(&newList, 2, BEGINING, NULL);
  insertNode(&newList, 3, END, NULL);
  insertNode(&newList, 4, END, NULL);
  insertNode(&newList, 1, BEGINING, NULL);
  insertNode(&newList, 5, END, NULL);
  printList(&newList);
  /*Insert at custom position*/
  customNode = newList;
  traverseList(&customNode, CUSTOM, 3);
  insertNode(&newList, 18, CUSTOM, &customNode);
  printList(&newList);
  /*Delete Elements*/
  deleteNode(&newList,0,BEGINING);
  printList(&newList);
  deleteNode(&newList,0,END);
  printList(&newList);
  deleteNode(&newList,18,CUSTOM);
  printList(&newList);
  /*Delete the entire list*/
  deleteNode(&newList,0,FULL);
  printList(&newList);
  
}