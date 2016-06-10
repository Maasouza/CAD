#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


#ifndef ARRAY_SIZE
#define ARRAY_SIZE	1000
#endif

int main(){
  clock_t ti,tf;
  int i,j,k;
  char A[ARRAY_SIZE][ARRAY_SIZE];
  char B[ARRAY_SIZE][ARRAY_SIZE];
  char C[ARRAY_SIZE][ARRAY_SIZE];  
  srand(time(NULL));
  for(i = 0 ; i < ARRAY_SIZE ; i++){
  	for(j = 0 ; j < ARRAY_SIZE ; j++){
  		A[i][j] = (char)((lrand48()));
 		B[i][j] = (char)((lrand48()));
  		C[i][j] = 0;
  	}
  }
  for(j = 0 ; j < ARRAY_SIZE ; j++ ){
  	for(i = 0 ; i < ARRAY_SIZE ; i++ ){
  		for(k = 0 ; k < ARRAY_SIZE ; k++){
  			C[i][j] +=  A[i][k]*B[k][j];
  		}
  	}
  }
  return 0;
}
