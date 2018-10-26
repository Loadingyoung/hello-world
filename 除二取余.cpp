#include <stdio.h>
int main () {
	int num,x;
	printf("ÇëÊäÈëÄãµÄÊı"); 
	scanf("%d",&num);
	while(1) {
		x=num%2;
		num=num/2;
		printf("%d\t%d\n",x,num);
		if(num==0) {
			break;
		}
	}
	return 0;
}
