/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   fps.h                                                     :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: esgi student <esgi student@myges.fr>                +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2025/11/07 11:08:10 by esgi student          #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2025/11/07 11:08:10 by esgi student         ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */


#ifndef FPS_H_
    #define FPS_H_
    #include <SFML/Graphics.h>

typedef struct fps_info_s {
    sfClock *fps_clock;
    sfText *fps_text;
    sfFont *font;
    float fps;
    int frame_count;
    float elapsed_time;
} fps_info_t;

fps_info_t *create_fps_display(void);
void update_fps_display(fps_info_t *fps_info);
void draw_fps_display(sfRenderWindow *window, fps_info_t *fps_info);
void destroy_fps_display(fps_info_t *fps_info);

#endif
