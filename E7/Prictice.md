# S1E7：取值范围 | 课后测试题及答案 #

1. CPU 能读懂的最小单位是什么？
    A: 比特位
2. 一个字节可以表示的最大带符号整数是？
    A: 127
3. 假设在一个机器上，用 64 位来存放 long long 的值，请问它最大可以存放一个多少位的十进制数？
    A: 既然是要存放最大的那个整数，我们取 unsigned long long（符号位别浪费了~），它可以表示的最大值是 2^64 – 1，即 18446744073709551615。这是一个 20 位的十进制整数。
4. 浮点数的取值范围如下表，请问 float 类型变量可以存放的最小值是？
    A: -3.40282 * 10^38
5. 请写出以下二进制数（补码）对应的十进制数。
    A. 0000 1100 -> 8 + 4 = 12
    B. 1100 1100 -> -2^7 + 2^6 + 2^3 + 2^2 = -128 + 64 + 8 + 4 = -52
    C. 1010 1010 -> -2^7 + 2^5 + 2^3 + 2 = -128 + 32 + 8 + 2 = -86
    D. 1111 1111 -> -2^7 + 2^6 + 2^5 + 2^4 + 2^3 + 2^2 + 2 + 1 = -1
    E. 1000 0000 -> -2^7 = -128
6. 请写出以下十进制数在内存中的二进制存放形式（8 位，补码）。
    A. 8 -> 0000 1000
    B. 27 -> 16+8+0+2+1 -> 0001 1011
    C. 99 -> 64+32+0+0+0+2+1 -> 0110 0011
    D. -8 -> 1000 1000 -> 1111 0111 -> 1111 1000
    E. -126 -> 64+32+16+8+4+2+0 -> 1111 1110 -> 1000 0001 ->1000 0010
7. 写出下列有符号数对应的无符号数的十进制值（8 位）。
    例如 -8 的补码是 1111 1000，如果作为无符号数，其值则是 2^7 + 2^6 + 2^5 + 2^4 + 2^3 == 128 + 64 + 32 + 16 + 8 == 248
    A. 13 -> 8+4+0+1 -> 0000 1101 -> 13
    B. 122 -> 64+32+16+8+0+2+0 -> 0111 1010 -> 122
    C. -1 -> 1000 0001 -> 1111 1110 -> 1111 1111 -> 2^7 + 2^6 + 2^5 + 2^4 + 2^3 + 2^2 + 2^1 + 2^0 =128+64+32+16+8+4+2+1=255
    D. -14 -> 1000 1110 -> 1111 0001 -> 1111 0010 -> 2^7 + 2^6 + 2^5 + 2^4 + 2^1 =128+64+32+16+2=242
    E. -128 ->1111 1111 -> 1000 0000 -> 1000 0001 -> 2^7 + 2^0 =128+1=129
