cipher: main.o decrypt.o encrypt.o
	g++ main.o decrypt.o encrypt.o -o cipher

decrypt.o: src/decrypt.cpp src/include/decrypt.h
	g++ -c src/decrypt.cpp

encrypt.o: src/encrypt.cpp src/include/encrypt.h
	g++ -c src/encrypt.cpp

main.o: src/main.cpp
	g++ -c src/main.cpp

clean:
	del *.o