#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void hand(int s)
{
	printf("s = %d\n",s );
}

int main(int argc, char const *argv[])
{
	signal(14,hand);
	alarm(3);
	while(1)
	{
		sleep(3);
		// alarm(3);
		printf("13\n");
	}
	return 0;
}