#ifndef DISK_HPP
#define DISK_HPP

/*

  Virtual Disk implementation.

  The main idea: Alocate content in memory with array tables.
  This is a virtual disk because all is allocated in ram memory.

  File definition in 'file.hpp'
*/

class Disk
{
  private:
    #define DISK_SECTORS 10
    #define BLOCKS_PER_SECTOR 20

    const int total_blocks = DISK_SECTORS * BLOCKS_PER_SECTOR;
    int current_blocks = 0;

  public:
    void init_disk();
    void create_file(char filename[10], char content[]);
    void delete_file();
};

#endif
