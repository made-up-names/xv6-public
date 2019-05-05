Files modified/Added:

Q1 : invertcase.c (added)
     Makefile ( modified)
Q2 : setpriority.c (added)
     ps.c (added)
     proc.c (modified) [ added cps,set_priority functions]
     defs.h (modified) [declarations]
     user.h (modified) [declarations]
     sysproc.c (modified) [added the syscall interface] 
     syscall.c (modified) [declarations]
     usys.S (modified) [declarations]
     Makefile (modified)

   For the report part [to add times]:
     proc.c (modified) [added waitx function,times in the PCB (struct proc),other corresponding modifications]
     [also other corresponding declarations]
     pseudofile.c (added) [benchmark program]
     trap.c (modified) [to record run time and io time]
Q3: syscall.c (modified )
   //To test the proper working of Q2 : this part's code has been commented under the name Q3 code. 
