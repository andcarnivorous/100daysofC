#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int result(int dice_num); 

 int main(){ 

   time_t t; 
   int i; 
   int dice_quant; 
   int dice_num; 
   int scores = 0; 
  
   printf("Insert how many dice you wanna throw: "); 
   scanf("%dd%d", &dice_quant, &dice_num); 
  
   srand((unsigned) time(&t)); 
    
   for(i = 0; i < dice_quant; i++){ 
    
     scores += result(dice_num); 
  
   } 
  
   printf("You throw a %d D %d and score %d", dice_quant, dice_num, scores); 
   return 0; 
  
 } 




int result(int dice_num) {

  int score = rand() % dice_num;
  printf("%d\n", score);
  return score;
  
}
