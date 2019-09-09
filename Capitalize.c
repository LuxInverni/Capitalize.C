#include <stdio.h>
#include <string.h>
#define MAX_LEN 80

int main(void)
{
  char a[MAX_LEN];

  printf ("Enter a word: ");
  scanf ("%s", a);
  int i = strlen(a);

  for (int i=0; i < strlen(a); i++)
  {
    if (a[i]>='a'&&a[i]<='z')
    {
    printf("%c", a[i] - ('a' - 'A'));
    }
    else
    {
    printf("%c", a[i]);
    }
  }
  printf("\n");
}
