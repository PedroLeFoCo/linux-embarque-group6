#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int i=0;
	int sens=0;
	char speed_cmd[128];
	printf("Launching SMOOTH Fan control, done by: GROUPE 6\n\r");
	system("echo 0 > /sys/devices/platform/stm-pwm/pwm1");

	while(1)
	{
		while(sens==0)
		{
			i+=51;
			if (i>=255) {i=255;sens=1;}
			sprintf(speed_cmd,"echo %d > /sys/devices/platform/stm-pwm/pwm1",i);
			system(speed_cmd);
			printf("Value = %d \t Waiting 1 seconds...\n\r",i);
			sleep(1);
		}
		while(sens==1)
		{
			i-=51;
			if (i<=0) {i=0;sens=0;}
			sprintf(speed_cmd,"echo %d > /sys/devices/platform/stm-pwm/pwm1",i);
			system(speed_cmd);
			sleep(1);
		}
		
	}

    return 0;
}