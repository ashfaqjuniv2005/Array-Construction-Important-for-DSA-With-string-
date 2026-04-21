// Counting numbers in a word
// Problem link= https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F


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

    
     int t;scanf("%d",&t);
     while(t--){
        char s[110];
        scanf("%s",s);
        int n=strlen(s);
        if(n>10){
            printf("%c%d%c\n",s[0],n-2,s[n-1]);
        }
        else{
            printf("%s\n",s);
        }
     }
     
    return 0;
}
