//armstrong from n1 to n2

#include <stdio.h>
#include <math.h>
int main(){
	int n1, n2, a, b, c, d;
	printf("enter the range: ");
	scanf("%i%i", &n1, &n2);
	for(int i = n1+1; i < n2; i++){
		a = log10(i)+1;
		b = i;
		c = 0;
		while(b != 0){
			d = b%10;
			c = c + pow(d, a);
			b = b/10;
		}
		if(c == i){
			printf("%i ", c);
		}
	}
	return 0;
}