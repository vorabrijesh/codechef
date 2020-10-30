% Primality test

is_prime(2).
is_prime(3).

factors(N,Factor,[]) :- Factor is 1.

factors(N,Factor,[Factor | Tail]) :- factors(N,Factor1, Tail),



% Note that \+ is an implementation of NOT functionality

% 1) We are enforcing that only odd numbers are tested for P
is_prime(P) :- integer(P), P > 3, P mod 2 =\= 0, \+ has_factor(P,3).


% 2) Case when N is divisible by L
has_factor(N,L) :- N mod L =:= 0.

% 3) L < sqrt(N) or equivalently L^2 < N
% 4) Given that N is always odd, L needs to be only odd (ref (1))
has_factor(N,L) :- L * L < N, L2 is L + 2, has_factor(N,L2).
