# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Werror
RM := rm -f
AR := ar -rcs
HEADERS = libft.h
#% is a wildcard that matches any string
#it is different from $(wildcard ...) which is a function that returns a list of files
#$< & $@ & etc are automatic variables
#$< is the first prerequisite and $@ is the NAME name
#$^ is all prerequisites
# Source files
SRCS := ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

OBJS := $(SRCS:.c=.o)

# Object files
# note that this isnt the transformation of the source files
# its just a list of object files as a variable
# this is a pattern rule, it tells make how to build a .o file from a .c file
#and then does the compilation
#note that i do NOT use %.o: %.c on the recipe because it would search for files literally named like that  
NAME := libft.a

# a rule is a target and its prerequisites
# if theres no prerequisites, it will always be executed
#all is a phony NAME, that means it is not a file
#and it will always be executed
all:	$(NAME) $(HEADERS)
		@echo "Done :D";

$(NAME):	$(OBJS)
	@$(AR) $(NAME) $^
	@echo archived all the objects into libft.a

%.o:	%.c
	@$(CC) -c $(CFLAGS) $< -o $@
	@echo compiled $<

clean:
	@$(RM) $(OBJS)
	@echo object files removed

fclean:	clean
	@$(RM) $(NAME)
	@echo removed libft.a

re:	fclean	all
	@echo libft.a recompiled from scratch

.PHONY:	all	clean	fclean	re