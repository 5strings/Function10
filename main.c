//
//  main.c
//  Calling function inside fuction
//
//  Created by Eun Jae Lee on 23/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Nesting fuction

#include <stdio.h>

void myData(void);
int calcData(int,int);

int main() {

    myData();
   // getch();
}

void myData(){
    int a,b,greater;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    
    greater = calcData(a, b);

    if (a>b) {
        printf("Number %d is greater than %d \n",greater,b);
    } else {
        printf("Number %d is greater than %d \n",greater,a);
    }
    
}

int calcData(int x, int y) {
    if(x>y)
        return x;
    else
        return y;
}
