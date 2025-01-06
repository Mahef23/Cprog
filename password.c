#include <stdio.h>
#include <string.h>

int main(){
    char password[20];
    printf("SAisissez le mot de passe: ");
    scanf("%s",password);
    while(strcmp(password,"TAY")){
        printf("SAisissez le vrai mot de passe :");
        scanf("%s",password);
    }
    printf("***BIENVENUE***");
    return 0;
}