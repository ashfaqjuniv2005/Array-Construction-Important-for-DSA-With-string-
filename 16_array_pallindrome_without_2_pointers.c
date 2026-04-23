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

    int n;scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bool isPalindrome=true;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            isPalindrome=false;
            break;
        }
    }

    if(isPalindrome==true){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
