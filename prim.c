#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned int n,i;
	bool ok;

	printf("NR=  ");
	scanf("%d",&n);

	if (n == 1 || n == 0) ok = 0;
	for (i = 0 ; i <= n/2 && ok; i++)
		if (n % i == 0) ok = 0; 

	if (ok) printf("N e prim\n");
	else printf("N nu e prim\n");

	return 0;
}
