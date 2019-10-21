# NGDK
SDK for Neo Geo (Beta version)

## Install:
### Windows
- copy the SDK folder (in Windows/SDK) into C:\

### Linux:
- cd Linux
- bash install.sh

### 1)
- read install.txt in Linux or Windows Folder for configure C::B (You have the Screen folder which can help you visualize the configuration of C::B)

### The Neo Geo has 6 ROMs
- C1-C2 for Sprites
- S1 for Fix (HuD)
- M1 for Z80
- P1 for M68000
- V1 for Samples

### 2)
- To create the V1 you have to go to the CreateROM folder
- and running compile.bat (Windows) or V1_createrom.sh (Linux)

### 3)
- To create the C1-C2 you have to go to the Sample/data/ folder
- and running compile.bat (Windows) or compile.sh (Linux)

### 4)
- Copy 052-c1.bin, 052-c2.bin, 052-v1.bin files into Sample/bin

### 5)
- Open Code::Block in Sample/NGDKSample.cbp

### 6)
- The P1 will be generated by the compiler

