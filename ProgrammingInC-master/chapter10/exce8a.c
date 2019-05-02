#include <stdio.h>
#include  <string.h>

int findString(const char source[],const char destination[])
{
	int i,j;

	for(i = 0; source[i] != '\0'; ++i){
		j = 0;
		
		while(source[i+j] == destination[j] && destination[j] != '\0')
			++j;
			
		if(destination[j] == '\0')
			return i;
	}

	return -1;
}

void removeString(char source[],int start,int count)
{
	int i;

	if(count <= 0 || start+count > strlen(source))
		return;

	for(i = 0; source[start+count+i] != '\0'; ++i){
		source[start+i] = source[start+count+i];
	}

	source[start+i] = '\0';
}

void insertString(char source[],char insert[],int start)
{
	int i,j;
	int len1 = strlen(source);
	int len2 = strlen(insert);
	char *newString = (char *)malloc((len1+len2+1) * sizeof(char));

	if(start < 0 || start > len1)
		return;

	for(i = 0; i < start; ++i)
		newString[i] = source[i];
	for(j = 0; insert[j] != '\0'; ++j)
		newString[i+j] = insert[j];
	for(; source[i] != '\0'; ++i)
		newString[i+j] = source[i];

	newString[i+j] = '\0';

	for(i = 0; newString[i] != '\0'; ++i)
		source[i] = newString[i];

	source[i] = '\0';
	free(newString);
}

void replaceString(char source[],char s1[],char s2[])
{
int findString(const char source[],const char destination[]);
void removeString(char source[],int start,int count);
void insertString(char source[],char insert[],int start);

int start = findString(source,s1);

if(-1 == start)
return;

removeString(source,start,strlen(s1));
insertString(source,s2,start);
}

int main(void)
{
void replaceString(char source[],char s1[],char s2[]);

char text[50] = "the wrong son";
//replaceString(text,"son","man");
//replaceString(text,"wrong","right");
replaceString(text,"sonb","man");
printf("%s\n",text);

return 0;
}
