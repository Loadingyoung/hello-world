//������������ÿλ���ִ�ӡ�������������Ҵ�ӡ���ո����֣�
//2018/11/14 ����
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
