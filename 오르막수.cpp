//#include<stdio.h>
//
//int arr[1000][10] = { 0, };
//int n;
//int sum = 0;
//
//int main(){
//	scanf("%d", &n);
//
//	for (int i = 0; i < 10; i++)
//		arr[0][i] = 1;
//
//	for (int i = 1; i < n; i++){
//		for (int j = 0; j < 10; j++){
//			for (int k = 0; k <= j; k++){
//				arr[i][j] = (arr[i][j] % 10007 + arr[i - 1][k] % 10007) % 10007;
//			}
//		}
//	}
//	
//	for (int i = 0; i < 10; i++){
//		sum = (sum % 10007 + arr[n - 1][i] % 10007) % 10007;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}