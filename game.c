#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess,nguesses=1;
    srand(time(0));
    number=rand()%150+1;
    
   

    do{
        printf("Guess the number between 1 to 150\n");
        scanf("%d",&guess);

       if(guess>number){
            printf("Lower number please!\n");
        }

          else if(guess<number){
                printf("Higher number please!\n");
          }
          
           else{
              printf("You guessed in %d attempts\n",nguesses);
        }
       
        nguesses++;

    } 
    while(guess!=number);
    return 0;
}