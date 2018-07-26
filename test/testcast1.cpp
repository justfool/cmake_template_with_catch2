#include <catch2/catch.hpp>

#include "library/library.h"


TEST_CASE( "the answer of life" ) {
    REQUIRE( 42 == the_meaning_of_life() );
}

