SRC = unity/unity.c\
src/maincode.c\
test/testfinl.c\

INC = -Iunity\
-Iinc\

PROJECT_NAME = Snackorder.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}