mystate(right,right,right,right).

move(
    mystate(X,L,G,C),
    move(man,X,Y),
    mystate(Y,L,G,C)
).

move(
    mystate(X,X,G,C),
    move(lion,X,Y),
    mystate(Y,Y,G,C)
).

move(
    mystate(X,L,X,C),
    move(goat,X,Y),
    mystate(Y,L,Y,C)
).

move(
    mystate(X,L,G,X),
    move(cabbage,X,Y),
    mystate(Y,L,G,Y)
).



