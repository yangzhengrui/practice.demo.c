#include <stdio.h>

int main()
{
    int num=0;
    long sum=0L;//0L��ʾ����Ϊlong��0
    int status;

    do
    {
        printf("������Ϸ������֣�");
        sum+=num;
        status = scanf("%d",&num);
    } while (status == 1);

    printf("����ǣ�%ld\n",sum);
    return 0;
}