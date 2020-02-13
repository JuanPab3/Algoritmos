print(
"""
Sea T(N) una función que caracteriza la complejidad de un algorito y que N sea
una variable que representa el tamaño del problema.

    t(N): [0,∞)-->[0,∞)

Def 1 (Big O):
    O(g(n)) = {F(N): ∃ c,n0 > 0 | F(N) <= c*g(N), ∀ N >=n0}

Def 2 (Big Omega):
    Ω(g(n)) = {F(N): ∃ c,n0 > 0 | F(N) >= c*g(N), ∀ N >=n0}

Def 3 (Big Theta):
    Θ(g(n)) = {F(N): ∃ c1,c2,n0 > 0 | c1*g(N) <= F(N) <= c2*g(N), ∀ N >=n0}

Def 4 (Little O):
    o(g(n)) = {F(N): ∀ c > 0 ∃ n0 > 0 | F(N) < c*g(N), ∀ N >=n0}

Def 5 (Little Omega):
    ω(g(n)) = {F(N): ∀ c > 0 ∃ n0 > 0 | F(N) < c*g(N), ∀ N >=n0}


Ejemplo:
    Sean p(N) = N^2 y q(N) = N^3 cuales de las siguientes operaciones son
    verdaderas:

    a) p(N) ϵ O(q(N)):
        p(N) si pertenece a O(q(N)) cuando c=1 y n0=1.

    b) p(N) ϵ Ω(q(n)):
        p(N) no pertenece a Ω(q(N)) talque no existe ningún c constante que
        cumpla la condisión.

    c) q(N) ϵ O(p(N)):
        q(N) no pertenece a Ω(p(N)) talque no existe ningún c constante que
        cumpla la condisión.

    d) q(N) ϵ Ω(p(n)):
        q(N) si pertenece a O(p(N)) cuando c=1 y n0=1.


"""
)
