# include<stdio.h>
# include<stdlib.h>
# include<string.h>

char S1[20],S2[20];

int find(char c){
	int len = strlen(S2);
	len--;
	while(len>=0){
		if(S2[len] == c){
			S2[len] = ' ';
			return 1;
		}
		else
			len--;
	}
	if(len == -1)
		return 0;
}
int main(){
	int T;
	scanf("%d",&T);
	while(T>0){
		T--;
		scanf("%s %s",S1,S2);
		if(strlen(S1) != strlen(S2))
			printf("%s\n","NO");
		else{
			int l = strlen(S1);
			l--;
			while(l>=0){
				if(find(S1[l]))
					l--;
				else
					break;
			}
			if(l == -1)
				printf("%s\n","YES");
			else
				printf("%s\n","NO");
		}
	}
	return 0;
}
