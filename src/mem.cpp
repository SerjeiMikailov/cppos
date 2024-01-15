// mem.cpp
#include "Mem.hpp"

// ----------------------------------------------------

/*

Below we have a explicit function overloading

*/

char *strcpy1(char *destiny, char *source)
{
  char *saved = destiny;
  while((*destiny++ = *source++) != '\0');

  return saved;
}

char *strcpy1(char *destiny, const char *source)
{
  char *saved = destiny;
  while((*destiny++ = *source++) != '\0');

  return saved;
}

// ----

void register_data(char array[][MAX_STRING_LENGHT], char* data_to_register)
{
    static int size = 0;
    if (size < MAX_DATA) 
    {
        strcpy1(array[size], data_to_register);
        size++;
    }
}

void register_data(char array[][MAX_STRING_LENGHT], const char* data_to_register)
{
    static int size = 0;
    if (size < MAX_DATA) 
    {
        strcpy1(array[size], data_to_register);
        size++;
    }
}

// ----------------------------------------------------

char* return_data(char array[][MAX_STRING_LENGHT], int data_index)
{  
  char (*result)[MAX_STRING_LENGHT] = &array[data_index];
  return *result;
}
