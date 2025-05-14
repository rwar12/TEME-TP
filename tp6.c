#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

// ex 1

//ex 2
/*
float *allocVec(int n,...)
{
  va_list va;
  float *a;
  int i;
  if((a = malloc(n*sizeof(float)))==NULL)
    {
      perror("alocare");
      exit(-1);
    }
  va_start(va,n);
  for(i=0;i<n;i++)
    a[i]=va_arg(va,double);
  va_end(va);
  return a;
}

int main(void)
{
  float *a= allocVec(3,7.2,-1,3);
  int i;
  for(i=0;i<3;i++)
    printf("%.1f ",a[i]);
  free(a);
  return 0;
}
*/

// ex 3
/*
void absN(int n,...)
{
  va_list va;
  va_start(va,n);
  
  int i;
  for(i=0;i<n;i++)
    {
     float *x = va_arg(va,float*);
      *x = fabs(*x);
    }
  va_end(va); 
  
}

int main(void)
{
  float a,b;
  a = -3.2;
  b=4;
  absN(2,&a,&b);
  printf("%f %f",a,b);
  return 0;
}

*/

//ex 4
/*
int crescator(int n,char tip,...)
{
  va_list va;
  va_start(va,tip);
  int i;
  if(tip == 'd')
    {
      int a[n];
      for(i=0;i<n;i++)
	a[i]=va_arg(va,int);
      for(i=0;i<n-1;i++)
	if(a[i] > a[i+1])
	  return 0;
      return 1;
    }
  if(tip == 'f')
    {
      float a[n];
      for(i=0;i<n;i++)
	a[i] = va_arg(va,double);
      for(i=0;i<n-1;i++)
	if(a[i] > a[i+1])
	  return 0;
      return 1;
    }
  va_end(va);
}

int main(void)
{
  char d;
  d=getchar();
  printf("%d",crescator(4,d,8,2,3,4));
  return 0;
}
*/

//ex 5
/*
void input(const char *fmt,...)
{
  va_list va;
  va_start(va,fmt);
  int i=0;
  while( i < strlen(fmt))
    {
      char cuvant[10];
      if(fmt[i] != '=')
	{
	  strcat(cuvant,fmt+i);
	  i++;
	}
      if(fmt[i] == '=')
	if(fmt[i+1] != '%')
	  {
	    strcat(cuvant,fmt+i);
	    i++;
	  }
      if(fmt[i] == '=')
	if(fmt[i+1] == '%')
	  { i=i+2;
      printf("%s ",cuvant);
      if(fmt[i] == 'd')
	{
	  int n;
	  printf("int ");
	  scanf("%d",&n);
	}
      if(fmt[i] == 'f')
	{
	  float n;
	  printf("float ");
	  scanf("%f",&n);
	}
      if(fmt[i] == 'c')
	{
	  char n;
	  printf("char ");
	  scanf("%c",n);
	}
      i++;
      cuvant = '\0';
	  }
    }
  va_end(va);
}

int main(void)
{
  
  return 0;
}
*/

// ex 6
/*
char *concat(int n,...)
{
  va_list va;
  va_start(va,n);
  char *s;
  int x,i;
  for(i=0;i<n;i++)
    {
      char *p = va_arg(va,char*);
      x = x + strlen(p);
    }
  va_end(va);
  va_start(va,n);
  if((s=malloc((x+1)*sizeof(char)))==NULL)
    {
      perror("alocare");
      exit(-1);
    }
  for(i=0;i<n;i++)
    {
      char *p = va_arg(va,char*);
      strcat(s,p);
    }
  va_end(va);
  return s;
}

int main(void)
{
  printf("%s",concat(3,"ION","ANA","DA"));
  return 0;
}
*/

//ex 7
/*
int comune(int nVec,...)
{
  va_list va;
  va_start(va,nVec);
  int i,na,nb,nc;
  int *c;
  int *a = va_arg(va,int*);
  na = va_arg(va,int);
  int *b = va_arg(va,int*);
  nb = va_arg(va,int);
    int j;
    for(i= 0; i<na; i++)
      for(j= 0; j<nb; j++)
	if(a[i] == b[j])
	  nc++;
    if((c=malloc(nc*sizeof(int)))==NULL)
      {
	perror("alocare");
	exit(-1);
      }
    int z=0;
    for(i = 0; i<na; i++)
      for(j=0; j<nb; j++)
	if(a[i] == b[j])
	  {
	    c[z] = a[i];
	    z++;
	  }
    int rezultat;
    for(i = 2;i<nVec;i++)
      {
	int com=0;
	int *a = va_arg(va,int*);
	na= va_arg(va,int);
	for(j = 0;j<na;j++)
	  for(z=0;z<nc;z++)
	    if(a[j] == c[z])
	      com++;
	rezultat = com;
      }
  va_end(va);
  return rezultat;
}

int main(void)
{
  int v1[] ={5,8};
  int v2[]={6,3,5};
  int v3[]={5,0,8};
  printf("%d",comune(3,v1,2,v2,3,v3,3));
  return 0;
}
*/

