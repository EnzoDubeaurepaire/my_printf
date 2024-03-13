##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Placeholder
##

SRC	=	include/my_compute_power_rec.c \
		include/my_compute_square_root.c \
		include/my_find_prime_sup.c \
		include/my_getnbr.c \
		include/my_isneg.c \
		include/my_is_prime.c \
		include/my_putnbr_base.c \
		include/my_putnbr.c \
		include/my_putstr.c \
		include/my_revstr.c \
		include/my_showstr.c \
		include/my_show_word_array.c \
		include/my_strcapitalize.c \
		include/my_strcat.c \
		include/my_strcmp.c \
		include/my_strcpy.c \
		include/my_str_isalpha.c \
		include/my_str_islower.c \
		include/my_str_isnum.c \
		include/my_str_isprintable.c \
		include/my_str_isupper.c \
		include/my_strlen.c \
		include/my_strlowcase.c \
		include/my_strncat.c \
		include/my_strncmp.c \
		include/my_strncpy.c \
		include/my_strstr.c \
		include/my_str_to_word_array.c \
		include/my_strupcase.c \
		include/my_putnbr_str.c	\
		include/len_nbr.c \
		include/my_swap.c \
		src/do_flags.c \
		src/get_flags.c \
		src/get_length.c \
		src/get_params.c \
		src/get_specifier.c \
		src/min_digits_precision.c \
		src/my_printf.c \
		src/my_printf_o.c \
		src/my_printf_percent.c \
		src/my_printf_u.c \
		src/write_struct.c \
		src/my_printf_x.c \
		src/my_printf_ux.c \
		include/my_putnbr_str_double.c \
		src/my_printf_d.c \
		src/my_printf_i.c \
		src/my_printf_s.c \
		src/my_printf_c.c \
		src/my_printf_p.c \
		src/my_printf_n.c \
		src/my_printf_b.c \
		src/my_printf_f.c \
		src/my_printf_a.c \
		src/my_printf_ua.c \
		src/my_printf_e.c \
		src/my_printf_ue.c \
		src/my_printf_ug.c \
		include/my_putnb_str_float.c \
		src/my_printf_g.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_printf.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean $(NAME)
