def reverse(x):
    """
    :type x: int
    :rtype: int
    """
    sign = [-1,1][x>0]
    ans = sign * int(str(abs(x))[::-1])      
        
    return (abs(ans)<((1<<31)-1)) and ans or 0

if __name__ == "__main__":
    print(reverse(-123456))