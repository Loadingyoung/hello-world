//��4��������������꣬����00��β����ݱ�400�����������ꡣ
//2018/11/14 ����
#include <stdio.h> 
int main() {
	int num;
    scanf("%d",&num);
    if (num%4!=0 || num%100==0&&num%400!=0 ) {
    	printf("%d�������꣡",num);
	}
	else {
		printf("%d�����꣡",num);
	}
	return 0;
}
