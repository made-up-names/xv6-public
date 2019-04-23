#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  for(i = 1; i < argc; i++)
  {
      for(int j=0; argv[i][j]!='\0' ;j++)
      {
      if(argv[i][j]>='A'&&argv[i][j]<='Z')
      printf(1, "%c", argv[i][j]-'A'+'a');
      else if(argv[i][j]>='a'&&argv[i][j]<='z')
      printf(1, "%c", argv[i][j]-'a'+'A');
      else
      printf(1, "%c", argv[i][j]);
      }
      printf(1,"%s",i+1<argc ? " " : "\n");
      
  }
  exit();
}
