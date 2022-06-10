// name: Vincent Tam
// email: tam.v@northeastern.edu

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define LIMIT 50
#define RAND_RANGE 100

int main(){

  int source[LIMIT]; // array to hold data values
  
  bool valid[LIMIT]; // array that indicates which input values are valid

  int i;             // loop variable
  int j;             // loop variable
  int smallest;      // current smallest element

  //seed random numbers
  srand((unsigned)time(NULL));

  //initialize source array with random numbers from 0..RAND_RANGE
  printf("Source array:\n");
  	// INSERT YOUR CODE HERE
  for(i = 0; i < LIMIT; i++){
	source[i] = rand() % RAND_RANGE;
  }	
  //print out source array in rows of 20 elements
  for (i = 0; i < ((LIMIT / 20) + 1); i++) {
	  for (j = 0; j<20; j++) {
		  if (i * 20 + j < LIMIT) {
			  printf("%.2d ", source[i * 20 + j]);
		  }
	  }
	  printf("\n");
  }
  printf("\n");
			
  //Find the minimum element of your array

  // initialize the current smallest element
  smallest = source[0]; // set min to first element

    // INSERT YOUR CODE HERE
  j = 1; // set loop variable to 1;
  for(i = 0; i < LIMIT; i++){
	while(smallest > source[j])
	  smallest = source[j];
	  j++;
  }
  //Time complexity of search algorithm: O(N^2)

  //print out the smallest element
  printf("smallest element: %.2d\n", smallest);
 
  //print out source array in rows of 10 elements, 
  printf("Source array:\n");
  //format the output to print integers in nice columns of width 6, left justified

  // INSERT YOUR CODE HERE
  for (i = 0; i < ((LIMIT / 10) + 1); i++) {
	  for (j = 0; j<10; j++) {
		  if (i * 10 + j < LIMIT) {
			  printf("%-6d ", source[i * 10 + j]);
		  }
	  }
	  printf("\n");
  }
  printf("\n"); 
  return 0;
}
//Time complexity of print: O(N^2)
