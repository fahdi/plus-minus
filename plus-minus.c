#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float fr1=0,fr2=0,fr3=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < n; arr_i++){
        if(arr[arr_i]>0) {
            fr1++;
        }
        if(arr[arr_i]<0) {
            fr2++;
        }
        if(arr[arr_i]==0) {
            fr3++;
        }
    }
    printf("%.6f\n", fr1/n );
    printf("%.6f\n", fr2/n );
    printf("%.6f\n", fr3/n );
    return 0;
}
