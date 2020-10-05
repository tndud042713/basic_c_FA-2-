#include<stdio.h>
#include<math.h>
int st[2][7];
int main(){
	int n, k, i, j, s, y, tmp;
	double sum=0;
	scanf("%d %d", &n, &k);
	for(i=1; i<=n; i++){
		scanf("%d %d", &s, &y);
		st[s][y]++;
	}
	tmp=0;
	for(i=0; i<=1; i++){
		for(j=1; j<=2; j++){
			tmp=tmp+st[i][j];
		}
	}
	sum=sum+ceil(tmp/(double)k);
	for(i=0; i<=1; i++){
		for(j=3; j<=5; j=j+2){
			tmp=0;
			tmp=tmp+st[i][j];
			tmp=tmp+st[i][j+1];
			sum=sum+ceil(tmp/(double)k);
		}
	}
	printf("%d\n", (int)sum);
	return 0;
}
	
