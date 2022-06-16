#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int LinearSearch(int* arr, int target){
	int j;
	for(j = 0; j < N; j++){
		if(arr[j] == target){
			return j;
		}
	}
	return -1; // returns -1 if target not found in array
}

int main(void){
	srand(time(NULL));
	int arr[N];
	int i;
	int userInput = 0;
	int result;
	for(i = 0;i < N; i++){
		arr[i] = rand() % 50 + 10;
	}
	printf("Array: ");
    for(i = 0; i < N; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	while(userInput >= 0){
		printf("Enter a value between 10 and 50: ");
		scanf("%d", &userInput);
		result = LinearSearch(arr, userInput);
		printf("Index of target value: %d\n", result);
	}
	return 0;
}

