# Compilar todos los archivos .cc en el directorio actual
CC = g++
CXXFLAGS = -std=c++11

# Obtener la lista de todos los archivos .cc en el directorio actual
SOURCES = $(wildcard *.cc)

# Crear el nombre del archivo de salida
OUTPUT = output

all: $(OUTPUT)

$(OUTPUT): $(SOURCES)
	$(CC) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OUTPUT)

.PHONY: all clean