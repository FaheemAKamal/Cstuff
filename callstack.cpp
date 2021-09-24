#include <iostream>
#include <string.h>

void pwdcheck(){
    int authenticated = 0;
    char pwd[10];
    printf("Enter password: ");
    scanf("%s",pwd);
    if(strcmp(pwd,"lolololol") == 0){
        authenticated = 1;
    } 
    if(authenticated){
        printf("Authenticated!\n");
    }else{
        printf("Wrong password moron!\n");
    }
}

int main(){
    printf("Check your password \n");
    pwdcheck();
    return 0;
}