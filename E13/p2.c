#include <stdio.h>

int main()
{
        int ch;
        int num = 0;

        printf("�������ת�����ַ�����");

        do
        {
                ch = getchar();

                if (ch >= '0' && ch <= '9')
                {
                        num = 10 * num + (ch - '0');
                }
                else
                {
                        if (num)
                        {
                                break; // ����������֣����˳�ѭ��
                        }
                }

        }
        while (ch != '\n');

        printf("����ǣ�%d\n", num);

        return 0;
}