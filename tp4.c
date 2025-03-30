#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
  PROBLEMA 1

struct Student
{
  char nume[20];
  int nota;
};

int main(void)
{
  struct Student a;
  fgets(a.nume,19,stdin);
  if(a.nume[strlen(a.nume)]=='\n')
    a.nume[strlen(a.nume)]='\0';
  printf("%s\n",a.nume);
  scanf("%d",&a.nota);
  printf("%d",a.nota);
  return 0;
}
*/

/*
  PROBLEMA 2


struct Fisier
{
  char nume[16];
  unsigned dim:13;
  unsigned ext:2;
  unsigned tip:1;
};

int main(void)
{
  struct Fisier a;
  FILE *f;
  int dim,ext,tip;
  if((f = fopen("tp4.txt","r"))==NULL)
    {
      perror("fisier");
      exit(-1);
    }
  fgets(a.nume,15,f);
  if(a.nume[strlen(a.nume)-1]=='\n')
    a.nume[strlen(a.nume)-1]='\0';
  fscanf(f,"%d %d %d",&dim,&ext,&tip);
  a.dim=dim;
  a.ext=ext;
  a.tip=tip;
  printf("%s %d %d %d",a.nume,a.dim,a.ext,a.tip);
  return 0;
}
*/
/*
  PROBLEMA 3


struct Fisier
{
  char nume[16];
  unsigned dim:13;
  unsigned ext:2;
  unsigned tip:1;
};

int main(void)
{
  struct Fisier a[10];
  int i,n,dim,ext,tip;
  printf("nr de fisiere: ");
  scanf("%d",&n);
  getchar();
  for(i=0;i<n;i++)
    {
      fgets(a[i].nume,15,stdin);
      if(a[i].nume[strlen(a[i].nume)-1]=='\n')
	a[i].nume[strlen(a[i].nume)-1]='\0';
      scanf("%d %d %d",&dim,&ext,&tip);
      a[i].dim=dim;
      a[i].ext=ext;
      a[i].tip=tip;
      getchar();
    }
  for(i=0;i<n;i++)
    printf("%s %d %d %d\n",a[i].nume,a[i].dim,a[i].ext,a[i].tip);
  return 0;
}
*/

/*
  PROBLEMA 4


struct Fisier
{
  char nume[16];
  unsigned dim:13;
  unsigned ext:2;
  unsigned tip:1;
};




int main(void)
{
  struct Fisier *a;
  int i,n,dim,ext,tip;
  scanf("%d",&n);
  if((a=malloc(n*sizeof(struct Fisier)))==NULL)
    {
      perror("alocare");
      exit(-1);
    }
  getchar();
  for(i=0;i<n;i++)
    {
      fgets(a[i].nume,15,stdin);
      if(a[i].nume[strlen(a[i].nume)-1]=='\n')
	a[i].nume[strlen(a[i].nume)-1]='\0';
      scanf("%d %d %d",&dim,&ext,&tip);
      a[i].dim=dim;
      a[i].ext=ext;
      a[i].tip=tip;
      getchar();
    }
  for(i=0;i<n;i++)
    printf("%s %d %d %d\n",a[i].nume,a[i].dim,a[i].ext,a[i].tip);
  free(a);
  return 0;
}
*/
/*

// PROBLEMA 5


struct Animal
{
  unsigned int picioare:10;
  float kg;
  unsigned int p:1;
  char abr[9];
  unsigned int ani:11;
};

int main(void)
{
  printf("%d\n",sizeof(struct Animal));
  struct Animal a;
  int picioare,p,ani;
  scanf("%d %f %d",&picioare,&a.kg,&p);
  getchar();
  fgets(a.abr,9,stdin);
  scanf("%d",&ani);
  a.picioare=picioare;
  a.p=p;
  a.ani=ani;
  printf("animalul are %d picioare, %.f kg, prezinta pericol:  %d, abrevierea lui este  %s si are o varsta de %d ani\n",a.picioare,a.kg,a.p,a.abr,a.ani);
  return 0;
}
*/

/*
  PROBLEMA 6


struct Medicament
{
  unsigned int pericol:2;
  unsigned int elib:1;
  unsigned int varsta:5;
};

int main(void)
{
  printf("%d",sizeof(struct Medicament));
  struct Medicament a;
  int pericol,elib,varsta;
  scanf("%d %d %d",&pericol,&elib,&varsta);
  a.pericol=pericol;
  a.elib=elib;
  a.varsta=varsta;
  printf("\nmedicamentul prezinta urmatoarele calitati: are grad de periculozitate: ");
  if(a.pericol == 0)
    printf("scazut");
else  if(a.pericol ==1)
  printf("mediu");
 else printf("mare");
  printf(", eliberat doar pe baza de reteta: ");
  if(a.elib==0)
    printf("nu");
  else printf("da");
  printf(" si varsta minima de administrare este de: %d ani",a.varsta);
  return 0;
}
*/

/*
  PROBLEMA 7

struct Masuratoare
{
  unsigned int val:10;
  unsigned int um:2;
  unsigned int multipl:4;
};

int main(void)
{
  struct Masuratoare a;
  printf("%ld",sizeof(struct Masuratoare));
  int val,um,multipl;
  printf("\n");
  printf("dati valoare:");
  scanf("%d",&val);
  a.val=val;
  printf("\nalegeti unitatea de masura: 1 - gram 2 - metru 3 - litru ");
  scanf("%d",&um);
  a.um=um;
  printf("\nalegeti multiplicatorul: 1 - pico 2 - nano 3 - mili 4 - centi 5 - deci 6 - deca 7 - hecto 8 - kilo 9 - mega 10 - giga ");
  scanf("%d",&multipl);
  a.multipl=multipl;
  
  return 0;
}
*/
