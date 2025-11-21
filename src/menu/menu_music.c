/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   menu_music.c                                              :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: esgi student <esgi student@myges.fr>                +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2025/11/07 11:04:57 by esgi student          #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2025/11/07 11:04:57 by esgi student         ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */


#include "wolf.h"

int music(sfMusic **play_music)
{
    char *file_path = "ressources/song/backroom_song.ogg";

    *play_music = sfMusic_createFromFile(file_path);
    if (!*play_music) {
        return EXIT_ERROR;
    }
    sfMusic_setLoop(*play_music, sfTrue);
    sfMusic_play(*play_music);
    return EXIT_SUCCESS;
}
