/*PRECIOUS WAITHERA
CT101/G/24685/24*/
#include <stdio.h>
int main(){
	int i, j;
	int score [2][2] = {{65, 92}, {35, 70}};
	for (i=0; i<2; i++){
		for (j = 0; j<2; j++){
			printf("score is %d\n",score[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
