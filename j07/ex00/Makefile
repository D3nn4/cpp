NAME = ex00.exec

SRC = 	main.cpp \
		swap.cpp \
		min.cpp \
		max.cpp
		
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