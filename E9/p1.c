# include <stdio.h>
# include <math.h>


#define P1(r) 10000 * (1 + r)
#define P2(r,n) 10000 * (1 + r * n)
#define P3(r,n) 10000 * pow(1 + r,n)

int main()
{
    printf("一次性定期存 5 年:%2.f\n",P1(1.75));
    printf("先存 3 年定期，到期后本息再存 2 年定期:%2.f\n",P2(2.75,3)+P2(2.25,2));
    printf("存 1 年定期，到期后本息再存 1 年定期，连续存 5 次:%2.f\n",P3(2.75,5));
    return 0;
}