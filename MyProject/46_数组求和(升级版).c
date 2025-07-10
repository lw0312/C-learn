//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int Contains(int arr[], int len, int num);
//
//int main() {
//	srand(time(NULL));
//
//	int arr[10] = {0};
//	int sum = 0;
//	int average = 0;
//	int count = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < 10;)
//	{
//		int num = rand() % 10 + 1; 
//		int flag = Contains(arr,len,num);
//		if (flag != 1) {
//			arr[i] = num;
//			// 求和
//			sum += num;
//			i++;
//		}
//	}
//	// 求平均数
//	average = sum / len;
//	// 统计比平均数小的数有多少个
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] < average) {
//			count++;
//		}
//	}
//
//	printf("数组：[");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("]\n");
//
//	printf("和：%d\n", sum);
//	printf("平均数：%d\n", average);
//	printf("个数：%d\n", count);
//	return 0;
//}
//
//int Contains(int arr[],int len,int num) {
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == num) {
//			return 1;
//		}
//	}
//
//	return 0;
//}