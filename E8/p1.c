# include <stdio.h>

#define CIN(i) i*0.39
#define CLB(i) i*2.2
int main()
{
    char name[]="";
    float height ,weight;
    printf("����������������");    
    scanf("%s",&name);
    
    printf("�������������(cm)��");
    scanf("%f",&height);
    
    printf("��������������(kg)��");
    scanf("%f",&weight);
        
    printf("======����Ϊ��ת��======\n");
    printf("%s�������%.2f(in),������%.2f(lb)��\n",name,CIN(height),CLB(weight));
    return 0;
}