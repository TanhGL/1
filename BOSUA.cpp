#include <iostream>
#include <vector>
#include <iomanip>

struct BoSua {
    int maBo;
    std::string tenBo;
    std::string ngaySinh;
    std::string gioiTinh;
    double canNang;
};

void printBoSua(const BoSua& boSua) {
    std::cout << "[BoSua] = \"M� B�: " << boSua.maBo
              << "\",\"T�n B�: " << boSua.tenBo
              << "\",\"Ng�y Sinh: " << std::setw(2) << std::setfill('0') << boSua.ngaySinh.substr(0, 2)
              << "/" << boSua.ngaySinh.substr(2, 2) << "/" << boSua.ngaySinh.substr(4)
              << "\",\"Gi?i t�nh: " << boSua.gioiTinh
              << "\",\"C�n n?ng: " << std::fixed << std::setprecision(1) << boSua.canNang << "kg\"\n";
}


int main() {
    int n;
    std::cin >> n;

    std::vector<BoSua> danhSachBoSua(n);

    for (int i = 0; i < n; ++i) {
        BoSua boSua;
        std::cin >> boSua.maBo >> boSua.tenBo >> boSua.ngaySinh >> boSua.gioiTinh >> boSua.canNang;
        danhSachBoSua[i] = boSua;
    }

    for (int i = 0; i < n; ++i) {
        if (danhSachBoSua[i].canNang > 20.0) {
            printBoSua(danhSachBoSua[i]);
        }
    }

    return 0;
}
