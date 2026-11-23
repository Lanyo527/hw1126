#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    
int main(){
    srand(time(0));
    int table[6][6]={0};
    int list[11]={0};
    int dice[2];
    long int score = 0;
    for(int t=0;t<36000;t++){
        score=0;
        for(int i=0;i<2;i++){
            dice[i]=rand()%6+1;
            score+=dice[i];
        }
        list[score-2]++;
        table[dice[0]-1][dice[1]-1]++;
        //printf("table[%d][%d] = %d\n",dice[0]-1,dice[1]-1,table[dice[0]-1][dice[1]-1]);
    }
    for(int i=0;i<11;i++)
        printf("%d =\t",i+2);
    printf("\n");
    for(int i=0;i<11;i++)
        printf("%d\t",list[i]);
    printf("\n");
    for(int i=0;i<11;i++)
        printf("%.1f %%\t",(list[i]/36000.0)*100);
    printf("\n");
    /*
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("%d\t",table[i][j]);
        }
        printf("\n\n");
    }
    */
    system("pause");
    return 0;
}