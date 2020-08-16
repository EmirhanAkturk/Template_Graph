OFILES =  main.o
TARGET = main
COMPILER = g++-10
FLAG = -std=c++17 
# TXTFILES = TwapAddOrder.txt VwapAddOrder.txt

$(TARGET): $(OFILES)
	$(COMPILER) $(OFILES) -o $@ $(FLAG)

clean:
	rm $(OFILES) $(TXTFILES)

# below this is the output of "g++10 -MM":
main.o: main.cpp inc/Graph.hpp inc/../src/Graph.inl \
 inc/../src/../inc/Graph.hpp
	$(COMPILER) main.cpp -c	$(FLAG)
