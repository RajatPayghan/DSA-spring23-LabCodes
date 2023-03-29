#include <stdio.h>
#include <stdlib.h>


typedef struct node * NODE;
struct node{
    int ele;
    NODE next;
};


typedef struct linked_list * LIST;
struct linked_list{
    int count;
    NODE head;
};


LIST createNewList()
{
    LIST myList;
    myList = (LIST) malloc(sizeof(struct linked_list));
    myList->count=0;
    myList->head=NULL;
    return myList;
}


NODE createNewNode(int value)
{
    NODE myNode;
    myNode = (NODE) malloc(sizeof(struct node));
    myNode->ele=value;
    myNode->next=NULL;
    return myNode;
}

// Recursive function to compute sum of integers in a linked list
int llSumNTR(NODE snode)
{
    if (snode == NULL)
        return 0;
    return snode->ele + llSumNTR(snode->next); // Pay close attention here
}

// Tail Recursive Function
int llSumTR(NODE head, int sum)
{
    if (head == NULL)
        return sum;
    return llSumTR(head->next, head->ele + sum); // Pay close attention here
}

// This is just a wrapper function to take LIST as input, but run the recursive sum function on its NODEs starting from the head
int llSumNTRWrapper(LIST list)
{
    return llSumTR(list->head, 0);
}



// Driver code
int main()
{
    // Reads the file numbers1000.txt and creates a linked list with those integers
    FILE *fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    int num;
    LIST myList = createNewList();
    while (fscanf(fp, "%d", &num) != EOF)
    {
        NODE myNode = createNewNode(num);
        myNode->next = myList->head;
        myList->head = myNode;
        myList->count++;
    }
    fclose(fp);

    // Perform some operations on the linked list
    // ...
    int sum = llSumNTRWrapper(myList);
    printf("The sum of the numbers = %d\n",sum);

    // Example operation: Print the elements of the linked list
    NODE temp = myList->head;
    while (temp != NULL)
    {
        printf("%d ", temp->ele);
        temp = temp->next;
    }
}