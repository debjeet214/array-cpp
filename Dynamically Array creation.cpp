#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int* ptr;
    int n = 10;
    ptr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        ptr[i] = i + 1;
    }
    printf("The elements are: ");
 
    for (int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
