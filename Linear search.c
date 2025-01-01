#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[],int size, int target){
 for(int i=0;i<size;i++){
    if (arr[i] == target){
        return i;}}
    return -1;

}
int main()
{
    int arr[]={1,4,8,5,74,9};
    int target = 9 ;
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = linearSearch(arr,size,target);
    if(index!=-1)
        printf("Element found at index %d\n",index);
    else
    printf("Element is not found\n");
    return 0;
}
