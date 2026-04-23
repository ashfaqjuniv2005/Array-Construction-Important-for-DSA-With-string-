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
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count0=0, count1=0, count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;

    for (int i = 0; i < n; i++) {
        if(a[i]==0) count0++;
        else if(a[i]==1) count1++;
        else if(a[i]==2) count2++;
        else if(a[i]==3) count3++;
        else if(a[i]==4) count4++;
        else if(a[i]==5) count5++;
        else if(a[i]==6) count6++;
        else if(a[i]==7) count7++;
        else if(a[i]==8) count8++;
        else if(a[i]==9) count9++;
    }

    printf("%d -> %d\n", 0, count0);
    printf("%d -> %d\n", 1, count1);
    printf("%d -> %d\n", 2, count2);
    printf("%d -> %d\n", 3, count3);
    printf("%d -> %d\n", 4, count4);
    printf("%d -> %d\n", 5, count5);
    printf("%d -> %d\n", 6, count6);
    printf("%d -> %d\n", 7, count7);
    printf("%d -> %d\n", 8, count8);
    printf("%d -> %d\n", 9, count9);
    

    return 0;
}
