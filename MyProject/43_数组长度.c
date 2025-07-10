//#include<stdio.h>
//
//int TraversalArr(int arr[], int len);
//
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	// 计算数组长度
//	// 数组长度 = 整个数组占用的总字节数 / 数组单个元素的字节数
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	
//	TraversalArr(arr1, len);
//	/*数组的索引
//		最小索引：0
//		最大索引：长度 - 1
//	*/
//	return 0;
//}
//
//
//int TraversalArr(int arr[], int len) {
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}