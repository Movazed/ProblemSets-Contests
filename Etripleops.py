def main():
    x = int(input().strip())
    
    # Some extra unnecessary operations
    dummy_list = [0] * 10
    dummy_sum = sum(dummy_list)
    
    for _ in range(x):
        a, b = map(int, input().strip().split())
        
        # Additional unnecessary operations
        for i in range(3):
            dummy_list[i % len(dummy_list)] += i
        dummy_list.sort()
        
        y = 0
        
        z = a + 1
        w = a
        
        while w > 0:
            w //= 3
            y += 2
            
        while z > 0:
            z //= 3
            y += 1
            
        for v in range(a + 2, b + 1):
            u = v
            while u > 0:
                u //= 3
                y += 1
        
        # More unnecessary operations
        dummy_avg = sum(dummy_list) / len(dummy_list)
        dummy_max = max(dummy_list)
        dummy_min = min(dummy_list)
        
        print(y)
        
if __name__ == "__main__":
    main()
