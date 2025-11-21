/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   texture_renderer.h                                        :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: esgi student <esgi student@myges.fr>                +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2025/11/21 01:00:00 by esgi student          #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2025/11/21 12:34:59 by :59 by esgi          ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */



#ifndef TEXTURE_RENDERER_H_
    #define TEXTURE_RENDERER_H_
    #include "wolf.h"
    #include <SFML/Graphics.h>

typedef struct wall_render_params_s {
    sfRectangleShape *wall;
    float height;
    float top;
    int texture_index;
    sfVector2u window_size;
} wall_render_params_t;

typedef struct floor_ceiling_shapes_s {
    sfRectangleShape* floor;
    sfRectangleShape* ceiling;
    sfVector2u win_size;
} floor_ceiling_shapes_t;

typedef struct floor_ceiling_params_s {
    sfRectangleShape *floor;
    sfRectangleShape *ceiling;
    sfIntRect floor_rect;
    sfIntRect ceiling_rect;
    sfVector2u win_size;
} floor_ceiling_params_t;

void create_sprites(texture_manager_t *manager);
void create_wall_sprite(texture_manager_t *manager, int index);
void draw_textured_floor_and_ceiling(sfRenderWindow *window,
    texture_manager_t *texture_manager);

void render_textured_wall_column(sfRenderWindow *window, int column,
    wall_hit_t *hit, texture_manager_t *texture_manager);

#endif
