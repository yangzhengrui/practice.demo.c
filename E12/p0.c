#include <stdio.h>
#include <stdbool.h>

int main()
{
    int op1,op2;
    char ch;
    float result;
    bool invalid=false;

    printf("������ʽ�ӣ�");
    scanf("%d %c %d",&op1,&ch,&op2);

    switch (ch)
    {
    case '-':
        op2=-op2;
    case '+':
        result = (float)op1+op2;
        break;
    case '*':
        result = (float)op1*op2;
        break;
    case '/':
        if (op2!=0)
        {
            result = (float)op1/op2;
            break;
        }
        else
        {
            invalid=true;
            break;
        }
    }
    if (invalid)
    {
        printf("��������Ϊ�㣡\n");
    }
    else
    {
        printf("����ǣ�%.2f\n",result);
    }
    return 0;
}