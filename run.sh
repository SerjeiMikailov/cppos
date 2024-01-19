
cd src
cd bootloader 

as --32 boot.s -o ../../build/boot.o

cd ..
cd drivers

clang++ -std=c++20 -m32 -c keyboard.cpp -o ../../build/keyboard.o -fno-stack-protector -ffreestanding -O1 -Wall -Wextra

cd ..
cd kernel

clang++ -std=c++20 -m32 -c kernel.cpp -o ../../build/kernel.o -fno-stack-protector -ffreestanding -O1 -Wall -Wextra
clang++ -std=c++20 -m32 -c mem.cpp -o ../../build/mem.o -fno-stack-protector -ffreestanding -O1 -Wall -Wextra

cd ..
cd libs

clang++ -std=c++20 -m32 -c utils.cpp -o ../../build/utils.o -fno-stack-protector -ffreestanding -O1 -Wall -Wextra 

cd ..
cd ..

ld -m elf_i386 -T linker.ld ./build/*.o -o ./build/CppOS.bin -nostdlib

grub-file --is-x86-multiboot build/CppOS.bin

mkdir -p isodir/boot/grub
cp build/CppOS.bin isodir/boot/CppOS.bin

cp grub.cfg isodir/boot/grub/grub.cfg

grub-mkrescue -o CppOS.iso isodir

qemu-system-i386 -cdrom CppOS.iso

