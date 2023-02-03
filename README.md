# Exam-42-Zip
Author : jmouaike 42 Paris

## Subjects :

| level     |ex01|ex02|ex03|
| ------ | :--------------------:| :--------------------:| :--------------------:| 
|01|  [aff_a](./ex01/aff.txt) | aff_z | |
|02| ft_putstr | ft_strlen | [rev_print](./ex02/rev_print.txt) | |
|03| [fizzbuzz](./ex03/fizzbuzz.txt) | | |
|04| aff_first_param | [aff_last_param](./ex04/aff_last_param.txt) | |
|05| first_word | rot_13 | rotone |
|06| [inter](./ex06/union.txt) | [union](./ex06/union.txt) | [last_word](./ex06/last_word.txt) |
|07| [ft_itoa](./ex07/ft_itoa.txt) | [ft_range](./ex07/ft_range.txt) | [ft_rrange](./ex07/ft_rrange.txt) |
|08| [expand_str](./ex08/expand_str.txt) | [ft_split](./ex08/ft_split.txt) | |
|09| ft_list_remove_if | sort_list
|10| count_islands | infin_mult | g_diam
***
### links :
  - ![exam42zip - IurriMr](https://github.com/IuriiMr/exam42zip)
  - ![Chrisanto](https://github.com/Chrisanto76/trainExamZip42/tree/master/trainingExamZip)
  - ![Exam Miner : Fwuensche](https://github.com/fwuensche/42-exam-miner)

***
## Exam-42-zip - Apoure :
- On 24-jan 2023 : apoure passed exam :arrow_right: final grade ` 60 % ` ft_range 🍆
- On 03-feb 2023 : apoure passed exam :arrow_right: final grade ` 50 % ` last_word 🍆

|level|subject|Ok|24-jan|03-Feb|best time|
| ------ | ---| ---| ---| ---| ---|
|01|  aff_z | ✅ |10:15	`15'`|16:08   `8'`||
|02| rev_print| ✅ |10:23  `8'`|16:16   `8'`||
|03| buzzfizz | ✅ |10:40   `17'`|16:28   `12'`||
|04| first_param | ✅ |10:52   `12'`|16:45  `17'`| `05'` |
|05| rotone/rot13| ✅ |11:14 `22'`|17:27 `42'`|`06'`|
|06| last_word | ✅ |11:43   `29'`|timed out||
|07| ft_range ||gave up|||

## Exam-42-zip - Jmouaike :
- On 17-jan 2023 : jmouaike passed exam :arrow_right: final grade ` 90 % ` :sunglasses:

| level     |subject|OK|time (min)|
| ------ | ---| ---| ---| 
|01|  aff_a | ✅ |12|
|02| ft_strlen | ✅ |05|
|03| fizzbuzz | ✅ |08|
|04| first_param | ✅ |03|
|05| rotone | ✅ |11|
|06| last_word | ✅ |14|
|07| ft_range | ✅ |18|
|08| expand_str | ✅ |36|
|09| sort_list | ✅ |38|
|10| infin_mult |:n:|timed out|

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
