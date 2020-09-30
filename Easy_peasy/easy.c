#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void easy()
{
  printf("Bytecon{Easy_Exploit}");
}

void win()
{
  printf("Ohh hoooo");
}

void flag()
{
  printf("Bytecon{Fake_Flag}");
}

void flag2()
{
  printf("Ohh hoooo");
}

void flag3()
{
  printf("Bytecon{Fake_Flag}");
}

int main(int argc, char **argv)
{
  char buffer[64];
  printf("Exploit Me\n");
  gets(buffer);
}
