hepsi: derle calistir
nesneler := ./lib/Ogrenci.o ./lib/Sinif.o ./lib/Okul.o ./lib/Yonetim.o
derle:
	g++ -I ./include/ -o ./lib/Ogrenci.o -c ./src/Ogrenci.cpp
	g++ -I ./include/ -o ./lib/Sinif.o -c ./src/Sinif.cpp
	g++ -I ./include/ -o ./lib/Okul.o -c ./src/Okul.cpp
	g++ -I ./include/ -o ./lib/Yonetim.o -c ./src/Yonetim.cpp
	g++ -I ./include/ -o ./bin/program $(nesneler) ./src/program.cpp
calistir:
	./bin/program