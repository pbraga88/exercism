#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <map>
#include <vector>

namespace grade_school {
    class school {
        private:
            std::map<int, std::vector<std::string>> grade_student;
        public:
            void add(const std::string &name, int grade);
            const std::map<int, std::vector<std::string>>& roster() const;
            const std::vector<std::string>& grade(int gd) const;
    };

}  // namespace grade_school

#endif // GRADE_SCHOOL_H