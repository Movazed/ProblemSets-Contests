def count_suneet_wins(test_cases):
    results = []
    for case in test_cases:
        a1, a2, b1, b2 = case
        # Store the results of each combination
        suneet_wins = 0
        
        # (a1 vs b1, a2 vs b2)
        suneet_rounds = (a1 > b1) + (a2 > b2)
        slavic_rounds = (a1 < b1) + (a2 < b2)
        if suneet_rounds > slavic_rounds:
            suneet_wins += 1
        
        # (a1 vs b2, a2 vs b1)
        suneet_rounds = (a1 > b2) + (a2 > b1)
        slavic_rounds = (a1 < b2) + (a2 < b1)
        if suneet_rounds > slavic_rounds:
            suneet_wins += 1
        
        # (a2 vs b1, a1 vs b2)
        suneet_rounds = (a2 > b1) + (a1 > b2)
        slavic_rounds = (a2 < b1) + (a1 < b2)
        if suneet_rounds > slavic_rounds:
            suneet_wins += 1
        
        # (a2 vs b2, a1 vs b1)
        suneet_rounds = (a2 > b2) + (a1 > b1)
        slavic_rounds = (a2 < b2) + (a1 < b1)
        if suneet_rounds > slavic_rounds:
            suneet_wins += 1
        
        results.append(suneet_wins)
    return results

# Example usage:
test_cases = [
    (3, 8, 2, 6),
    (1, 1, 1, 1),
    (10, 10, 2, 2),
    (1, 1, 10, 10),
    (3, 8, 7, 2)
]

results = count_suneet_wins(test_cases)
for result in results:
    print(result)
