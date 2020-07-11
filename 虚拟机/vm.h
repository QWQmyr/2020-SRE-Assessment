#include "myrstring.h"
using namespace std;
enum {
	HEL = 0,
	PUT,
	MOV,
	JUM,
	PLU,
	MIN,
	MUL,
	DIV,
	XOR,
	OR,
	AND,
	OUT,
	inst_c
};

enum {
	_char,
	_digit
};

enum {
	RUN = 1,
	DEBUG,
	_reg,
	_inst,
	_out,
};
// �Ĵ���
class Instruction {
public:
	static const int const_hel = 1;  // ����
	static const int const_put = 2;  // ���ݴ洢
	static const int const_mov = 3;  // ���ݽ���
	static const int const_jum = 4;  // ��ת
	static const int const_plu = 5;  // ��
	static const int const_min = 6;  // ��
	static const int const_mul = 7;  // ��
	static const int const_div = 8;  // ��
	static const int const_xor = 9;  // ��λ���
	static const int const_or = 10; // ��λ��
	static const int const_and = 11; // ��λ��
	static const int const_out = 12; // ���
private:
	int m_address;
	int r_address;
	int debug;
	string inst_order, reg_order;
};

class VM  {
public:
	VM();
	~VM();
	void Read();
	void Execute();
	void Reset();
private:
	int NewTempCopy();
	int NewTempCopy(int j);
	int NewTempCopy(char *s);
	void DelTempCopy(int i);
};