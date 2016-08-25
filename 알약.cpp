//#include<stdio.h>
//long long arr[32][32] = { 0, };
//int n;
//int main(){
//	for (int i = 1; i < 32; i++){
//		arr[0][i] = 1;
//	}
//	for (int i = 1; i < 31; i++){
//		arr[i][0] = arr[i - 1][1];
//		for (int j = 1; j <= 31 - i; j++){
//			arr[i][j] = arr[i][j - 1] + arr[i - 1][j + 1];
//		}
//	}
//	scanf("%d", &n);
//	while (n != 0){
//		printf("%lld\n", arr[n][0]);
//		scanf("%d", &n);
//	}	
//	return 0;
//}