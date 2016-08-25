//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int narr[500000] = { 0, };
//int n, m, s, f, b, num;
//
//int main(){
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++){
//		scanf("%d", &narr[i]);
//	}
//	sort(narr, narr + n);
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++){
//		s = n / 2;
//		f = 0;
//		b = n;
//		scanf("%d", &num);
//		while (1){
//			if (narr[s] > num){
//				b = s;
//				if (s == 1){
//					s = 0;
//					continue;
//				}
//				else{
//					s = (f + s) / 2;
//				}
//			}
//			else if (narr[s] < num){
//				f = s;
//				if (s == n - 2){
//					s = n - 1;
//					continue;
//				}
//				else{
//					s = (s + b) / 2;
//				}
//			}
//			else{
//				printf("1 ");
//				break;
//			}
//			if (f == s || s == b){
//				printf("0 ");
//				break;
//			}
//		}
//	}
//
//	return 0;
//}