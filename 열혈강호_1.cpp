//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//vector < int > man[1001];
//int chk[1001] = { 0, };
//bool went[1001] = { false, };
//int n, m, cnt = 0, a;
//bool nf(int t);
//int main(){
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++){
//		int temp;
//		man[0].push_back(i);
//		scanf("%d", &temp);
//		for (int j = 0; j < temp; j++){
//			int temp2;
//			scanf("%d", &temp2);
//			man[i].push_back(temp2);
//		}
//	}
//	for (int i = 1; i <= n; i++){
//		for (int j = 0; j < man[i].size(); j++){
//			a = man[i][j];
//			if (chk[man[i][j]] == 0){
//				chk[man[i][j]] = i;
//				cnt++;
//				break;
//			}
//			else if(nf(chk[man[i][j]])){
//				chk[man[i][j]] = i;
//				break;
//			}
//		}
//		memset(went, false, 1001);
//	}
//	printf("%d", cnt);
//	return 0;
//}
//bool nf(int t){
//	went[a] = true;
//	for (int j = 0; j < man[t].size(); j++){
//		a = man[t][j];
//		if (went[man[t][j]] == true) continue;
//		if (chk[man[t][j]] == 0){
//			chk[man[t][j]] = t;
//			cnt++;
//			return true;
//		}
//		else if (nf(chk[man[t][j]])){
//			chk[man[t][j]] = t;
//			return true;
//		}
//	}
//	return false;
//}