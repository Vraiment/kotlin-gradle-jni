# This is dirty but should work
#JVM_HOME = /Library/Java/JavaVirtualMachines/jdk1.8.0_171.jdk/Contents/Home

all:
	cc -I$(JVM_HOME)/include -I$(JVM_HOME)/include/darwin -c -O2 -o $(OUTPUT)/Native.o Native.c
	cc -dynamiclib -undefined suppress -flat_namespace  -o $(OUTPUT)/Native.dylib $(OUTPUT)/*.o
	
clean:
	rm -fv $(OUTPUT)/*
