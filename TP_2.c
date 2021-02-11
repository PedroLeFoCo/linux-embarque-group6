#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    printf("Launching Fan control, done by: GROUPE 6\n\r");
	
	while(1)
	{
		system("echo 150 > /sys/devices/platform/stm-pwm/pwm1");
		
		printf("Waiting 3 seconds...\n\r");
		sleep(3);
		
		system("echo 200 > /sys/devices/platform/stm-pwm/pwm1");
		
		printf("Waiting 3 seconds...\n\r");
		sleep(3);
		
		system("echo 255 > /sys/devices/platform/stm-pwm/pwm1");
		
		printf("Waiting 4 seconds...\n\r");
		sleep(4);
		
		printf("Done\n\r");
	
	}

    return 0;
}