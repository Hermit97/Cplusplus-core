CXXFLAGS += -Wall -Wextra

main: run.o hello.o classB.o
    $(LINK.cpp) $(OUTPUT_OPTION) $^

run.o: run.cpp
run.o: hello.h

run.o: hello.cpp hello.h

