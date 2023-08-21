//
// Created by Thandazani Gwampa on 2023/08/21.
//
int iterative_implementation(int n)
{
    int a = 0, b = 1, c = 2, d, i;
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    else if (n == 2)
        return c;
    else
        for (i = 3; i <= n; i++) {
            d = a + b;
            a = b;
            b = c;
            c = d;
        }
    return c;
}
