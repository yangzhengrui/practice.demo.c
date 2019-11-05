#include <stdio.h>

#define FQ 3.7
#define JL 7
#define XQ 1.3
#define KXC 8
#define YC 2.4
#define YCA 9
#define HG 6.3
#define BLB 0.5
#define CALC(n,m) n*0.5*m

int main()
{
    printf("小明需要支付%.2f元\n",CALC(FQ,2)+CALC(KXC,1)+CALC(YCA,1));
    printf("小红需要支付%.2f元\n",CALC(XQ,3)+CALC(YC,0.5)+CALC(HG,5));
    printf("小甲鱼需要支付%.2f元\n",CALC(HG,10)+CALC(BLB,20));
    return 0;
}
