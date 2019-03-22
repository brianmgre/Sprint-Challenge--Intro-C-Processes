#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  struct dirent *de;
  DIR *dir;

  if (dir == NULL)
  {
    printf("Could not open directory");
    exit(1);
  }

  if (argc < 2)
  {
    dir = opendir(".");
  }
  else
  {
    dir = opendir(argv[1]);
  }

  return 0;
}