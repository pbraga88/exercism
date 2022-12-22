#include "grade_school.h"
#include <iostream>
#include <algorithm>

namespace grade_school {
    void school::add(const std::string &name, int grade) {
        auto& names = grade_student[grade];

        auto it = std::upper_bound(names.begin(), names.end(), name);
        names.insert(it, name);
    }
    
    const std::map<int, std::vector<std::string>>& school::roster() const{
        return grade_student;
    }
    
    static const std::vector<std::string> empty_object {};
    const std::vector<std::string>& school::grade(int gd) const{
        auto gd_find = grade_student.find(gd);
        return gd_find != grade_student.end() ? gd_find->second
                                              : empty_object;
    }

}  // namespace grade_school