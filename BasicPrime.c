//素数是只有1和本身是因子的数
//2018/11/14 更新
#include <stdio.h> 
int main() {
	int num,i,n;
	scanf("%d",&num);
	for (i=2;i<num;i+=1) {
		n=num%i;
		if (n==0) {
			break;
		}
	}
	if (num==1) {
		printf("%d既不是素数，也不是合数！",num);
	}
	else if (n!=0 || num==2) {
		printf("%d是素数!",num);
	}
	else {
		printf("%d不是素数!",num);
	}
    return 0;
}
