/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:43:47 by mrony             #+#    #+#             */
/*   Updated: 2022/12/12 17:18:51 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

void buff_to_dump(int fd, t_gnl_list **dump, )
{
	
}

char *get_next_line(int fd)
{
	char *dump;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	dump = malloc(sizeof(char)*BUFFER_SIZE +1);
	
	
	
//1// lire n byte de mon fichier et les placer dans ma liste chainee;
//2// analyser ce qu'il y a dans la chaine dans ma liste chainee; 
//3// copier dans une chaie de carractere la ligne 
		// ou copier le prochain buffer dans un maillon suivant
// revenir a trois si on a pas trouve' de \n
//4// copier dans la chaine de caractere les bytes jusqu'a \n et retourner l'index static qui pointe vers l'emplacement du premier caractere apres \n.


	
}
