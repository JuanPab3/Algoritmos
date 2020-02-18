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

print(
"""
    PROGRAMAS DE PROGRAMACIÓN < = = = = = = = = = > ALGORITMOS
  - Lenguajes de programación                        - Pseudocódigo
                                                     - Diagramas de flujo
                                                     - Lenguaje Natural

  - Computador                                       - Modelo de computación

>>> Modelo de computación Diagramas
    -> Operaciones básicas: adición, multiplicación, comparación y asignación.
    -> Toma una unidad de tiempo hacer cualquiera de estas operaciones.
    -> Las unidades de información tienen un tamaño fijo (int, float, string, bool, etc.).
    -> El computador tiene memoria infinita.

    -> No es necesario implementar codigo para el analisis del algoritmo.

    REGLAS PARA CALCULAR TIEMPOS DE EJECUCIÓN
    
    -> Imprimir, utilizar operaciones basicas, asignar valores o comparar tamaño
       utilizan tiempo constante 'O(1)'.
    -> Un ~ciclo for~ esta representado en tiempo lineal 'O(N)', ya que es la
       repeticion de una acción N veces. Por otro lado si es un ~ciclo for~
       anidado en otro ~ciclo for~ el tiempo de ejecución esta definido como
       el producto entre las N veces que corre el ciclo exterior por M veces
       que corre ciclo interior tal que:
                                        O(N)*O(M) = O(NM)
    -> Si por otro lado los ~ciclos for~ no estan anidados, sino son paralelos
       en el algoritmo, el tiempo de ejecución es la suma de los tiempos de
       ejecución individuales, tal que:
                                       O(N)+O(M) = O(N+M)
    -> Con respecto a los If/Else se tiene que el tiempo de ejecución nunca es
       mayor que el bloque de instrucciones más largo entre todas las opciones
       esto significa que si tenemos tres blockes IF, ELIF y ELSE el tiempo de
       ejecución se define como:
                                MAX(O(IF),O(ELIF),O(ELIF))

"""
)
