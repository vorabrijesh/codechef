friends(abhay,bhim).
sameperson(gayatri,wife(bhim)).
hasbook(abhay).
hasmercedes(abhay).
likes(abhay,mercedes).
likes(abhay,gulabjamoon).
likes(bhim,gulabjamoon).
likes(wife(bhim),gulabjamoon).
friends(X,Y) :- friends(Y,X).

% more generalization %
has(abhay,book).
has(abhay,mercedes).
likes(X,Y) :- has(X,Y).


sum(zero,S1,S1).
sum(s(X),S1, s(S2)) :- sum(X,S1,S2).


