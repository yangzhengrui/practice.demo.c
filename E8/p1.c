# include <stdio.h>

#define CIN(i) i*0.39
#define CLB(i) i*2.2
int main()
{
    char name[]="";
    float height ,weight;
    printf("请输入您的姓名：");    
    scanf("%s",&name);
    
    printf("请输入您的身高(cm)：");
    scanf("%f",&height);
    
    printf("请输入您的体重(kg)：");
    scanf("%f",&weight);
        
    printf("======正在为您转换======\n");
    printf("%s的身高是%.2f(in),体重是%.2f(lb)。\n",name,CIN(height),CLB(weight));
    return 0;
}