//�������������뷴����ȵ���
//2018/11/14 ����
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
			printf("%d�ǻ�������",num0);
		}
		else {
			printf("%d���ǻ�������",num0);
		}
	return 0;
}
