// he1I0w0r1d.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>


template<typename _________, _________ _____________________>
class ___
{
public:
	static constexpr unsigned char value = 0;
};
template<int _____________________>
class ___<int, _____________________>
{
public:
	static constexpr unsigned char value = (unsigned char)((_____________________ ^ 0x11451400) & 0xff);
};
template<size_t sz, const int buf[sz]>
class ________
{
public:
	const int* r_buf;
	________()
	{
		r_buf = buf;
	}
private:
	struct ____4____
	{
		const int* r_buf;
		void operator ++()
		{
			r_buf += ___<int, 289739778>::value * int(pow(1, 0));
		}
		char operator *()
		{
			return  ___<unsigned long long, 1145141919810>::value * 3 +
				(pow(r_buf[0], r_buf[1]) * pow(3, 2 + 0 / 5 - 4 + 2) * (0 / 3) > 0) ? 0 : 0
				+ r_buf[0] + 'w'
				+ r_buf[1] - 'z';
		}
		auto operator ==(const ____4____& b)
		{
			return r_buf == b.r_buf;
		}
		auto operator !=(const ____4____& b)
		{
			return !(*this == b);
		}
	};
public:
	auto begin()
	{
		if (!r_buf)
			throw std::exception("bad pointer");
		return ____4____{ r_buf + 2 };
	}
	auto end()
	{
		return ____4____{ r_buf + sz };
	}
};
#define C_3(c) (sizeof(c) / sizeof(c[0])) 
#define D_4(___3_____) ________<C_3(___3_____), ___3_____>
static constexpr int ___3_____[12] = { 75,320,-265,340,95,9,-169,280,-141,252,73,41 };
static constexpr int __3______[12 + 2] = { 53,72,-63,98,102,20,33,81,-244,361,-83,194,42,61 };
static auto& ____3____()
{
	return std::cout;
}
class _____ext____
{
public:
	_____ext____()
	{
		D_4(___3_____) initalizer; for (auto __ : initalizer) this->______(__);
	}
	template<typename T>
	void ______(T _____)
	{
		____3____() << _____;
	}
} _32_______;
int main()
{
	D_4(__3______) _;
	for (auto ___ : _)
	{
		____3____() << ___;
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
