#include <stdio.h>

int main()
{
    float num = 0;
    double sum = 0;
    int status;

    do
    {
        printf("������Ϸ������֣�");
        do
        {
            sum += num;
            status = scanf("%f", &num);
        } while (getchar() != '\n' &&status == 1);
    } while (status == 1);

    printf("����ǣ�%.2lf\n", sum);
    return 0;
}