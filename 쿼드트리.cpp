//#include <stdio.h>
//
//char arr[65][65];
//int n;
//
//void check(int x, int y, int dn);
//int main(){
//	int dn, num;
//	scanf("%d\n", &n);
//
//	for (int i = 0; i < n; i++){
//		scanf("%s", &arr[i]);
//	}
//	dn = n;
//	check(0 ,0, dn);
//	return 0;
//}
//void check(int x, int y, int dn){
//	for (int i = x; i < x + dn; i++){
//		for (int j = y; j < y + dn; j++){
//			if (arr[x][y] != arr[i][j]){
//				printf("(");
//				for (int ii = x; ii < x + dn; ii = ii + dn / 2){
//					for (int jj = y; jj < y + dn; jj = jj + dn / 2){
//						check(ii, jj, dn / 2);
//					}
//				}
//				printf(")");
//				return;
//			}
//		}
//	}
//	printf("%c", arr[x][y]);
//}