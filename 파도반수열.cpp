//#include<stdio.h>
//
//int testcase, n;
//long long arr[100] = { 1, 1, 1, 2, 2, };
//
//int main(){
//	scanf("%d", &testcase);
//
//	for (int c = 0; c < testcase; c++){
//		scanf("%d", &n);
//
//		for (int i = 0; i < n; i++){
//			if (i >= 5)
//				arr[i] = arr[i - 1] + arr[i - 5];
//		}
//
//		printf("%lld\n", arr[n - 1]);
//	}
//
//	return 0;
//}