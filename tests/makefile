LIBABCD=../libABCD
BUILD=./build
INC=-I$(LIBABCD)/ -I./ -I./minunit

testLIBABCD: clean buildFolder
	gcc main.m $(LIBABCD)/*.m $(INC) -o $(BUILD)/tests -lobjc -O0

buildFolder:
	mkdir $(BUILD)

clean:
	rm -rf $(BUILD)
