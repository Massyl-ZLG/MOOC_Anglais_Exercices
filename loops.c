//-------------------------------------Exercices-------------------------------------//
#include <stdio.h>

int main(){
    int positionX =0;
    int hitPoints = 50;
    int maxHitPoints = 350;
    int potionLifePoints = 20;
    int cpt=0;
    
    /*------------FOR------------
    The positionX variable represents the position of the character on the abscissa axis.
    Write a small program with for loop, to step right each iteration, until you reach position 10.
    */
     int goalPosition = 10;
     for(int i = positionX; i < goalPosition; i++){
         positionX ++;
         printf("My position is : %d\n", positionX);
     }

    printf("------------------------------------------\n");
    /*------------While------------
    Write a small program with while loop, which allows you to drink a revitalizing potion [Adds the life points of the potion to those of character]
    Until the character's hit points do not exceed the MAX hit points defined below.
    */
    while(hitPoints + potionLifePoints <= maxHitPoints){
        hitPoints += potionLifePoints;
        cpt++;
        printf("Step number : %d , Actual hit points : %d\n",cpt, hitPoints);
    }    

    return 0;
}
