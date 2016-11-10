NAME = bocal.exec

SRC = 	AMateria.cpp \
 		Ice.cpp \
 		Cure.cpp \
 		Character.cpp \
		MateriaSource.cpp \
		main.cpp
		
HEADER = 

OBJDIR = 

all : $(NAME)

$(NAME) : 
	g++ -ggdb3 -Wall -Wextra $(HEADER) -c $(SRC) 
	g++ -o $(NAME)   *.o 
	
	
clean : 
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all