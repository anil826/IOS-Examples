//
//  main.c
//  TestWork
//
//  Created by Anil Yadav on 15/05/16.
//  Copyright © 2016 Sandford Univercity. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>
int main(int argc, const char * argv[]) {
    int age =  12;
    if(age <=6){
        printf("You re in Kindra \n");
    }else if(age <=13){
        printf("you are Eleme \n");
        
    }else{
        printf("you are in HIGH \n");
    }
    
    bool isEle = ((age >=12) || (age <=13));
    printf("Hello Elementry %d\n",isEle);
    printf("Hello Elementry %d\n",(!true));
    
    bool isHigh = (age > 13) ? 1 : 0;
    printf("High school %d\n:" ,isHigh);
}
