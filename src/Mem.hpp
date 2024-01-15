#ifndef MEM_HPP
#define MEM_HPP

/*
class Mem
{
  private:
    #define MAX_DATA 30
    #define MAX_STRING_LENGHT 100

    char mem[][MAX_STRING_LENGHT];

  public:
    void register_data(char array[][MAX_STRING_LENGHT], const char* data_to_register);
    const char *return_data(char array[][MAX_STRING_LENGHT], int index);
};
*/

#define MAX_DATA 30
#define MAX_STRING_LENGHT 100


char *strcpy1(char *destiny, char *source);
void register_data(char array[][MAX_STRING_LENGHT], char* data_to_register);
char *return_data(char array[][MAX_STRING_LENGHT], int index);

#endif
