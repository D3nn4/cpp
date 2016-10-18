NAME = death_note.exec

SRC = 	src/main.cpp\
		src/death_note.cpp \
		src/directory.class.cpp \
		src/contact.class.cpp \
		src/basic_func.cpp
		
HEADER = -Iincludes 

OBJDIR = build/

all : $(NAME)

$(NAME) : 
	g++ -ggdb3 -Wall -Wextra $(HEADER) -c $(SRC) 
	g++ -o $(NAME)   *.o 
	mv *.o $(OBJDIR)
	
clean : 
	rm -f $(OBJDIR)*.o

fclean : clean
	rm -f $(NAME)

re : fclean all