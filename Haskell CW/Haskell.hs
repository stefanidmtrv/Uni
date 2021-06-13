{- Group 22

Chloe Thomas 981572
Vidhi Pala 978174
Stefani Dimitrova 1909435 -}

import Data.Char

--Question 1 a

--Average of three numbers
average :: Float -> Float -> Float -> Float
average x y z = (x + y + z)/3

{- Output:
*Main> average 978174 1909435 981572
1289727.0 -}

--HowManyAboveAverage first way
--Helper function isAbove to compare each element to the average recursively

isAbove1 :: Float -> Float -> Int
isAbove1 a avg = do{
 if (a > avg)
  then 1
 else 0 ;
}

howManyAboveAverage1 :: Float -> Float -> Float -> Int
howManyAboveAverage1 x y z = (isAbove1 x avg) + (isAbove1 y avg) + (isAbove1 z avg)
 where
  avg = average x y z

{- Output:
*Main> howManyAboveAverage1 978174 1909435 981572
1 -}

--HowManyAboveAverage second way using guards and stating outputs to every possible solution

howManyAboveAverage2 :: Float -> Float -> Float -> Int
howManyAboveAverage2 x y z
 | x > a && y > a = 2
 | x > a && z > a = 2
 | y > a && z > a = 2
 | x == a && y == a && z == a = 0
 | otherwise = 1
  where a = average x y z

{- Output:
*Main> howManyAboveAverage2 978174 1909435 981572
1 -}

--Average of a List

avgOfList :: [Float] -> Float
avgOfList [] = 0
avgOfList xs = (sum xs) / fromIntegral(length xs)

{- Output:
*Main> avgOfList [978174, 1909435, 981572]
1289727.0 -}

--HowManyAboveAverage of list of values using list comprehension

howManyAboveAverageL :: [Float] -> Int
howManyAboveAverageL xs = sum [isAbove1 x (avgOfList xs) | x <- xs]

{- Output:
*Main> howManyAboveAverageL [978174, 1909435, 981572]
1 -}




--Question 2

--List comprehension way

split1 :: (a -> Bool) -> [a] -> ([a],[a])
split1 p xs = ([a | a <- xs, p a == True],[a | a <- xs, p a == False])

p :: Int -> Bool
p a = if even a
      then True
      else False

{- Output:
*Main> split1 p [1,9,0,9,4,3,5]
([0,4],[1,9,9,3,5])

*Main> split1 p [9,7,8,1,7,4]
([8,4],[9,7,1,7])

*Main> split1 p [9,8,1,5,7,2]
([8,2],[9,1,5,7]) -}

--Higher order function way
split2 :: (a -> Bool) -> [a] -> ([a],[a])
split2 p xs = ((filter p xs) , (filter  (\x -> p x == False) xs))

--Recursive way

split3 :: (a -> Bool) -> [a] -> ([a], [a])
split3 p [] = ([],[])
split3 p (x:xs) | p x = (x : fst(split3 p xs), snd (split3 p xs))
                | otherwise = (fst (split3 p xs), x : snd(split3 p xs))

--Outputs same as above




--Question 3

{- * Float is the diameter of the pizza
* Int is the number of toppings
* The result should be the price of the pizza

* Top means topping
* Diam/2 is the radius needed for calculating the area of the pizza
* Top1 is the converted top (Int) into a Float, because it is multiplied by a Float -}

alfredo :: Float -> Int -> Float
alfredo diam top = (0.001 * area (diam/2) + top1 * (0.002 * area (diam/2))) * 1.6
                    where  top1 = fromIntegral top :: Float

--The equation of the area of a circle
area :: Float -> Float
area a = 3.14 * a^2

{- Output:
*Main> alfredo 14 2
12.3088 -}

--Comparing pizza prices
pizzaCompare :: Ord a => a -> a -> Bool
pizzaCompare x y = if x > y
                   then True
                   else False

{- Output:
*Main>pizzaCompare (alfredo 14 6)  (alfredo 32 2)
False -}




--Question 4

--Given functions

divides :: Integer -> Integer -> Bool
divides x y = y `mod` x == 0

