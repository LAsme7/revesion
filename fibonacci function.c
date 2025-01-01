#include <stdio.h>
#include <stdlib.h>
void generateFibonacci(int n){
 int a=0,b=1,next;
 printf("Fibonacci serie: ");
 for(int i=0;i<n;i++){
        printf("%d ",a);
    next = a+b;
    a = b;
    b = next;
 }
 printf("\n");
}
int main()
{
    int n;
    printf("Enetr the number of terms :");
    scanf("%d",&n);
    generateFibonacci(n);
    return 0;
}
