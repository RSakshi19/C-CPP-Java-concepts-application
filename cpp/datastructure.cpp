#include<stdio.h>
#include<stdlib.h>

struct Node         //structure defination
{
    int data;
    struct Node *next;

};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

/////////////////////////////////////////////////////////////
//      old Name        New name
//      
//      struct Node     NODE
//      struct Node*    PNODE
//      struct Node**   PPNODE
//
/////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));     //allocate memory
    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)       //jar linklist is empty
    {
        *Head = newn;
    }
    else        //jr linklist contains atleast one node
    {
        newn -> next = *Head;
        *Head = newn;
    }
}