//bai 5.1
#include<stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	if(n <= 0)	printf("ERROR");
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for(int i = n-1; i >= 0; i--)
		printf("%d ", a[i]);
	
	int s=0;
	for(int i = 0; i < n; i++)
		s += a[i];
	printf("\n%d", s);
	return 0;
	
}
