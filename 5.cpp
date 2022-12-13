#include <stdio.h>

char *GetText();

int main() {
  char *str;
  printf("Type Someting : ") ;
  str = GetText();
  printf("You Type : ") ;
  printf("%s\n",str);
  return 0;
}

char *GetText(){
	char *text = new char[15];
	gets(text);
	return text;
}
