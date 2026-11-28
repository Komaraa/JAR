#ifndef ROBOT_HPP
#define ROBOT_HPP
#include <string>
#include <cstdint>

class Robot
{
public:
    Robot( const std::string& name );

    std::string getName() const
    {
        return m_name;
    }

    std::int64_t getBatteryLevel() const
    {
        return 100;
    }

private:
    std::string m_name;
};

#endif // ROBOT_HPP
