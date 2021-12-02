#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	FILE* file = fopen("input.dat", "r");
	
	int new_measure;
	int old_measure=0;
	int inc = 0;

	fscanf(file, "%d", &new_measure);

	while(!feof(file)){
		if (new_measure > old_measure){
			inc++;
		}
		old_measure = new_measure;
	       	fscanf(file, "%d", &new_measure);
	}
	inc--;
	printf("%d\n", inc);
}
