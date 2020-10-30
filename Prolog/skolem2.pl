philo(a).
philo(b).
philo(c).

%two students for a
student(sa,a).
student(ga,a).

%one student for b
student(sb,b).

%both a and b wrote doc's
written(a,adoc).
written(b,bdoc).

book(adoc). %only a's doc is a book

readby(sa,adoc). %only sa student read a'doc



%Predicates to satisfy the existential quantifier
tbr(X,Y) :-
    philo(X),
    student(Y,X),
    written(X,Z),
    book(Z),
    readby(Y,Z).

%custom negation!
not(X) :-
    X, !, fail
    ;
    true.

test(X,Y) :-
    not(philo(X))
    ;
    not(student(Y,X))
    ;
    book(tbr(X,Y)), written(X,tbr(X,Y)), readby(Y,tbr(X,Y)).








