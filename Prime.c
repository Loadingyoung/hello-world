/*����������������Ȼ����Ϊ��������:
��������,��������֮��,��������֮��,�Լ��������ֵ�ƽ���Ͷ�������.
����113����һ����������.
��[100,9999]֮��:(1)���������ĸ���.(2)���г�������֮��.(3)���ĳ�������.*/
//2018/11/14 ����
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
  		printf("%d�ǳ���������",num);	
	}
	else {
		printf("%d���ǳ���������",num);
	}
	return 0; 
}
