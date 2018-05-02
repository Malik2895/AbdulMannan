#define _GNU_SOURCE
#include<stdio.h>

#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
int main()
{

 printf("Thread id is: %ld\n",syscall(SYS_gettid));
  printf("Process id is: %ld\n",syscall(SYS_getpid));
printf("User id is: %ld\n",syscall(SYS_getuid));
printf("Group id is: %ld\n",syscall(SYS_getgid));
printf("Parent Process id is: %ld\n",syscall(SYS_getppid));
return 0;
}
