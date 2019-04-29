#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char const *argv[])
{
	int k,n,id;
	double x=0,z,d;
	if(argc < 2)
		n=1;
	else
		n = atoi(argv[1]);
	if(n<0 || n>20)
		n=2;
	if(argc < 3)
		d=1.0;
	else
		d=atoi(argv[2]);

	x=0;
	id=0;
	int status=0,turn=0,wait=0,run=0;
	for(k=0;k<n;k++)
	{
		id = fork();
		if(id<0)
			printf(1,"Error forking");
		else if(id>0)
		{
			printf(1,"Parent %d creating child %d\n",getpid(),id);
			set_priority(id,atoi(argv[3]));
			status=waitx(&turn,&wait,&run);  
		}
		else
		{
			for(z=0;z<90000000.0;z++)
				x=x+3.14*89.64*d;
			//printf(1,"Child completed %d \n",getpid());
      printf(1,"child done %d\n",x);
			break;
		}
 		printf(1, "Wait Time = %d\n Run Time = %d\n Turnaround Time= %d\n with Status %d \n",wait,run,turn,status);
  }
	exit();
}
