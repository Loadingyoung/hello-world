//���һԪ���η��̵ĸ�
//����sqrt()����
//ע����û�н�
#include<stdio.h>
#include<math.h> 
int main() {
	double a,b,c;
	double x1,x2;
	printf("����������һԪ���η��̵�ϵ���ͳ����");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (b*b-4*a*c<0) {
		printf("��һԪ���η�����ʵ����!");
	} 
	else {
		if (b*b-4*a*c==0) {
			x1=x2=-b/(2*a);
			printf("��һԪ���η��̵ĸ�Ϊ��x1=x2=%lf",x1);
		} 
		else {
			x1=(-b-sqrt(b*b-4*a*c))/(2*a);
			x2=(-b+sqrt(b*b-4*a*c))/(2*a);
			printf("��һԪ���η��̵ĸ�Ϊ��x1=%lf\tx2=%lf",x1,x2);
		}
	}
	return 0;
} 
