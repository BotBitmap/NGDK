MAKEFILE_PATH=$(abspath $(lastword $(MAKEFILE_LIST)))
MAKEFILE_DIR=$(dir $(MAKEFILE_PATH))
NGDK=$(MAKEFILE_DIR)
BIN=$(NGDK)/bin/
INC=$(NGDK)/inc/

SRC=$(NGDK)/src/
OBJ=$(NGDK)/obj/
LIB=$(NGDK)/lib/

MKDIR=mkdir

CC=m68k-elf-gcc
AR=m68k-elf-ar

SFLAGS=-O0 -m68000 -I"$(INC)"
CFLAGS=-O1 -m68000 -I"$(INC)"
OBJ_C= $(patsubst $(SRC)%.c,$(OBJ)%.o,$(wildcard $(SRC)*.c))

all: lib tools examples

$(LIB):
	$(MKDIR) $(LIB)

$(OBJ):
	$(MKDIR) $(OBJ)

lib: $(LIB) $(OBJ) $(OBJ_C)
	$(AR) -r -s $(LIB)libNGDK.a $(OBJ_C)

lib_clean:
	$(RM) $(OBJ)*.o

$(OBJ)%.o : $(SRC)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: lib_clean tools_clean examples_clean
	$(RM) $(OBJ)*.o

# TOOLS INIT
tools_build:
	make -C $(NGDK)/tools_src/NGextract
	make -C $(NGDK)/tools_src/RetroConvert
	make -C $(NGDK)/tools_src/RetroRes
	make -C $(NGDK)/tools_src/RetroTMX
	make -C $(NGDK)/tools_src/RomK
	make -C $(NGDK)/tools_src/bin2c

tools_clean:
	make clean -C $(NGDK)/tools_src/NGextract
	make clean -C $(NGDK)/tools_src/RetroConvert
	make clean -C $(NGDK)/tools_src/RetroRes
	make clean -C $(NGDK)/tools_src/RetroTMX
	make clean -C $(NGDK)/tools_src/RomK
	make clean -C $(NGDK)/tools_src/bin2c
	rm -f $(NGDK)/bin/tools/*

tools: tools_build
# Copying files to NGDK bin directory
	mkdir -p                                $(NGDK)/bin/tools/
	cp $(NGDK)/tools_src/NGextract/bin/*    $(NGDK)/bin/tools/
	cp $(NGDK)/tools_src/RetroConvert/bin/* $(NGDK)/bin/tools/
	cp $(NGDK)/tools_src/RetroRes/bin/*     $(NGDK)/bin/tools/
	cp $(NGDK)/tools_src/RetroTMX/bin/*     $(NGDK)/bin/tools/
	cp $(NGDK)/tools_src/RomK/bin/*         $(NGDK)/bin/tools/
	cp $(NGDK)/tools_src/bin2c/bin2c        $(NGDK)/bin/tools/
# TOOLS END

# EXAMPLES INIT
examples: lib tools
	make -C $(NGDK)/examples
examples_clean:
	make clean -C $(NGDK)/examples
# EXAMPLES END
