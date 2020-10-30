gcdtmp(0,X,X) :- X > 0, !.
gcdtmp(X,Y,Z) :- X >= Y, X1 is X-Y, gcdtmp(X1,Y,Z).
gcdtmp(X,Y,Z) :- X < Y, X1 is Y-X, gcdtmp(X1,X,Z).


