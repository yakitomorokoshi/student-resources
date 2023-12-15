# HEAP SORT

**Sắp xếp vun đống (Heap sort)** là một thuật toán sắp xếp có kỹ thuật so sánh dựa trên cấu trúc dữ liệu Đống nhị phân.

**Đống nhị phân (Binary Heap)** hay **Đống (Heap)** là cấu trúc dữ liệu dựa  trên cấu trúc dữ liệu của một Cây nhị phân hoàn chỉnh (Complete Binary Tree) nhưng là một Cây nhị phân hoàn chỉnh thoả mãn tính chất: Khoá (phần tử, thành phần) của nút Cha (Parent node) mang $\geq$ hoặc $\leq$ Khoá của các nút Con (Child nodes) mang. Vì vậy Đống chia thành 2 dạng:

+ Khoá của nút Cha $\geq$ Khoá của các nút Con thì Cây nhị phân hoàn chỉnh gọi là **Max Heap**.

+ Khoá của nút Cha $\leq$ Khoá của các nút Con thì Cây nhị phân hoàn chỉnh gọi là **Min Heap**.

Việc sắp xếp các phần tử của một Mảng thành Đống được gọi là **Vun đống (Heapify):**

- Để Vun một Mảng đầu vào thành Đống, ta cần phải tìm đến những chỉ mục trên Mảng có vai trò "Parents node" của một Cây nhị phân hoàn chỉnh: với lặp chỉ mục: bắt đầu từ chỉ mục của "nút Cha cuối cùng" (tính từ nút Gốc) và kết thúc ở chỉ mục của nút Gốc (Root node): so sánh Khoá của các nút Con với nút Cha của chúng rồi tìm ra Khoá có giá trị lớn nhất (Vun thành Max Heap) hoặc nhỏ nhất (Vun thành Min Heap), nếu Khoá lớn nhất thuộc nút Cha thì tiếp tục thay đổi chỉ mục, còn không thì thực hiện trao đổi Khoá đó cho nút Cha và "Re-Heapify" phân nhánh của nút Con đã thực hiện trao đổi Khoá với nút Cha, rồi mới tiếp tục thay đổi chỉ mục.

- Vì vậy, ta cần xác định các chỉ mục cho các nút tạo thành Cây tương ứng thành phần với các chỉ mục Mảng đầu vào có trật tự từ $0$ tới $n-1$ (với $n$ là tổng phần tử của Mảng): tương ứng từ trên (Gốc) xuống dưới và từ trái sang phải theo cấu trúc của một Cây nhị phân.

- Khi đó, mỗi nút với chỉ mục $i$ nếu có hai Con, ta có thể truy cập tới chỉ mục Con của nó: với nút Con Trái có chỉ mục $2i+1$ và nút Con Phải có chỉ mục $2i+2$.

- Vì mỗi nút Cha của một Cây nhị phân hoàn chỉnh thì phải có "ít nhất" một Con Trái, với chỉ mục $i$ ($i \neq 0$) của một nút, bất kể nút là Con Trái hay Con Phải, gọi $P$ là chỉ mục Cha của chúng, $P$ có thể được tìm thấy:

$$ P = \frac{i-1}{2} $$

- Vì chỉ mục nút Con cuối cùng của nút Cha cuối cùng là $n-1$, chỉ mục "nút Cha cuối cùng" có thể được tìm thấy:

$$ P = \frac{n-2}{2} = \frac{n}{2} - \frac{2}{2} = \frac{n}{2} - 1 $$

Sau khi Vun Mảng thành Đống, chỉ mục Gốc là chỉ mục mang Khoá lớn nhất. Vì vậy, ta tiến hành thay thế Khoá của Gốc bằng Khoá của chỉ mục cuối cùng, khi này, Đống ban đầu và Đống sau thay thế chỉ sai khác ở hai chỉ mục là $0$ và $n-1$, để tiếp tục sắp xếp Mảng đầu vào, ta tiếp tục Vun đống trên đoạn chỉ mục Mảng (Mảng con của Mảng đầu vào) $[0, i], i=(n-1)-1$, với lặp chỉ mục: từ $i$ về $0$.
