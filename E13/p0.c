#include <stdio.h>

int main()
{
    int count = 0;
    char ch;
    printf("������һ��Ӣ�ľ��ӣ�");
    while ((ch=getchar())!='\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            count++;
        }
    }

    printf("���ܹ�������%d����д��ĸ��\n",count);
    return 0;
}