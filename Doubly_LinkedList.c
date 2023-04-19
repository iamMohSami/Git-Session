/* 9) Write a program that uses functions to perform the following operations on a DOUBLY linked list
   Creation  Insertion   Deletion    Traversal*/

   #include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node*prev ;
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