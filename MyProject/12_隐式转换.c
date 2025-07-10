//#include <stdio.h>
//
//int main() {
//	// 隐式转换
//	// 等级低的自动往等级高的转换
//	/*
//		等级排列：
//		最高）double
//			  float
//			  long long
//			  long
//			  int
//			  short
//		最低	）char
//	*/
//
//	// short类型的数据在参与计算的时候，会自动提升为int
//	short a = 10;
//	short b = 10;
//
//	printf("%zu",sizeof(a + b));
//
//	return 0;
//}