#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void SelectionShort (int data[], int n)
{
	int i, j, idx_low;
	for (i = 0; i < n - 1; i++) {
		idx_low = i;
		for (j = i + 1; j < n; j++)
		if (data[idx_low] > data[j]) idx_low = j;
		if (idx_low > i) swap(&data[i], &data[idx_low]);
	
	}
}



int main()
{
	int data[] = (14, 6, 23, 18, 7, 47, 2, 83, 16, 38);
	int n = sizeof (data) / sizeof(data[0]);
	
	SelectionSort(data,n);
}
