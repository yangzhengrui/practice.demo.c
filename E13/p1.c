#include <stdio.h>

int main()
{
    printf("请输入一个英文句子：");
    char ch;
    while ((ch=getchar())!='\n')
    {
        if (ch>='A'&& ch<='Z')
        {
            ch=ch+32;
        }
        else if (ch>='a'&& ch<='z')
        {
            ch=ch-32;
        }
        putchar(ch);
    }
    printf("\n");    
    return 0;
}