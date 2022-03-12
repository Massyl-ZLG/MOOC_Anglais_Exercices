//-------------------------------------Exercices-------------------------------------//
#include <stdio.h>

int main(){
    //Declare a "hit_points" variable for your character's hit points 
    int hitPoints;

    //Assign a value to the previous variable
    hitPoints = 20;
    printf("My character's life points are : %d \n", hitPoints);
    
    //Add 20 life points to the previous variable 
    hitPoints+=25;
    printf("My character's life points after drinking a potion are : %d \n", hitPoints);

    //Remove 10 life points to the previous variable 
    hitPoints-=10;
    printf("My character's life points after taking a hit are : %d \n", hitPoints);

    //Devide the character's hit points by 2 
    hitPoints/=2;
    printf("My character's life points after change: %d \n", hitPoints);
    //What do you notice ?
}

