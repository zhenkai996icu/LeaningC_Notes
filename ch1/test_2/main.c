/*************************************************************************
	> File Name: main.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/ 6 11:09:36 2019
 ************************************************************************/

/*
2、题目：企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
 */

// 本级速算扣除额=上一级最高利润×（本季利率-上一级利率）+上一级速算扣除数
//

#include<stdio.h>

void bonus(double i){          // n为利润                    // 利润等级
	double bonus, bonus1, bonus2, bonus4, bonus6, bonus10;

	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus4 = bonus2 + 200000 * 0.05;
	bonus6 = bonus4 + 200000 * 0.03;
	bonus10 = bonus6 + 400000 * 0.015;
	
	if (i <= 0){
		printf("企业利润为负.\n");
	} else {
		if(i<=100000) {
			bonus=i*0.1;
		} else if(i<=200000) {
			bonus=bonus1+(i-100000)*0.075;
		} else if(i<=400000) {
			bonus=bonus2+(i-200000)*0.05; 
		} else if(i<=600000) {
			bonus=bonus4+(i-400000)*0.03;
		} else if(i<=1000000) {
			bonus=bonus6+(i-600000)*0.015;
		} else if(i>1000000) {
			bonus=bonus10+(i-1000000)*0.01;
		}
		printf("奖金提成为:%2f\n", bonus);
	}
}

int main()
{
	double i;
	printf("输入企业利润：");
	scanf("%lf", &i);
	bonus(i);
	return 0;
}