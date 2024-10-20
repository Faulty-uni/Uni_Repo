pretzel:: Int -> Int -> Int
pretzel x 0 = x + pretzel x x
pretzel 0 y = y - pretzel y y
pretzel x y = (x*y) -1
