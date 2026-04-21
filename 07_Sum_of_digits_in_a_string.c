// string to digit sum( String should be a digit(Example="12345")
// Problem link= https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

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

    char string[1000005];
    scanf("%s",string);
    int length=strlen(string)  ;
    int sum=0;
    for(int i=0;i<length;i++){
          sum+=string[i]-'0';
        }
    printf("%d",sum);

    
    return 0;
}
