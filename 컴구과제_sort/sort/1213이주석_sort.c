#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 7

void swap(int*, int*);
void bubble(int*);
void bubble_upgrade(int*);
void selection(int*);
void print(int*);

int main()
{
	int bubble_arr[MAX] = { 1,3,4,60,120,45,80 };
	int bubble_up_arr[MAX] = { 7,45,12,30,56,80,1 };
	int sele_arr[MAX] = { 32,12,67,50,89,37,0 };

	bubble(bubble_arr);
	bubble_upgrade(bubble_up_arr);
	selection(sele_arr);
	return 0;
}
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void bubble(int* arr)
{
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	print(arr);
}
void bubble_upgrade(int* arr)
{
	int flag = 1;
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				flag = 0;
				swap(&arr[j], &arr[j + 1]);
			}
		}
		if (flag == 1) {
			break;
		}
	}
	print(arr);
}
void selection(int* arr)
{
	for (int i = 0; i < MAX - 1; i++) {
		int min = i;
		for (int j = i + 1; j < MAX; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(&arr[i], &arr[min]);
	}
	print(arr);
}
void print(int* arr)
{
	for (int i = 0; i < MAX; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}