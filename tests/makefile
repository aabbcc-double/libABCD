LIBABCD=../libABCD
BUILD=./build
INC=-I$(LIBABCD)/ -I./ -I./minunit

UNAME=$(shell uname)
ifeq ($(UNAME), Darwin)

else
LRT=-lrt
endif

testLIBABCD: clean buildFolder
	gcc main.m $(LIBABCD)/*.m $(INC) -o $(BUILD)/tests -lobjc $(LRT)
buildFolder:
	mkdir $(BUILD)

clean:
	rm -rf $(BUILD)
