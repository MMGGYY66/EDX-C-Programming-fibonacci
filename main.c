#include <stdio.h>

void printFibonacci(int number_of_elements);

int main(){
    int number_of_elements;
    printf("Enter the number of elements: ");
    scanf("%d",&number_of_elements);
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    printFibonacci(number_of_elements - 2);//number_of_elements-2 because 2 numbers are already printed
    return 0;
}

void printFibonacci(int number_of_elements) {
    static int first_number = 0, second_number = 1, third_number;
    if (number_of_elements > 0) {
        third_number = first_number + second_number;
        first_number = second_number;
        second_number = third_number;
        printf("%d ", third_number);
        printFibonacci(number_of_elements - 1);
    }
}
/*
 #include<stdio.h>
int main()
{
 int n1=0,n2=1,n3,i,number;
 printf("Enter the number of elements:");
 scanf("%d",&number);
 printf("\n%d %d",n1,n2);//printing 0 and 1
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed
 {
  n3=n1+n2;
  printf(" %d",n3);
  n1=n2;
  n2=n3;
 }
  return 0;
 }
 */