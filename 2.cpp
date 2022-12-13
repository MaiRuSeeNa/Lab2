#include <stdio.h>

void GetText(char *text);

int main() {
  char str[20];
  printf("Type Someting : ") ;
  GetText(str);
  printf("You Type : ") ;
  printf("%s\n",str);
  return 0;
}

void GetText(char *text){
	gets(text);
}
