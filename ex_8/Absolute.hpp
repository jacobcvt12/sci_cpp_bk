template<class T> T Absolute(T number)
{
    if (number >= (T)(0))
    {
        return number;
    }

    else
    {
        return (T)(-1) * number;
    }
}
