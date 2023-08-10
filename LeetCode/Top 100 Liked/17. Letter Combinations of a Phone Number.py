# class Solution:
    # def letterCombinations(self, digits: str) -> List[str]:
def letterCombinations(digits: str) -> list[str]:
    mp = {
        "2": "abc",
        "3": "def",
        "4": "ghi",
        "5": "jkl",
        "6": "mno",
        "7": "pqrs",
        "8": "tuv",
        "9": "wxyz",
    }
    ans = []
    n = len(digits)

    if n == 0:
        return ans

    def backTrack(depth, characters):
        if depth == n:
            ans.append("".join(characters))
            return

        curDigits = mp[digits[depth]]
        for e in curDigits:
            backTrack(depth + 1, characters + [e])

    backTrack(0, [])
    return ans

print(letterCombinations('2345'))