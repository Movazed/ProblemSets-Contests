def count_digits_in_base3(n):
    if n == 0:
        return 1
    digits = 0
    while n > 0:
        digits += 1
        n //= 3
    return digits

def main():
    t = int(input().strip())
    results = []
    
    for _ in range(t):
        left, right = map(int, input().strip().split())
        result = 0
        
        for number in range(left, right + 1):
            result += count_digits_in_base3(number)
        
        results.append(result)
    
    for res in results:
        print(res)

if __name__ == "__main__":
    main()
