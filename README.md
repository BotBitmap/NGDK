# NGDK_FORK
SDK for Neo Geo (Beta version)

Discord : https://discord.gg/2VCJN5c

Fork of https://github.com/Kannagi/NGDK

This fork has makefiles that should compile under Linux and Windows (With MSYS2 MinGW 64-bit/WSL)

## Dependencies
1. m68k-elf-gcc (To target the m68k processor) For an easier installation, use the toolchain (https://github.com/BotBitmap/CTMZ_Toolchain)
2. A C compiler targetting your machine of your choice (EX: GCC/Clang, to compile the tools)
5. libsdl1.2 and libsdl-image1.2 (To compile the tools)
4. bsdtar libarchive (For packing roms)

Ubuntu dependencies (Except for m68k-elf-gcc)
```
apt-get install gcc make libarchive-tools libsdl1.2debian libsdl1.2-dev libsdl-image1.2 libsdl-image1.2-dev
```
Windows (MSYS2 MinGW 64-bit) dependencies (Except for m68k-elf-gcc)
```
pacman -S mingw-w64-x86_64-gcc make mingw-w64-x86_64-libarchive mingw-w64-x86_64-SDL mingw-w64-x86_64-SDL_image
```

## Building
```
cd SDK
make
```

## Running roms in MAME
```
mame $YOUR_ROM -bios $YOUR_BIOS
```

## The Neo Geo has 6 ROMs
- C1-C2 for Sprites
- S1 for Fix (HuD)
- M1 for Z80
- P1 for M68000
- V1 for Samples
