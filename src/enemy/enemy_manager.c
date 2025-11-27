/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   enemy_manager.c                                           :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: asli-alycia <asli-alycia@myges.fr>                  +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2025/11/27 17:01:28 by asli-alycia           #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2025/11/27 17:01:28 by asli-alycia          ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */

#include "enemy.h"
#include "wolf.h"
#include <stdlib.h>

void add_enemy_to_list(enemy_t **list, enemy_t *enemy)
{
    if (!list || !enemy)
        return;
    enemy->next = *list;
    *list = enemy;
}

void destroy_all_enemies(enemy_t *enemy_list)
{
    enemy_t *current = enemy_list;
    enemy_t *next = NULL;

    while (current) {
        next = current->next;
        destroy_enemy(current);
        current = next;
    }
}
