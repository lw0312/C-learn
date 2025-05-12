//#include <stdio.h>
//
//int main() {
//	// 1.定义float，double，long double数据类型的变量
//	// float 单精度小数（精确度小数点后6位）windows占4个字节（38位）
//	float a = 3.14F;
//	printf("a是%.2f\n", a);
//
//	// double 双精度小数（精确度小数点后15位）windows占8个字节（308位）
//	double b = 1.78;
//	printf("b是%.2lf\n", b);
//
//	// long double 高精度小数（精确度小数点后18~19位）windows占8个字节，其他（12,16）
//	long double c = 3.14159265L;
//	printf("c是%lf\n", c);
//
//	// 2.小数的数据类型无法跟unsigned组合使用
//	// unsigned double e = 2.124124;
//
//	// 3.使用sizeof测量小数数据类型占用的字节
//	printf("该数据类型占用%zu个字节", sizeof(a));
//}