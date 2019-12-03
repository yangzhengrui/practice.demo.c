#include <stdio.h>

int main()
{
    int count = 0;
    char ch;
    printf("请输入一行英文句子：");
    while ((ch=getchar())!='\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            count++;
        }
    }

    printf("你总共输入了%d个大写字母！\n",count);
    return 0;
}