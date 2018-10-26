//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
int main() {
	double a,b,c,d,e,f;
	double x,y;
	printf("请依次输入第一个二元一次方程的系数和常数项：");
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("请依次输入第二个二元一次方程的系数和常数项：");
	scanf("%lf%lf%lf",&d,&e,&f);
	if (a*e-b*d==0) {
		if (a*f-c*d!=0 || c*e-b*f!=0) {
			printf("这个方程组无解！");
		}
		else {
			printf("这个方程组有无穷多解！");
		}
		 
	}
	else {
		x=(c*e-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
		printf("这个方程组的解为:x=%lf\ty=%lf",x,y);
	}
	return 0;
} 
