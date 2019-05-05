#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{

  if(atoi(argv[2])<=0 || atoi(argv[2])>100)
    printf(1,"priority 0-100 \n");
  printf(1,"pid= %d\n",atoi(argv[1]));
  int ret=set_priority(atoi(argv[1]),atoi(argv[2]));
  if(ret==-1)
    printf(1,"check arguments properly\n");
  exit();
}
