//#include <stdio.h>
//
//int main() {
//	// 1.定义 short，int，long，long long 四种数据类型的变量
//	// 格式：数据类型 变量名 = 数据值;
//
//	// short 短整型 windows 2个字节（-32768~32767）
//	short a = 1;
//	printf("a是%d\n", a);
//
//	// int 整数 windows 4个字节（-2147483648~2147483647）
//	int b = 10;
//	printf("b是%d\n", b);
//
//	// long 长整数 windows 4个字节（-2147483648~2147483647）
//	//				linux 32位 4个字节 | 64位 8个字节
//	long c = 1000L;
//	printf("c是%ld\n", c);
//
//	// long long(C99) 超长整型 windows 8个字节（19位数）
//	long long d = 10000LL;
//	printf("d是%lld\n", d);
//
//	// 2.利用 sizeof 测量每一种数据类型占用多少字节
//	// sizeof(变量名)
//	printf("该数据类型占用%zu个字节\n",sizeof(d));
//
//	// 3.有符号整数，无符号整数的定义情况
//	// signed 有符号整数 正数，负数
//	// unsigned 无符号整数 正数，打印时占位符要用 %u
//	signed int e = -1;
//	printf("e是%d\n", e);
//
//	unsigned int f = 2;
//	printf("f是%u\n", f);
//}