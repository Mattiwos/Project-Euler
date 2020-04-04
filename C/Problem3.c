/*    Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
int main(){
	calculateallprimenum();

	printf("%ld \n",largestprimefactor(13195));
	printf("%ld \n",largestprimefactor(600851475143));
	return 0;
}

int largestprimefactor(long int prime){
	long int largeprime = prime;
	long int i =0;
	while (1==1){
		i++;
		if (largeprime == i){
			break;
		}
		if (largeprime%i == 0){
			largeprime /=i;        
		}

	}
		
	
	return i;
}
int calculateallprimenum(){
	int test = 0;
	while (1==1){
		while (1==1){
			
		}
		test++;
	}
	return test;

}
/*
 * 525684th Person
 * Answer = 6857
 */