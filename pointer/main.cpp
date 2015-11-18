//
//  main.cpp
//  pointer
//
//  Created by 李晓晋 on 15/11/18.
//  Copyright © 2015年 李晓晋. All rights reserved.
//
#include <iostream>


    int main(int argc, const char * argv[]) {
        // insert code here...
        int a[4];
        int *p;
        a[0]=10;
        a[1]=20;
        a[2]=30;
        a[3]=40;
        p=a;
        printf("&a[0]=%x &a[1]=%x &a[2]=%x &a[3]=%x a=%x \n",&a[0],&a[1],&a[2],&a[3],a);
        printf("a[0]=%d \n",*(p+2));
        return 0;
    }


