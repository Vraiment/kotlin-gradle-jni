all:
	cc -I$(JDK_DIR)/include -I$(JDK_DIR)/include/darwin -I$(GENERATED_HEADERS_DIR) -c -O2 -o $(OUTPUT_DIR)/Native.o Native.c
	cc -dynamiclib -undefined suppress -flat_namespace  -o $(OUTPUT_DIR)/Native.dylib $(OUTPUT_DIR)/*.o
