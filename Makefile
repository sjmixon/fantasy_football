
CC = g++

CPPFLAGS = -g -W -Wall -Werror -std=c++11 -Weffc++ -Wextra -pedantic

LDFLAGS = 

OBJS = \
	obj/Main.o \
	obj/Season.o \
	obj/Season_Factory.o \
	obj/Team.o \
	obj/Team_Factory.o

default : $(OBJS)
	$(CC) $(CPPFLAGS) -o run $(OBJS) $(LDFLAGS)

obj/%.o : src/%.cpp src/%.h
	$(CC) $(CPPFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJS)
	rm -rf run
