# PHIẾU BÀI TẬP VỀ NHÀ (HOMEWORK PRACTICE)
## CHỦ ĐỀ: RÈN LUYỆN KỸ NĂNG THI ĐẤU OLYMPIC & PHÂN TÍCH SUBTASK

> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) — Tổ Tin học  
> **Khối lớp:** Đội tuyển Olympic Tin học 11 (Năm học 2026 – 2027)  
> **Thời hạn nộp:** Trước buổi học kế tiếp.  
> **Hình thức nộp:** Nén toàn bộ các file mã nguồn `.cpp` vào file `Hoten_Tuan01.zip` nộp lên hệ thống.

---

### BÀI 1: XÂU ĐỐI XỨNG NÂNG CAO (PALIN)
* **Tệp mã nguồn:** `PALIN.cpp` | **Vào:** `PALIN.INP` | **Ra:** `PALIN.OUT`
* **Giới hạn thời gian:** 1.0s / **Bộ nhớ:** 256MB

#### Đề bài:
Một xâu được gọi là xâu đối xứng nếu đọc từ trái sang phải hay từ phải sang trái đều giống nhau.  
Cho một xâu ký tự $S$ có độ dài không quá $10^5$ ký tự, gồm các chữ cái tiếng Anh, chữ số, dấu cách và các dấu câu (như `,`, `.`, `!`, `?`).  
Hãy kiểm tra xem: Sau khi **bỏ qua tất cả các ký tự không phải chữ cái và chữ số**, đồng thời **coi chữ hoa và chữ thường là như nhau**, xâu $S$ có phải là xâu đối xứng hay không? Nếu đúng in `YES`, ngược lại in `NO`.

#### Input mẫu 1:
```text
A man, a plan, a canal: Panama!
```
#### Output mẫu 1:
```text
YES
```
*(Giải thích: Xâu sau khi lọc là "amanaplanacanalpanama" - là một xâu đối xứng)*

#### Input mẫu 2:
```text
race a car
```
#### Output mẫu 2:
```text
NO
```

---

### BÀI 2: PHẦN TỬ ĐA SỐ TRONG DÃY SỐ (MAJORITY)
* **Tệp mã nguồn:** `MAJORITY.cpp` | **Vào:** `MAJORITY.INP` | **Ra:** `MAJORITY.OUT`
* **Giới hạn thời gian:** 1.0s / **Bộ nhớ:** 256MB

#### Đề bài:
Cho mảng $A$ gồm $N$ số nguyên không âm ($1 \le N \le 10^5, 0 \le A_i \le 10^6$). Một phần tử được gọi là **phần tử đa số** nếu số lần xuất hiện của nó trong mảng lớn hơn $\lfloor N / 2 \rfloor$.  
Hãy tìm và in ra phần tử đa số đó. Nếu không có phần tử nào thỏa mãn, in ra `-1`.

#### Subtask:
* **Subtask 1 (40% điểm):** $N \le 1000$ ($O(N^2)$).
* **Subtask 2 (60% điểm):** $N \le 10^5$ ($O(N)$ bằng mảng đếm tần số).

#### Input mẫu 1:
```text
7
2 2 1 1 1 2 2
```
#### Output mẫu 1:
```text
2
```
*(Giải thích: Số 2 xuất hiện 4 lần, lớn hơn $7 / 2 = 3$)*

#### Input mẫu 2:
```text
4
1 2 3 4
```
#### Output mẫu 2:
```text
-1
```

---

### BÀI 3: ĐOẠN CON LIÊN TIẾP CHIA HẾT CHO 3 (DIV3)
* **Tệp mã nguồn:** `DIV3.cpp` | **Vào:** `DIV3.INP` | **Ra:** `DIV3.OUT`
* **Giới hạn thời gian:** 1.0s / **Bộ nhớ:** 256MB

#### Đề bài:
Cho mảng $A$ gồm $N$ số nguyên dương ($1 \le N \le 10^5, 1 \le A_i \le 10^9$). Hãy đếm số lượng đoạn con liên tiếp $A[L..R]$ ($1 \le L \le R \le N$) có tổng các phần tử chia hết cho 3.

#### Subtask:
* **Subtask 1 (30% điểm):** $N \le 1000$ (Duyệt $O(N^2)$).
* **Subtask 2 (70% điểm):** $N \le 10^5$ (Mảng cộng dồn kết hợp đồng dư $O(N)$).

#### Input mẫu:
```text
5
1 2 3 4 2
```
#### Output mẫu:
```text
4
```
*(Giải thích: Các đoạn con có tổng chia hết cho 3 là: $[1, 2]$ (tổng 3), $[3]$ (tổng 3), $[1..3]$ (tổng 6), $[4, 2]$ (tổng 6))*

---

### BÀI 4: ĐỘ DÀI ĐOẠN CON NGẮN NHẤT ĐẠT TỔNG S (MINSUB)
* **Tệp mã nguồn:** `MINSUB.cpp` | **Vào:** `MINSUB.INP` | **Ra:** `MINSUB.OUT`
* **Giới hạn thời gian:** 1.0s / **Bộ nhớ:** 256MB

#### Đề bài:
Cho mảng $A$ gồm $N$ số nguyên dương ($1 \le N \le 10^5, 1 \le A_i \le 10^5$) và số nguyên dương $S$ ($1 \le S \le 10^{14}$).  
Hãy tìm độ dài nhỏ nhất của một đoạn con liên tiếp các phần tử trong mảng có tổng **lớn hơn hoặc bằng** $S$. Nếu không tồn tại đoạn con nào như vậy, in ra `-1`.

#### Subtask:
* **Subtask 1 (40% điểm):** $N \le 1000$ ($O(N^2)$).
* **Subtask 2 (60% điểm):** $N \le 10^5$ ($O(N)$ bằng kỹ thuật Cửa sổ trượt / Two Pointers).

#### Input mẫu:
```text
6 15
2 1 6 5 4 3
```
#### Output mẫu:
```text
3
```
*(Giải thích: Đoạn con $[6, 5, 4]$ có tổng là $15 \ge 15$ và độ dài là 3 là ngắn nhất)*

---

### BÀI 5: QUẢN LÝ ĐẶT BÀN NHÀ HÀNG (RESTAURANT)
* **Tệp mã nguồn:** `RESTAURANT.cpp` | **Vào:** `RESTAURANT.INP` | **Ra:** `RESTAURANT.OUT`
* **Giới hạn thời gian:** 1.0s / **Bộ nhớ:** 256MB

#### Đề bài:
Một nhà hàng nhận được $N$ đơn đặt bàn trong ngày ($1 \le N \le 10^5$). Đơn đặt bàn thứ $i$ sử dụng bàn từ thời điểm $L_i$ đến thời điểm $R_i$ ($1 \le L_i \le R_i \le 10^6$).  
Hỏi nhà hàng cần chuẩn bị tối thiểu bao nhiêu bàn để phục vụ tất cả các khách hàng mà không bị trùng lịch bàn nào?

#### Subtask:
* **Subtask 1 (40% điểm):** $N, R_i \le 1000$.
* **Subtask 2 (60% điểm):** $N \le 10^5, R_i \le 10^6$ (Áp dụng Mảng hiệu - Difference Array $O(N + \max R)$).

#### Input mẫu:
```text
4
1 5
3 7
2 6
8 10
```
#### Output mẫu:
```text
3
```
*(Giải thích: Tại thời điểm từ 3 đến 5, có đồng thời 3 khách là khách 1 [1-5], khách 2 [3-7], khách 3 [2-6])*
