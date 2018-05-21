#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* solve(int a_size, int* a,int sum){
    // Complete this function
    int i,j,k,flag=0;

    if(a_size==0 || a_size==1)
    { return "YES";
    }

    int sum1=a[0];
    int sum2=sum-a[0]-a[1];

    for(i=2;i<a_size;i++)
    {
       if(sum1==sum2)
       {
         return "YES";
       }

        sum1=sum1+a[i-1];
        sum2=sum2-a[i];
    }


   return "NO";
}

int main()
{
    int T;
    scanf("%d", &T);
    for(int a0 = 0; a0 < T; a0++){
        int n;
        int sum=0;
        scanf("%d", &n);
        int *a = malloc(sizeof(int) * n);
        for(int a_i = 0; a_i < n; a_i++){
        	scanf("%d",&a[a_i]);
            sum+=a[a_i];
        }
        int result_size;
        char* result = solve(n, a,sum);
        printf("%s\n", result);
    }
    return 0;
}
