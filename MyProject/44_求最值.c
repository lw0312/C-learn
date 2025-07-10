//#include<stdio.h>
//
//int Max(int arr[], int len);
//
//int main() {
//
//	int arr[] = { 123,512,141,514,512,623,135 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	// 求数组最大值，并返回
//	int max = Max(arr, len);
//	printf("%d", max);
//
//	return 0;
//}
//
//int Max(int arr[],int len) {
//	int max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (max <= arr[i]) {
//			max = arr[i];
//		}
//	}
//
//	return max;
//}