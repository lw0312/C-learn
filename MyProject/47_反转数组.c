//#include<stdio.h>
//
//int TraversalArr(int arr[], int len);
//
//int main() {
//
//	int arr[5] = {0};
//	
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < len; i++)
//	{
//		printf("请输入第%d个元素:", i+1);
//		scanf("%d", &arr[i]);
//	};
//	// 遍历
//	TraversalArr(arr, len);
//
//	// 反转数组
//	int i = 0;
//	int j = len - 1;
//	while (i < j) {
//		int temp = arr[i];
//		 arr[i] = arr[j];
//		 arr[j] = temp;
//		 i++;
//		 j--;
//	}
//
//	printf("——————————————————————————————————————————\n");
//	// 遍历
//	TraversalArr(arr, len);
//
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