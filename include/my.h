/*
** EPITECH PROJECT, 2021
** myh
** File description:
** write all fonctios
*/

#ifndef MY_H_
    #define MY_H_
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <math.h>
    #include "define.h"

    typedef struct window {
        sfRenderWindow *window;
        sfVideoMode mode;
        sfEvent event;
    }window_t;

    window_t load_window(void);

    typedef struct menu_back {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfMusic *intro_menu;
        sfMusic *second_intro_menu;
        sfSound *click_sound;
        sfSoundBuffer *click_buffer;
    }menu_background_t;

    menu_background_t init_background(void);

    typedef struct main_menu_button {
        sfSprite *play_sprite;
        sfTexture *play_texture;
        sfVector2f play_taille;
        sfVector2f play_position;
        sfIntRect play_resize;
        sfSprite *quit_sprite;
        sfTexture *quit_texture;
        sfVector2f quit_taille;
        sfVector2f quit_position;
        sfIntRect quit_resize;
    }main_menu_btn;

    main_menu_btn init_main_menu_btn(void);

    typedef struct level_select {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfMusic *theme_sound;
    }level_select_t;

    level_select_t init_level_select(void);

    typedef struct level_selector_button {
        sfSprite *back_sprite;
        sfTexture *back_texture;
        sfVector2f back_taille;
        sfVector2f back_position;
        sfIntRect back_resize;
        sfSprite *tuto_sprite;
        sfTexture *tuto_texture;
        sfVector2f tuto_taille;
        sfVector2f tuto_position;
        sfIntRect tuto_resize;
    }level_selector_btn;

    level_selector_btn init_lvl_selector_button(void);

    typedef struct tuto {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
    }tutorial_image;

    tutorial_image init_tutorial(void);

    typedef struct qut_tuto {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
    }quit_tuto;

    quit_tuto init_quit_tuto_btn(void);

    typedef struct clash_crsr {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }clash_cursor;

    clash_cursor init_cursor(void);

    typedef struct twr_royal {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        int life_tower;
    }tower_royale;

    tower_royale init_tower_royale(void);

    typedef struct game_crd_prev {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }game_card_preview;

    game_card_preview init_game_preview(void);

    typedef struct lvl_1_bdg {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }level_1_badge;

    level_1_badge init_badge_1(void);

    typedef struct lvl_2_bdg {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }level_2_badge;

    level_2_badge init_badge_2(void);

    typedef struct lvl_3_bdg {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }level_3_badge;

    level_3_badge init_badge_3(void);

    typedef struct lvl_4_bdg {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }level_4_badge;

    level_4_badge init_badge_4(void);

    typedef struct arche_card {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }archery_card;

    archery_card init_archery_card(void);

    typedef struct can_card {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }canon_card;

    canon_card init_canon_card(void);

    typedef struct wizard_card {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }wizard_card;

    wizard_card init_wizard_card(void);

    typedef struct tesla_card {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }tesla_card;

    tesla_card init_tesla_card(void);

    typedef struct arche_tower {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }archery_tower;

    archery_tower init_archery_tower(void);

    typedef struct can_tower {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }canon_tower;

    canon_tower init_canon_tower(void);

    typedef struct wiz_tower {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }wizard_tower;

    wizard_tower init_wizard_tower(void);

    typedef struct tes_tower {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }tesla_tower;

    tesla_tower init_tesla_tower(void);

    typedef struct sit_tower {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        int posed;
        int shooted;
    }site_tower;

    site_tower *init_site_tower(int x, int y);

    site_tower **tab_of_tower_site(int nb_tower, const int *x, const int *y);

    typedef struct lvl_1_map {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }level_1_map;

    level_1_map init_map_1(void);

    typedef struct lvl_2_map {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }level_2_map;

    level_2_map init_map_2(void);

    typedef struct lvl_3_map {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }level_3_map;

    level_3_map init_map_3(void);

    typedef struct lvl_4_map {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
    }level_4_map;

    level_4_map init_map_4(void);

    typedef struct set_menu {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
    }btn_setting;

    btn_setting init_btn_setting(void);

    typedef struct bck_pause {
       sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
   }back_pause;

   back_pause init_back_pause(void);

   typedef struct pg_setting {
       sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
   }page_setting;

   page_setting init_page_setting(void);

   typedef struct set_resume {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
    }resume_setting;

    resume_setting init_resume_setting(void);

    typedef struct setting_menu {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
    }menu_setting;

    menu_setting init_menu_setting(void);

    typedef struct set_quit {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
    }quit_setting;

    quit_setting init_quit_setting(void);

    typedef struct enem_gol {
        int i;
        float x;
        float y;
        int pv;
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
        sfText *text;
        sfVector2f txt_pos;
        sfFont *font;
    }ennemie_golem;

    ennemie_golem *init_golem(int x, int y);

    ennemie_golem **tab_of_golem(int nb_golem, int *x, int *y);

    typedef struct enem_val {
        int i;
        float x;
        float y;
        int pv;
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
        sfText *text;
        sfVector2f txt_pos;
        sfFont *font;
    }ennemie_valkyrie;

    ennemie_valkyrie *init_valkyrie(int x, int y);

    ennemie_valkyrie **tab_of_valky(int nb_val, int *x, int *y);

    typedef struct enem_bar {
        int i;
        float x;
        float y;
        int pv;
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
        sfText *text;
        sfVector2f txt_pos;
        sfFont *font;
    }ennemie_barbare;

    ennemie_barbare *init_barbare(int x, int y);

    ennemie_barbare **tab_of_barbare(int nb_bar, int *x, int *y);

    typedef struct eli_bar {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
        sfClock *timer;
        int nb_elixir;
    }elixir_bar;

    elixir_bar init_elixir(void);

    typedef struct win {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
    }my_win;

    my_win init_win(void);

    typedef struct lose {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f taille;
        sfVector2f position;
        sfIntRect rect;
    }my_lose;

    my_lose init_lose(void);

    typedef struct sco_re_and_name {
        sfText *name_text;
        sfVector2f name_taille;
        sfVector2f name_position;
        sfFont *name_font;
        sfText *trohpy_text;
        sfVector2f trophy_taille;
        sfVector2f trophy_position;
        sfFont *trohpy_font;
    }score_and_name;

    typedef struct nb_trophy {
        sfText *text;
        sfVector2f position;
        sfFont *font;
    }trophy;

    typedef struct back_to_mnu {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f taille;
        sfIntRect rect;
    }back_to_menu;

    back_to_menu init_menu_endgame(void);

    typedef struct load_all {
        window_t window;
        menu_background_t main_menu;
        main_menu_btn main_menu_btn;
        level_select_t level_selector;
        level_selector_btn lvl_button;
        clash_cursor cursor;
        game_card_preview card_preview;
        level_1_badge badge1;
        level_2_badge badge2;
        level_3_badge badge3;
        level_4_badge badge4;
        level_1_map map1;
        level_2_map map2;
        level_3_map map3;
        level_4_map map4;
        archery_card arc_card;
        wizard_card wiz_card;
        canon_card can_card;
        tesla_card tes_card;
        tower_royale twr_royal;
        archery_tower arc_tower;
        canon_tower can_tower;
        wizard_tower wiz_tower;
        tesla_tower tes_tower;
        site_tower *sit_tower;
        site_tower *sit_tower2;
        site_tower **tab_of_site;
        site_tower **tab_of_site_lv_2;
        site_tower **tab_of_site_lv_3;
        site_tower **tab_of_site_lv_4;
        btn_setting setting;
        quit_setting quit;
        resume_setting resume;
        menu_setting menu;
        page_setting init_setting;
        back_pause pause_back;
        ennemie_golem *golem_ennemy;
        ennemie_golem **tab_of_golem;
        ennemie_golem **tab_of_golem_lv2;
        ennemie_golem **tab_of_golem_lv3;
        ennemie_golem **tab_of_golem_lv4;
        ennemie_valkyrie *valkyrie;
        ennemie_valkyrie **tab_of_valky;
        ennemie_valkyrie **tab_of_valky_lv2;
        ennemie_valkyrie **tab_of_valky_lv3;
        ennemie_valkyrie **tab_of_valky_lv4;
        ennemie_barbare *barbare;
        ennemie_barbare **tab_of_barbare;
        ennemie_barbare **tab_of_barbare_lv2;
        ennemie_barbare **tab_of_barbare_lv3;
        ennemie_barbare **tab_of_barbare_lv4;
        tutorial_image tuto;
        quit_tuto tuto_quit_btn;
        elixir_bar elixir;
        back_to_menu back_menu;
        int drag;
        int pause;
        int kill;
        int endgame;
        int endtower_king;
        sfClock *timer_golem;
        sfClock *timer_dmg_golem;
        my_win win;
        my_lose lose;
        char *name_ennemy;
        score_and_name *sc_and_name;
        int nb_trophy;
        trophy trophy;
    }all_t;

    score_and_name *init_score_and_name(all_t *all);

    trophy init_trophy(void);

#endif
