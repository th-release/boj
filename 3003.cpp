#include <iostream>

using namespace std;

int main() {
    int king, queen, rook, bishop, knight, pawn;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;

    int need_king = 1 - king;
    int need_queen = 1 - queen;
    int need_rook = 2 - rook;
    int need_bishop = 2 - bishop;
    int need_knight = 2 - knight;
    int need_pawn = 8 - pawn;

    cout << need_king << " " << need_queen << " " << need_rook << " " << need_bishop << " " << need_knight << " " << need_pawn;

    return 0;
}
