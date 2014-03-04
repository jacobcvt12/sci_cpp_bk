#ifndef RAINVECTOR
#define RAINVECTOR

#include <cassert>

template<unsigned int N> class RainVector
{
    private:
        double mData[N];

    public:
        double operator[](int index)
        {
            double result;

            assert(mData[index] >= 1.0e-6 && mData[index] <= 1.0 + 1.0e-6);
            if (mData[index] >= 0.0 && mData[index] <= 1.0)
            {
                result = mData[index];
            }

            else if (mData[index] >= -1.0e-6 && mData[index] < 0.0)
            {
                result = 0.0;
            }

            else 
            {
                result = 1.0;
            }

            return result;
        }
};

#endif
