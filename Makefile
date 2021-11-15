# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:37:55 by rdehouck          #+#    #+#              #
#    Updated: 2021/11/15 17:16:12 by rdehouck         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

DIR_SRCS	= srcs
DIR_OBJS	= objs
SUBDIRS		= partie1 partie2

SRCS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRCS)/, $(dir)))
OBJS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJS)/, $(dir)))
SRCS		= $(foreach dir, $(SRCS_DIRS), $(wildcard $(dir)/*.c))
OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

INCLUDES	= -I includes

CC		= clang
CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f

$(DIR_OBJS)/%.o :	$(DIR_SRCS)/%.c
			@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)
			@ranlib $(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)
			@$(RM) -r $(DIR_OBJS)

re:			fclean all

.PHONY:		all clean fclean re
