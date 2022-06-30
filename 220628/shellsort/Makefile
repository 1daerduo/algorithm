src = $(wildcard ./*.c)
obj = $(patsubst %.c, %.o, $(src))

all:a.out

a.out:$(obj)
	gcc $^ -o a.out -Wall
	
%.o:%c
	gcc -c $< -Wall
	
.PHONY:clean all
clean:
	-rm -rf a.out $(obj)