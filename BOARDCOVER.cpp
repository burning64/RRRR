//#include<stdio.h>
//#include<stdlib.h>
//#include<stack>
//using namespace std;
//
//int testcase;
//int arr[20][20];
//int h, w, cnt;
//int outcnt[30];
//char in;
//
//void board();
//void case1(int i, int j);
//void case2(int i, int j);
//void case3(int i, int j);
//void case4(int i, int j);
//bool chk();
//int main(){
//	scanf("%d", &testcase);
//
//
//	for (int c = 0; c < testcase; c++){
//		scanf("%d %d%c", &h, &w,&in);
//		cnt = 0;
//		for (int i = 0; i < h; i++){
//			for (int j = 0; j < w; j++){
//				scanf("%c", &in);
//				if (in == '#'){
//					arr[i][j] = -1;
//				}
//				else{
//					arr[i][j] = 0;
//				}
//			}
//			if (i != h-1)scanf("%c",&in);
//		}
//
//		board();
//		printf("%d\n",cnt);
//	}
//
//	return 0;
//}
//void board(){
//	bool checkpoint = false;
//	for (int i = 0; i < h; i++){
//		for (int j = 0; j < w; j++){
//			if (arr[i][j] == 0){
//				case1(i, j);
//				case2(i, j);
//				case3(i, j);
//				case4(i, j);
//				checkpoint = true;
//				break;
//			}
//		}
//		if (checkpoint)break;
//	}
//
//}
//void case1(int i, int j){
//	if (j + 1 < w && arr[i][j + 1] == 0){
//		if (i + 1 < h && arr[i + 1][j + 1] == 0){
//			arr[i][j] = 1;
//			arr[i][j + 1] = 1;
//			arr[i + 1][j + 1] = 1;
//			if (chk())cnt++;
//			else board();
//			arr[i][j] = 0;
//			arr[i][j + 1] = 0;
//			arr[i + 1][j + 1] = 0;
//		}
//	}
//}
//void case2(int i, int j){
//	if (j + 1 < w && arr[i][j + 1] == 0){
//		if (i + 1 < h && arr[i + 1][j] == 0){
//			arr[i][j] = 1;
//			arr[i][j + 1] = 1;
//			arr[i + 1][j] = 1;
//			if (chk())cnt++;
//			else board();
//			arr[i][j] = 0;
//			arr[i][j + 1] = 0;
//			arr[i + 1][j] = 0;
//		}
//	}
//}
//void case3(int i, int j){
//	if (i + 1 < h && arr[i + 1][j] == 0){
//		if (j + 1 < w && arr[i + 1][j + 1] == 0){
//			arr[i][j] = 1;
//			arr[i + 1][j] = 1;
//			arr[i + 1][j + 1] = 1;
//			if (chk())cnt++;
//			else board();
//			arr[i][j] = 0;
//			arr[i + 1][j] = 0;
//			arr[i + 1][j + 1] = 0;
//		}
//	}
//}
//void case4(int i, int j){
//	if (i + 1 < h && arr[i + 1][j] == 0){
//		if (j - 1 >= 0 && arr[i + 1][j - 1] == 0){
//			arr[i][j] = 1;
//			arr[i + 1][j] = 1;
//			arr[i + 1][j - 1] = 1;
//			if (chk())cnt++;
//			else board();
//			arr[i][j] = 0;
//			arr[i + 1][j] = 0;
//			arr[i + 1][j - 1] = 0;
//		}
//	}
//}
//bool chk(){
//	for (int i = 0; i < h; i++){
//		for (int j = 0; j < w; j++){
//			if (arr[i][j] == 0)
//				return false;
//		}
//	}
//	return true;
//}