#pragme once

#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;

        Warlock();

        Warlock(Warlock const &orig);
        Warlock &operator=(Warlock const &orig);

    public:
        ~Warlock();
        Warlock(std::string const &new_name, std::string const &new_title);

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &new_title);

        void introduce() const;
}