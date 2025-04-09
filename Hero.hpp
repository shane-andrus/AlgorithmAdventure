#ifndef Hero_HPP
#define Hero_HPP
#include <string>
#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "NPC.hpp"
#include "Villain.hpp"
#include "Inventory.hpp"
#include "Item.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <limits>
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <cassert>
#include <memory>
#include <utility>
#include <functional>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <future>
#include <random>
#include <exception>
#include <typeinfo>
#include <type_traits>
#include <initializer_list>
#include <iterator>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <bitset>
#include <tuple>
#include <variant>
#include <any>
#include <regex>
#include <locale>
#include <codecvt>
#include <clocale>
#include <cwchar>
#include <cwctype>
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cinttypes>
#include <cuchar>
#include <ccomplex>
#include <csetjmp>
#include <cstdalign>
class Hero : public GameCharacter, public Interactable {
public:
	Hero();
	Hero(std::string name, int health, int powerlevel);
	Hero(std::string name, int health, int powerlevel, bool interact);
	void speak();
	void act();
	std::string getName();
	int getHealth();
	int getPowerLevel();
	void interactWith(GameCharacter& charAct);
	void trade(GameCharacter& charAct);
	void attack(GameCharacter& charAct);
	~Hero();
private:
	std::string name;
	int health;
	int powerLevel;
	bool interactable;
};




#endif // !Hero_HPP
