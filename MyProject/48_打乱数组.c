//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int TraversalArr(int arr[], int len);
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(int);
//	
//	srand(time(NULL));
//
//	// 打乱数组
//	for (int i = 0; i < len; i++)
//	{
//		int num = rand() % 5;
//		int temp = arr[i];
//		arr[i] = arr[num];
//		arr[num] = temp;
//	};
//	
//	// 遍历
//	TraversalArr(arr, len);
//
//	return 0;
//}
//
//int TraversalArr(int arr[],int len) {
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}