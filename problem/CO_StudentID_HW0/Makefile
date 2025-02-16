CC := riscv64-unknown-linux-gnu-gcc
CFLAGS := -static
TARGET := 1 2
v := 0

all: $(TARGET)

1: 1.c
	$(CC) $(CFLAGS) -o $@ $^
2: 2.c
	$(CC) $(CFLAGS) -o $@ $^

	
judge: all
	-judge -c judge1.conf  
	@printf "or \`judge -c judge1.conf -v 1\n\`"
	-judge -c judge2.conf
	@printf "or \`judge -c judge2.conf -v 1\n\`"


clean:
	rm -f $(TARGET)
