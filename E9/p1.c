# include <stdio.h>
# include <math.h>


#define P1(r) 10000 * (1 + r)
#define P2(r,n) 10000 * (1 + r * n)
#define P3(r,n) 10000 * pow(1 + r,n)

int main()
{
    printf("һ���Զ��ڴ� 5 ��:%2.f\n",P1(1.75));
    printf("�ȴ� 3 �궨�ڣ����ں�Ϣ�ٴ� 2 �궨��:%2.f\n",P2(2.75,3)+P2(2.25,2));
    printf("�� 1 �궨�ڣ����ں�Ϣ�ٴ� 1 �궨�ڣ������� 5 ��:%2.f\n",P3(2.75,5));
    return 0;
}