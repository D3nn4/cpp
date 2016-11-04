NAME = attack

SRC = 	AWeapon.cpp \
		PlasmaRifle.cpp \
		PowerFist.cpp \
		Enemy.cpp \
		SuperMutant.cpp \
		RadScorpion.cpp \
		Character.cpp \
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