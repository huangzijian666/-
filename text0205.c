//用于C语言练习
#include <stdio.h>
int main(void)
{
   float a;
    printf("请输入风速：");
    scanf("%f,&a");
    if(a<1)
    printf("Calm/n");
    else if(a<=3)
    printf("Light air");
        else if(a<=27)
    printf("Breeze");
        else if(a<=47)
    printf("Gale");
        else if(a<=63)
    printf("Storm");
    else 
    printf("Hurricame");

    return 0;
}