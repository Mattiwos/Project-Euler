/*                           Largest palindrome product
A palindromic number reads the same both ways. The largest palindrome made from 
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/


# include <stdio.h>
# include <math.h>
int main(){
    int num1 = 999;
    int num2 = 999;
    int highnum1 = 0;
    int highnum2 =0;
    int largestproduct = 0;

    for (int i =num1; i > 100; i--){
        for (int e = num2; e > 100; e--){
            if ( ((i * e) % 1000) -  round((i * e) / 1000)  == 0 ){
                if ((i*e) >= largestproduct) {
                    largestproduct = (i*e);
                    highnum1 = i;
                    highnum2 = e;
                }
            }
        }

    }

    printf(" Highest num1 %d and Highest num2 %d and %d \n", highnum1,highnum2,largestproduct);

    return 0;
}