//ex 8
/*
void sortare(int n,...)
{
  va_list va;
  va_start(va,n);
  int i,aux;
  int* a[100];
  for(i=0;i<n;i++)
    {
      a[i]=va_arg(va,int*);
    }
  bool ok=false;
  while(!ok)
    {
      ok=true;
      for(i=0;i<n-1;i++)
	if(a[i]>a[i+1])
	  {
	    aux=*a[i];
	    *a[i]=*a[i+1];
	    *a[i+1]=aux;
	    ok=false;
	  }
    }
  va_end(va);
}

int main(void)
{
  int a=3;
  int b=5;
  int c=2;
  sortare(3,&a,&b,&c);
  printf("%d %d %d",a,b,c);
  return 0;
}
*/

// ex 9
/*
int main(int argc, char **argv)
{
  int i;
  float s = 0;
  for(i=1;i<argc;i++)
    {
      double x;
      x = strtod(argv[i],NULL);
      s = s + x;
    }
  printf("%.2f",s);
  return 0;
}

*/

// ex 10
/*
int main(int argc, char **argv)
{
  char a[30][30];
  int i,j,n;
  n = strtol(argv[2],NULL,10);
    for(i=3;i<argc;i++)
    {
      strcpy(a[i],argv[i]);
      strcat(a[i]," ");
    }
  for(i=3;i<argc;i++)
    for(j = 0; j < strlen(a[i]);j++)
      a[i][j] = tolower(a[i][j]);
  if(strcmp(argv[1],"enc")==0)
    {
      for(i = 3;i<argc;i++)
	for(j=0;j<strlen(a[i]);j++)
	  {
	    if(a[i][j] < 'z' && a[i][j] >'a')
	      {
		a[i][j] = a[i][j] + n;
		if ( a[i][j] > 'z')
		  a[i][j]=a[i][j]-'z'+'a'-1;
	      }
	  }
      printf("%d  ",n);
      for(i=3;i<argc;i++)
	printf("%s",a[i]);
    }
  else
    {
     for(i = 3;i<argc;i++)
	for(j=0;j<strlen(a[i]);j++)
	  {
	    if(a[i][j] < 'z' && a[i][j] >'a')
	      {
		if((a[i][j]-n) < 'a')
		  a[i][j] = a[i][j] + 'z' - 'a' + 1;
		else
		  a[i][j] = a[i][j]-n;
	      }
	  }
     for(i=3;i<argc;i++)
	printf("%s",a[i]);
    }
  return 0;
}
*/

//ex 11
/*
int main(int argc, char **argv)
{
  double x;
  int i;
  float s=0;
  s = strtod(argv[1],NULL);
  for(i=3;i<argc;i=i+2)
    {
      x = strtod(argv[i],NULL);
      if(strcmp(argv[i-1],"add") == 0)
	s = s + x;
      if(strcmp(argv[i-1],"sub")== 0)
	s = s - x;
      if(strcmp(argv[i-1],"mul")==0)
	s = s * x;
      if(strcmp(argv[i-1],"div")==0)
	s = s / x;
    }
  printf("%.2f",s);
  return 0;
}
*/
//ex 12
/*
int main(int argc, char **argv)
{
  int i;
  
  return 0;
}
*/

//ex 13

int main(int argc, char **argv)
{
  int i,n;
  n = strtoll(argv[1],NULL,10);
  if(n==0)
    {
      int nrt=0;
      char a[30][30];
      for(i=2;i<argc-1;i++)
	{
	  strcpy(a[i],argv[i]);
	}
      strcpy(a[argc-1],argv[argc-1]);
      for(i=2;i<argc;i++)
	nrt = nrt + strlen(a[i]);
      printf("%d",nrt);
    }
  else
    {
      char a[30][30];
      int j;
      for(i=2;i<argc;i++)      
	strcpy(a[i],argv[i]);
      int v[26];
      for(i=0;i<25;i++)
	v[i]=0;
      for(i=2;i<argc;i++)
	for(j=0;j<strlen(a[i]);j++)
	  {
	    v[a[i][j]-'a'] ++;
	  }
      for(i=0;i<25;i++)
	if(v[i] != 0)
	  printf("%c apare de %d ori\n",i+'a',v[i]);
    }
  return 0;
}
