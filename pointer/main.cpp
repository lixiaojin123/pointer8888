//
//  main.cpp
//  pointer
//
//  Created by 李晓晋 on 15/11/18.
//  Copyright © 2015年 李晓晋. All rights reserved.
//
#include <iostream>
//#define N 100
int main(int argc, const char * argv[]) {
        // insert code here...
        int *a;
        int i,j,temp;
        int N;
        scanf("%d",&N);
        //a=(int *)malloc(N*4);
    a=new int[N];
    if(a==0)
        exit(0);
        for(i=0;i<N;i++)
            scanf("%d",&a[i]);
        for(i=0;i<N-1;i++)
        {
            for(j=0;j<N-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                 }
            }
        }
    
        for (i=0;i<N;i++)
           printf("%d\n",a[i]);
        free(a);
        return 0;
    }
