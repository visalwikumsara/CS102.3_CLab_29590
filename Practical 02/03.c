#include<stdio.h>
int main()
{   
    int dist,time,Average;
    printf("Distance travlled? ");
    scanf("%d",&dist);
    printf("Time taken? ");
    scanf("%d",&time);
    Average=dist/time;
    printf("Average speed: %d\n",Average);



    return 0;
}