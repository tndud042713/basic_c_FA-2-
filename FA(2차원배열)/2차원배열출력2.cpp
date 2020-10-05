//#include<stdio.h>
//
//int a[20][20];
//int main(){
//	int i, j, n, k=1;
//	scanf("%d",&n);
//	for(i=0; i<n; i++) {
// 		for(j=n-1; j>=0; j--) {
// 			if(j<=i){
//				a[i][j]=k;
//				k++;
//			}else{
//				a[i][j]=0;
//			}			
// 		}
//	}

//강사풀이에서는아래와 같이 간단하게 구현 할 수 있다. 
//for(i=0;i<n;i++){
//	for(j=i;j>=0;i--){
//		a[i][j]=k;
//		k++;
//	}
//} 

//출력파트
 
//	for(i=0; i<n; i++) {
// 		for(j=0; j<n; j++) {
//			printf("%3d", a[i][j]);
// 		}
// 		printf("\n");
//	}
// 	return 0;
//}
