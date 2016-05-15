//
//  main.c
//  TestWork
//
//  Created by Anil Yadav on 15/05/16.
//  Copyright © 2016 Sandford Univercity. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float fTemp;
    printf("Enter the Temp in F: ");
    scanf("%f", &fTemp);
    float cTemp = (fTemp -32) / 1.8;
    printf("%f.1f degree celsius " , cTemp + 1);
    return 0;
}
