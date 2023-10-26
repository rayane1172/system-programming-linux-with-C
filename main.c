#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h> //you should add this library

int main()
{

    pid_t pid;
    pid = fork();

    // TODO: CHILD NUMBER 1

    if (pid == -1)
    {
        printf("erreur dans la creation du processus");
    }
    else if (pid == 0)
    {
        for (int i = 0; i <= 30; i++)
        {
            printf("%d,", i);
        }
        printf("\n le pid est : %d\n", getpid());
        printf("\n le pid du pere est : %d\n", getppid());
        return 0;
    }
    // TODO: CHILD NUMBER 2

    pid = fork();
    if (pid == -1)
    {
        printf("erreur dans la creation du processus \n");
    }
    else if (pid == 0)
    {
        for (int i = 31; i <= 60; i++)
        {
            printf("%d,", i);
        }
        printf("\n le pid est : %d\n", getpid());
        printf("\n le pid du pere est : %d\n", getppid());

        return 0;
    }

    // TODO: CHILD NUMBER 3

    pid = fork();
    if (pid == -1)
    {
        printf("erreur dans la creation du processus \n");
    }
    else if (pid == 0)
    {
        for (int i = 61; i <= 90; i++)
        {
            printf("%d,", i);
        }
        printf("\n le pid est : %d\n", getpid());
        printf("\n le pid du pere est : %d\n", getppid());

        return 0;
    }

    return 0;
}