# https://practice.geeksforgeeks.org/problems/geek-and-pens/0/

coins = [10,5,2,1]

def getNumCoins(n):
    global coins
    t = n
    ans = 0
    while t>0:
        for i in range(len(coins)):
            coin = coins[i]
            ans += t//coin
            t  = t%coin
    return ans
    
    
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(getNumCoins(n))
