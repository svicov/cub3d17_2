#include "cub3d.h"

int			valid_map(t_mn *mn)
{
	int		i;
	int		j;

	j = 0;
	while (j < (mn->num_s - mn->num_s0))
	{
		i = 0;
		while (i < mn->maxlen)
		{
			if (mn->map[j][i] != '1')
				if (player_sees_1_a(mn, i, j))
				{						
					ft_error(5);
					return (1);
				}


				//if (player_sees_1_b(mn, i, j));
				//	ft_error()					
		}
		j++;
	}
}

int			player_sees_1_a(t_mn *mn, int i, int j)
{
	int		q;

	q = 1;
	while ((i + q) < mn->maxlen)
			if ((mn->map[j][i + q++]) = '1')
			return (1);
	q = 1;
	while ((j + q) < mn->num_s - mn->num_s0)
	{
		if ((mn->map[j + q][i]) = '1')
			return (1);
		q++;
	}
	q = 1;
	while ((j - q) >= 0)
	{
		if ((mn->map[j - q][i]) = '1')
			return (1);
		q++;
	}
	q = 1;
	while ((j - q) >= 0)
	{
		if ((mn->map[j + q][i]) = '1')
			return (1);
		q++;
	}
	return (0);
}