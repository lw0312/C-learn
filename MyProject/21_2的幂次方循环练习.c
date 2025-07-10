//#include <stdio.h>
//
//int main() {
//
//	// 给出一个数，求他能不能用2的幂运算得到
//	int a;
//	printf("请输入一个数字：");
//	scanf("%d", &a);
//
//	int b = 2;
//	for (;b <= a; )
//	{
//		b *= 2;
//		// 当累幂的数等于给出的数时
//		if (b == a) {
//			printf("是");
//			return;
//		}
//		// 当累幂的数大于给出的数时，优化性能
//		else if(b > a)
//		{
//			printf("不是");
//			return;
//		}
//	};
//
//	return 0;
//}