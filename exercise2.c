#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool check(char *word);

int main(){

  char word[100];
  bool result;

  for(;;){
    printf("entervalue:");
    scanf("%s", word);
    if(strcmp(word, "stop") == 0) break;
    result = check(word);  
    printf("%d\n", result);
    
  }
}

 bool check(char *word){ 

   if(strstr(word, "ei") != NULL) 
     { 
    


     if(strstr(word, "cei") != NULL) return true; 
     else return false; 
    
     } 
   else if(strstr(word, "ie") != NULL) 
     { 
      
       if(strstr(word, "cie") != NULL) return false; 
       else return true; 
     } 
}
