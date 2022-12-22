#include "grade_school.h"
#include <iostream>
#include <algorithm>
#include <memory>

namespace grade_school {
    void school::add(const std::string &name, int grade) {
        // Storing a reference
        // auto *grade_ref = new std::vector<std::string>;
        auto& names = grade_student[grade];

        // upper_bound will iterate whrough grade_student and return the correct position so the elements 
        // are inserted in a ascending sorted manner
        auto it = std::upper_bound(names.begin(), names.end(), name);
        names.insert(it, name);

        // grade_ref = NULL;
        // delete grade_ref;
    }

    // Return a constant reference instead of copy the value to the caller
    const std::map<int, std::vector<std::string>>& school::roster() const{
        return grade_student;
    }
    
    static const std::vector<std::string> empty_object {};
    // const std::vector<std::string>& school::grade(int gd) const{
    //     return grade_student.count(gd) ? grade_student.at(gd)        //  The count() method will check for the existence of key 'gd' and
    //                                    : empty_object;               // since it's a map, it can only occur once
    // }

    const std::vector<std::string>& school::grade(int gd) const{
        auto gd_find = grade_student.find(gd);
        return gd_find != grade_student.end() ? gd_find->second
                                              : empty_object;
    }

}  // namespace grade_school
