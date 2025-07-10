#include<stdio.h>

int Order(int arr[], int len, int num);

int main() {
	int arr[5] = { 11,22,33,44,55 };
	int len = sizeof(arr) / sizeof(int);


	printf("请输入要查找的数字：");
	int num = 0;
	scanf("%d", &num);

	int flag = Order(arr,len,num);

	if (flag != -1) {
		printf("要查找的数字在数组的第%d位",flag + 1);
	}
	else {
		printf("该数字不在数组中");
	}

	return 0;
}

int Order(int arr[], int len, int num) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num) {
			return i;
		}
	}

	return -1;
}