// string conversion
// Problem link= https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

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

      char s[1100000];
        scanf("%s",s);
        int n=strlen(s);
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-32;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
            else if(s[i]==',')
            {
                s[i]=' ';
            }

        }
        printf("%s",s);
    return 0;
}
