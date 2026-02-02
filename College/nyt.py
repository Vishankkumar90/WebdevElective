graph = {
    'KIET': ['Muradnagar', 'Duhai'],
    'Duhai': ['Muradnagar', 'Guldhar'],
    'Muradnagar': ['Duhai'],
    'Guldhar': ['Ghazibad'],
    'Ghazibad': ['KIET', 'Merrut'],
    'Merrut': []
}

nodes = list(graph.keys())
n = len(nodes)
matrix = [[0]*n for _ in range(n)]

for i, u in enumerate(nodes):
    for v in graph[u]:
        j = nodes.index(v)
        matrix[i][j] = 1

print("Nodes order:", nodes)
for row in matrix:
    print(row)




