//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
#include <stdio.h> 
int main() {
	int num,i,n=0,bit[10];
	scanf("%d",&num);
	for (i=0;i<10;i++) {
		bit[i]=num%10;
		num=num/10;
		n++;
		if (num==0) {
			break;
		}
	}
	for (i=n-1;i>=0;i--) {
		printf("%d",bit[i]);
		if (i!=0) {
			printf(" ");
		}
	}
    return 0;
}
