# Nome do executável final
EXEC = TrabalhoN1
# Procurar automaticamente todos os arquivos .c no diretório atual
SRC = $(wildcard *.c)

# Gerar lista de arquivos .o (substituir .c por .o)
OBJ = $(SRC:.c=.o)

# Flags de compilação
CFLAGS = -Wall -g

# Compilador a ser utilizado
CC = gcc

# Regra padrão: compilar o executável a partir dos objetos
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# Regras para compilar cada arquivo .c em um .o correspondente
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar arquivos objeto e executável
clean:
	rm -f $(OBJ) $(EXEC)
