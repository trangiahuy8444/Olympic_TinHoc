# PHIẾU BÀI TẬP THỰC HÀNH TẠI LỚP — BUỔI 01
**Đội tuyển Học sinh Giỏi Tin học 11 — Trường Quốc tế Á Châu (Asian School)**  
*Chủ đề: Cài đặt Code::Blocks, Kiểu dữ liệu & Đọc/Ghi tệp .INP / .OUT*

---

> ⚠️ **QUY ĐỊNH BẮT BUỘC TRONG GIỜ THỰC HÀNH:**  
> 1. Mỗi bài toán học sinh tạo một file mã nguồn riêng (ví dụ: `TONG2.cpp`).
> 2. Tạo file dữ liệu test `.INP` cùng thư mục để kiểm tra.
> 3. Bắt buộc dùng `freopen` ở đầu hàm `main()`.
> 4. Kiểm tra giới hạn đề bài để chọn đúng kiểu dữ liệu (`int` hay `long long` hay `double`).

---

### Bài 1: TỔNG HAI SỐ NGUYÊN
* **Tên file mã nguồn:** `TONG2.cpp`
* **Tệp dữ liệu vào:** `TONG2.INP`
* **Tệp kết quả ra:** `TONG2.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cho hai số nguyên $A$ và $B$. Hãy tính và in ra giá trị tổng $S = A + B$.

#### Dữ liệu vào (`TONG2.INP`):
* Gồm một dòng duy nhất chứa hai số nguyên $A$ và $B$ cách nhau một khoảng trắng.

#### Kết quả ra (`TONG2.OUT`):
* In ra một số nguyên duy nhất là giá trị của $A + B$.

#### Ràng buộc:
* $-10^9 \le A, B \le 10^9$.

#### Ví dụ:
| `TONG2.INP` | `TONG2.OUT` |
| :--- | :--- |
| `15 25` | `40` |

---

### Bài 2: HÌNH CHỮ NHẬT
* **Tên file mã nguồn:** `HCN.cpp`
* **Tệp dữ liệu vào:** `HCN.INP`
* **Tệp kết quả ra:** `HCN.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Một khu vườn hình chữ nhật có chiều dài $a$ và chiều rộng $b$. Hãy tính chu vi và diện tích khu vườn.

#### Dữ liệu vào (`HCN.INP`):
* Chứa hai số nguyên dương $a, b$ ($a \ge b$).

#### Kết quả ra (`HCN.OUT`):
* Dòng 1: Ghi một số nguyên là chu vi khu vườn: $P = (a + b) \times 2$.
* Dòng 2: Ghi một số nguyên là diện tích khu vườn: $S = a \times b$.

#### Ràng buộc:
* $1 \le a, b \le 10^6$.
* *Lưu ý:* Diện tích có thể đạt $10^6 \times 10^6 = 10^{12}$ vượt quá giới hạn kiểu `int` $\implies$ **Bắt buộc dùng `long long`**.

#### Ví dụ:
| `HCN.INP` | `HCN.OUT` |
| :--- | :--- |
| `1000000 500000` | `3000000`<br>`500000000000` |

---

### Bài 3: CHIA PHẦN KẸO
* **Tên file mã nguồn:** `CHIAKEO.cpp`
* **Tệp dữ liệu vào:** `CHIAKEO.INP`
* **Tệp kết quả ra:** `CHIAKEO.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cô giáo có $N$ cái kẹo muốn chia đều cho $K$ bạn học sinh trong lớp. Phần kẹo còn dư sẽ giữ lại cho buổi liên hoan sau. Hãy tính số kẹo mỗi bạn nhận được và số kẹo còn dư.

#### Dữ liệu vào (`CHIAKEO.INP`):
* Một dòng chứa hai số nguyên dương $N$ và $K$ ($1 \le N, K \le 10^9$).

#### Kết quả ra (`CHIAKEO.OUT`):
* In ra hai số nguyên cách nhau một dấu cách: số kẹo mỗi bạn nhận được ($N / K$) và số kẹo còn dư ($N \% K$).

#### Ví dụ:
| `CHIAKEO.INP` | `CHIAKEO.OUT` |
| :--- | :--- |
| `25 4` | `6 1` |

---

### Bài 4: DIỆN TÍCH TAM GIÁC
* **Tên file mã nguồn:** `TAMGIAC.cpp`
* **Tệp dữ liệu vào:** `TAMGIAC.INP`
* **Tệp kết quả ra:** `TAMGIAC.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cho một hình tam giác có cạnh đáy độ dài $a$ và chiều cao tương ứng là $h$. Hãy tính diện tích tam giác $S = \frac{a \times h}{2}$.

#### Dữ liệu vào (`TAMGIAC.INP`):
* Chứa hai số thực $a, h$ ($0 < a, h \le 10^4$).

#### Kết quả ra (`TAMGIAC.OUT`):
* In ra diện tích $S$ làm tròn đúng **2 chữ số thập phân**.

#### Gợi ý:
* Dùng kiểu `double` và cú pháp: `cout << fixed << setprecision(2) << S << "\n";`.

#### Ví dụ:
| `TAMGIAC.INP` | `TAMGIAC.OUT` |
| :--- | :--- |
| `7.5 4.2` | `15.75` |

---

### Bài 5: ĐỔI ĐƠN VỊ THỜI GIAN
* **Tên file mã nguồn:** `THOIGIAN.cpp`
* **Tệp dữ liệu vào:** `THOIGIAN.INP`
* **Tệp kết quả ra:** `THOIGIAN.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cho một số nguyên dương $T$ đại diện cho tổng số giây đã trôi qua trong một ngày. Hãy đổi $T$ sang định dạng gồm Giờ, Phút, Giây: `H M S`.

#### Dữ liệu vào (`THOIGIAN.INP`):
* Một số nguyên dương $T$ ($1 \le T \le 86400$).

#### Kết quả ra (`THOIGIAN.OUT`):
* In ra 3 số nguyên cách nhau một dấu cách: Số giờ, số phút và số giây.

#### Gợi ý:
* $1\text{ giờ} = 3600\text{ giây}, 1\text{ phút} = 60\text{ giây}$.
* $\text{Giờ} = T / 3600$
* $\text{Phút} = (T \% 3600) / 60$
* $\text{Giây} = T \% 60$

#### Ví dụ:
| `THOIGIAN.INP` | `THOIGIAN.OUT` |
| :--- | :--- |
| `3725` | `1 2 5` |

---

### Bài 6: TÍCH BA SỐ NGUYÊN
* **Tên file mã nguồn:** `TICH3SO.cpp`
* **Tệp dữ liệu vào:** `TICH3SO.INP`
* **Tệp kết quả ra:** `TICH3SO.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cho ba số nguyên dương $A, B, C$. Hãy tính tích $P = A \times B \times C$.

#### Dữ liệu vào (`TICH3SO.INP`):
* Chứa ba số nguyên dương $A, B, C$ cách nhau dấu cách ($1 \le A, B, C \le 10^6$).

#### Kết quả ra (`TICH3SO.OUT`):
* Ghi ra một số nguyên duy nhất là giá trị tích $P$.

#### Cảnh báo bẫy thi đấu:
* Tích có thể lên tới $10^6 \times 10^6 \times 10^6 = 10^{18} \implies$ Bắt buộc dùng `long long` và kỹ thuật ép kiểu: `long long P = 1LL * A * B * C;`.

#### Ví dụ:
| `TICH3SO.INP` | `TICH3SO.OUT` |
| :--- | :--- |
| `1000000 1000000 1000000` | `1000000000000000000` |
