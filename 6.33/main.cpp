#include <stdlib.h>
#include <stdio.h>
int binarySearch(int *array,int size,int search){
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(array[mid]==search){
            // printf("mid=%d\n");
            return array[mid];
        }
        else if(array[mid]<search){
            // printf("high,%d\n",array[mid]);
            return binarySearch(array+mid+1,high-mid,search);
        }
        else{
            // printf("low,%d\n",array[mid]);
            return binarySearch(array,mid,search);
        }
    }
    return -1;
}
int main(){
    int list[]={1,3,4,5,7,8,9,10,13,19,20,32};//12numbers
    int result = 0;
    result = binarySearch(&list[0],sizeof(list)/sizeof(int),13);
    printf("Element found at index: %d\n", result);
    result = binarySearch(&list[0],sizeof(list)/sizeof(int),9959);
    printf("Element found at index: %d\n", result);
    system("pause");
    return 0;
}