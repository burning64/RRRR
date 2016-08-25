//#include<stdio.h>
//#include<vector>
//using namespace std;
//vector < int > v[2002];
//bool chk[2002] = { true, };
//int n, m, cnt = 0;
//bool flag = true;
//void nf(int t);
//int main(){
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++){
//		int temp;
//		v[0].push_back(i);
//		scanf("%d", &temp);
//		for (int j = 0; j < temp; j++){
//			int temp2;
//			scanf("%d", &temp2);
//			v[i].push_back(temp2 + n);
//			if (!v[temp2 + n].size()){
//				v[temp2 + n].push_back(n + m + 1);
//			}
//		}
//	}
//	nf(0);
//	printf("%d", cnt);
//	return 0;
//}
//void nf(int t){
//	if (t == n + m + 1){
//		cnt++;
//		flag = false;
//		return;
//	}
//	else{
//		if (t > n) chk[t] = true;
//		for (int i = 0; i < v[t].size(); i++){
//			if (chk[v[t][i]] == true) continue;
//			nf(v[t][i]);
//			chk[v[t][i]] = false;
//			if (flag == false){
//				v[v[t][i]].push_back(t);
//				v[t].erase(v[t].begin() + i);
//				if(t == 0){
//					i--;
//					flag = true;
//				}
//				else{
//					return;
//				}
//			}
//		}
//	}
//}