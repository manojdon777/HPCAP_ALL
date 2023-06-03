import numpy as np
import copy
import matplotlib.pyplot as plt
org_deck = [
    '1S', '2S', '3S', '4S', '5S', '6S', '7S', '8S', '9S', '10S', 'JS', 'QS', 'KS',
    '1H', '2H', '3H', '4H', '5H', '6H', '7H', '8H', '9H', '10H', 'JH', 'QH', 'KH',
    '1C', '2C', '3C', '4C', '5C', '6C', '7C', '8C', '9C', '10C', 'JC', 'QC', 'KC',
    '1D', '2D', '3D', '4D', '5D', '6D', '7D', '8D', '9D', '10D', 'JD', 'QD', 'KD',
]
def kingking(deck):
    for i in range(len(deck) - 1):
        if deck[i][0] == 'K' and deck[i+1][0] == 'K':
            return True
def MonteCarlo(n):
    count = 0.0
    for i in range(n):
        deck = copy.deepcopy(org_deck)
        np.random.shuffle(deck)
        if kingking(deck):
            count += 1
        print(count/n*100)
        return count/n*100
result = []
for i in range(1,7):
    result.append(MonteCarlo(10**i))
plt.xscale('log')
