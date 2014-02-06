#include<stdio.h>
#include<malloc.h>
#include <stdlib.h>

struct node {
  int x;
  struct node *next;
};

int main()
{
    struct node *root;       
    struct node *p; 
    int t;
    printf("Enter the number");
    scanf("%d",&t);
    root = malloc( sizeof(struct node) );
    
root->x=t%10;
t=t/10;
    while(t!=0)
    {
	p=malloc( sizeof(struct node) );
	p->next=root;
	p->x=t%10;
	root=p;
	t=t/10;
     }   
p=root;
while(p!=0)
{
printf("%d ->",p->x);
p=p->next;
}
}