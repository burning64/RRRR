//#include <stdio.h>
//
//int testcase;
//int arr[2][1001] = { 0, };
//int week;
//int max, flag = 0;
//
//int main(){
//
//	scanf("%d", &testcase);
//
//	for (int c = 1; c <= testcase; c++){
//		scanf("%d", &week);
//		for (int i = 0; i < 2; i++){
//			for (int j = 1; j <= week; j++){
//				scanf("%d", &arr[i][j]);
//			}
//		}
//
//		max = 0;
//
//		for (int i = week; i > 0; i--){
//			if (arr[0][i - 1] + arr[0][i] > arr[1][i]){
//				if (flag == 0){
//					max = max + arr[0][i];
//					flag = 0;
//				}
//				else{
//					flag = 0;
//				}
//			}
//			else{
//				if (flag == 0){
//					max = max + arr[1][i];
//					flag = 1;
//				}
//				else{
//					if (arr[1][i] + arr[0][i + 1] > arr[1][i + 1] + arr[0][i - 1]){
//						max = max - arr[1][i + 1] + arr[0][i + 1];
//						max = max + arr[1][i];
//						flag = 1;
//					}
//					else{
//						flag = 0;
//					}
//				}
//			}
//		}
//
//		printf("Case #%d\n%d\n", c, max);
//		flag = 0;
//	}
//	return 0;
//}