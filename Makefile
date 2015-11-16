CFLAGS=--std=c99

.PHONY:
all: example test

test: test.o bsearch.o
	$(CXX) $(CXXFLAGS) -o $@ $^

example: example.o bsearch.o
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:
clean:
	rm *.o example test
