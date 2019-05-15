//https://www.spoj.com/problems/EXPECT/

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(true){
        scanf("%d", &n);
        printf("%d", n);
        fflush(stdout);     //clears the output buffer
        if(n==42)
            break;
    }
    return 0;
}
