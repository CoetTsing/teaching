class P {
    int data = 1;
    void add(P a);
    int add(int i) { data += i; return data;}
};
void P::add(P a) {  a.data += data; }

class Q {
    int data = 2;
    void add(P a) { a.add(data); }
};

int main() {
    P a; Q b;
}