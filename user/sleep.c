#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char **argv) {
	if(argc < 2) {
		printf("usage: sleep <ticks>\n");
	}
	int s = atoi(argv[1]) ;
	printf("sleep start %d s\n", s);
	sleep(s * 10);
	printf("sleep end %d s\n", s);
	exit(0);
}
