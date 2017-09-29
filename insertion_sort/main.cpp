//
//  main.cpp
//  insertion_sort
//
//  Created by 村上候助 on 2017/09/29.
//  Copyright © 2017 村上候助. All rights reserved.
//
#include <iostream>
#include<stdio.h>

static const int N = 1000;

void trace(int A[], int n){
    int i;
    for ( i = 0; i < n; i++ ){
        if ( i > 0 ) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
}

void insertion_sort(int A[], int n){
    int i, j, v;
    for(i = 1; i < n; i++){
        v = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j --;
            trace(A, n);
        }
        A[j+1] = v;
        trace(A, n);
    }
}

int main(){
    int n, i;
    int A[N+1];
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ) scanf("%d", &A[i]);
    
    trace(A, n);
    
    insertion_sort(A,n );
    
    return 0;
}
