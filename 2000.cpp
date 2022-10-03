#include<stdio.h>
class Complex {
	public:
		int a;	// ʵ�� 
		int b;	// �鲿 
		
	//	���췽�� 
	public:
		Complex(int a = 0, int b = 0) {
			this->a = a;
			this->b = b;
		}
		
	//	�ӷ� 
		static Complex add(Complex x, Complex y) {
			Complex c = Complex();
			c.a = x.a + y.a;
			c.b = x.b + y.b;
			return c;
		}
		void add(Complex c) {
			add(*this, c);
		}
		
	//	���� 
		static Complex sub(Complex x, Complex y) {
			Complex c = Complex();
			c.a = x.a - y.a;
			c.b = x.b - y.b;
			return c;
		}
		void sub(Complex c) {
			sub(*this, c);
		}
		
	//	�˷�
		static Complex mul(Complex x, Complex y) {
			Complex c = Complex();
			c.a = x.a * y.a - x.b * y.b;
			c.b = y.a * x.b + x.a * y.b;
			return c;
		}
		void mul(Complex c) {
			mul(*this, c);
		}
		
	//	��ʽ����ӡ�������� 
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
