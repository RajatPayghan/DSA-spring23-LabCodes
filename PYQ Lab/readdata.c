//2017A7PS0038P Rayapati Yaswanth Kumar
#include"node.h"
#include<stdio.h>
#include<stdlib.h>
Locality * ReadFileintoLists()
{
	FILE *fptr;
	fptr=fopen("file.txt", "r");
	if(fptr==NULL)
	{printf("Error!");	exit(1); }

	//tn2->next addresses tail of localities
	Locality *tn2= (struct node2*) malloc(sizeof(struct node2));
	
	//To store initial address of localities list
	Locality *initial;

	//Localities
	for(int i=1;i<=N;i++)
	{
		int temp;
		fscanf(fptr,"%d", &temp);
		Locality *link= (struct node2*) malloc(sizeof(struct node2));
		link->count=temp;
		if(i==1)
		{	
			initial=link;
			tn2->next=link;	
		}

		//tn1->next adresses tail of members
		Member *tn1=(struct node1*)malloc(sizeof(struct node1));

		//For members		
		for(int j=1;j<=temp;j++)
		{
			// char c;
			// fscanf(fptr,"%c", &c);//To consume comma
			struct node1 *n=(struct node1*)malloc(sizeof(struct node1));
			if(j==1)
			{
				link->first=n;
				tn1->next=n;		
			}
			int identity;
			fscanf(fptr,",%d", &identity);
			n->id=identity;
			if(j!=1)
			{	
				//Assigning this node to previous nodes next
				(tn1->next)->next=n;
				//Making this node tail node
				tn1->next=n;
			}
		}
		
		if(i!=1)
		{
				//Assigning this node to previous nodes next
				(tn2->next)->next=link;
				//Making this node tail node
				tn2->next=link;
		}
	}	
	fclose(fptr);
	return initial;
}

void PrintLists (Locality *start)
{
	Locality *l=start;	
	for(int i=1;i<=N;i++)
	{ 		
		int cnt= (l->count);
		Member *m=(l->first);	
    printf("Locality : %d\n",m->id);
		for(int i=1;i<=cnt;i++)
		{
			int ident=(m->id);
			printf("%d\n", ident);	
			if(i<cnt)	
			{m=(m->next);}
		}
    printf("--------------------\n");
		if(i<N)
		{l=(l->next);}	
	}
}
