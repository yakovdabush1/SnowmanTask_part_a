  
#include "doctest.h"
#include "snowman.hpp"
#include <string>
#include <algorithm>
using namespace ariel;
using namespace std;





TEST_CASE("good snowman"){

    CHECK(snowman(12134431) == 0);
    CHECK(snowman(11223344) == 0);
    CHECK(snowman(13244231) == 0);
    CHECK(snowman(23414321) == 0);
    CHECK(snowman(24114422) == 0);
}


TEST_CASE("bigger than 8 digits"){

    CHECK_THROWS(snowman(123412341));
    CHECK_THROWS(snowman(343421213));
    CHECK_THROWS(snowman(421332142));
    CHECK_THROWS(snowman(314213412));
    CHECK_THROWS(snowman(123412121));
}

TEST_CASE("lower than 8 digit"){

    CHECK_THROWS(snowman(4));
    CHECK_THROWS(snowman(21));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(4213));
    CHECK_THROWS(snowman(21432));
    CHECK_THROWS(snowman(212412));
    CHECK_THROWS(snowman(2432114));
}
TEST_CASE("include digit that bigger than 4"){

    CHECK_THROWS(snowman(44444451));
    CHECK_THROWS(snowman(51114411));
CHECK_THROWS(snowman(21228111));
    CHECK_THROWS(snowman(26123421));
    CHECK_THROWS(snowman(32194444));
    CHECK_THROWS(snowman(11224416));    
    CHECK_THROWS(snowman(22134833));
}

TEST_CASE("include digit that lower than 1"){

    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(21223011));
CHECK_THROWS(snowman(-51114411));
    CHECK_THROWS(snowman(12031211));
    CHECK_THROWS(snowman(22134830));
}

TEST_CASE("include note that is not digit"){

    CHECK_THROWS(snowman(!1114411));
    CHECK_THROWS(snowman(431-4332));
    CHECK_THROWS(snowman(3/414313));
    CHECK_THROWS(snowman(332241*4));  
    CHECK_THROWS(snowman(21+14221));
    CHECK_THROWS(snowman(1241^411));
}

