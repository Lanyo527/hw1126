#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int recursiveMaximum(int *l,int size_i){
    int answer,max;
    if(size_i<=1){
        answer= *l;
        return answer;
    }
    int prev_max = recursiveMaximum(l, size_i - 1);
    return (prev_max > l[size_i - 1]) ? prev_max : l[size_i - 1];
}
int main(){
    srand(time(0));
    int list[10];
    int result;
    while(1){
    for(int i=0;i<10;i++){
        list[i]=rand()%100;
        printf("%d,",list[i]);
    }
    printf("\n\n");
    
    result = recursiveMaximum(list,sizeof(list)/sizeof(list[0]));
    printf("Maximum value is: %d\n", result);   
    system("pause");
    printf("\n\n");
    }
    return 0;
}