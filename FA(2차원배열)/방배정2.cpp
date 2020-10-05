//#include<stdio.h>
//#include<math.h>
//
//int a[2][7];
//int b[2][4];
//int main(void){
//	int sex,Class,n,k,i,j;
//	double Sum=0;
//	
//	scanf("%d %d", &n, &k);
//	for(i=1;i<=16;i++){
//		scanf("%d %d",&sex, &Class);
//		a[sex][Class]++;
//	}
//	for(Class=1;Class<=2;Class++){
//		for(sex=0;sex<=1;sex++){
//			b[0][1]+=a[sex][Class];
//		}
//	}
//	for(Class=3;Class<=4;Class++){
//		for(sex=0;sex<=1;sex++){
//			if(sex==0){
//				b[0][2]+=a[sex][Class];
//			}else{
//				b[1][2]+=a[sex][Class];
//			}
//		}
//	}
//	for(Class=5;Class<=6;Class++){
//		for(sex=0;sex<=1;sex++){
//			if(sex==0){
//				b[0][3]+=a[sex][Class];
//			}else{
//				b[1][3]+=a[sex][Class];
//			}
//		}
//	}
//	
//	for(i=0;i<2;i++){
//		for(j=0;j<4;j++){
//			Sum+=ceil(b[i][j]/(double)k);
//		}
//	}
//	
//	printf("%d",(int)Sum);
//	return 0;
//}
