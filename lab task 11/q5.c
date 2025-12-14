#include <stdio.h>
#include <math.h>

struct File {
    char fileName[30];
    double originalSize;
    double reductionRate;
};

double compressSize(struct File *f, int k) {
    if (k == 0) return f->originalSize;
    double prev = compressSize(f, k - 1);
    double reduce = prev * f->reductionRate;
    return prev - reduce;
}

int main() {
    struct File f;
    int k;

    printf("Enter file name, original size, and reduction rate: \n");
    scanf("%s %lf %lf", f.fileName, &f.originalSize, &f.reductionRate);
    
    printf("Enter number of compression rounds: \n");
    scanf("%d", &k);
    
    double finalSize = compressSize(&f, k);
    
    printf("Estimated file size after %d rounds: %.2lf\n", k, finalSize);
    return 0;
}