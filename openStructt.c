#include <stdio.h>
typedef enum volume volume;
enum volume{
    FAIBLE,MOYEN,FORT
};

/*typedef struct Personne Personne;
struct Personne{
    char name[10];
    int age;
};*/
int main (){

   /* Personne paul[3];
for (int i=0 ; i< 3 ; i++ ){
    printf("Name : ");
    scanf("%s",paul[i].name);
    printf("Age : ");
    scanf("%d",&paul[i].age);
}
for (int i=0 ; i< 3 ; i++ ){
    printf("%s --> %d\n",paul[i].name,paul[i].age);
}*/
    volume musique = MOYEN;

    if(musique == 2){
        printf("%d \n MUSIQUE TROP FORT",musique);
    }
    else{
        printf("%d",musique);
    }
    return 0;
}
