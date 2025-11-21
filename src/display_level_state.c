/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   display_level_state.c                                     :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: esgi student <esgi student@myges.fr>                +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2025/11/07 11:04:41 by esgi student          #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2025/11/07 11:04:41 by esgi student         ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */



#include "wolf.h"

void manage_game_state(sfRenderWindow *window, game_state_t *state)
{
    display_game_completed(window);
    sfRenderWindow_setView(window,
    sfRenderWindow_getDefaultView(window));
    *state = MENU;
}

static void manage_display_level(sfRenderWindow *window, sfFont *font,
    sfText *text)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawText(window, text, NULL);
    sfRenderWindow_display(window);
    sfSleep(sfSeconds(3));
    sfText_destroy(text);
    sfFont_destroy(font);
    return;
}

void display_completed_level(sfRenderWindow *window)
{
    sfFont *font = sfFont_createFromFile("ressources/font.ttf");
    sfText *text = NULL;
    sfFloatRect bounds = {0};
    sfVector2u size = {0};

    if (font == NULL)
        return;
    text = sfText_create();
    sfText_setString(text, "LEVEL COMPLETE!");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 100);
    sfText_setFillColor(text, sfWhite);
    bounds = sfText_getLocalBounds(text);
    size = sfRenderWindow_getSize(window);
    sfText_setPosition(text, (sfVector2f){(size.x - bounds.width) / 2.0f,
        (size.y - bounds.height) / 2.0f});
    manage_display_level(window, font, text);
    return;
}

static void manage_display_completed(sfRenderWindow *window, sfFont *font,
    sfText *text)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawText(window, text, NULL);
    sfRenderWindow_display(window);
    sfSleep(sfSeconds(3));
    sfText_destroy(text);
    sfFont_destroy(font);
    return;
}

void display_game_completed(sfRenderWindow *window)
{
    sfFont *font = sfFont_createFromFile("ressources/font.ttf");
    sfText *text = NULL;
    sfFloatRect bounds = {0};
    sfVector2u size = {0};

    if (font == NULL)
        return;
    text = sfText_create();
    sfText_setString(text, "GAME COMPLETED!");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 100);
    sfText_setFillColor(text, sfYellow);
    bounds = sfText_getLocalBounds(text);
    size = sfRenderWindow_getSize(window);
    sfText_setPosition(text, (sfVector2f){
        (size.x - bounds.width) / 2.0f,
        (size.y - bounds.height) / 2.0f
    });
    manage_display_completed(window, font, text);
}

static void manage_display_over(sfRenderWindow *window, sfFont *font,
    sfText *text)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawText(window, text, NULL);
    sfRenderWindow_display(window);
    sfSleep(sfSeconds(3));
    sfText_destroy(text);
    sfFont_destroy(font);
    return;
}

void display_game_over(sfRenderWindow *window)
{
    sfFont *font = sfFont_createFromFile("ressources/font.ttf");
    sfText *text = NULL;
    sfFloatRect bounds = {0};
    sfVector2u size = {0};

    if (font == NULL)
        return;
    text = sfText_create();
    sfText_setString(text, "GAME OVER!");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 100);
    sfText_setFillColor(text, sfYellow);
    bounds = sfText_getLocalBounds(text);
    size = sfRenderWindow_getSize(window);
    sfText_setPosition(text, (sfVector2f){
        (size.x - bounds.width) / 2.0f,
        (size.y - bounds.height) / 2.0f
    });
    manage_display_over(window, font, text);
}
