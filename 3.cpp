#include <stdio.h>

void GetText(char **text);

int main() {
  char *str;
  printf("Type Someting : ") ;
  GetText(&str);
  printf("You Type : ") ;
  printf("%s\n",str);
  return 0;
}

void GetText(char **text){
	*text = new char[20];
	gets(*text);
}
