class Player
{
public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

struct Vect2
{
    float x, y;

    void Add(const Vect2 &other)
    {
        x += other.x;
        y += other.y;
    }
};

int main()
{
    Player player;
    player.Move(5, 0);
}
