//#include<stdio.h>
//int testcase, n, cnt[2] = { 0, };
//int fibonacci(int n);
//int main(){
//	scanf("%d", &testcase);
//	for (int i = 0; i < testcase; i++){
//		scanf("%d", &n);
//		fibonacci(n);
//		printf("%d %d\n", cnt[0], cnt[1]);
//		cnt[0] = 0;
//		cnt[1] = 0;
//	}
//	return 0;
//}
//int fibonacci(int n) {
//	if (n == 0) {
//		cnt[0]++;
//		return 0;
//	}
//	else if (n == 1) {
//		cnt[1]++;
//		return 1;
//	}
//	else {
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}