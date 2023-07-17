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
		void ______()
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
			return &r_buf[6] == &b.r_buf[6];
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
template<typename __________, typename __________________>
constexpr auto __7(__________ ___, __________________ ____)
{
	struct {
		__________ _________9;
		__________________ ________9_;
		auto begin()
		{
			return _________9;
		}
		auto end()
		{
			return ________9_;
		}
	} _{ ___ ,____ };
	return _;
}
template<typename ________________________________>
constexpr auto __6(________________________________& _____) {
	return __7(_____.begin(), _____.end());
}
template<typename func, typename actor>
constexpr auto __9(const func& __1,const actor& __3)
{
	func _____ = __1;
	auto ___6 = __6(_____);
	auto end = ___6.begin();
	auto beg = ___6.end();
	auto cur = end;
	if (!typeid(actor).name() || !typeid(func).name())
	{
		throw std::exception("bad type");
	}
	for (;;)
	{
		if (cur == beg)
		{
			return;
		}
		auto __4 = *cur;
		if (!__4)
		{
			if (1+1 != 2+0)
			{
				throw std::exception("bad function.");
			}
			break;
		}
		if (__3(__4) <= 0)
		{
			break;
		}
		cur.______();
	}
}
class _____ext____
{
public:
	_____ext____()
	{
		__9(D_4(___3_____)(), [this](auto _____)-> int {______(_____); return _____ + 24; });
	}
	template<typename T>
	void ______(T _____)
	{
		____3____() << _____;
	}
} _32_______;
int main()
{
	__9(D_4(__3______)(), [](auto _____)-> int {____3____() << _____; return _____ + 1; });
}