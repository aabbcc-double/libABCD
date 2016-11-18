LIBABCD=../libABCD
BUILD=./build
INC=-I$(LIBABCD)/ -I./ -I./minunit
LDFLAGS=-lobjc

UNAME=$(shell uname)

testLIBABCD: clean buildFolder
ifeq ($(UNAME), Darwin)

else
	LDFLAGS += -lrt
endif
	gcc main.m $(LIBABCD)/*.m $(INC) -o $(BUILD)/tests $(LDFLAGS)
buildFolder:
	mkdir $(BUILD)

clean:
	rm -rf $(BUILD)
