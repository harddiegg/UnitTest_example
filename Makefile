ifndef V
	QUIET_CC       = @echo '  ' CC '       ' $@;
	QUIET_BUILT_IN = @echo '  ' BUILTIN '  ' $@;
	QUIET_CLEAN    = @echo '  ' CLEAN '    ' $<;
endif

CC = cc
CFLAGS = -std=c99 -Wall -Werror
RM = rm -f

lib =
path = bin
bin_name = Tetris
obj = \
		$(path)/main.o   \
		$(path)/block.o

all : check_path $(path)/$(bin_name)

$(path)/$(bin_name) : $(obj)
	$(QUIET_BUILT_IN)$(CC) $(CFLAGS) $(obj) -o $(path)/$(bin_name) $(lib)
$(path)/%.o : %.c
	$(QUIET_CC)$(CC) $(CFLAGS) -c $< -o $@

clean : $(path)
	$(QUIET_CLEAN)$(RM) -r $<

check_path :
	@ if [ ! -d $(path) ]; then mkdir $(path); fi
