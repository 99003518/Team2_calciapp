PROJECT_NAME	=	Calculator_Application

BUILD	=	build

SRC	=	main.c\
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

TEST_SRC	=	test/test_calculator.c\
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
unity/unity.c\

TEST_OUTPUT	=	$(BUILD)/Test_$(PROJECT_NAME).out

INC	=	-Iinc\
-Iunity

PROJECT_OUTPUT	=	$(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT	=	documentation/html

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



