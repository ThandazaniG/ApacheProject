#include <stdio.h>
#include "DynamicAlgorithm.cpp"
#include "RecursiveAlgorithm.cpp"
#include "IterativeAlgorithm.cpp"

int main() {
    printf("Dynamic Algorithm:\n");
    for(int i = 0; i<10; i++) {
        printf("%d ", dynamic_implementation(i));
    }

    printf("\nRecursive Algorithm:\n");
    for(int i = 0; i<10; i++) {
        printf("%d ", recursive_implementation(i));
    }

    printf("\nIterative Algorithm:\n");
    for(int i = 0; i<10; i++) {
        printf("%d ", iterative_implementation(i));
    }

}