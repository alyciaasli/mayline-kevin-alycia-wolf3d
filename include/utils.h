/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   utils.h                                                   :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: esgi student <esgi student@myges.fr>                +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2025/11/07 11:08:35 by esgi student          #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2025/11/07 11:08:35 by esgi student         ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */



#ifndef UTILS_H_
    #define UTILS_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include "menu.h"
    #include "wolf.h"

sfRenderWindow *create_window_util(unsigned int width, unsigned int height,
    const char *title, sfUint32 style);

int init_texture_sprite(background_t *background, const char *texture_path,
    sfVector2f position);
void destroy_texture_sprite(background_t *background);

void handle_generic_events(sfRenderWindow *window, sfEvent event,
    game_state_t *state);

#endif
