PROJECT_NAME = Calculator

BUILD = build

SRC = main.c\
src/addition.c\
src/expo.c\
src/factorial.c\
src/mul.c\
src/ncr.c\
src/npr.c\
src/percentage.c\
src/bit.c\
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
src/bit.c\
src/division.c\
src/modulo.c\
src/subtraction.c\
src/hectaretoacre.c\
src/inchtocentimeter.c\
src/kmtometer.c\
Test/test_calculator.c\
unity/unity.c\


TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out


# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD)

# Create new build folder if not present
$(BUILD):
	mkdir build






