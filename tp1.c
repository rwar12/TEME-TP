#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void citire(int **a,int n,int m)
{
  int i,j;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
}

void afisare(int **a,int n,int m)
{
  int i,j;
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
	printf("%d ",a[i][j]);
      printf("\n");
    }
}

int main(void)
{
  int **a;
  int i,j,n,m;
  scanf("%d %d",&n,&m);
  if((a=malloc(n*sizeof(int)))==NULL)
    {
      perror("alocare");
      exit(-1);
    }
  for(i=0;i<n;i++)
    if((a[i]=malloc(m*sizeof(int)))==NULL)
      {
	for(i--;i>0;i--)
	  free(a[i]);
	free(a);
	perror("alocare");
	exit(-1);
      }
  // PROBLEMA 1
  /*
  int s=0;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      {
	a[i][j]=s;
	s++;
      }
      afisare(a,n,m);*/
  // PROBLEMA 2
  /*
  int aux;
  citire(a,n,m);
  for(i=0;i<n;i++)
    for(j=i+1;j<m;j++)
      {
	aux=a[i][j];
	a[i][j]=a[j][i];
	a[j][i]=aux;
      }
  afisare(a,n,m);
  */
  //PROBLEMA 3
  /*
  int *slin;
  int *scol;
  if((slin=malloc(m*sizeof(int)))==NULL)
    {
      perror("alocare");
      exit(-1);
    }
  if((scol=malloc(n*sizeof(int)))==NULL)
    {
      perror("alocare");
      exit(-1);
    }
  citire(a,n,m);
  for(i=0;i<n;i++)
    scol[i]=0;
  for(i=0;i<m;i++)
    slin[i]=0;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      {
	slin[i]=slin[i]+a[i][j];
	scol[i]=scol[i]+a[j][i];
      }
  for(i=0;i<n;i++)
    printf("%d ",scol[i]);
  printf("\n");
  for(i=0;i<m;i++)
    printf("%d ",slin[i]);
  */
  //PROBLEMA 4

  // PROBLEMA 5
  /*
  int x,y,min;
  citire(a,n,n);
  for(i=0;i<n;i++)
    a[i][i]=-1;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if(a[i][j]>0)
	min=a[i][j];
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if(a[i][j]>0)
	if(a[i][j]<=min)
	  {
	    min=a[i][j];
	    x=i;
	    y=j;
	  }
  printf("%d %d %d",min,x,y);
  */
  //PROBLEMA 6
  /*
  int p,x;
  int **b;
  int **c;
  scanf("%d",&p);
  if((b=malloc(m*sizeof(int)))==NULL)
    {
      perror("alocare");
      exit(-1);
    }
  for(i=0;i<m;i++)
    if((b[i]=malloc(p*sizeof(int)))==NULL)
      {
	for(i--;i>0;i--)
	  free(b[i]);
	free(b);
	perror("alocare");
	exit(-1);
      }
  if((c=malloc(n*sizeof(int)))==NULL)
    {
      perror("alocare");
      exit(-1);
    }
  for(i=0;i<n;i++)
    if((c[i]=malloc(p*sizeof(int)))==NULL)
      {
	for(i--;i>0;i--)
	  free(c[i]);
	free(c);
	perror("alocare");
	exit(-1);
      }
  citire(a,n,m);
  citire(b,m,p);
  for(i=0;i<n;i++)
    for(j=0;j<p;j++)
      {
	c[i][j]=0;
	for(x=0;x<m;x++)
	  c[i][j]=c[i][j] + a[i][x] * b[x][j];
      }
  afisare(c,n,p);
  */
  //PROBLEMA 7
  /* for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      a[i][j]=0;
  for(i=0;i<n;i++)
    a[i][i]=1;
  afisare(a,n,n);
  */
  //PROBLEMA 8
  /*m=4;
  citire(a,n,m);
  for(i=0;i<n;i++)
    for(j=1;j<4;j++)
      if(a[i][j] > a[i][j-1])
	if(a[i][j+1] > a[i][j])
	  if(a[i][j+2] > a[i][j+1])
	    printf("%d ",i);
  */
  return 0;
}
