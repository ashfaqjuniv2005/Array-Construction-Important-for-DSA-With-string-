#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <assert.h>
#include <errno.h>


int main()
{

    char a[10000],b[10000];
    scanf("%s %s",&a,&b);
    int lena=strlen(a);
    int lenb=strlen(b);
    for(int i=0;i<=lenb;i++){
        a[i+lena]=b[i];
    }
    printf("%s %s",a,b);

    return 0;
}
