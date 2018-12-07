//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
//2018/11/14 更新
#include <stdio.h> 
int main() {
	int num;
    scanf("%d",&num);
    if (num%4!=0 || num%100==0&&num%400!=0 ) {
    	printf("%d不是闰年！",num);
	}
	else {
		printf("%d是闰年！",num);
	}
	return 0;
}
