# include <stdio.h>

#define CALC(c) (c-32)*5/9

int main()
{
    float i;
    printf("�����뻪�϶ȣ�");
    scanf("%f",&i);
    printf("ת��Ϊ���϶��ǣ�%.2f\n",CALC(i));
    return 0;
}