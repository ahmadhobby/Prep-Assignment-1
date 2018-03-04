//
//  main.c
//  Assignment 1
//
//  Created by Ahmad Hobby on 2018-02-05.
//  Copyright © 2018 Ahmad Hobby. All rights reserved.
//

// Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz"

#include <stdio.h>

int main(void) {
    
    int i;
    
    for (i=1; i<=100; i++) {
    
        if (i % 15 == 0) {
            printf("%s\n", "Fizzbuzz");
        }
        else if (i % 3 == 0) {
            printf("%s\n", "Fizz");
        }
        else if (i % 5 == 0) {
            printf("%s\n", "Buzz");
        }
        else {
            printf("%d\n", i);
        }
    }
}


