class Personaje
class Arma
class Jugador
class Consumible
class Vehiculo
class MetalSlug
class H
class R
class F
class S
class L
class C
class SlugFlyer
class Prisionero
class CajaDeMadera
class Granada
class Bala
class Marco
class Tarma
class Eri
class Fio
class Ralf
class Leona
class Enemigo
class Soldado
class Escudero
class Zombi
class Momia
class Cangrejo
class Alien
class Vida

H->Arma
C->Arma
F->Arma
R->Arma
S->Arma
L->Arma

Marco->Personaje
Tarma->Personaje
Fio->Personaje
Eri->Personaje
Ralf->Personaje
Leona->Personaje

Zombi->Enemigo
Momia->Enemigo
Cangrejo->Enemigo
Soldado->Enemigo
Escudero->Enemigo
Alien->Enemigo

Arma->Consumible
MetalSlug->Vehiculo
SlugFlyer->Vehiculo
Prisionero->Consumible
CajaDeMadera->Consumible

Granada->Arma
Arma o--Bala
Personaje o--Arma
Personaje o--Consumible
Personaje *--Vida
Jugador o--Personaje