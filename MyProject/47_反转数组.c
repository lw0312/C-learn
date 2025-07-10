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
//		printf("萩補秘及%d倖圷殆:", i+1);
//		scanf("%d", &arr[i]);
//	};
//	// 演煽
//	TraversalArr(arr, len);
//
//	// 郡廬方怏
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
//	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
//	// 演煽
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