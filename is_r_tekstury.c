#include "cub3d.h"

int main(int argc, char **argv)
{
	t_mn mn;
	int q;

	char *line;
	int fd;
	int res_gnl;


	if (argc > 3 || argc < 2)
		return (1);
	
	printf("ABI: %s\n", (*(argv + 1)));
	printf("P:  %s\n", (*(argv + 1) + ft_strlen(*(argv + 1)) - 4));
	if ((ft_strncmp((*(argv + 1) + ft_strlen(*(argv + 1)) - 4), ".cub", 4))) /*  проверка на расширение .cub  */
	{
		printf("incorrect file format \"%s\"\n", *(argv + 1));
		return (3);
	}

	fd = open(*(argv + 1), O_RDONLY);

	init_st_conf(&mn.conf);
	q = 0;
	while(q < 8)  
	{
		res_gnl = get_next_line(fd, &line);
		if (res_gnl < 0)
		{
			printf("Error incorrect format file");
			return (2);
		}
		printf("ssssssssss   %s\n", line);
		pars1(&line, &mn);
		q++;
	}
	printf("\n");
	printf("Width: %d\n", mn.conf.width);
	printf("Heigth: %d\n", mn.conf.heigth);
	printf("176 -- %s\n", mn.conf.no);
	printf("176 -- %s\n", mn.conf.so);
	printf("176 -- %s\n", mn.conf.we);
	printf("176 -- %s\n", mn.conf.ea);
	printf("176 -- %s\n", mn.conf.s);
		//  printf("F    %d  %d  %d\nC     %d  %d  %d\n", mn.conf.)

	//return (0);
	pars2(fd, &mn);
	printf("main -> true_map\n");
	true_map(&mn);
	printf("main -> true_map2\n");
	rtue_mat2(&mn);
	
	return (0);
	
}