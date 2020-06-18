enum class Color {red, blue, green};
enum class Traffic_light {green, yellow, red};

// enum class specifies that Color and Traffic_light are strongly typed. In particular they cannot be used as ints as one might expect
// Omit 'class' if we want to use then as ints

// Defining ++ (increment) operator for enum type
Traffic_light& operator++(Traffic_light& t)
{
    switch(t) {
        case Traffic_light::green:
            return t = Traffic_light::yellow;
        case Traffic_light::yellow:
            return t = Traffic_light::red;
        case Traffic_light::red:
            return t = Traffic_light::green;
    }
}

Color col = Color::red;
Traffic_light light = Traffic_light::red;

Traffic_light next = ++light; // next becomes Traffic_light::green

int main()
{

}