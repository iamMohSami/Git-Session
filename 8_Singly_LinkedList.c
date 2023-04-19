/* 8) Write a program that uses functions to perform the following operations on a SINGLY linked list
   Creation  Insertion   Deletion    Traversal*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;
void createList(int n);
void traverseList();
void insertbegin(int);
void insertend(int);
void deletion();

int main()
{
    int n, m, p, item, v;
    printf("Enter the total number of nodes you Want : ");
    scanf("%d", &n);
    createList(n);
    printf("\nThe Data you entered in the linkedlist is \n");
    traverseList();
    printf("Want to Insert a Node?? 1=Yes 0=No");
    scanf("%d", &m);
    if (m == 1)
    {
        printf("Where do You Want To insert a new Node?? \n");
        printf("1. At Beginning \n");
        printf("2.At End \n");
        scanf("%d", &p);
        if (p == 1)
        {
            printf("\nEnter the item which you want to insert?\n");
            scanf("%d", &item);
            insertbegin(item);
        }
        if (p == 2)
        {
            printf("\nEnter the item which you want to insert?\n");
            scanf("%d", &item);
            insertend(item);
        }
    }
    printf("\nWant to Delete a Node?? \n");
    printf("1=Yes  2=No");
    scanf("%d", &v);
    if (v == 1)
    {
        deletion();
    }
    else
    {
        exit;
    }

    return 0;
}

/* For Creating our Linked List*/
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("No Memory is Allocated");
    }
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;
    for (i = 2; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        if (newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}

/* For Displying our Linked List*/

void traverseList()
{
    int pr ;
    printf("\nEnter The Total Numbers of Nodes:");
    scanf("%d",&pr) ;
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        for(int k=0;k<pr;k++){
        printf("Data of node %d = %d\n",k, temp->data);
        temp = temp->next;
        }
    }
}

/*Inserting at Beginning*/
void insertbegin(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("\nNode successfully inserted at Beginning\n");
    traverseList();
}

/* Inserting at Last*/
void insertend(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode successfully inserted at End \n");
            traverseList();
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode successfully inserted at End \n");
            traverseList();
        }
    }
}

/* Deletion*/
void deletion()
{
    struct node *ptr, *ptr1;
    int place, i;
    printf("\n Enter The Place of Node you want to delete\n");
    scanf("%d", &place);
    ptr = head;
    for (i = 0; i < place; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nThere are less than %d elements in the list..\n", place);
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    printf("\nAfter Dwleting %d node \n ", place);
    traverseList();
}