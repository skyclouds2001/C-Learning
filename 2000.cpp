#include<stdio.h>
class Complex {
	public:
		int a;	// 实部 
		int b;	// 虚部 
		
	//	构造方法 
	public:
		Complex(int a = 0, int b = 0) {
			this->a = a;
			this->b = b;
		}
		
	//	加法 
		static Complex add(Complex x, Complex y) {
			Complex c = Complex();
			c.a = x.a + y.a;
			c.b = x.b + y.b;
			return c;
		}
		void add(Complex c) {
			add(*this, c);
		}
		
	//	减法 
		static Complex sub(Complex x, Complex y) {
			Complex c = Complex();
			c.a = x.a - y.a;
			c.b = x.b - y.b;
			return c;
		}
		void sub(Complex c) {
			sub(*this, c);
		}
		
	//	乘法
		static Complex mul(Complex x, Complex y) {
			Complex c = Complex();
			c.a = x.a * y.a - x.b * y.b;
			c.b = y.a * x.b + x.a * y.b;
			return c;
		}
		void mul(Complex c) {
			mul(*this, c);
		}
		
	//	格式化打印复数方法 
		void print() {
			printf("%d+%di", this->a, this->b);
		}
};

int main(){
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d%d", &a, &b);
	scanf("%d%d", &c, &d);
	Complex x = Complex(a, b), y = Complex(c, d);
	
	printf("add: ");
	Complex::add(x, y).print();
	printf("\n");
	printf("sub: ");
	Complex::sub(x, y).print();
	printf("\n");
	printf("mul: ");
	Complex::mul(x, y).print();
	printf("\n");
	
	return 0;
}
