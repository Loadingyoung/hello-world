//������ֻ��1�ͱ��������ӵ���
//2018/11/14 ����
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
		printf("%d�Ȳ���������Ҳ���Ǻ�����",num);
	}
	else if (n!=0 || num==2) {
		printf("%d������!",num);
	}
	else {
		printf("%d��������!",num);
	}
    return 0;
}
