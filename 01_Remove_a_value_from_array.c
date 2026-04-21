// Value removal from array

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

      int n;scanf("%d",&n);
            int arr[n];
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            int idx;scanf("%d",&idx);
            for(int i=idx;i<n-1;i++){
                arr[i]=arr[i+1];
            }
            printf("Array after deletion is:\n");
            for(int i=0;i<n-1;i++){
                printf("%d ",arr[i]);
            }
           
    return 0;
}
