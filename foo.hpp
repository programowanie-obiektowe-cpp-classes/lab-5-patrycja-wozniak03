#pragma once

#include "Human.hpp"

#include <list>
#include <vector>


std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;
    result.reserve(people.size());

    // Najpierw iterujemy po liœcie w normalnej kolejnoœci:
    for (auto& person : people) {
        person.birthday(); // inkrementacja age

        // 'y' jeœli NIE jest potworem (czyli lubi psa lub kota),
        // 'n' jeœli isMonster() == true
        result.push_back(person.isMonster() ? 'n' : 'y');
    }

    // Odwrócenie kolejnoœci wektora
    std::reverse(result.begin(), result.end());

    return result;
}
