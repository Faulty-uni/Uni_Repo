watermelon :: String -> Either String Int
watermelon x
	| x > 12 = "Lot of melons"
	| otherwise = x
