#!/bin/bash

cd src

as --32 boot.s -o ../build/boot.o

clang++ -m32 -c kernel.cpp -o ../build/kernel.o -fno-stack-protector -ffreestanding -O1 -Wall -Wextra
clang++ -m32 -c keyboard.cpp -o ../build/keyboard.o -fno-stack-protector -ffreestanding -O1 -Wall -Wextra

cd ..

mkdir -p build

ld -m elf_i386 -T linker.ld ./build/*.o -o ./build/CppOS.bin -nostdlib

grub-file --is-x86-multiboot build/CppOS.bin

mkdir -p isodir/boot/grub
cp build/CppOS.bin isodir/boot/CppOS.bin

cp grub.cfg isodir/boot/grub/grub.cfg

grub-mkrescue -o CppOS.iso isodir

qemu-system-i386 -cdrom CppOS.iso

