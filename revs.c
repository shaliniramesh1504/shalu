#include <stdio.h>
#include <string.h> 
void reverse_string(char*);
void reverse_words(char*); 
int main() 
{
  char a[100];
  gets(a);
  reverse_words(a);
  printf("%s\n", a);
  return 0;
}
 
void reverse_words(char *s)
{
  char b[100], *t, *z;
  int c = 0;
  t = s;
  while(*t)
  {
    while(*t != ' ' && *t != '\0')
    {    
      b[c] = *t;
      t++;
      c++;
    }
    b[c] = '\0';
    c = 0;
 
    reverse_string(b); 
 
    z = b;
 
    while (*z) {    
      *s = *z;
      z++;
      s++;
    }
 
    while (*s == ' ') {
      s++;
    }
      t = s;                             
  }
}
void reverse_string(char *t) {
  int l, c;
  char *e, s;
 
  l = strlen(t);
  e = t + l - 1;
 
  for (c = 0; c < l/2; c++) {
    s  = *t;
    *t = *e;
    *e = s;
    t++;
    e--;
  }
}
