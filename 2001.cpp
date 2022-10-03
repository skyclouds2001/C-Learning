#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[]){
	FILE *f = fopen("my.in", "r");
	int count[26];
	char s[100] = {0};
	scanf("%s", s);
	
	if(f == NULL)
		return -1;
	
	while(!feof(f)) {
		char t = fgetc(f);
		
		if(t != EOF)
			break;
		
		if(isupper(t))
			++count[t - 'A'];
		if(islower(t))
			++count[t - 'a'];
	}
	
	for(int i = 0; i < 26; ++i) {
		int t = 1;
		
		for(int j = 0; j < 26; ++j)
			if(count[t] < count[j])
				t = j;
		
		printf("%c : %d  ", t + 'a', count[t]);
	}
	
	fclose(f);
	return 0;
}
