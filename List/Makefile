CFLAGS = -c -wall -Isrc
inc = -Isrc 
OFLAG = -o
cc = g++
obj = Main.o
compile: $(obj) 
	$(cc) $(OFLAG) $(obj)  
Main.o:Main.cpp $(inc)  
	$(cc) $(CFLAG) Main.cpp 
clean: 
	rm -rf *.o *.exe
