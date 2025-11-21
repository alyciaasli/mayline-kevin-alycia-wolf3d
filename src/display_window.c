/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   display_window.c                                          :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: esgi student <esgi student@myges.fr>                +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2025/11/21 12:37:35 by esgi student          #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2025/11/21 12:37:35 by esgi student         ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */


#include "wolf.h"

void close_window(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
    }
    return;
}

int window(void)
{
    sfVideoMode mode = {WIDTH, HEIGHT, 32};
    sfEvent event = {0};
    sfRenderWindow* window = sfRenderWindow_create
    (mode, "WOLFENSTEIN3D", sfResize | sfClose, NULL);

    if (!window) {
        return EXIT_ERROR;
    }
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            close_window(window, event);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}
