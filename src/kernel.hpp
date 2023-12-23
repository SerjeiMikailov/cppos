
#ifndef KERNEL_HPP
#define KERNEL_HPP

extern "C" void kernel_entry();

// ... other declarations

#include "types.hpp"

class Kernel{
  public:
    #define NULL 0
    #define VGA_ADDRESS 0xB8000
    #define BUFSIZE 2200 

    enum vga_color 
    {
      BLACK,
      BLUE,
      GREEN,
      CYAN,
      RED,
      MAGENTA,
      BROWN,
      GREY,
      DARK_GREY,
      BRIGHT_BLUE,
      BRIGHT_GREEN,
      BRIGHT_CYAN,
      BRIGHT_RED,
      BRIGHT_MAGENTA,
      YELLOW,
      WHITE,
    };
};

#endif
