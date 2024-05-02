def solution(games: str) -> str:
    a_count = 0
    d_count = 0
    for game in games:
        if game == 'A':
            a_count +=1
        else :
            d_count +=1
    if a_count > d_count:
        return "Anton"
    if d_count > a_count:
        return "Danik"
    return "Friendship"

if __name__ == "__main__":
    num_game = int(input())
    games = input()
    print(solution(games))
