#include "lchild.h"
#include <stdio.h>
#define pSizeof(a) printf("sizeof instance = %lx\n", sizeof(a))
int main()
{
    lchild *b = new lchild();
    base *p = static_cast<base *>(b);
    lbase *q = static_cast<lbase *>(b);
    pSizeof(*b);
    pSizeof(*q);
    pSizeof(*p);
    printf("p base = %lx\n", (long)p);
    printf("q base = %lx\n", (long)q);
    return 1;
}
