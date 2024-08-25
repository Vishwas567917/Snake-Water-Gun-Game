#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp){
    // return 1 if u win, -1 if u lose, 0 if draw

    // Condition for draw
    // Cases Covered
    // ss 
    // gg
    // ww
    if(you == comp){
        return 0;
    }

    // Non-draw Conditions
    //Cases covered:
    //sg
    //gs
    //sw
    //ws
    //gw
    //wg

    if(you== 's' && comp == 'g'){
        return -1;
    }
    else if(you== 'g' && comp == 's')
    {
        return 1;
    }

    if(you== 's' && comp == 'w'){
        return 1;
    }
    else if(you== 'w' && comp == 's')
    {
        return -1;
    }

    if(you== 'g' && comp == 'w'){
        return -1;
    }
    else if(you== 'w' && comp == 'g')
    {
        return 1;
    }    
}
int main(){
    int number;
    char you , comp;
    srand(time(0));
    number = rand()%100 +1 ;
    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter s for snake, w for water, g for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("You chose %c and computer chose %c :", you, comp);
    if(result ==0){
        printf("Game drop!\n");
    }
    else if(result ==1){
        printf("You win!\n");
    }
    else{
        printf("You lose!\n");
    }
    
    return 0;
}