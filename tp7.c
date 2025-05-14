#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

typedef struct elem{
  int n;
  struct elem *urm;
}elem;

elem *nou(int n,elem *urm)
{
  elem *e = (elem*)malloc(sizeof(elem));
  if(!e)
    {
      perror("alocare");
      exit(-1);
    }
  e->n = n;
  e->urm = urm;
  return e;
}

elem *adaugainceput(elem *lista, int n)
{
  return nou(n,lista);
}

elem *adaugasfarsit(elem *lista,int n)
{
  if(lista == NULL)
    return nou(n,NULL);
  elem *p=lista,*q;
  for(q=p->urm;q!=NULL;p=q,q=p->urm);
  p->urm = nou(n,NULL);
  return lista;
}

elem *stergeinceput(elem *lista)
{
  if(lista == NULL)
    return lista;
  elem *p = lista;
  lista = lista->urm;
  free(p);
  return lista;
}

elem *stergesfarsit(elem *lista)
{
  if(lista == NULL)
    return lista;
  if( lista->urm == NULL)
    {
      free(lista);
      return lista = NULL;
    }
  elem *p,*q;
  for(p = lista; p->urm->urm!=NULL;p=p->urm);
  q = p->urm->urm;
  p->urm = NULL;
  free(q);
  return lista;
}

void afis(elem * lista)
{
  elem *p;
  for(p = lista;p!=NULL;p=p->urm)
    printf("%d ",p->n);
}

elem *sterge(int x,elem *a)
{
  if(a == NULL)
    return a;
  if(a->n == x)
    {
      elem *q = a;
      a = a->urm;
      free(q);
      return a;
    }
  elem *p = a;
  while(p->urm !=NULL)
    {
      if(p->urm->n == x)
	{
	  elem *q = p->urm;
	  p->urm = p->urm->urm;
	  free(q);
	  break;
	}
    }
  return a;
}


// ex 1
/*
int identice(struct elem *a, struct elem *b)
{
  bool ok = false;
  while(a != NULL && b !=NULL)
    {
      if(a->n != b->n)
	ok=true;
      a = a->urm;
      b = b->urm;
    }
  if(ok)
    return 0;
  return 1;
}

int main(void)
{
  struct elem *lista1 = NULL;
  lista1 = adaugainceput(lista1,102);
  lista1 = adaugasfarsit(lista1,15);

  struct elem *lista2 = NULL;
  lista2 = adaugainceput(lista2,10);
  lista2=adaugasfarsit(lista2,15);
  printf("%d",identice(lista1,lista2));
  return 0;
}
*/

// ex 2
/*
elem *invers(elem *lista)
{
  if(lista == NULL)
    return lista;
   elem *prev,*q,*aux;
   for(prev=lista,q=lista->urm;q->urm!=NULL;prev=q,q=aux)
     {
       aux = q->urm;
       q->urm = prev;
     }
   q->urm = prev;
   lista->urm = NULL;
   return q;
}


int main(void)
{
  elem *lista1 = NULL;
  lista1=adaugainceput(lista1,10);
  lista1=nou(14,lista1);
  lista1=nou(18,lista1);
  lista1=adaugasfarsit(lista1,20);
  afis(lista1);
  printf("\n");
  stergesfarsit(lista1);
  afis(lista1);
  printf("\n");
  invers(lista1);
  afis(lista1);
  
  return 0;
}
*/

// ex 3
/*
elem *con(elem *a, elem *b)
{
  elem *rez=NULL;
  elem *z=NULL;
  elem *p=a;
  int x;
  while(p!=NULL)
    {
      x = p->n;
      rez = nou(x,rez);
      p = p->urm;
    }
  p = b;
  while(p!=NULL)
    {
      x = p->n;
      rez=nou(x,rez);
      p = p->urm;
    }
  while(rez!=NULL)
    {
      x = rez->n;
      z = nou(x,z);
      rez=rez->urm;
    }

  return z;
}

int main(void)
{
  elem *a=NULL;
  a=nou(10,a);
  a=nou(11,a);
  a=nou(14,a);
  afis(a);
  printf("\n");
  elem *b=NULL;
  b = nou(1,b);
  b=nou(131,b);
  b=nou(4,b);
  afis(b);
  printf("\n");
  elem *c;
  c = con(a,b);
  afis(c);
  return 0;
}
*/

