
TARGET = lab1

FILES = ./src/main.cpp
OBJS = ./src/main.o

.PHONY:all
all: $(TARGET)

$(TARGET): $(OBJS)
	g++ -o $(TARGET) $^

$(OBJS): $(FILES)
	g++ -c $< -o $@

.PHONY:clean
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY:run
run:
	./$(TARGET)
