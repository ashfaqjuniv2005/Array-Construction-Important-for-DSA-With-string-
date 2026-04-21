// Pallindrome array

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
    scanf("%d",&n);
    int arr[n];
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=1;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            printf("NO\n");
            flag=0;
            break;
        }
    }
    if(flag==1) printf("YES\n");
     
    return 0;
}