// ex 4
/*
int main(void)
{
  elem *a=NULL;
  a=nou(10,a);
  a=nou(11,a);
  a=nou(14,a);
  afis(a);
  printf("\n");
  sterge(11,a);
  afis(a);
  return 0;
}
*/

// ex 5
/*
int ex5(elem *x,elem *c)
{
  elem *p=x , *q;
  bool ok = true;
  bool gasit=true;
  while(p!=NULL)
    {
      gasit = true;
      q = c;
      while(q!=NULL){
	if(p->n == q->n)
	  {
	    gasit=false;
	  }
	q=q->urm;
      }
      if(gasit)
	ok = false;
      p = p->urm;
    }
  if(!ok)
    return 0;
  if(ok)
    {
      p = c;
      while(p!=NULL)
	{
	  gasit = true;
	  q = x;
	  while(q!=NULL){
	    if(p->n == q->n)
	      gasit = false;
	    q=q->urm;}
	  if(gasit)
	    ok = false;
	  p=p->urm;
	}
    }
  if(!ok)
    return 0;
  return 1;
  }

int main(void)
{
  elem *a=NULL;
  elem *b=NULL;
  a = nou(10,a);
  a=nou(11,a);
  a=nou(14,a);
  b = nou(10,b);
  b=nou(14,b);
  b=nou(11,b);
  afis(a);
  printf("\n");
  afis(b);
  printf("%d",ex5(a,b));
  return 0;
}
*/

// ex 6
/*
elem *ex6(elem *a, int x)
{
  elem *nou = (elem *)malloc(sizeof(elem));
  nou->n = x;
  nou->urm = NULL;
  if( a == NULL || a->n > x)
    {
      nou->urm = a;
      return nou;
    }
  elem *p = a,*q;
  q=p->urm;
  while(q!=NULL)
    {
      if(p->n <= x && q->n >=x)
	{
	  p->urm = nou;
	  nou->urm = q;
	  return a;
	}
      p=p->urm;
      q=q->urm;
    }
  p->urm = nou;
  return a;
}

elem *ex6l(elem *a)
{
  elem *p =a;
  elem *b = NULL;
  while(p!=NULL)
    {
      b=ex6(b,p->n);
      p=p->urm;
    }
  return b;
}

int main(void)
{
  elem *a=NULL;
  a=nou(10,a);
  a=nou(41,a);
  a=nou(14,a);
  afis(a);
  printf("\n");
  a = ex6l(a);
  afis(a);
  return 0;
}
*/

//ex 7
/*
elem *ex7(elem *a, elem *b)
{
  elem *rez=NULL;
  while( a!=NULL &&  b!=NULL)
    {
      if(a->n < b->n)
	{
	  rez=nou(a->n,rez);
	  a=a->urm;
	}
      else
	{
	  rez=nou(b->n,rez);
	  b=b->urm;
	}
    }
  while(a!=NULL)
    {
      rez =nou(a->n,rez);
      a=a->urm;
    }
  while(b!=NULL)
    {
      rez=nou(b->n,rez);
      b=b->urm;
    }
  return rez;
}

int main(void)
{
  elem *a=NULL;
  a=nou(14,a);
  a=nou(11,a);
  a=nou(10,a);
  afis(a);
  printf("\n");
  elem *b=NULL;
  b = nou(131,b);
  b=nou(4,b);
  b=nou(1,b);
  afis(b);
  printf("\n");
  elem *c=NULL;
  c=ex7(a,b);
  afis(c);
  return 0;
}
*/
