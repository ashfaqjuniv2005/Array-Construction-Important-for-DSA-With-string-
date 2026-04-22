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

    char a[10000],b[10000];
    scanf("%s %s",&a,&b);
    int i=0;
    while(true){
        if(a[i]=='\0'&&b[i]=='\0'){
            printf("Both are Equal.");
            break;
        }
        else if(a[i]=='\0'){
            printf("A is Smaller.");
            break;
        }
        else if(b[i]=='\0'){
            printf("B is Smaller.");
            break;
        }
        else if(a[i]>b[i]){
            printf("B is smaller. ");
            break;
        }
        else if(a[i]<b[i]){
            printf("A is smaller.");
            break;
        }
        else if(a[i]==b[i]){
            i++;
        }
    }

    return 0;
}
