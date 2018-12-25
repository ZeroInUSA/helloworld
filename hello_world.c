/*
 * hello_world.c
 *
 *  Created on: Dec 24, 2018
 *      Author: Zero In USA Dev 3
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int i = 0;
	while (1){
		i++;
		printf("Loop %d\n",i);
    	usleep(2000000);
	}
	exit(EXIT_SUCCESS);
}

