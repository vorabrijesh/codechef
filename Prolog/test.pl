mirror(point(X,Y)) :- S = point(Y,X), write(S).
mirror2(point(X,Y),S) :- S = point(Y,X).
same(point(X,Y),point(X2,Y2)) :- X=:=X2, Y=:=Y2.
same22(A,B) :- point(X1,Y1)=A,point(X2,Y2)=B,!,X1=:=X2,Y1=:=Y2.
next(point(X,Y)) :- point(X+1,Y+1).
isnext(point(X,Y),point(X2,Y2)) :- X2=:=X+1,Y2=:=Y+1.
test(X) :- !.
point(X,Y).
kali(P) :- P = point(X,Y), X =:= 1.
issame(point(X1,Y1),point(X2,Y2)) :- X1==X2,Y1==Y2.
vertical(point(X,Y),point(X,Y2)).
father(tom,jim).
isA(father(X,Y)).
father(X,Y).





