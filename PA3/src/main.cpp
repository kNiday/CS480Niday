#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include "engine.h"

void printCmdLineErrorMsg();

int main(int argc, char **argv)
{
  //ensure that command line arguments are used properly
  if (argc < 5)
  {
    printCmdLineErrorMsg();
    return 1;
  }

  if (argv[1][0] != '-' || argv[3][0] != '-')
  {
    printCmdLineErrorMsg();
    return 1;
  }

  string vertFileName, fragFileName;

  //figure out which filename is vertex shader and which is fragment shader
  if (argv[1][1] == 'v')
  {
    vertFileName = argv[2];
    if (argv[3][1] == 'f')
    {
      fragFileName = argv[4];
    }
    else
    {
      printCmdLineErrorMsg();
      return 1;
    } 
  }
  else if (argv[1][1] == 'f')
  {
    fragFileName = argv[2];
    if (argv[3][1] == 'v')
    {
      vertFileName = argv[4];
    }
    else
    {
      printCmdLineErrorMsg();
      return 1;
    }
  }
  else
  {
    printCmdLineErrorMsg();
    return 1;
  }

  // Start an engine and run it then cleanup after
  Engine *engine = new Engine("Tutorial Window Name", 800, 600, vertFileName, fragFileName);
  if(!engine->Initialize())
  {
    printf("The engine failed to start.\n");
    delete engine;
    engine = NULL;
    return 1;
  }
  engine->Run();
  delete engine;
  engine = NULL;
  return 0;
}

void printCmdLineErrorMsg()
{
    printf("Usage: ./Tutorial -v <vertex shader filename> -f <fragment shader filename>\n");
    printf("Note that order of vertex and fragment shader files is irrelevant, but -v and -f tags are necessary.\n");
}
