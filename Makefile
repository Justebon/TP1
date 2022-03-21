Main: vecteur.o
	g++ -o Main Vecteur.o
Vecteur.o: Vecteur.cpp Vecteur.hpp
	g++ -g -c Vecteur.cpp
clean :
	rm -f *.o Main
