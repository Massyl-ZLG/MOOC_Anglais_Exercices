//-------------------------------------Exercices-------------------------------------//
#include <stdio.h>

int main(){
    /*Write a small condition to manage this case: 
    You can only add regeneration points to the character if : regeneration points + actual life points are less or equal 
    To the max life points defined in the variable below 
    Else, just print that adding is not possible
    */
    int maxHitPoints = 50;
    int hitPoints = 30;
    int regenLife = 15;

    if(hitPoints + regenLife <= maxHitPoints){
        hitPoints += regenLife;
    }
    else { 
        printf("Cannot add life points");
    }


    printf("My character's life points are : %d \n", hitPoints);

    return 0;
}
