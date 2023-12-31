// handle virtual function call on a super type's pointer

struct A {
  virtual ~A() = default;
  virtual void foo() {}
};

struct B : A {
  void foo() override {}
};

int main() {
  B b;
  A *apnt = &b;
  apnt->foo();
}
