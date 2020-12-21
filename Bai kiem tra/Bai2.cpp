#include <stdio.h>
#include<string.h>
void upperCase(char S[]){
	for(int i=0;i<strlen(S);i++){
		if(S[i]>=97 && S[i]<=122)
			S[i]-=32;
	}
	printf(" Convert string to upper ase\n");
	printf("%s", S);
}
int main(){
	char S[50];
	printf(" String S:\n");
	gets(S);
	upperCase(S);
}

