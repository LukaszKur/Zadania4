### Sortowanie (bubble sort, insertion sort, selection sort) - różnice

**Sortowanie bąbelkowe** (ang. bubble sort) – prosta metoda sortowania o złożoności czasowej O(n^2) i pamieciowej O(1). 

Polega na porównywaniu dwóch kolejnych elementów i zamianie ich kolejności, jeżeli zaburza ona porządek, w jakim się sortuje tablicę. Sortowanie kończy się, gdy podczas kolejnego przejścia nie dokonano żadnej zmiany.

Ciąg wejściowy [ 4 , 2 , 5 , 1 , 7 ]. Każdy wiersz symbolizuje wypchnięcie kolejnego największego elementu na koniec („wypłynięcie największego bąbelka”).

**Sortowanie przez wstawianie** (ang. Insert Sort, Insertion Sort) – jeden z najprostszych algorytmów sortowania, którego zasada działania odzwierciedla sposób w jaki ludzie ustawiają karty – kolejne elementy wejściowe są ustawiane na odpowiednie miejsca docelowe. Jest efektywny dla niewielkiej liczby elementów, jego złożoność wynosi O(n2). 

Pomimo tego, że jest znacznie mniej wydajny od algorytmów takich jak quicksort czy heapsort, posiada pewne zalety:
* liczba wykonanych porównań jest zależna od liczby inwersji w permutacji, dlatego algorytm jest wydajny dla danych wstępnie posortowanych,
* jest wydajny dla zbiorów o niewielkiej liczebności,
* jest stabilny.

>Istnieje modyfikacja algorytmu, pozwalająca zmniejszyć liczbę porównań. Zamiast za każdym razem iterować po już posortowanym fragmencie (etap wstawiania elementu), można posłużyć się wyszukiwaniem binarnym. Pozwala to zmniejszyć liczbę porównań do O(nlogn), nie zmienia się jednak złożoność algorytmu, ponieważ liczba przesunięć elementów to nadal O(n2).

**Sortowanie przez wybieranie** - jedna z prostszych metod sortowania o złożoności O(n2). Polega na wyszukaniu elementu mającego się znaleźć na żądanej pozycji i zamianie miejscami z tym, który jest tam obecnie. Operacja jest wykonywana dla wszystkich indeksów sortowanej tablicy.

Algorytm przedstawia się następująco:

  * wyszukaj minimalną wartość z tablicy spośród elementów od i do końca tablicy
  * zamień wartość minimalną, z elementem na pozycji i

Gdy zamiast wartości minimalnej wybierana będzie maksymalna, wówczas tablica będzie posortowana od największego do najmniejszego elementu.

Algorytm jest niestabilny. Przykładowa lista to: [2a,2b,1] → [1,2b,2a] (gdzie 2b=2a)