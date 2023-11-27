#include "ssShell.h"

int main(void)
{
	pid_t pid;
	
	pid = getpid();
	printf("PID: %d", pid);

	return (0);
}

