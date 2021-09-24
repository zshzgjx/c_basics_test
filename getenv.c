#include <stdio.h>
#include <unistd.h>

extern char **environ;
int main(int argc, char *argv[])
{
        char **p = environ;
        while (*p != NULL)
        {
                printf("%s (%p)\n", *p, *p);
                *p++;
        }
        return 0;
}
#if 0
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv, char** envp)
{
  char** env;
  for (env = envp; *env != 0; env++)
  {
    char* thisEnv = *env;
    printf("%s\n", thisEnv);
  }
}
#endif

#if 0
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
char *pathvar;
pathvar = getenv("PATH");
printf("pathvar=%s",pathvar);
return 0;
}
#endif
