CXX = g++
CXXFLAGS = -g -Wall -std=c++17

OBJS = main.o transactions.o tracker.o

main.exe: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main.exe

main.o: main.cpp tracker.hpp transactions.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Transaction.o: transactions.cpp transactions.hpp
	$(CXX) $(CXXFLAGS) -c transactions.cpp

Tracker.o: tracker.cpp tracker.hpp transactions.hpp
	$(CXX) $(CXXFLAGS) -c tracker.cpp

.PHONY: clean
clean:
	rm -f main.exe $(OBJS)