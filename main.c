//
//  main.c
//  FizzBuzz
//
//  Created by Bryce Ligaya on 6/8/18.
//  Copyright © 2018 Bryce Ligaya. All rights reserved.
//

#include <stdio.h>
int main()
{
int i;
for (i=1; i<=100; i++) //count to 100
    {
        //if divisible by 3 = Fizz
    if ((i%3) == 0)
        printf("Fizz\n");
        
        //if divisible by 5 = Buzz
    else if ((i%5) == 0)
        printf("Buzz\n");
        
        //if divisible by both 3 and 5 = FizzBuzz
    else if (i%5 == 0 || i%3 == 0)
        printf ("FizzBuzz\n");
    else
        printf("%d\n", i);
    }
return 0;
}
