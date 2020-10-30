gcd1(X,Y,Z) :- X =:= Y, Z  is X.
gcd1(X,Y,Z) :- X > Y, X1 is X-Y, gcd1(X1,Y,Z).
gcd1(X,Y,Z) :- X < Y, Y1 is Y-X, gcd1(X,Y1,Z).


