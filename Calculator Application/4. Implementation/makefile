PROJECT_NAME = Calculator Application

BUILD = build

SRC = main.c\
src/addition.c\
src/bit.c\
src/division.c\
src/expo.c\
src/factorial.c\
src/hectaretoacre.c\
src/inchtocentimeter.c\
src/kmtometer.c\
src/modulo.c\
src/mul.c\
src/ncr.c\
src/npr.c\
src/percentage.c\
src/subtraction.c\

TEST_SRC = src/test_calculator.c\
test/addition.c\
test/bit.c\
test/division.c\
test/expo.c\
test/factorial.c\
test/hectaretoacre.c\
test/inchtocentimeter.c\
test/kmtometer.c\
test/modulo.c\
test/mul.c\
test/ncr.c\
test/npr.c\
test/percentage.c\
test/subtraction.c\

Test/test_calculator.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

INC	= -Iinc\
-Iunity

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html

$(PROJECT_NAME):all

.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out
  
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)
	
doc:
	make -C ./documentation


test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
		./$(TEST_OUTPUT)
  
  
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
  
  
 $(BUILD):
	mkdir build



