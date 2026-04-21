// pallindrome string
// problem link= https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

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


        char s[1100];
        scanf("%s",s);
        int n=strlen(s);
        int flag=0;
     for(int i=0,j=n-1;i<j;i++,j--)
     {
         if(s[i]!=s[j])
         {
             flag=1;
             break;
         }
     }
     if(flag==0)
     {
         printf("YES\n");
     }
     else
     {
         printf("NO\n");
     }
    return 0;
}
