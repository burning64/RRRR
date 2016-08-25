//#include<stdio.h>
////#include<intrin.h>
//#include<algorithm>
//#include<string.h>
//using namespace std;
//const int INF = 987654321;
//int testcase, subject, need, term, maxsub, cnt = 0;
//int before[12]; //선수과목
//int classes[10]; //해당학기과목
//int cache[10][1 << 12];
//int bitCount(int x){
//	if (x == 0) return 0;
//	return x % 2 + bitCount(x / 2);
//}
//int graduate(int semester, int taken){ //이번학기, 지금까지 들은과목
//	if (bitCount(taken) >= need) return 0;
//	if (semester >= term) return INF;
//	int& ret = cache[semester][taken];
//	if (ret != -1) return ret;
//	ret = INF;
//	int cantake = (classes[semester] & ~taken);
//	for (int i = 0; i < subject; ++i){
//		if ((cantake & (1 << i)) && (taken & before[i]) != before[i])
//			cantake &= ~(1 << i);
//	}
//	for (int take = cantake; take > 0; take = ((take - 1) & cantake)){
//		if (bitCount(take) > maxsub) continue;
//		ret = min(ret, graduate(semester + 1, taken | take) + 1);
//	}
//	ret = min(ret, graduate(semester + 1, taken));
//	return ret;
//}
//int main(){
//	scanf("%d", &testcase);
//	for (int c = 0; c < testcase; c++){
//		scanf("%d %d %d %d", &subject, &need, &term, &maxsub);
//		memset(before, 0, 48);
//		memset(classes, 0, 40);
//		for (int i = 0; i < subject; i++){ //과목정보
//			int temp;
//			scanf("%d", &temp);
//			for (int j = 0; j < temp; j++){
//				int temp2;
//				scanf("%d", &temp2);
//				before[i] += (1 << temp2);
//			}
//		}
//		for (int i = 0; i < term; i++){ //학기정보
//			int temp;
//			scanf("%d", &temp);
//			for (int j = 0; j < temp; j++){
//				int temp2;
//				scanf("%d", &temp2);
//				classes[i] += (1 << temp2);
//			}
//		}
//		for (int i = 0; i < term; i++){
//			for (int j = 0; j < (1 << 12); j++)
//				cache[i][j] = -1;
//		}
//		cnt = graduate(0, 0);
//		if (cnt == INF)	printf("IMPOSSIBLE\n");
//		else printf("%d\n", cnt);
//		cnt = 0;
//	}
//	return 0;
//}