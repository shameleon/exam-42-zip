# Exam-42-Zip
Author : jmouaike at 42-Paris

## Subjects

| level     |ex01|ex02|ex03|
| ------ | :--------------------:| :--------------------:| :--------------------:| 
|01|  [aff_a](./ex01/aff_a.txt) | [aff_z](./ex01/aff_z.txt) | |
|02| ft_putstr | ft_strlen | [rev_print](./ex02/rev_print.txt) | |
|03| [fizzbuzz](./ex03/fizzbuzz.txt) | | |
|04| aff_first_param | [aff_last_param](./ex04/aff_last_param.txt) | |
|05| [first_word](./ex05/first_word.txt) | [rot_13](./ex05/rot13.txt) | [rotone](./ex05/rotone.txt) |
|06| [inter](./ex06/union.txt) | [union](./ex06/union.txt) | [last_word](./ex06/last_word.txt) |
|07| [ft_itoa](./ex07/ft_itoa.txt) | [ft_range](./ex07/ft_range.txt) | [ft_rrange](./ex07/ft_rrange.txt) |
|08| [expand_str](./ex08/expand_str.txt) | [ft_split](./ex08/ft_split.txt) | |
|09| [ft_list_remove_if](./ex09/ft_list_remove_if/ft_list_remove_if.txt) | [sort_list](./ex09/sort_list/sort_list.txt)
|10| [count_islands](./ex10/count_island.txt) | [infin_mult](./ex10/infin_mult.txt) | [g_diam](./ex10/g_diam.txt)
***

***
## Exam reminder

```examshell``` then ```examshell``` to login.
Once in, your 42 login and password.
you have 10 minutes to reach that step.
Take some time to read and organize your workspace.

Subjects are in ```subjects``` dir.
```rendus``` will contain your exercices targeted by ```grademe```.

do not forget to create a directory for each exercise, such as
```rendus/aff_a/aff_a.c```

compile will all the flags
test your program or function

check you dir and file names

```git add .```

```git commit -m``` 

and do not forget to ```git push``` before asking a ```grademe```

## real time solved exercises in an Examshell environment
### Exam-42-zip - Apoure :
- On 24-jan 2023 : apoure passed exam :arrow_right: final grade ` 60 % ` failed at ft_range
- On 03-feb 2023 : apoure passed exam :arrow_right: final grade ` 50 % ` failed at last_word

|level|subject|Ok|24-jan|03-Feb|best time|
| ------ | ---| ---| ---| ---| ---|
|01|  aff_z | ✅ |10:15	`15'`|16:08   `8'`||
|02| rev_print| ✅ |10:23  `8'`|16:16   `8'`||
|03| buzzfizz | ✅ |10:40   `17'`|16:28   `12'`||
|04| first_param | ✅ |10:52   `12'`|16:45  `17'`| `05'` |
|05| rotone/rot13| ✅ |11:14 `22'`|17:27 `42'`|`06'`|
|06| last_word | ✅ |11:43   `29'`|timed out||
|07| ft_range ||gave up|||

### Exam-42-zip - Jmouaike :
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
