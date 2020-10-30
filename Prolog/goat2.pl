change(left,right).
change(right,left).

move([X,X,Goat,Cabbage],lion,[Y,Y,Goat,Cabbage]) :- change(X,Y).
move([X,Lion,X,Cabbage],goat,[Y,Lion,Y,Cabbage]) :- change(X,Y).
move([X,Lion,Goat,X],cabbage,[Y,Lion,Goat,Y]) :- change(X,Y).
move([X,Lion,Goat,Cabbage],nothing,[Y,Lion,Goat,Cabbage]) :- change(X,Y).

oneEq(X,X,_).
oneEq(X,_,X).

safe([Man,Wolf,Goat,Cabbage]) :-
    oneEq(Man,Goat,Wolf),oneEq(Man,Goat,Cabbage).

solution([right,right,right,right],[]).

solution(Config,[FirstMove|OtherMoves]) :-
    move(Config,Move,NextConfig), safe(NextConfig),solution(NextConfig,OtherMoves).



