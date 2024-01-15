// mem.cpp
#include "Mem.hpp"
#include "utils.hpp"

char *strcpy1(char *destiny, char *source)
{
  char *saved = destiny;
  while((*destiny++ = *source++) != '\0');

  return saved;
}

void register_data(char array[][MAX_STRING_LENGHT], char* data_to_register)
{
    static int size = 0;
    if (size < MAX_DATA) 
    {
        strcpy1(array[size], data_to_register);
        size++;
    }
}

char *return_data(char array[][MAX_STRING_LENGHT], int index)
{
    if(index >= 0 && index < MAX_DATA)
    {
        return array[index];
    }
    return nullptr; // Add a return statement to handle all paths
}
