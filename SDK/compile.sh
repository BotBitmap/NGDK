#!/bin/bash
cd bin
/usr/bin/m68k-linux-gnu-objcopy -O binary bin.elf 052-p1.bin
/usr/local/SDK/tools/RomK -invertng 052-p1.bin
zip -1 ssideki *.bin



