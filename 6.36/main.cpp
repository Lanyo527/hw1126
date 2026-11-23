#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char* stringReverse(char* s){
    int i=0;
    
    do{
        i++;

    }while(s[i]!='\0');
    char *temp=(char*)malloc((i+1)*sizeof(char));
    //printf("Length of string is %d\n",i);
    for(int j=i-1;j>=0;j--){
        temp[i-j-1]=s[j];
    }
    temp[i]='\0';
    return temp;
}
int main(){
    char a[]="hello world";
    printf("Original string is: %s\n", a);
    printf("Reversed string is: %s\n", stringReverse(a));
    return 0;
}
