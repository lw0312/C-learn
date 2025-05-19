//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main() {
//	srand(time(NULL));
//
//	int num = rand() % 100 + 1;
//
//	while (1) {
//		int putNum;
//		printf("请输入数字:");
//		scanf("%d", &putNum);
//
//		if (putNum == num) {
//			printf("恭喜你,猜对了,%d",num);
//			break;
//		}
//		else if(putNum > num) {
//			printf("猜错了,大了\n");
//		}
//		else if(putNum < num){
//			printf("猜错了,小了\n");
//		}
//	}
//
//	return 0;
//}