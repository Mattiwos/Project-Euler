/*
Space used:16 - 8 KB - 4,248 bytes
        Even Fibonacci numbers

Each new term in the Fibonacci sequence is generated by 
adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose 
values do not exceed four million, find the sum of the even-valued terms.
*/
# include <stdio.h>

int main(){
   
    int sum = 0;
    int pprev = 1;
    int prev = 2;
    int curr = 2;
    if (curr%2 == 0)sum+=curr;

    while (curr <= 4000000){

        curr = prev + pprev;
        if (curr%2 == 0)sum+=curr;
        pprev = prev;
        prev = curr;

    }
   
    return sum;
}
//Answer = 4613732