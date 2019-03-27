#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * Main
 */
int main(int argc, char **argv)
{
  struct dirent *de;
  DIR *dir;

  if (argc < 2)
  {
    dir = opendir(".");
  }
  else
  {
    dir = opendir(argv[1]);
  }

  if (dir == NULL)
  {
    printf("Could not open directory");
    exit(1);
  }

  while ((de = readdir(dir)) != NULL)
  {

    struct stat buf;
    stat(de->d_name, &buf);
    printf("%ld ", buf.st_size);
    printf("%s\n", de->d_name);
  }

  closedir(dir);

  return 0;
}
