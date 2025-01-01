#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, factorial =1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i=1; i<= n; i++){
        factorial *=i;
    }
    printf("%d! = %d\n",n,factorial);

    return 0;
}
