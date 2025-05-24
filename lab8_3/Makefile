CXX = g++
CXXFLAGS = -std=c++11 -Wall
OBJS = tetris5.o genMino.o MinoI.o MinoS.o MinoL.o MinoT.o MinoZ.o Mino.o
TARGET = tetris

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

clean:
	rm -f *.o $(TARGET)

