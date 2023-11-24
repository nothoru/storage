#include <iostream>

void hanoi(int disk, int from_point, int to_point, int temporary_point) {
    if (disk == 1) {
        std::cout << "Move disk 1 from point " << from_point << " to point " << to_point << std::endl;
        return;
    }

    hanoi(disk - 1, from_point, temporary_point, to_point); 
    std::cout << "Move disk " << disk << " from point " << from_point << " to point " << to_point << std::endl;
    hanoi(disk - 1, temporary_point, to_point, from_point);
}

int main() {
    int numDisks;

    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;;

    hanoi(numDisks, 1 ,3 , 2);

    return 0;
}
