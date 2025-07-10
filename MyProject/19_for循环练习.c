//#include <stdio.h>
//
//int main() {
//
//	int a;
//	int b;
//
//	printf("请输入第一个数字：");
//	scanf("%d", &a);
//
//	printf("请输入第二个数字：");
//	scanf("%d", &b);
//
//	int max = a > b ? a : b;
//	int min = a < b ? a : b;
//
//	int count = 0;
//	
//		for (int i = min; i <= max; i++)
//		{
//			if (i % 6 == 0 && i % 8 == 0) {
//				printf("%d\n", i);
//				count++;
//			}
//		}
//	
//	
//	printf("范围内符合被6和8整除的数有%d个", count);
//
//	return 0;
//}