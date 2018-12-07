/*满足下列条件的自然数称为超级素数:
该数本身,所有数字之和,所有数字之积,以及所有数字的平方和都是素数.
例如113就是一个超级素数.
求[100,9999]之内:(1)超级素数的个数.(2)所有超级素数之和.(3)最大的超级素数.*/
//2018/11/14 更新
int sum_bit(int num) {
	int i,n=0,bit[10],sum=0;
	for (i=0;i<10;i++) {
		bit[i]=num%10;
		num=num/10;
		n++;
		if (num==0) {
			break;
		}
	}
	for (i=0;i<n;i++) {
		sum=sum+bit[i];
	}	
	return sum;
}

int multi_bit(int num) {
	int i,n=0,bit[10],mul=1;
	for (i=0;i<10;i++) {
		bit[i]=num%10;
		num=num/10;
		n++;
		if (num==0) {
			break;
		}
	}
	for (i=0;i<n;i++) {
		mul=mul*bit[i];
	}
	return mul;
}

int square_sum_bit(int num) {
	int i,n=0,bit[10],sqr=0;
	for (i=0;i<10;i++) {
		bit[i]=num%10;
		num=num/10;
		n++;
		if (num==0) {
			break;
		}
	}
	for (i=0;i<n;i++) {
		sqr=sqr+bit[i]*bit[i];
	}
	return sqr;
}

int isprime(int num) {
	int i,n;
	for (i=2;i<num;i+=1) {
		n=num%i;
		if (n==0) {
			break;
		}
	}
	if (num<=1) {
		return 0;
	}
	else if (n!=0 || num==2) {
		return 1;
	}
	else {
		return 0;
	}
}
#include <stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	if(isprime(num)==1
	&&isprime(sum_bit(num))==1
	&&isprime(multi_bit(num))==1
	&&isprime(square_sum_bit(num))==1) {
  		printf("%d是超级素数！",num);	
	}
	else {
		printf("%d不是超级素数！",num);
	}
	return 0; 
}
