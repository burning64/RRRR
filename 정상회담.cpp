//#include<stdio.h>
//long long arr[5001] = { 1, 1, 2, };
//int n;
//
//int main(){
//	scanf("%d", &n);
//	for (int i = 3; i <= n / 2; i++){
//		for (int j = 0, j2 = 2 * i - 2; j <= 2 * i - 2; j += 2, j2 -= 2){
//			arr[i] = (arr[i] + arr[j / 2] * arr[j2 / 2]) % 987654321;
//		}
//	}
//	printf("%lld", arr[(n / 2)]);
//	return 0;
//}