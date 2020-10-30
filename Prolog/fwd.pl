frog(X) :- croak(X), eatfly(X).
canary(X) :- chirp(X), sing(X).
green(X) :- frog(X).
yellow(X) :- canary(X).
croak(fritz).
eatfly(fritz).
