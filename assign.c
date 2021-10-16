#include<stdio.h>

#include<stdlib.h>

#include<unistd.h>

void main()

{

pid_t pid=fork();

int m=5;

if(pid==0)

{

printf("M value in child=%d\n",++m);

}

else

{

wait(NULL);

printf("M value in parent=%d\n",--m);

}
}
