person(X) :- man(X).

mother(X,m(X)) :- person(X).

loves(X,Y) :- mother(Y,X).

man(plato).

