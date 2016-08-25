//#include<stdio.h>
//
//int arr[2187][2187];
//int cnt[3] = { 0, };
//int n, checknum;
//void check(int x, int y, int dn);
//int main(){
//	scanf("%d", &n);
//	int dn;
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	dn = n;
//	check(0, 0, dn);
//	for (int i = 0; i < 3; i++)
//		printf("%d\n", cnt[i]);
//
//	return 0;
//}
//void check(int x, int y, int dn){
//	checknum = arr[x][y];
//
//	for (int i = x; i < x + dn; i++){
//		for (int j = y; j < y + dn; j++){
//			if (arr[x][y] != arr[i][j]){
//				for (int ii = 0; ii < 3; ii++){
//					for (int jj = 0; jj < 3; jj++){
//						check(x + ii * (dn / 3), y + jj * (dn / 3), dn / 3);
//					}
//				}
//				return;
//			}
//		}
//	}
//	cnt[arr[x][y] + 1]++;
//}