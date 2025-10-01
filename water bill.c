/*
Name: SANDRAH CHEBET 
Reg no:PA106/G/28741/25
Description :A program to calculate water bill
*/

#include<stdio.h>
int main(){
    float bill,unit;
    printf("Enter water unit consumed: ");
    scanf("%f",&unit);
    if(unit<=30)
    
    printf("Total water bill %.2f" ,unit*20);
    
    else if(unit>30 && unit<=60)
    printf("Total water bill %.2f: " ,unit*25);  
    else
    printf("Total water bill %.2f:  " ,unit*30);
    }