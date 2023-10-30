# Compilador y opciones
CXX := g++
CXXFLAGS := -std=c++11 -Wall

# Directorios
SRC_DIR := .
OBJ_DIR := obj
BIN_DIR := bin

# Objetivos y fuentes
TARGET := programa
SOURCES := $(wildcard $(SRC_DIR)/*.cc)
OBJECTS := $(patsubst $(SRC_DIR)/%.cc,$(OBJ_DIR)/%.o,$(SOURCES))

# Regla de compilación
$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$(TARGET) $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Limpieza
.PHONY: clean
clean:
	@rm -rf $(OBJ_DIR) $(BIN_DIR)

# Ejecutar
.PHONY: run
run: $(TARGET)
	./$(BIN_DIR)/$(TARGET)

# Predeterminado
.PHONY: default
default: $(TARGET)
