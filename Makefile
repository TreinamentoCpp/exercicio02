CXXFLAGS = -std=gnu++0x	-O2 -g -Wall -fmessage-length=0

OBJS =		src/Exercicio_02.o src/scheduler.o

LIBS =

TARGET =	exercicio02

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
