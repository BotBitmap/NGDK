# NGDK_FORK
SDK for Neo Geo (Beta version)

Discord : https://discord.gg/2VCJN5c

Fork of https://github.com/Kannagi/NGDK

This fork has makefiles that should compile under Linux and Windows (With MSYS2 MinGW 64-bit/WSL)

## Dependencies
1. m68k-elf-gcc (To compile for the m68k processor) For an easier installation, use the toolchain (https://github.com/BotBitmap/CTMZ_Toolchain)
2. bsdtar libarchive (For packing roms)
3. libsdl1.2 and libsdl-image1.2 (To compile the tools)

Ubuntu dependencies - Except for m68k-elf-gcc
```
apt-get install make libarchive-tools libsdl1.2-dev libsdl1.2debian libsdl-image1.2 libsdl-image1.2-dev
```
Windows dependencies (MSYS2 MinGW 64-bit) - Except for m68k-elf-gcc
```
pacman -S make mingw-w64-x86_64-libarchive mingw-w64-x86_64-SDL mingw-w64-x86_64-SDL_image
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
