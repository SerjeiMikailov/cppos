#ifndef MEM_HPP
#define MEM_HPP

#define MAX_DATA 30
#define MAX_STRING_LENGHT 100

// --- Overload ---

char *strcpy1(char *destiny, char *source);
char *strcpy1(char *destiny, const char *source);

void register_to_array(char array[][MAX_STRING_LENGHT], char* data_to_register);
void register_to_array(char array[][MAX_STRING_LENGHT], const char* data_to_register);

// --- Overload ---

char* return_array_data(char array[][MAX_STRING_LENGHT], int data_index);

#endif
