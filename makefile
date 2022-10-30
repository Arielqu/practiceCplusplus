#output project name: where is the file come from; where it depends 
#destination: source
practice: practice.o 
#how we get from the source to the destination
	g++ practice.o -o practice
#how the smaller target generated?
practice.o: practice.cpp
	g++ -c practice.cpp
clean:
	rm *.o practice