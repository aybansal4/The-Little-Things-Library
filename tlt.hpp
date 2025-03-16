#ifndef TLT_HPP
#define TLT_HPP
#include <std.hpp>
namespace tlt {
        template<typename flexible>
	void give(flexible i);
	void get(std::optional<std::string> o, flexible& i);
	void givebool(std::pair<bool, int> i);
	template<typename flexible>
	std::string as_str(flexible i);
	template<typename flexible>
	void appendto(std::vector<flexible>& v, flexible i);
	template<typename flexible>
	std::string end();
	template<typename flexible>
	int randint(double l, double h);
	template<typename flexible>
	template<typename K, typename V>
	V mapfind(const std::map<K, V>& map, const K& item);
	template<typename flexible>
	int as_int(flexible i);
	template<typename flexible>
	bool as_bool(flexible i);
	template<typename flexible>
	double sum(const std::vector<double>& vec);
	template<typename flexible>
	flexible randchoice(const std::vector<flexible>& vec);
	template<typename flexible>
	std::vector<double> range(l, h);
	template<typename flexible>
	std::vector<double> pmtde(double n1, double n2);
	double round(double i, double rp);
        template<typename, flexible>
        flexible pointer(flexible point_to);
        std::vector<double> minmax(std::vector<double> i);
        template<typename, flexible>
        std::vector<flexible> as_vec(std::list<flexible> i);
        template<typename, flexible>
        std::list<flexible> as_list(std::vector<flexible> i);
}
#endif
