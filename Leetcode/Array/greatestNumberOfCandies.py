class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        res=[]
        largestNoOfCandies = max(candies)
        for i in range(0,len(candies)):
            if(candies[i]+extraCandies >= largestNoOfCandies):
                res.append(True)
            else:
                res.append(False)
        return res

