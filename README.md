# Exam-42-Zip
Author : jmouaike 42 Paris

## Subjects :

| level     |ex01|ex02|ex03|
| ------ | :--------------------:| :--------------------:| :--------------------:| 
|01|  aff_a | aff_z | |
|02| ft_putstr | ft_strlen | rev_print | |
|03| fizzbuzz | | |
|04| aff_first_param | aff_last_param | |
|05| first_word | rot_13 | rotone |
|06| inter | union | last_word |
|07| ft_itoa | ft_range | ft_rrange |
|08| expand_str | ft_split | |
|09| ft_list_remove_if | sort_list
|10| count_islands | infin_mult | g_diam
***
### links :
  - ![exam42zip - IurriMr](https://github.com/IuriiMr/exam42zip)
  - ![Chrisanto](https://github.com/Chrisanto76/trainExamZip42/tree/master/trainingExamZip)
  - ![Exam Miner : Fwuensche](https://github.com/fwuensche/42-exam-miner)

***
## Exams passed :
- :ballot_box_with_check: 17-jan :arrow_right: final grade ` 90 % ` :sunglasses:

| level     |'01'|'02'|'03'|'04'|'05'|'06'|'07'|'08'|'09'|
| --- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| time (min)|12|5|8|3|11|14|18|36|38|
| exercise | ✅ aff_a  | ✅ ft_strlen |✅ fizzbuzz|✅ first_param|✅ rotone|✅ last_word|✅ ft_range |✅ expand_str |✅ sort_list |


***
## Exercises
### ex01 - aff_a

```c
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write (1, "a\n", 2);
				return (0);
			}
			i++;
		}
		write (1, "\n", 1);
		return (0);		
	}
	write (1, "a\n", 2);
	return (0);
}
```
...
