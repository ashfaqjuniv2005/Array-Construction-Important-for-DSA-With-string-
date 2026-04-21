// Inserting a value in array
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
            int arr[n+1];
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            
            int idx,val;
            scanf("%d%d",&idx,&val);
            for(int i=n;i>idx;i--){
                arr[i]=arr[i-1];
            }
            // for(int i=n;i>idx;i--)
            // for(int i=n;i>=idx+1;i--)
            arr[idx]=val;
            printf("Array after insertion is:\n");
            for(int i=0;i<=n;i++){
                printf("%d ",arr[i]);
            }
  
    return 0;
}
