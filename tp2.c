#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
/*

  PROBLEMA 1

  
typedef struct
{
  int n;
  char nume[50];
}elevi;

int comp(const void *a, const void *b)
{
  const elevi *s1=(const elevi*)a;
  const elevi *s2=(const elevi*)b;
  if(s1->n < s2->n)
    return 1;
  if(s1->n > s2->n)
    return -1;
  if(s1->n == s2->n)
    return strcmp(s1->nume,s2->nume);
}



int main(void)
{
  elevi a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i].n);
      fgets(a[i].nume,49,stdin);
      if(a[i].nume[strlen(a[i].nume)-1]=='\n')
	a[i].nume[strlen(a[i].nume)-1]='\0';
    }
  qsort(a,n,sizeof(elevi),comp);
  for(i=0;i<n;i++)
    printf("%d %s\n",a[i].n,a[i].nume);
  return 0;
}
*/

/*
  PROBLEMA 2
int pozitiv(int x)
{
  if (x>0)
    return 1;
  else return 0;
}

void functie(int *a,int *n,int(*cond)(int))
{
  int i,j=0;
  for(i=0;i<*n;i++)
    if(cond(a[i]))
      {
	a[j]=a[i];
	j++;
      }
  *n=j;
}


int main(void)
{
  int a[100],n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  functie(a,&n,pozitiv);
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
*/

/*

  PROBLEMA 3
  
int compar(const void *a, const void *b)
{
  float *p1 = (float *)a;
  float *p2 = (float *)b;
  if(*p1 < *p2)
    return -1;
  else if (*p1 == *p2)
    return 0;
  else  return 1;
}


int main(void)
{
  float a[10];
  float x;
  int n,i;
  scanf("%f",&x);
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  for(i=0;i<n;i++)
    printf("%f ",a[i]);
  printf("\n");
  qsort(a,n,sizeof(float),compar);
  for(i=0;i<n;i++)
    printf("%f ",a[i]);
  printf("\n");
  int *ptr = bsearch(&x,a,n,sizeof(float),compar);
  if(ptr != NULL)
    printf("exista");
  else printf("nu exista");
  return 0;
}
*/

/*
  PROBLEMA 4

void tabelare(int a,int b,int n,double(*f)(double))
{
  double nr,j;
  nr = (b-a)/n;
  j=a;
  int i;
  for(i=0;i<n;i++)
    {
      printf("f(%.lf)=%.lf\n",j,f(j));
      j=j+nr;
    }
}

int main(void)
{
  double a,b;
  int n;
  scanf("%lf %lf %d",&a,&b,&n);
  tabelare(a,b,n,fabs);
  return 0;
}
*/
