
#include <stdio.h>
int main()
{
    if(fork())
    {
        if(fork())
        {
         if (fork())
          {

          }
          else
          {
            fork();
          } 
        }
    }
    sleep(20000);
    return 0;
}
