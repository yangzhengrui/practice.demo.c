# include <stdio.h>

#define CALC(c) (c-32)*5/9

int main()
{
    float i;
    printf("请输入华氏度：");
    scanf("%f",&i);
    printf("转换为摄氏度是：%.2f\n",CALC(i));
    return 0;
}