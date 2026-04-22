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


// You can use strlen function to print the length of the string

int main()
{

    char a[10000],b[10000];
    scanf("%s %s",&a,&b);
    int n=0;
     for(int i=0;b[i]!='\0';i++){
        n++;
     }
     
     printf("%d\n",n);
     for(int i=0;i<n;i++){
        a[i]=b[i];
     }
     printf("%s %s",a,b);

    return 0;
}
