PROJECT_NAME = all.exe
SRC = stackop.c\
src\push.c\
src\pop.c\
src\topelement.c\
src\checkpalindrome.c

INC = inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
clean:
	del /q *.exe