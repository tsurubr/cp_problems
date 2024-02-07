module Main where


maximo :: (Int, Int) -> Int
maximo (x, y) = if x >= y then x else y 

maximo' :: Int -> Int -> Int
maximo' x y = maximo (x, y)

{- if True then c1 else c2 = c1 
   if False then c1 else c2 = c2 -}

{- maximo(2, 3) 
   maximo (2, 3) 
   maximo' 15 y = maximo (15, y) 
   maximo' = \x -> \y -> maximo (x, y)
   f = maximo' 15 = \y -> maximo(15, y)
   f = \y -> maximo(15, y)
   f 10 = maximo (15, 10)
-}

{- soma' acc n = acc + n(n+1)/2 
acc = 0;
while (n > 0) {
    acc += n;
    --n;
}
return acc
-}

{- n >= 0 -}
soma :: Int -> Int
soma 0 = 0
soma n = soma (n - 1) + n

soma' :: Int -> Int -> Int 
soma' acc 0 = acc
soma' acc n = soma' (acc + n) (n - 1)


{- Vamos provar que para cada n >= 0 e cada acc, 
        acc + soma n = soma' acc n

BASE: Para n = 0:

Para todo acc,
acc + soma 0 = acc
soma' acc 0 = acc
logo, acc + soma 0 = soma' acc 0

PASSO: Para n > 0. 
PHI, para todo acc, acc + soma (n-1) = soma' acc (n-1).
Precisamos mostrar que para todo x
        x + soma n = soma' x n.

Seja x qualquer.
soma' x n = soma' (x + n) (n-1)
          = (x + n) + soma (n-1)
          = x + (n + soma (n-1))
          = x + (soma (n-1) + n)
          = x + soma n


-}

{- soma 3 = soma 2 + 3
          = (soma 1 + 2) + 3
          = ((soma 0 + 1) + 2) + 3
          = ((0 + 1) + 2) + 3 

Fato: para cada n >=0 : soma n = n (n+1) / 2
soma 0 = 0 = 0 (0+1) / 2 = 0          
Suponha n > 0. 
Por hipótese de ind, soma (n-1) = (n-1)n/2
soma n = soma (n-1) + n
       = (n-1)n/2 + n
       = n(n+1)/2
-}


{- Listas 

[] : lista vazia

1:[] = [1]
2:[1] = 2:(1:[])

(:) :: a -> [a] -> [a]

-}


data List a = Nil | Cons a (List a)

type IList = List Int

{- Cons 1 (Cons 2 Nil)) :: IList --> [1, 2] -}
{- Cons x ls -}

{- data [] a = [] | (:) a ([] a) 
   vector<int> -}


{- Nil :: IList , se x :: Int e ls :: IList, então Cons x ls :: IList -}

ones = Cons 1 ones
{- ones = Cons 1 ones 
        = Cons 1 (Cons 1 ones)
        = ... -}


size :: List a -> Int
size Nil = 0
size (Cons x ls) = 1 + size ls
{- size (Cons 1 (Cons 2 Nil)) = 1 + size (Cons 2 Nil) 
                              = 1 + (1 + size Nil)
                              = 1 + (1 + 0) -}



main :: IO ()
main = do
    print (maximo (10, 20))
    let f = maximo' 15
    print (f 20)
    print (f 7)
    print (soma 100)
    print (soma' 0 100)
    let ls = [1,2,3,4]
        ms = 10:ls
    print ls
    print ms
    