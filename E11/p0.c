#include <stdio.h>

#define IF if(
#define THEN ){
#define ELSE }else{
#define FI ;}
#define INT int
#define BEGIN {
#define END }

INT main()
BEGIN
    INT i;
    printf("��������������:");
    scanf("%d",&i);

    IF i < 18
    THEN
        printf("��δ��18���꣬����ʹ���������\n");
    ELSE
        printf("������18���꣬��ӭʹ�ñ����򣬺ٺٺ�...\n");
    FI

    return 0;
END