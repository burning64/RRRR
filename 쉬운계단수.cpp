//#include<stdio.h>
//
//int arr[100][10] = { 0, };
//int n, sum = 0;
//
//int main(){
//	scanf("%d", &n);
//
//	for (int i = 1; i <= 9; i++)
//		arr[0][i] = 1;
//
//	for (int i = 1; i < n; i++){
//		for (int j = 0; j <= 9; j++){
//			if (j - 1 >= 0)
//				arr[i][j] = (arr[i][j] % 1000000000 + arr[i - 1][j - 1] % 1000000000) % 1000000000;
//			if (j + 1 <= 9)
//				arr[i][j] = (arr[i][j] % 1000000000 + arr[i - 1][j + 1] % 1000000000) % 1000000000;
//		}
//	}
//
//	for (int i = 0; i <= 9; i++){
//		sum = (sum % 1000000000 + arr[n - 1][i] % 1000000000) % 1000000000;
//	}
//
//	printf("%d", sum);
//	return 0;
//}