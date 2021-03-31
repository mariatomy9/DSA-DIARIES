cmake_minimum_required(VERSION 3.17)
project(DSA_DIARIES)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSA_DIARIES
        Codechef/CodeSprint/STCKSCAM.cpp
        Codechef/DEC_COOK_OFF/ATTENDU.cpp
        Codechef/DEC_LONG_2020/EVENPSUM.cpp
        Codechef/DEC_LONG_2020/POSPREFS.cpp
        Codechef/DEC_LONG_2020/VACCINE1.cpp
        Codechef/IARCSJUD/BOOKLIST.cpp
        Codechef/Practice/main.cpp
        Codechef/BUYING2.cpp
        Codechef/Byteandian.cpp
        Codechef/cleanup.cpp
        Codechef/gasoline.cpp
        Codechef/longlongsum.cpp
        Codechef/MaximumWeightDifference.cpp
        Codechef/primer.cpp
        "DSA/Bit Magic/bitmagic.cpp"
        "DSA/Bit Magic/checkBitSet.cpp"
        "DSA/Bit Magic/countSetBit.cpp"
        "DSA/Bit Magic/powerOf2.cpp"
        DSA/Mathematics/factorial.cpp
        DSA/Mathematics/gcd.cpp
        DSA/Mathematics/palindrome.cpp
        DSA/Mathematics/trailingZerosFactorial.cpp
        Dumb/help.cpp)

add_executable(powerOf2 "DSA/Bit Magic/powerOf2.cpp")