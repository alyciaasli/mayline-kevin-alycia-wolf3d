/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   init_view.c                                               :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: esgi student <esgi student@myges.fr>                +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2025/11/21 12:37:42 by esgi student          #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2025/11/21 12:37:42 by esgi student         ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */



#include "wolf.h"

void init_game_view(game_context_t *ctx,
    init_context_params_t params)
{
    sfVector2u size = sfRenderWindow_getSize(params.window);
    sfVector2f center = {size.x / 2.0f, size.y / 2.0f};
    sfVector2f view_size = {size.x * 1.0f, size.y * 1.0f};

    ctx->game_view = sfView_create();
    sfView_setCenter(ctx->game_view, center);
    sfView_setSize(ctx->game_view, view_size);
    return;
}

int initialise_lightning(game_context_t *ctx)
{
    sfVector2u win_size = sfRenderWindow_getSize(ctx->window);
    const sfTexture *texture = NULL;

    ctx->light_texture = sfRenderTexture_create(win_size.x, win_size.y,
        sfFalse);
    if (ctx->light_texture == NULL)
        return EXIT_ERROR;
    ctx->light_sprite = sfSprite_create();
    ctx->light_state = true;
    texture = sfRenderTexture_getTexture(ctx->light_texture);
    sfSprite_setTexture(ctx->light_sprite, texture, sfTrue);
    return EXIT_SUCCESS;
}
