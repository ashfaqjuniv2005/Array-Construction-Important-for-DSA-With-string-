// Copy elements from 2 arrays to another array

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

    int n,m;scanf("%d",&n);
    int a[n],b[m];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int c[m+n];
     for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    
     for(int i=0;i<m;i++){
        c[i+n]=b[i];
    }

    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    
    return 0;
}
