int a(int p) {
    return 2*p;
}

int main() {
    int i;
    for (i = 0; i < 100000000; i++) {
//        a(i);
    }
    return 0;
}