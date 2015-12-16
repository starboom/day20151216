/*
	联合体(union)   将同一个空间共享于不同类型变量
	union 名称
	{
		//成员；
		//成员；
	}；
	联合体所有成员的地址都是联合体变量地址，
	联合体里面的各个元素都是处于一个相同的起始地址的。
	位结构体 是一个按照位计算存储大小结构体成员都是按位存储
	网络IP地址存放

	位域：位存储结构体成员
	位结构体定义
	struct 名称
	{
		成员：位数  八位中占几位
	}
*/
#include <stdio.h>
#include <unistd.h>

typedef struct B
{
	int a : 2;
	int b : 3;
	char c : 3;
}B;
union A
{
	int data;
	char ch[20];
	double a;
};

int main(int argc, char const *argv[])
{
	printf("%d\n",sizeof(B) );
	return 0;
}
