f(X,0) :- X < 3.
f(X,1) :- 3 =< X, X < 6.
f(X,2) :- 6 =< X.

f1(X,0) :- X < 3, !.
f1(X,1) :- 3 =< X, X < 6, !.
f1(X,2) :- 6 =< X, !.

g(X,0) :- X < 3, !.
g(X,1) :- X < 6, !.
g(X,2).


g1(X,0) :- X < 3.
g1(X,1) :- X < 6.
g1(X,2).



