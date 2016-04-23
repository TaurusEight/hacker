
target := factorials

all:	$(target)

main.o:	main.cc
	g++ -c -o $@ $^

$(target):	main.o
	g++ -o $@ $^

run:	$(target)
	./$(target) < sample.txt
