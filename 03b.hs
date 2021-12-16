main :: IO ()
main = do input <- lines <$> getContents
          let report = process input
          print ((b2d (oxy report)) * (b2d (scr report)))

process'' :: Char -> Int
process'' '1' = 1
process'' '0' = 0

process' :: [Char] -> [Int]
process' i = map process'' i

process :: [String] -> [[Int]]
process i = map process' i

b2d :: [Int] -> Int
b2d [n] = n
b2d nl = 2 * b2d (init nl) + (last nl)

--

data Value = Oxy | Scr

sumPos :: Int -> [[Int]] -> Int
sumPos pos nl = foldl1 (+) (map (head . drop (pos-1)) nl)

pivot :: Value -> Int -> [[Int]] -> Int
pivot (Oxy) pos nl = if ((sumPos pos nl) * 2 >= length nl) then 1 else 0
pivot (Scr) pos nl = 1 - (pivot Oxy pos nl)

sift :: Value -> Int -> [[Int]] -> [[Int]]
sift val pos nl = let piv = pivot val pos nl in filter ((==piv) . fn) nl
    where fn = (head . drop (pos-1))

siftN :: Value -> Int -> [[Int]] -> [[Int]]
siftN val pos [n] = [n]
siftN val 0 nl = nl
siftN val pos nl = if (length nl') == 1 then nl' else sift val pos nl'
    where nl' = siftN val (pos-1) nl

oxy :: [[Int]] -> [Int]
oxy nl = head (siftN Oxy (length (head nl)) nl)

scr :: [[Int]] -> [Int]
scr nl = head (siftN Scr (length (head nl)) nl)
