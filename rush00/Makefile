NAME = GKrellM.exec

SRC = 	src/main.cpp \
		src/ft_gkrellm.cpp \
		src/modules/username.cpp \
		src/modules/hostname.cpp
		
HEADER = 	-Iinclude/ \
			-Iinclude/modules/

OBJDIR = build

all : $(NAME)

$(NAME) : 
	g++ -ggdb3 -Wall -Wextra $(HEADER) -c $(SRC) 
	g++ -o $(NAME)   *.o 
	
	
clean : 
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all