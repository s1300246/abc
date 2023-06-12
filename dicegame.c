#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
  int a[2],s,i;

  printf("Rolling dice...\n");

 

  for(i=0;i<=1;i++){

    srand(time(NULL));

    a[i]=rand()%6+1;

    printf("Die %d: %d\n",i+1,a[i]);

    sleep(1);
  }

  s=a[0]+a[1];

  printf("Total value: %d\n",s);

  return 0;
}
