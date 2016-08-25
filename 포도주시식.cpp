//#include<stdio.h>
//#include <algorithm>
//using namespace std;
//int arr[4][10000];
//int n, num;
//
//int main(){
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++){
//		scanf("%d", &num);
//		if (i == 0){
//			arr[0][i] = 0;
//			arr[1][i] = num;
//			arr[2][i] = num;
//		}
//		else{
//			arr[0][i] = arr[3][i - 1];
//			arr[1][i] = arr[0][i - 1] + num;
//			arr[2][i] = arr[1][i - 1] + num;
//		}
//
//		arr[3][i] = max(arr[0][i], max(arr[1][i], arr[2][i]));
//	}
//
//	printf("%d\n", arr[3][n - 1]);
//	return 0;
//}