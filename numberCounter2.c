#include <stdio.h>
#include <stdlib.h>


int main(void){


   int PositiveNumber = 0;
    int sumOfNumber =0;
    float average=0.0;
    int numberOfTerm;
    int smallestNumber, largestNumber;
    int counter;
do {
     numberOfTerm = 0;

     printf("Welcome\n");
      printf("Enter a negative integer to end\n");
      scanf("%d", &PositiveNumber);
      smallestNumber=PositiveNumber;
      largestNumber=PositiveNumber;
      sumOfNumber =PositiveNumber;

   while(PositiveNumber > 0){
         printf("Enter an integer: \n");
         scanf("%d", &PositiveNumber);

      if(smallestNumber>PositiveNumber && PositiveNumber >0){
          smallestNumber=PositiveNumber;
      }
      if(largestNumber<PositiveNumber){
          largestNumber=PositiveNumber;
      }
      if (PositiveNumber >0){
          sumOfNumber = sumOfNumber+PositiveNumber;
      }
        numberOfTerm++;
   }
        printf("The smallest number is: %d\n", smallestNumber);
        printf("The biggest number is: %d\n", largestNumber);
        printf("The sum of number is: %d\n", sumOfNumber);

        average = (float) sumOfNumber/numberOfTerm;
         printf("The average of number is: %f\n",average);
        

   printf("Would you like to run the program again (1 for yes, 0 for no)?");
   scanf("%d",&counter ); 

} while (counter==1);

    

    return 0;

}
