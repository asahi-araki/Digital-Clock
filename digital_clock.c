#include <unistd.h>
#include <time.h>

void	horizontal_line1();
void	horizontal_line2();
void	horizontal_line3();
void	empty_line();
void	vertical_line1();
void	vertical_line2();
void	vertical_line3();
void	display_digital_clock(char *time);

int	main(void)
{
		struct tm	tm;
		time_t		t = time(NULL);
		int		hour, minute;
		char		time[5];

		localtime_r(&t, &tm);
		hour = tm.tm_hour;
		minute = tm.tm_min;
		time[0] = '0' + (hour / 10);
		time[1] = '0' + (hour % 10);
		time[2] = '0' + (minute / 10);
		time[3] = '0' + (minute % 10);
		time[4] = '\0';
		display_digital_clock(time);

		return (0);
}

void	horizontal_line1()
{
		write(1, "+-------+", 9);
}

void	horizontal_line2()
{
		write(1, "+------- ", 9);
}

void	horizontal_line3()
{
		write(1, " -------+", 9);
}

void	empty_line()
{
		write(1, "         ", 9);
}

void	vertical_line1()
{
		write(1, "|       |", 9);
}

void	vertical_line2()
{
		write(1, "|        ", 9);
}

void	vertical_line3()
{
		write(1, "        |", 9);
}

void	display_digital_clock(char *time)
{
		int	i = 0;

		while (time[i])
		{
				switch (time[i])
				{
						case '0': horizontal_line1(); break ;
						case '1': empty_line(); break ;
						case '2': horizontal_line3(); break ;
						case '3': horizontal_line3(); break ;
						case '4': empty_line(); break ;
						case '5': horizontal_line2(); break ;
						case '6': horizontal_line2(); break ;
						case '7': horizontal_line1(); break ;
						case '8': horizontal_line1(); break ;
						case '9': horizontal_line1(); break ;
				}
				if (i == 1)
						write(1, "     ", 5);
				else if (i == 3)
						write(1, "\n", 1);
				else
						write(1, "   ", 3);
				i++;
		}
		for (int j = 0; j < 3; j++)
		{
				i = 0;
				while (time[i])
				{
						switch (time[i])
						{
								case '0': vertical_line1(); break ;
								case '1': vertical_line3(); break ;
								case '2': vertical_line3(); break ;
								case '3': vertical_line3(); break ;
								case '4': vertical_line1(); break ;
								case '5': vertical_line2(); break ;
								case '6': vertical_line2(); break ;
								case '7': vertical_line1(); break ;
								case '8': vertical_line1(); break ;
								case '9': vertical_line1(); break ;
						}
						if (j == 2 && i == 1)
								write(1, "  .  ", 5);
						else if (i == 1)
								write(1, "     ", 5);
						else if (i == 3)
								write(1, "\n", 1);
						else
								write (1, "   ", 3);
						i++;
				}
		}
		i = 0;
		while (time[i])
		{
				switch (time[i])
				{
						case '0': empty_line(); break ;
						case '1': empty_line(); break ;
						case '2': horizontal_line1(); break ;
						case '3': horizontal_line3(); break ;
						case '4': horizontal_line1(); break ;
						case '5': horizontal_line1(); break ;
						case '6': horizontal_line1(); break ;
						case '7': empty_line(); break ;
						case '8': horizontal_line1(); break ;
						case '9': horizontal_line1(); break ;
				}
				if (i == 1)
						write(1, "     ", 5);
				else if (i == 3)
						write(1, "\n", 1);
				else
						write(1, "   ", 3);
				i++;
		}
		for (int j = 0; j < 3; j++)
		{
				i = 0;
				while (time[i])
				{
						switch (time[i])
						{
								case '0': vertical_line1(); break ;
								case '1': vertical_line3(); break ;
								case '2': vertical_line2(); break ;
								case '3': vertical_line3(); break ;
								case '4': vertical_line3(); break ;
								case '5': vertical_line3(); break ;
								case '6': vertical_line1(); break ;
								case '7': vertical_line3(); break ;
								case '8': vertical_line1(); break ;
								case '9': vertical_line3(); break ;
						}
						if (j == 0 && i == 1)
								write(1, "  .  ", 5);
						else if (i == 1)
								write(1, "     ", 5);
						else if (i == 3)
								write(1, "\n", 1);
						else
								write (1, "   ", 3);
						i++;
				}
		}
		i = 0;
		while (time[i])
		{
				switch (time[i])
				{
						case '0': horizontal_line1(); break ;
						case '1': empty_line(); break ;
						case '2': horizontal_line2(); break ;
						case '3': horizontal_line3(); break ;
						case '4': empty_line(); break ;
						case '5': horizontal_line3(); break ;
						case '6': horizontal_line1(); break ;
						case '7': empty_line(); break ;
						case '8': horizontal_line1(); break ;
						case '9': horizontal_line3(); break ;
				}
				if (i == 1)
						write(1, "     ", 5);
				else if (i == 3)
						write(1, "\n", 1);
				else
						write(1, "   ", 3);
				i++;
		}
}
