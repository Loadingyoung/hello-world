//������·�����
//ax + by = c
//dx + ey = f
//ע������/�������������
#include<stdio.h>
int main() {
	double a,b,c,d,e,f;
	double x,y;
	printf("�����������һ����Ԫһ�η��̵�ϵ���ͳ����");
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("����������ڶ�����Ԫһ�η��̵�ϵ���ͳ����");
	scanf("%lf%lf%lf",&d,&e,&f);
	if (a*e-b*d==0) {
		if (a*f-c*d!=0 || c*e-b*f!=0) {
			printf("����������޽⣡");
		}
		else {
			printf("����������������⣡");
		}
		 
	}
	else {
		x=(c*e-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
		printf("���������Ľ�Ϊ:x=%lf\ty=%lf",x,y);
	}
	return 0;
} 
