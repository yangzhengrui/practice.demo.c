#include <stdio.h>

#define FIRST_KG 23
#define NEXT_KG 14
int main()
{
    int weight,cost;
    printf("公斤 ——— 花费(元)：\n");
    for (weight=1,cost=FIRST_KG; weight<=20;weight++,cost+=NEXT_KG)
    {
        printf("%3d —— %3d\n",weight,cost);
    }
    
    return 0;   
}