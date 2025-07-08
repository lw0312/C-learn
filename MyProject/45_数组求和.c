//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main() {
//	// 生成随机数
//	srand(time(NULL));
//
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		// 生成1~100之间的随机数
//		int num = rand() % 100+1;
//		// 生成的随机数添加进数组
//		arr[i] = num;
//	}
//
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		// 数组内的数字累加求和
//		sum += arr[i];
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("%d", sum);
//	return 0;
//}