#include <stdio.h>

int main() {
	int a = 12;

	int b = 2;
	for (int i = 0; i <= a; i++)
	{
		b *= 2;
		/*if (b != 0) {
			printf("%d\n", b);
		}*/

		// 当累幂的数等于给出的数时
		if (b == a) {
			printf("是");

			// 结束循环
			return;
		}
		// 当累幂的数大于给出的数时，优化性能
		else if(b > a)
		{
			printf("不是");

			// 结束循环
			return;
		}
	};

	return 0;
}