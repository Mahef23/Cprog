#include <stdio.h>
#include <math.h>
void binaire(number);
int main(){
   // int number =11;
    binaire(11);
    return 0;
}

void binaire(number){
    if (number == 0){
        printf("0");
    }
  int j = (int)log2(number) + 1;
  int tab[j];
    /*do{
        j++;
    }while(number>(pow(2,j)));
   // printf("%d\n",j);*/
    int i=0;
    
    for (i=0 ; i<j ;  i++){
        tab[i]=number%2;
        number/=2;
    }
    for(i=j-1 ; i>=0 ; i--){
        printf("%d ",tab[i]);
    }
}
