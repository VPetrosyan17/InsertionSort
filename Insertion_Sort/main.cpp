#include <iostream>

void insertionSort(int* arr, int size){
	for(int step = 1; step < size; ++step){
		int key = arr[step];
		int x = step - 1;

		//Compare key with each element on the left of it until smaller than it found
		while(key < arr[x] && x >= 0){
			arr[x + 1] = arr[x];
			--x;
		}
		arr[x + 1] = key;
	}
}

void printArray(int* arr, int size){
	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
}

int main(){
	int array[] = {4, 6, 8, 2, 9, 0};
	int size = sizeof(array)/sizeof(array[0]);

	std::cout << "Unsorted array: " ;
	printArray(array, size);
	std::cout << std::endl;

	std::cout << "Sorted array: " ;
	insertionSort(array, size);
	printArray(array, size);
	std::cout << std::endl;
}
