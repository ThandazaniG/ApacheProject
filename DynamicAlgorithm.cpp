//
// Created by Thandazani Gwampa on 2023/08/21.
//
int dynamic_implementation(int n){
    int F[n+1];
    F[0] = 0;
    F[1] = 1;
    F[2] = 2;
    for(int i = 3; i <= n; i++){
        F[i] = F[i-3] + F[i-2];
    }
    return F[n];
}

