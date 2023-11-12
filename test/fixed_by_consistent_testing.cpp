#define BOOST_TEST_MODULE crypto3_marsalling_fixed_by_consistent_testing_test

#include <boost/test/unit_test.hpp>
#include <nil/marshalling/units.hpp>

BOOST_AUTO_TEST_SUITE(failing_suite)

BOOST_AUTO_TEST_CASE(failing_case) {
    // get_courics() exists not in master
    BOOST_CHECK(nil::marshalling::units::get_courics()==0);
}

BOOST_AUTO_TEST_SUITE_END()
