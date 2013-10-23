all: Generate

Generate: GeneratePrimes.cpp
	g++ -g -Wall -o GeneratePrimes GeneratePrimes.cpp

clean:
	rm GeneratePrimes *.o *~ *.gch
