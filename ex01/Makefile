# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybesbes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 16:03:47 by ybesbes           #+#    #+#              #
#    Updated: 2021/12/07 16:03:52 by ybesbes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	myphonebook

SRCS	=	Phonebook.Class.cpp 

OBJS	=	${SRCS:.cpp=.o}

CC	=	clang++

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}


all:	${NAME}

${NAME}:	$(OBJS) 
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		${RM} ${OBJS} 

fclean:	
		${RM} ${OBJS} 
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re