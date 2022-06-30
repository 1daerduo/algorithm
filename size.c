#include <stdio.h>

typedef struct A {
    char buf[3];
    char a1;
    long long a0;
}AA;

typedef struct b {
    AA a;
    char b;
}BB;

int main()
{
    AA A1;
    BB B1;
    printf("char :%ld longlong :%ld\r\n", sizeof(char), sizeof(long long));
    printf(" AA size: %ld b size:%ld \r\n", sizeof(A1), sizeof(B1));
}
