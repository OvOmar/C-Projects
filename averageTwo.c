#include <stdio.h>
int main() {
   
    double number;
    double total = 0;
    double iterations;
    char stop[32] = "stop";
    char check[50];
    printf("Welcome to Omars Average Calculator!!!! \n");
    printf("Before you enter a number you can type stop to calculate the average otherwise type okay to continue, I have set a limit of 20 numbers to find the average of. \n");

    while(1){
    fgets(check , 50, stdin);
     
        
    if ( strcmp ( check, "stop" ) == 1 ) 
    {
        total = total - number;
        printf( "The average is ", total / (iterations - 1));
    }
    
    else {
    iterations++;
    printf("please enter a number \n");
   
    scanf("%lf" , & number);
    printf("In loop we have iterated ", iterations, "\n");
   
    total = total + number;       
      
    }
        
    
        
   
}

}
