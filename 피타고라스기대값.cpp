//#include<stdio.h>
//#include<algorithm>
//#include<math.h>
//#include<string.h>
//using namespace std;
//int testcase, n, m, t1, t2, c1, c2, maxn, minn;
//float teamplus[1001] = { 0, };
//float teamminus[1001] = { 0, };
//float PE[1001], maxPE, minPE;
//
//int main(){
//	scanf("%d", &testcase);
//	for (int c = 0; c < testcase; c++){
//		scanf("%d %d", &n, &m);
//		for (int i = 0; i < m; i++){
//			scanf("%d %d %d %d", &t1, &t2, &c1, &c2);
//			teamplus[t1] = teamplus[t1] + c1;
//			teamplus[t2] = teamplus[t2] + c2;
//			teamminus[t1] = teamminus[t1] + c2;
//			teamminus[t2] = teamminus[t2] + c1;
//		}
//		for (int i = 1; i <= n; i++){
//			if (teamplus[i] == 0 && teamminus[i] == 0){
//				PE[i] = 0;
//			}
//			else{
//				PE[i] = pow(teamplus[i], 2.0) / (pow(teamplus[i], 2.0) + pow(teamminus[i], 2.0));
//			}
//			if (i == 1){
//				maxPE = PE[i] * 1000;
//				minPE = PE[i] * 1000;
//			}
//			else{
//				maxPE = max(maxPE, PE[i] * 1000);
//				minPE = min(minPE, PE[i] * 1000);
//			}
//		}
//		printf("%.0f\n%.0f\n", floorf(maxPE), floorf(minPE));
//		maxPE = 0;
//		minPE = 0;
//		memset(teamplus, 0.0, 4004);
//		memset(teamminus, 0.0, 4004);
//		memset(PE, 0.0, 4004);
//	}
//	return 0;
//}
