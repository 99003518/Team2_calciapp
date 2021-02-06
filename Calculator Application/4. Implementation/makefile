all: run clean


build = BUILD

SRC = main.c\
src/addition.c\
src/expo.c\
src/factorial.c\
src/mul.c\
src/ncr.c\
src/npr.c\
src/percentage.c\
src/bitoperations.c\
src/division.c\
src/modulo.c\
src/subtraction.c\
src/hectaretoacre.c\
src/inchtocentimeter.c\
src/kmtometer.c\


TEST_SRC = src/addition.c\
src/expo.c\
src/factorial.c\
src/mul.c\
src/ncr.c\
src/npr.c\
src/percentage.c\
src/bitoperations.c\
src/division.c\
src/modulo.c\
src/subtraction.c\
src/hectaretoacre.c\
src/inchtocentimeter.c\
src/kmtometer.c\
Test/test_calculator.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out


$(BUILD):
			mkdir build

INC = -Iinc\
 -Iunity\

PROJECT_NAME = group2.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_NAME)



