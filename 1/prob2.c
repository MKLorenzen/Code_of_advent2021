#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	FILE* file = fopen("input.dat", "r");
	//windows under construction	
	int w1=0;
	int w2=0;

	int fw=0; //finished window

	int i=0;
	int new_measure;
	int inc = 0;

	fscanf(file, "%d", &new_measure);
	w1 = new_measure;
	fscanf(file, "%d", &new_measure);
	w1 += new_measure;
	w2 = new_measure;
	

	while(!feof(file)){
	       	fscanf(file, "%d", &new_measure);
		i++;

		
		w1 += new_measure;
		if (w1 > fw){
			inc++;
		}
		fw = w1;
		w1 = w2 + new_measure;
		w2 = new_measure;
	}
	inc--; //removing the first increase
	printf("%d\n", inc);
}
