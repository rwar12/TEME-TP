#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define size 100


/*

//  PROBLEMA 1

void afis_stiva(int *stack,int top)
{
  if(top == -1)
    {
      printf("stiva e goala");
      return;
    }
  int i;
  for(i=top-1;i>=0;i--)
    printf("%d ",stack[i]);
}

void add_stiva(int *stack,int *top,int elem)
{
  if(*top == size -1)
    {
      printf("stiva e plina\n");
      return;
    }
  stack[*top]=elem;
  (*top)++;
}

void elim_stiva(int *stack,int *top)
{
  if( *top == -1)
    {
      printf("stiva e goala");
      return ;
    }
  (*top)--;
}

int main(void)
{
  int a[size],n,i,x;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\n");
  afis_stiva(a,n);
  printf("\ndati numar :");
  scanf("%d",&x);
  printf("\n");
  add_stiva(a,&n,x);
  afis_stiva(a,n);
  printf("\n");
  elim_stiva(a,&n);
  afis_stiva(a,n);
  return 0;
}
*/

/*
  
  PROBLEMA 2

void add_coada(int *queue,int *front,int *rear,int elem)
{
  if(*rear == size - 1)
    {
      printf("coada e plina");
      return ;
    }
  if(*front == -1);
  front = 0;
  queue[*rear]=elem;
  (*rear)++;
}

void elim_coada(int *queue,int *front,int *rear)
{
  if((*front == -1) || (*front > *rear))
    {
      printf("coada e goala");
      return ;
    }
  (*front)++;
}

void afis_coada(int *queue,int *front,int *rear)
{
  if ((*front == -1) || (*front > *rear))
    {
      printf("coada e goala");
      return ;
    }
    int i;
    for(i = *front ; i < *rear ; i++)
      printf("%d ",*(queue+i));
}

int main(void)
{
  int a[size],front=-1,n,i,x;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      front = 0;
    }
  printf("\ndati element : ");
  scanf("%d",&x);
  add_coada(a,&front,&n,x);
  printf("\n");
  afis_coada(a,&front,&n);
  elim_coada(a,&front,&n);
  printf("\n");
  afis_coada(a,&front,&n);
  return 0;
}

*/


