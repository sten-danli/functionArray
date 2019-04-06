#include<stdio.h>

void disArray(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", *p++);
	}
}


int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	disArray(arr, sizeof(arr) / sizeof(*arr)); //*arr 等价于 arr[0]
}