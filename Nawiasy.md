## Nawiasy nadmiarowe a preprocesing.

Dla preprocesingu w języku C używamy nadmiarowych nawiasów,
aby uniknać problemów zwiazanych z priorytetem operatorów.

**Przykład błędnego wykonania:**

#include <stdio.h>

```c
#define SIX 1+5
#define NINE 8+1

int main(void)
{
    printf("%d * %d = %d\n", SIX, NINE, SIX * NINE);
    return 0;

}
```
Po skompilowaniu i uruchomieniu programu otrzymujemy:

`6 * 9 = 42`

a powinno być:

`6 * 9 = 54`

Przyczyną błędu jest interpretacja wyrażenia:

`1+5*8+1`

Ze względu na brak nawiasów i priorytet operatorów (wyższy * niż +) jest to interpretowane jako:

`1+(5*8)+1`

a nie jak:

`(1+5)*(8+1)`

