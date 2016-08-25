//#include<stdio.h>
//#include<stdlib.h>
//
//int house;
//int rgb[3][1000];
//int min, count = 1;
//
//void paint();
//void red();
//void green();
//void blue();
//
//int main(){
//	scanf("%d", &house);
//
//	for (int i = 0; i < house; i++){
//		scanf("%d %d %d", &rgb[0][i], &rgb[1][i], &rgb[2][i]);
//	}
//
//	paint();
//	printf("%d", min);
//	return 0;
//}
//
//void paint(){
//	if (count < house){
//		red();
//		green();
//		blue();
//		count++;
//		paint();
//	}
//	else if (count == house){
//		if (rgb[0][count - 1] > rgb[1][count - 1])
//			min = rgb[1][count - 1];
//		else 
//			min = rgb[0][count - 1];
//
//		if (min > rgb[2][count - 1])
//			min = rgb[2][count - 1];
//	}
//}
//void red(){
//	int a, b;
//	a = rgb[0][count] + rgb[1][count - 1];
//	b = rgb[0][count] + rgb[2][count - 1];
//
//	if (a > b) rgb[0][count] = b;
//	else rgb[0][count] = a;
//}
//void green(){
//	int a, b;
//	a = rgb[1][count] + rgb[0][count - 1];
//	b = rgb[1][count] + rgb[2][count - 1];
//
//	if (a > b) rgb[1][count] = b;
//	else rgb[1][count] = a;
//}
//void blue(){
//	int a, b;
//	a = rgb[2][count] + rgb[0][count - 1];
//	b = rgb[2][count] + rgb[1][count - 1];
//
//	if (a > b) rgb[2][count] = b;
//	else rgb[2][count] = a;
//}