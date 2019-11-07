# include <stdio.h>
# include <math.h>

int main()
{
    float price, area, yir, mir;//单价 面积 年利率 月利率
    float interest, loan;//利息、贷款总额
    float ave_repay, down_payment;//月均还款 首期付款
    float total_price,total_repay;//房款总额 还款总额
    int ratio, time;//按揭成数、按揭年数

    printf("请输入单价（元/平方）：");
    scanf("%f",&price);
    printf("请输入面积：");
    scanf("%f",&area);
    printf("请输入按揭成数：");
    scanf("%d",&ratio);
    printf("请输入按揭年数：");
    scanf("%d",&time);
    printf("请输入当前基准年利率：");
    scanf("%f",&yir);
    total_price = price*area;
    down_payment=total_price*0.3;
    loan=total_price-down_payment;
    mir=yir/100/12;
    int month_time=time*12;
    float loan_balance=total_price*ratio*0.1;
    ave_repay=loan_balance*(mir*pow((1+mir),month_time))/(pow((1+mir),month_time)-1);
    total_repay=ave_repay*month_time;
    interest=total_repay-loan_balance;
    printf("========= 报告结果 =========\n");
    printf("房款总额：%.2f元\n",total_price);
    printf("首期付款：%.2f元\n",down_payment);
    printf("贷款总额：%.2f元\n",loan);
    printf("还款总额：%.2f元\n",total_repay);
    printf("支付利息：%.2f元\n",interest);
    printf("月均还款：%.2f元\n",ave_repay);
    return 0;
}