LIBABCD=../libABCD
BUILD=./build
INC=-I$(LIBABCD)/ -I./ -I./minunit

testLIBABCD: clean buildFolder
	gcc -x objective-c main.m $(LIBABCD)/*.m $(INC) -o $(BUILD)/tests -lobjc
buildFolder:
	mkdir $(BUILD)

clean:
	rm -rf $(BUILD)
