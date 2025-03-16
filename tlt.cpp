#include <std.hpp>
namespace tlt {
	template<typename flexible>
	void give(flexible i) {
    	    	std::cout << i;
	}
	template<typename flexible>
	void get(flexible& i, std::optional<std::string> o) {
    	    	if (o) {
       	     	    	std::cout << *o;
    	    	}
    	    	std::cin >> i;
	}
	template<typename flexible>
	void givebool(std::pair<bool,int> i) {
  	    	if (i or i == 1) {
            		std::cout << "true";
    	    	} else {
            		std::cout << "false";
    	    	}
	}
	template<typename flexible>
	std::string as_str(flexible i) {
    	    	return std::to_string(i);
	}
	template<typename flexible>
	void appendto(std::vector<flexible>& v, flexible i) {
    	    	v.push_back(i);
	}
	template<typename flexible>
	std::string end() {
    	    	return "\n";
	}
	template<typename flexible>
	double randint(double l, double h) {
    	    	std::vector<int> ltoh;
    	    	for (int  i = l; i < h; i++) {
    	    	    	ltoh.push_back(i+1);
    	    	}
    	    	return ltoh[rand() % ltoh.size()-1];
	}
	template<typename flexible>
	template<typename K, typename V>
	V mapfind(const std::map<K, V>& map, const K& item) {
    	    	auto it = map.find(item);
    	    	if (it != map.end()) {
            		return it->second;
    	    	} else {
            		return V();
    	    	}
	}
	template<typename flexible>
	int as_int(flexible i) {
    	    	return static_cast<int>(i);
	}
	template<typename flexible>
	bool as_bool(flexible i) {
    	    	return static_cast<bool>(i);
	}
	template<typename flexible>
	double sum(const std::vector<double>& vec) {
    	    	return std::accumulate(vec.begin(), vec.end(), 0.0);
	}
	template<typename flexible>
	flexible randchoice(const std::vector<flexible>& vec) {
    	    	if (vec.empty()) {
        	    	return "";
    	    	} else {
                        return vec[rand() % vec.size()-1];
                }
	}
	template<typename flexible>
	std::vector<double> range(double l, double h) {
		std::vector<double> r;
		for (int i = l; i <= h; i++) {
			r.push_back(i);
		}
		return r;
	}
	template<typename flexible>
	std::vector<double> pmtde(double n1, double n2) {
		return {n1+n2, n1-n2, n1*n2, n1/n2, pow(n1, n2)};
	}
	double round(double i, double rp) {
		return std::pow(i, rp) / rp;
	}
	template<typename, flexible>
	flexible pointer(flexible point_to) {
		flexible* pointer = nullptr;
		if (point_to == "null") {
			return pointer;
		} else {
			flexible* pointer = point_to;
			return pointer;
		}
	}
        std::vector<double> minmax(std::vector<double> i) {
                double min_max = minmax_element(i.begin(), i.end());
                return {min_max.first, min_max.second};
        }
        template<typename, flexible>        
        std::vector<flexible> as_vec(std::list<flexible> i) {
                std::vector<auto> y;
                for (int x = 0; x < i.size(); x++) {
                        y.push_back(i[x]);
                }
        return y;
        }
        template<typename, flexible>
        std::list<flexible> as_list(std::vector<flexible> i) {
                std::vector<auto> z;
                for (int a = 0; a < i.size(); a++) {
                        y.push_back(i[a]);
                }
        return y;
        }
}
