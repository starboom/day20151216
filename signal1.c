#include <stdio.h>
//高级信号发送函数 sigqueue
void hand(int s)
{
	printf("%d sigint\n",s);
	int i;
	for(i=0;i<10;i++)
	{
		printf("s = %d : i= %d\n",s,i);
		sleep(1);
	}
}

int main(int argc, char const *argv[])
{
	signal(2,hand);
	while(1);
	return 0;
}


//时钟信号 alarm
/*
	alarm(); 对当前进程发送时钟信号
	settimer(); 设置一个定时器（定时发送一个信号）
*/