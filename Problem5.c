/**                    Smallest multiple
 
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 
 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 
 
 */


# include <stdio.h>

int main(){
    int test = 0;
    int tt =0; //false
    int limitdiv = 20;
    while (1==1){
        test++;
        for (int i=1;i<=limitdiv; i++){
            if (test %i == 0) tt++;
            else {
                tt =0;
                break;
            }

        }
        if (tt >= limitdiv){
            break;
        }

        

    }    
    
    return test;

}
/**
 * Answer = 232792560
 * 469491st person
 * 
 * 
 * 
 */