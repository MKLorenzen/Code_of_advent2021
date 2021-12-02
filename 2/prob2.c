#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	FILE* file = fopen("input", "r");
	
	char cmd[20];
	int i;
	int x = 0;
	int y = 0;
	int aim = 0;

	fscanf(file, "%s %d", &cmd, &i);

	while(!feof(file)){
		if (strcmp(cmd, "forward") == 0){
			x += i;
			y += aim * i;
		}else if (strcmp(cmd, "down") == 0){
			aim += i;
		}else if (strcmp(cmd, "up") == 0){
			aim -= i;
		}

	       	fscanf(file, "%s %d", &cmd, &i);
	}
	printf("x: %d, y: %d, x*y: %d\n",x, y, x*y);
}

