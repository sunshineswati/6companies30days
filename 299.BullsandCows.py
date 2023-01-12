class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        cows , bulls = 0,0
        for i in range(len(guess)):
            if(guess[i] == secret[i]):
                bulls += 1
        lst1 = list(secret)
        lst2 = list(guess)
        cows = len(lst1) - sum((Counter(lst1) - Counter(lst2)).values()) - bulls
        res = str(bulls) + 'A' + str(cows) + 'B'
        return res
