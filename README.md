| Return | Function | Usage | 
| --- | --- | --- |
| `void` | `my_putchar(char x);` | Get `char` and print it in terminal |
| `void` | `my_putnbr(int nb);` | Get `int` and print it in terminal |
| `void` | `my_swap(int *a, int *b);` | Get two number adress `(&a, &b)` and swap their content |
| `void` | `my_isneg(int nb);` | Get `int` and print `N` if `nb` is negative, `P` if `nb` positive or `null` |
| `void` | `my_putstr(char const *str);` | Get `*str` and print this in terminal |
| `int` | `my_strlen(char const *str);` | Get `*str` and return their lenght |
| `int` | `mu_getnbr(char const *str);` | Get `*str` and transform them in `int` |
| `int` | `my_compute_power_rec(int nb, int p);` | Return `nb` raised by the power of `p` |
| `int` | `my_compute_square_root(int nb);` | Return the square root of `nb` |
| `int` | `my_is_prime(int nb);` | Return `1` if `nb` is prime and `0` if not |
| `int` | `my_find_prime_sup(int nb);` | Return smallest prime number that is greater than or equal to `nb` |
| `char*` | `my_strcpy(char *dest, char const *src);` | Copy `*src` into `*dest` |
| `char*` | `my_strncpy(char *dest, char const *src, int n);` | Copy `n` char of `*src` in `*dest` |
| `int` | `my_strcmp(char const *s1, char const *s2);` | Compare two strings, return `1` if strings are different, `0` if they equals and `-1` if an error occured |
| `int` | `my_strncmp(char const *s1, char const *s2, int n);` | Compare `n` char of two strings, return `1` if strings are different, `0` if they equals and `-1` if an error occured |
| `char*` | `my_strstr(char *str, char const *to_find);` | Search first `*to_find` occurence in `*sstr` |
| `char*` | `my_strcat(char *dest, char const *src);` | Concatenate `*src` in `*dest` |
| `char*` | `my_strncat(char *dest, char const *src, int nb);` | Concatenate `nb` char of `*src` in `*dest` |
| `char*` | `my_revstr(char *str);` | Reverse all characters of `*str` |
| `char*` | `my_getchar(char const *str);` | Get `*str` and transform them in `int` |
| `void` | `my_puterror(char const *str);` | Get `*str` and print this in terminal on error channel |
| `char*` | `my_realloc(char *str, int size);` | Add `size` alloc in `*str` |
| `char*` | my_dec_to_oct(long dec);` | Convert `dev` (decimal) on octal |
| `char*` | `my_dec_to_bin(long dec);` | Convert `dec` (decimal) on binary |
| `char*` | `my_dec_to_hex(long dec, int size);` | Convert `dev` (decimal) on hexadecimal. `size` can get two value : `1` for hexadecimal lowercase / `2` for hexadeciaml uppercase |
| `char**` | `my_str_to_word_array(char *str);` | Get `str` and slip each words in array |
| `int` | `is_alphanum(char const *str);` | Return `1` if `*str` is numeric only and `0` if not |
| `void` | `my_printf(char *s, ...);` | Possible args : `dicsupobxX%` see [here](#printf) for details |



All this next function not working actually :
```c
void my_sort_int_array(int *tab, int size);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
int my_str_islower(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
```


## <a name="printf"></a> my_printf

| flag | type |
| ---- | ---- |
| `d` | `int` |
| `i` | `int` |
| `c` | `char` |
| `s` | `char*` |
| `u` | `unsigned int` |
| `p` | `char*` |
| `o` | `long` |
| `b` | `long` |
| `x` | `long` |
| `X` | `long` |
| `%` | `any` |