# include <stdio.h>
# include <math.h>

int main()
{
    float price, area, yir, mir;//���� ��� ������ ������
    float interest, loan;//��Ϣ�������ܶ�
    float ave_repay, down_payment;//�¾����� ���ڸ���
    float total_price,total_repay;//�����ܶ� �����ܶ�
    int ratio, time;//���ҳ�������������

    printf("�����뵥�ۣ�Ԫ/ƽ������");
    scanf("%f",&price);
    printf("�����������");
    scanf("%f",&area);
    printf("�����밴�ҳ�����");
    scanf("%d",&ratio);
    printf("�����밴��������");
    scanf("%d",&time);
    printf("�����뵱ǰ��׼�����ʣ�");
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
    printf("========= ������ =========\n");
    printf("�����ܶ%.2fԪ\n",total_price);
    printf("���ڸ��%.2fԪ\n",down_payment);
    printf("�����ܶ%.2fԪ\n",loan);
    printf("�����ܶ%.2fԪ\n",total_repay);
    printf("֧����Ϣ��%.2fԪ\n",interest);
    printf("�¾����%.2fԪ\n",ave_repay);
    return 0;
}