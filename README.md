# DFA-C
Symulacja działania deterministycznego automatu skończonego (DFA) w języku C.

Automat ma postać M= (Q, Σ, ∂, q0, F), gdzie Q = { q0 q1 q2 q3}, Σ = {0,1}, F={ q3}. 
Tabela przejść do automatu:

|   | 0 | 1 |
| :---: | :---: | :---: |
| q0  | q1 | q2 |
| q1  | q3 | q0 |
| q2  | q0 | q3 |
| q3  | q1 | q2 |

Wejściem jest łańcuch zer i jedynek. Wyjściem jest schemat przejścia.
