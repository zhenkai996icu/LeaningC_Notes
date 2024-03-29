/*************************************************************************
	> File Name: mian.c
	> Author: zhenkai
	> Mail: 996.icu.cn@gmail.com 
	> Created Time: 五  9/ 6 10:43:17 2019
 ************************************************************************/
/*
* 1、问题描述
用1、2、3、4共4个数字能组成多少个互不相同且无重复数字的三位数？都是多少？
* 2、问题分析
求互不相同的三位数，可以一位一位的去确定，先确定百位、再确定十位、个位，再将各位上的数值进行比较，若互不相同则输出。
* 3、算法设计
1) 利用多重循环嵌套的for语句实现。
2) 用三重循环分别控制百位、十位、个位上的数字，它们都可以是1、2、3、4。
3) 在已组成的排列数中，还要再去掉出现重复的1、2、3、4这些数字的不满足条件的排列。
*/

#include<stdio.h>

void Three_number(){
	int i, j, k;
	int count = 0;
	printf("输出实例:\n");
	for (i = 1; i < 5; i++){
		for (j = 1; j < 5; j++){
			for (k = 1; k < 5; k++){
				if (i != k && i != j && j != k){         /*判断三个数是否互不相同*/
					count++;
					printf("%d%d%d ", i, j, k);
					if (count % 4 == 0)                  /*每输出4个数换行*/
						printf("\n");
				}
			}
		}
	}
	printf("\n组成的互不相同的三位数共有:%d个\n", count);
}

int main(){
	printf("输入实例:\n1、2、3、4共4个数字能组成多少个互不相同且无重复数字的三位数？\n");
	Three_number();
	return 0;
}
