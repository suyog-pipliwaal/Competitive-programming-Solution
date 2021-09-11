from heapq import heapify, heappush, heappop
heap = []
heapify(heap)
heappush(heap, 2)
heappush(heap, 1)

for i in heap:
    print(i)
