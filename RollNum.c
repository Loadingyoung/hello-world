//回文数：正读与反读相等的数
//2018/11/14 更新
#include <stdio.h>
int main() {
		int num,k,a;
		int num0=0,num1=0,num2=0,j=1;
		scanf("%d",&num);
		num0=num1=num;
		num=num/10;
		while (num>0) {
			num=num/10;
			j++;
		}
		for (k=0;k<j;k++) {
			a=num1%10;
			num1=num1/10;
			num2=num2*10+a;
		}
		if (num0==num2) {
			printf("%d是回文数！",num0);
		}
		else {
			printf("%d不是回文数！",num0);
		}
	return 0;
}
