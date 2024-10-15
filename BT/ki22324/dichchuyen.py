def check_collinear(points):
    (x1, y1), (x2, y2), (x3, y3) = points
    return (x2 - x1) * (y3 - y2) == (x3 - x2) * (y2 - y1)

def find_non_collinear_points(points):
    n = len(points)
    if n < 3:
        return None
    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                if not check_collinear([points[i], points[j], points[k]]):
                    return [i + 1, j + 1, k + 1]
    return None

def main():
    n = int(input())
    points = []
    for i in range(n):
        xi, yi = map(int, input().split())
        points.append((xi, yi))

    non_collinear_points = find_non_collinear_points(points)

    if non_collinear_points is None:
        print("No")
    else:
        print("Yes")
        print(*non_collinear_points)

if __name__ == "__main__":
    main()