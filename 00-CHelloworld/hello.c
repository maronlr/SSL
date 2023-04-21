#include <stdio.h>

int main(){
    FILE *output;
    output = fopen("output.txt", "w");
    fprintf(stdout, "Hello, World!");
    fprintf(output, "Hello, World!");
    return 0;
}