philo(a).
philo(b).
philo(c).

written(a,g(a)). %a wrote something

written(b,g(b)). %b wrote something but it is not a book

book(g(a)).  %whatever a wrote is a book

%  g(X) - physical meaning, written work of X

not(X) :-
    X,!,fail
    ;
    true.

test(X) :-
    not(philo(X))
    ;
    book(g(X)), written(X,g(X)).






