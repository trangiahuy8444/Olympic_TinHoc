# PHIẾU BÀI TẬP VỀ NHÀ — BUỔI 01
**Đội tuyển Học sinh Giỏi Tin học 11 — Trường Quốc tế Á Châu (Asian School)**  
*Rèn luyện kỹ năng: Tự tạo tệp .INP/.OUT, Chọn kiểu dữ liệu & Tránh tràn số*

---

> ⚠️ **HƯỚNG DẪN LÀM BÀI TẠI NHÀ:**  
> 1. Tự cài đặt Code::Blocks 20.03 trên máy tính cá nhân theo hướng dẫn trong thư mục `00_Huong_dan_Setup`.
> 2. Mỗi bài tập lưu một file `.cpp` riêng trong thư mục bài làm ở nhà.
> 3. Tự tạo file dữ liệu `.INP` để chạy thử nghiệm bằng phím **F9**.
> 4. Luôn phân tích phạm vi giá trị để dùng `long long` khi có nguy cơ tràn số.

---

### Bài 1: HIỆU HAI SỐ NGUYÊN
* **Tên file mã nguồn:** `HIEU2.cpp`
* **Tệp dữ liệu vào:** `HIEU2.INP`
* **Tệp kết quả ra:** `HIEU2.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cho hai số nguyên $A$ và $B$. Hãy tính giá trị hiệu $D = A - B$.

#### Dữ liệu vào (`HIEU2.INP`):
* Một dòng chứa hai số nguyên $A, B$ cách nhau một dấu cách ($-10^9 \le A, B \le 10^9$).

#### Kết quả ra (`HIEU2.OUT`):
* Ghi ra một số nguyên duy nhất là giá trị của $A - B$.

#### Ví dụ:
| `HIEU2.INP` | `HIEU2.OUT` |
| :--- | :--- |
| `50 120` | `-70` |

---

### Bài 2: TÍNH TIỀN ĐIỆN
* **Tên file mã nguồn:** `TIENDIEN.cpp`
* **Tệp dữ liệu vào:** `TIENDIEN.INP`
* **Tệp kết quả ra:** `TIENDIEN.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Một hộ gia đình sử dụng hết $K$ số điện (kWh) trong một tháng ($1 \le K \le 10^4$). Đơn giá cố định là $2500.5$ đồng/kWh. Ngoài ra gia đình phải chịu thêm $10\%$ tiền thuế VAT. Hãy tính tổng số tiền điện gia đình phải trả.

#### Dữ liệu vào (`TIENDIEN.INP`):
* Một số nguyên dương $K$.

#### Kết quả ra (`TIENDIEN.OUT`):
* Ghi ra tổng số tiền điện phải trả, làm tròn đúng **2 chữ số thập phân**.

#### Công thức:
$$\text{Tien} = K \times 2500.5 \times 1.1$$

#### Ví dụ:
| `TIENDIEN.INP` | `TIENDIEN.OUT` |
| :--- | :--- |
| `150` | `412582.50` |

---

### Bài 3: HÌNH TRÒN
* **Tên file mã nguồn:** `HINHTRON.cpp`
* **Tệp dữ liệu vào:** `HINHTRON.INP`
* **Tệp kết quả ra:** `HINHTRON.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cho bán kính $R$ của một hình tròn ($0 < R \le 10^4$, $R$ có thể là số thực). Hãy tính chu vi $C = 2 \times \pi \times R$ và diện tích $S = \pi \times R^2$. Lấy hằng số $\pi = 3.141592653589793$.

#### Dữ liệu vào (`HINHTRON.INP`):
* Chứa một số thực $R$.

#### Kết quả ra (`HINHTRON.OUT`):
* Dòng 1: Ghi chu vi hình tròn $C$.
* Dòng 2: Ghi diện tích hình tròn $S$.  
*(Cả hai kết quả đều làm tròn đúng 2 chữ số thập phân).*

#### Ví dụ:
| `HINHTRON.INP` | `HINHTRON.OUT` |
| :--- | :--- |
| `5.0` | `31.42`<br>`78.54` |

---

### Bài 4: TỔNG BA SỐ CỰC LỚN
* **Tên file mã nguồn:** `TONG3SO.cpp`
* **Tệp dữ liệu vào:** `TONG3SO.INP`
* **Tệp kết quả ra:** `TONG3SO.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cho ba số nguyên $A, B, C$. Hãy tính tổng $S = A + B + C$.

#### Dữ liệu vào (`TONG3SO.INP`):
* Một dòng chứa ba số nguyên $A, B, C$ ($-10^{17} \le A, B, C \le 10^{17}$).

#### Kết quả ra (`TONG3SO.OUT`):
* In ra một số nguyên duy nhất là giá trị tổng $S$.

#### Cảnh báo:
* Giới hạn $10^{17}$ vượt xa kiểu `int` $\implies$ Bắt buộc khai báo `long long` cho cả 3 biến nhập và biến tổng.

#### Ví dụ:
| `TONG3SO.INP` | `TONG3SO.OUT` |
| :--- | :--- |
| `1000000000000000 2000000000000000 3000000000000000` | `6000000000000000` |

---

### Bài 5: TÍNH LƯƠNG THỰC NHẬN
* **Tên file mã nguồn:** `LUONG.cpp`
* **Tệp dữ liệu vào:** `LUONG.INP`
* **Tệp kết quả ra:** `LUONG.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Một nhân viên có mức lương cơ bản là $L$ đồng và phụ cấp trách nhiệm là $P$ đồng. Mỗi tháng, nhân viên phải trích $10.5\%$ từ lương cơ bản để đóng các quỹ bảo hiểm xã hội và y tế. Hãy tính tổng số tiền lương thực nhận của nhân viên trong tháng.

#### Dữ liệu vào (`LUONG.INP`):
* Gồm hai số nguyên $L$ và $P$ ($10^6 \le L \le 10^8$, $0 \le P \le 10^7$).

#### Kết quả ra (`LUONG.OUT`):
* Ghi ra số tiền lương thực nhận, làm tròn đúng **2 chữ số thập phân**.

#### Công thức:
$$\text{Thực nhận} = L + P - (L \times 0.105)$$

#### Ví dụ:
| `LUONG.INP` | `LUONG.OUT` |
| :--- | :--- |
| `15000000 2000000` | `15425000.00` |

---

### Bài 6: HOÁN ĐỔI HAI BIẾN
* **Tên file mã nguồn:** `HOANDOI.cpp`
* **Tệp dữ liệu vào:** `HOANDOI.INP`
* **Tệp kết quả ra:** `HOANDOI.OUT`
* **Thời gian chạy:** 1.0 giây | **Bộ nhớ:** 256 MB

#### Đề bài:
Cho hai số nguyên $A$ và $B$. Hãy hoán đổi giá trị của hai biến cho nhau và in ra giá trị mới của $A$ và $B$ (tương đương in ra $B$ trước, $A$ sau).

#### Dữ liệu vào (`HOANDOI.INP`):
* Một dòng chứa hai số nguyên $A, B$ ($-10^9 \le A, B \le 10^9$).

#### Kết quả ra (`HOANDOI.OUT`):
* In ra hai số nguyên sau khi hoán đổi cách nhau một dấu cách.

#### Kỹ thuật lập trình kinh điển:
* Dùng biến trung gian `temp`:
  ```cpp
  long long temp = a;
  a = b;
  b = temp;
  ```

#### Ví dụ:
| `HOANDOI.INP` | `HOANDOI.OUT` |
| :--- | :--- |
| `10 99` | `99 10` |
