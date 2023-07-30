#include <stdio.h>
int main()
{
    char name[20];
    int byear,age;
    printf("Enter Student Name: ");
    scanf("%s",&name);
    printf("Enter Birth Year: ");
    scanf("%d",&byear);
    age=2023-byear;
    printf("%s your age is %d \n\n",name,age);
    
    return 0;
}