#include <stdio.h>
#include <stdlib.h>
#include "load.h"
 
int main()
{
char nom_fichier[30];       //="complex.txt";
  struct complex * v=NULL; //={{1.1,1.1},{2.2,2.2},{3.3,3.3},{4.4,4.4}};
  int n=0,i;
  scanf("%s",nom_fichier);

  n=load(nom_fichier,&v);
  printf("%d\n",n);
  if(v!=NULL)
  {
    struct complex * e=v+3;
    for(i=0;i<n;i++)
    {
        printf("%f %f\n",(v+i)->real,(v+i)->img);
    }
    free(v);
  }
  return 0;
}

