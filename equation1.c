//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解
#include<stdio.h>
#include<math.h> 
int main() {
	double a,b,c;
	double x1,x2;
	printf("请依次输入一元二次方程的系数和常数项：");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (b*b-4*a*c<0) {
		printf("该一元二次方程无实数根!");
	} 
	else {
		if (b*b-4*a*c==0) {
			x1=x2=-b/(2*a);
			printf("该一元二次方程的根为：x1=x2=%lf",x1);
		} 
		else {
			x1=(-b-sqrt(b*b-4*a*c))/(2*a);
			x2=(-b+sqrt(b*b-4*a*c))/(2*a);
			printf("该一元二次方程的根为：x1=%lf\tx2=%lf",x1,x2);
		}
	}
	return 0;
} 
