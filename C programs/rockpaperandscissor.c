#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(char you,char comp){
    if (you==comp){
        return 0;
    }
    if (you=='r' && comp=='p'){
        return -1;
    }
    else if (you=='r' && comp=='s'){
        return 1;
    }
    if (you=='p' && comp=='s'){
        return -1;
    }
    else if (you=='p' && comp=='r'){
        return 1;
    }
    if (you=='s' && comp=='r'){
        return -1;
    }
    else if (you=='s' && comp=='p'){
        return 1;
    }
}
int main (){
    char you,comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number<33){
        comp='r';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }
    printf("Choose Between r,p And s\n");
    scanf("%c", &you);
    int result= rockpaperscissor(you,comp);
    printf("You chose %c and computer chose %c\n",you,comp);
    if(result==1){
        printf("You won this Game\n");
    }
    else if(result==-1){
        printf("You loss this Game\n");
    }
    else{
        printf("Game draws\n");
    }
    return 0;
}