prime :: Integer -> Bool
prime n = n > 1 && and [not(divides x n) | x <- [2..(n-1)]]

allPrimes :: [Integer]
allPrimes = [x | x<- [2..], prime x]

--All prime numbers between two bounds using list comprehension

allPrimesBetween :: Integer -> Integer -> [Integer]
allPrimesBetween a b = [x | x <- [a..b], prime x]

{- Output:
*Main> allPrimesBetween 1 100
[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97] -}

--Infinite list (take 20) of Boolean where True if number is prime, False otherwise

primeTest :: [Bool]
primeTest = take 20 (map prime [2..])

{- Output:
*Main> primeTest
[True,True,False,True,False,True,False,False,False,True,False,True,False,False,
False,True,False,True,False,False] -}

--Infinite list of all integers and Boolean where True if number is prime, False otherwise

primeTestPairs :: [(Integer, Bool)]
primeTestPairs = take 20 ([(x,prime x) | x <- [2..]])

{- Output:
*Main> primeTestPairs
[(2,True),(3,True),(4,False),(5,True),(6,False),(7,True),(8,False),(9,False),
(10,False),(11,True),(12,False),(13,True),(14,False),(15,False),(16,False),
(17,True),(18,False),(19,True),(20,False),(21,False)] -}

--Outputs how many prime twins are amongst n prime numbers
--Helper function twoApart to see if there is a difference of 2 bewteen the numbers

twoApart :: (Integer, Integer) -> Bool
twoApart (x,y) = y - x == 2

--Takes all the prime twins and puts them in tuples in the list

primeTwins :: Int -> Int
primeTwins n = length[x | x <- twin, (prime (x + 1) || prime (x + 2))]
    where twin = take (n-1) allPrimes
{- Output:
*Main> primeTwins 20
8

*Main> primeTwins 2000
303 -}




--Question 5

--List of equvilant letters

eq1 = "AEIOU"
eq2 = "CJKQSXYZ"
eq3 = "BFPVW"
eq4 = "DT"
eq5 = "MN"

--Reads in the file and outputs the phonetically correct surnames

phonetic :: [String] -> IO ()
phonetic xs = do {
        x <- readFile "surnames.txt" ;
        putStr (format xs (lines x)) ;
}

--Formats the final output

format :: [String] -> [String] -> String
format [] _ = ""
format (x:xs) ys = x ++ ": " ++ (formatAns (find x ys)) ++ "\n" ++ (format xs ys)

--Makes sure that the list is all upper case and that all non alphabetical characters are ignored

upAlpha :: String -> String
upAlpha xs = [toUpper x | x <- xs, isAlpha x]

--Removes the list of characters from the string ready to be compared

remove :: String -> String
remove (x:xs) = x:[y | y <- xs, not(y `elem` "AEIHOUWY")]

--Checks each character to see if it's phonetically equvilant

checkChar :: Char -> Char
checkChar x | x `elem` eq1 = head eq1
            | x `elem` eq2 = head eq2
            | x `elem` eq3 = head eq3
            | x `elem` eq4 = head eq4
            | x `elem` eq5 = head eq5
            | otherwise = x
 
--Calls on checkChar to check each character in the string
 
checkStr :: String -> String
checkStr xs = [checkChar x | x <- xs]

--Removes any double letters

removeDouble :: String -> String
removeDouble [] = ""
removeDouble (x:[]) = [x]
removeDouble (x:xs) | x == head xs = removeDouble xs
                    | otherwise = x:(removeDouble xs)

--Combines all the checks for the fianl result

editStr :: String -> String
editStr x = removeDouble(checkStr(remove(upAlpha x)))

--Checks to see if the surname entered is phonetically equvilant to a surname in the txt file

find :: String -> [String] -> [String]
find x xs = [y | y <- xs, (editStr x) == (editStr y)]

--Breaks the file up into a list

formatAns :: [String] -> String
formatAns [] = ""
formatAns (x:[]) = x
formatAns (x:xs) = x ++ ", " ++ (formatAns xs)

{- Output:
*Main> phonetic ["Smith", "Jones"]
Smith: Smith, Smyth, Smythe, Smid, Schmidt
Jones: Jonas, Johns, Saunas -}