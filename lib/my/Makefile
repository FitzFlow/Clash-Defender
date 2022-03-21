##
## EPITECH PROJECT, 2021
## makefile
## File description:
## filedescription
##

SRC = create_screen.c \
	window.c \
	window_2.c \
	menu.c \
	level_selector.c \
	display_cursor.c \
	anim_valkye.c \
	anim_valkye_lv2.c \
	anim_valkye_lv3.c \
	anim_valkye_lv4.c \
	anim_barbare.c \
	anim_barbare_lv2.c \
	anim_barbare_lv3.c \
	anim_barbare_lv4.c \
	animate_btn.c \
	animate_btn_pt2.c \
	animate_btn_setting.c \
	animate_btn_set2.c \
	animate_badge.c \
	card_animation.c \
	drag_and_drop.c \
	drag_drop_lv2.c \
	drag_drop_lv3.c \
	drag_drop_lv4.c \
	drop_tower.c \
	drop_tower_lv2.c \
	drop_tower_lv3.c \
	drop_tower_lv4.c \
	if_drag_and_drop.c \
	init_level_1.c \
	init_level_2.c \
	init_level_3.c \
	init_level_4.c \
	init_badge.c \
	init_setting.c \
	init_menu_engdame.c \
	interact_badge.c \
	interact_setting.c \
	draw_with_state.c \
	init_all_struct.c \
	init_all_struct_2.c \
	move_golem.c \
	move_golem_lv2.c \
	move_golem_lv3.c \
	move_golem_lv4.c \
	init_ennemy.c \
	init_ennemy_2.c \
	init_elixir.c \
	shoot_golem_lv1.c \
	shoot_valkye_lv1.c \
	shoot_barb_lv1.c \
	shoot_golem_lv2.c \
	shoot_valkye_lv2.c \
	tower_king_lose_lv2.c \
	shoot_barb_lv2.c \
	shoot_golem_lv3.c \
	shoot_valkye_lv3.c \
	tower_king_lose_lv3.c \
	shoot_barb_lv3.c \
	shoot_golem_lv4.c \
	shoot_valkye_lv4.c \
	tower_king_lose_lv4.c \
	shoot_barb_lv4.c \
	init_hud.c \
	init_card.c \
	init_tower.c \
	init_btn_set.c \
	init_tutorial.c \
	draw_level_1.c \
	draw_level_1_pt2.c \
	draw_level_2_pt2.c \
	draw_level_3_pt2.c \
	draw_level_4_pt2.c \
	draw_level_2.c \
	draw_level_3.c \
	draw_level_4.c \
	tower_king_lose.c \
	init_status_win.c \
	move_golem2.c \
	name_of_ennemy.c \
	my_strdup.c \
	init_score_and_name.c \
	my_nbr_to_char.c \
	move_valkye.c \
	move_valkye_lv2.c \
	move_valkye_lv3.c \
	move_valkye_lv4.c \
	move_barbare.c \
	move_barbare_lv2.c \
	move_barbare_lv3.c \
	move_barbare_lv4.c \
	draw_level_selection.c \
	level_action.c \
	level_action_2.c \
	draw_couronne.c \
	all_drag_and_drop.c \
	move_golem_lv2_part2.c \
	move_golem_lv2_part3.c \
	move_golem_lv2_part4.c

OBJ = $(SRC:.c=.o)

IFLAGS = -I ../../include

NAME = libmy.a

all:
	gcc -c $(SRC) $(IFLAGS)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp defender.h ../../include
	cp define.h ../../include

clean:
	rm -f $(OBJ)
	rm -f menu/$(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f menu/$(OBJ)

re: fclean all
