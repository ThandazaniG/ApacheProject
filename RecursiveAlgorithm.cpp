//
// Created by Thandazani Gwampa on 2023/08/21.
//
int recursive_implementation(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return recursive_implementation(n - 3) + recursive_implementation(n - 2);
}