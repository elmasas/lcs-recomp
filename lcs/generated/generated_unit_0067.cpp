#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_menu_pages.hpp"  // [lcs-menu-pages]
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0067[4095] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0,
    0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 35, 36, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45,
    0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 84, 85, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0,
    0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 199, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0,
    208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 277, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 287, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 297, 0, 0, 0, 298, 0, 299, 0, 0,
    0, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0,
    0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327,
    0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343,
    344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348,
    0, 349, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 373,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 378,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0,
    383, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 387, 0, 0, 0, 0, 388,
    0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 428, 0,
    429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 434, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0, 0, 450,
    0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 466, 0,
    467, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 0,
    0, 476, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484,
};
void recomp_unit_0067_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08910000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0067[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08910000;
    case 2u: goto L_08910004;
    case 3u: goto L_08910008;
    case 4u: goto L_0891002C;
    case 5u: goto L_0891004C;
    case 6u: goto L_0891006C;
    case 7u: goto L_08910074;
    case 8u: goto L_08910130;
    case 9u: goto L_0891013C;
    case 10u: goto L_08910148;
    case 11u: goto L_08910158;
    case 12u: goto L_08910160;
    case 13u: goto L_08910168;
    case 14u: goto L_089101B0;
    case 15u: goto L_0891020C;
    case 16u: goto L_08910214;
    case 17u: goto L_0891021C;
    case 18u: goto L_08910254;
    case 19u: goto L_0891025C;
    case 20u: goto L_08910264;
    case 21u: goto L_0891026C;
    case 22u: goto L_08910278;
    case 23u: goto L_0891029C;
    case 24u: goto L_089102B0;
    case 25u: goto L_089102D0;
    case 26u: goto L_089102E8;
    case 27u: goto L_089102F4;
    case 28u: goto L_08910308;
    case 29u: goto L_08910314;
    case 30u: goto L_08910324;
    case 31u: goto L_08910338;
    case 32u: goto L_08910340;
    case 33u: goto L_08910348;
    case 34u: goto L_0891035C;
    case 35u: goto L_08910364;
    case 36u: goto L_08910368;
    case 37u: goto L_0891037C;
    case 38u: goto L_08910390;
    case 39u: goto L_089103AC;
    case 40u: goto L_089103C0;
    case 41u: goto L_089103F4;
    case 42u: goto L_08910470;
    case 43u: goto L_0891047C;
    case 44u: goto L_089104EC;
    case 45u: goto L_089104FC;
    case 46u: goto L_08910504;
    case 47u: goto L_08910514;
    case 48u: goto L_0891051C;
    case 49u: goto L_0891052C;
    case 50u: goto L_08910534;
    case 51u: goto L_08910544;
    case 52u: goto L_08910558;
    case 53u: goto L_08910568;
    case 54u: goto L_0891057C;
    case 55u: goto L_08910590;
    case 56u: goto L_089105A4;
    case 57u: goto L_089105B4;
    case 58u: goto L_089105C8;
    case 59u: goto L_089105DC;
    case 60u: goto L_089105EC;
    case 61u: goto L_08910634;
    case 62u: goto L_08910648;
    case 63u: goto L_08910674;
    case 64u: goto L_08910698;
    case 65u: goto L_089106B4;
    case 66u: goto L_089106D0;
    case 67u: goto L_089106EC;
    case 68u: goto L_089106F0;
    case 69u: goto L_0891074C;
    case 70u: goto L_089107A4;
    case 71u: goto L_089107AC;
    case 72u: goto L_089107B4;
    case 73u: goto L_089107D4;
    case 74u: goto L_089107DC;
    case 75u: goto L_089107F8;
    case 76u: goto L_08910818;
    case 77u: goto L_08910838;
    case 78u: goto L_08910854;
    case 79u: goto L_08910874;
    case 80u: goto L_08910890;
    case 81u: goto L_089108B0;
    case 82u: goto L_089108CC;
    case 83u: goto L_089108EC;
    case 84u: goto L_08910904;
    case 85u: goto L_08910908;
    case 86u: goto L_0891090C;
    case 87u: goto L_08910918;
    case 88u: goto L_08910934;
    case 89u: goto L_0891094C;
    case 90u: goto L_08910960;
    case 91u: goto L_08910978;
    case 92u: goto L_08910994;
    case 93u: goto L_089109E0;
    case 94u: goto L_08910A34;
    case 95u: goto L_08910A3C;
    case 96u: goto L_08910A44;
    case 97u: goto L_08910A58;
    case 98u: goto L_08910A90;
    case 99u: goto L_08910AAC;
    case 100u: goto L_08910ADC;
    case 101u: goto L_08910B10;
    case 102u: goto L_08910B18;
    case 103u: goto L_08910B58;
    case 104u: goto L_08910B78;
    case 105u: goto L_08910BB4;
    case 106u: goto L_08910BE8;
    case 107u: goto L_08910BF0;
    case 108u: goto L_08910C30;
    case 109u: goto L_08910C50;
    case 110u: goto L_08910C8C;
    case 111u: goto L_08910CC0;
    case 112u: goto L_08910CC8;
    case 113u: goto L_08910D08;
    case 114u: goto L_08910D28;
    case 115u: goto L_08910D68;
    case 116u: goto L_08910D9C;
    case 117u: goto L_08910DA4;
    case 118u: goto L_08910DE0;
    case 119u: goto L_08910DE8;
    case 120u: goto L_08910E18;
    case 121u: goto L_08910E28;
    case 122u: goto L_08910E38;
    case 123u: goto L_08910E3C;
    case 124u: goto L_08910E58;
    case 125u: goto L_08910E68;
    case 126u: goto L_08910E8C;
    case 127u: goto L_08910EC8;
    case 128u: goto L_08910ED0;
    case 129u: goto L_08910EE0;
    case 130u: goto L_08910EE8;
    case 131u: goto L_08910EF0;
    case 132u: goto L_08910EF8;
    case 133u: goto L_08910F40;
    case 134u: goto L_08910F94;
    case 135u: goto L_08910F9C;
    case 136u: goto L_08910FA4;
    case 137u: goto L_08910FB4;
    case 138u: goto L_08910FC0;
    case 139u: goto L_08910FCC;
    case 140u: goto L_08910FD8;
    case 141u: goto L_08910FE0;
    case 142u: goto L_08911014;
    case 143u: goto L_0891108C;
    case 144u: goto L_08911094;
    case 145u: goto L_0891109C;
    case 146u: goto L_089110B8;
    case 147u: goto L_08911118;
    case 148u: goto L_08911124;
    case 149u: goto L_08911148;
    case 150u: goto L_08911174;
    case 151u: goto L_089111A8;
    case 152u: goto L_089111CC;
    case 153u: goto L_089111D4;
    case 154u: goto L_089111E0;
    case 155u: goto L_089111F0;
    case 156u: goto L_08911204;
    case 157u: goto L_08911210;
    case 158u: goto L_08911234;
    case 159u: goto L_0891123C;
    case 160u: goto L_08911250;
    case 161u: goto L_08911264;
    case 162u: goto L_08911298;
    case 163u: goto L_089112A8;
    case 164u: goto L_089112B8;
    case 165u: goto L_089112F0;
    case 166u: goto L_08911344;
    case 167u: goto L_08911348;
    case 168u: goto L_089113CC;
    case 169u: goto L_089113F8;
    case 170u: goto L_08911404;
    case 171u: goto L_08911434;
    case 172u: goto L_08911438;
    case 173u: goto L_08911450;
    case 174u: goto L_0891149C;
    case 175u: goto L_089114E4;
    case 176u: goto L_08911538;
    case 177u: goto L_08911540;
    case 178u: goto L_08911548;
    case 179u: goto L_08911558;
    case 180u: goto L_08911564;
    case 181u: goto L_08911570;
    case 182u: goto L_0891157C;
    case 183u: goto L_08911614;
    case 184u: goto L_0891161C;
    case 185u: goto L_08911634;
    case 186u: goto L_08911674;
    case 187u: goto L_08911678;
    case 188u: goto L_089116D8;
    case 189u: goto L_08911710;
    case 190u: goto L_08911718;
    case 191u: goto L_08911740;
    case 192u: goto L_08911788;
    case 193u: goto L_089117DC;
    case 194u: goto L_089117E0;
    case 195u: goto L_08911874;
    case 196u: goto L_0891189C;
    case 197u: goto L_089118B0;
    case 198u: goto L_089118E0;
    case 199u: goto L_089118E4;
    case 200u: goto L_089118FC;
    case 201u: goto L_0891194C;
    case 202u: goto L_08911994;
    case 203u: goto L_08911A14;
    case 204u: goto L_08911A20;
    case 205u: goto L_08911AD8;
    case 206u: goto L_08911AE8;
    case 207u: goto L_08911AF8;
    case 208u: goto L_08911B00;
    case 209u: goto L_08911B08;
    case 210u: goto L_08911D3C;
    case 211u: goto L_08911D50;
    case 212u: goto L_08911D60;
    case 213u: goto L_08911D7C;
    case 214u: goto L_08911D8C;
    case 215u: goto L_08911D9C;
    case 216u: goto L_089120E4;
    case 217u: goto L_0891212C;
    case 218u: goto L_0891219C;
    case 219u: goto L_08912214;
    case 220u: goto L_08912224;
    case 221u: goto L_0891222C;
    case 222u: goto L_08912234;
    case 223u: goto L_08912288;
    case 224u: goto L_0891229C;
    case 225u: goto L_08912318;
    case 226u: goto L_0891232C;
    case 227u: goto L_089123A8;
    case 228u: goto L_089123BC;
    case 229u: goto L_08912434;
    case 230u: goto L_08912448;
    case 231u: goto L_08912634;
    case 232u: goto L_08912684;
    case 233u: goto L_089126B4;
    case 234u: goto L_089126C4;
    case 235u: goto L_089126CC;
    case 236u: goto L_089126D4;
    case 237u: goto L_08912950;
    case 238u: goto L_089129EC;
    case 239u: goto L_089129F8;
    case 240u: goto L_08912A40;
    case 241u: goto L_08912A48;
    case 242u: goto L_08912A58;
    case 243u: goto L_08912A60;
    case 244u: goto L_08912A68;
    case 245u: goto L_08912A9C;
    case 246u: goto L_08912AC4;
    case 247u: goto L_08912AD0;
    case 248u: goto L_08912BB0;
    case 249u: goto L_08912BC8;
    case 250u: goto L_08912BE0;
    case 251u: goto L_08912BF4;
    case 252u: goto L_08912C00;
    case 253u: goto L_08912C54;
    case 254u: goto L_08912C74;
    case 255u: goto L_08912C94;
    case 256u: goto L_08912CC4;
    case 257u: goto L_08912CD0;
    case 258u: goto L_08912CD8;
    case 259u: goto L_08912CE0;
    case 260u: goto L_08912CEC;
    case 261u: goto L_08912D34;
    case 262u: goto L_08912D5C;
    case 263u: goto L_08912D64;
    case 264u: goto L_08912D6C;
    case 265u: goto L_08912D74;
    case 266u: goto L_08912D7C;
    case 267u: goto L_08912DA0;
    case 268u: goto L_08912DAC;
    case 269u: goto L_08912DD8;
    case 270u: goto L_08912DE0;
    case 271u: goto L_08912DF8;
    case 272u: goto L_08912E10;
    case 273u: goto L_08912E24;
    case 274u: goto L_08912E38;
    case 275u: goto L_08912E44;
    case 276u: goto L_08912F84;
    case 277u: goto L_08912F94;
    case 278u: goto L_08912F98;
    case 279u: goto L_08912FB0;
    case 280u: goto L_08912FC0;
    case 281u: goto L_08912FD0;
    case 282u: goto L_08912FE0;
    case 283u: goto L_08913014;
    case 284u: goto L_0891308C;
    case 285u: goto L_089130A0;
    case 286u: goto L_089130A8;
    case 287u: goto L_089130B0;
    case 288u: goto L_089130B4;
    case 289u: goto L_089130FC;
    case 290u: goto L_08913190;
    case 291u: goto L_089131A8;
    case 292u: goto L_089131B0;
    case 293u: goto L_089131B8;
    case 294u: goto L_089131C4;
    case 295u: goto L_089131D0;
    case 296u: goto L_089131D8;
    case 297u: goto L_089131DC;
    case 298u: goto L_089131EC;
    case 299u: goto L_089131F4;
    case 300u: goto L_08913208;
    case 301u: goto L_08913210;
    case 302u: goto L_08913218;
    case 303u: goto L_08913224;
    case 304u: goto L_08913238;
    case 305u: goto L_08913240;
    case 306u: goto L_08913280;
    case 307u: goto L_0891329C;
    case 308u: goto L_089132A4;
    case 309u: goto L_089132B8;
    case 310u: goto L_089132C0;
    case 311u: goto L_089132CC;
    case 312u: goto L_089132D4;
    case 313u: goto L_089132EC;
    case 314u: goto L_089132F8;
    case 315u: goto L_08913304;
    case 316u: goto L_08913310;
    case 317u: goto L_0891331C;
    case 318u: goto L_08913328;
    case 319u: goto L_08913334;
    case 320u: goto L_08913340;
    case 321u: goto L_0891334C;
    case 322u: goto L_08913354;
    case 323u: goto L_0891335C;
    case 324u: goto L_08913364;
    case 325u: goto L_0891336C;
    case 326u: goto L_08913374;
    case 327u: goto L_0891337C;
    case 328u: goto L_08913384;
    case 329u: goto L_08913394;
    case 330u: goto L_089133CC;
    case 331u: goto L_08913408;
    case 332u: goto L_0891341C;
    case 333u: goto L_08913424;
    case 334u: goto L_08913434;
    case 335u: goto L_0891343C;
    case 336u: goto L_08913444;
    case 337u: goto L_0891344C;
    case 338u: goto L_08913454;
    case 339u: goto L_08913458;
    case 340u: goto L_08913468;
    case 341u: goto L_0891349C;
    case 342u: goto L_089134EC;
    case 343u: goto L_089134FC;
    case 344u: goto L_08913500;
    case 345u: goto L_08913510;
    case 346u: goto L_0891353C;
    case 347u: goto L_08913560;
    case 348u: goto L_0891357C;
    case 349u: goto L_08913584;
    case 350u: goto L_08913588;
    case 351u: goto L_0891359C;
    case 352u: goto L_089135B0;
    case 353u: goto L_089135D0;
    case 354u: goto L_089135D8;
    case 355u: goto L_08913604;
    case 356u: goto L_08913610;
    case 357u: goto L_08913624;
    case 358u: goto L_08913630;
    case 359u: goto L_08913660;
    case 360u: goto L_08913668;
    case 361u: goto L_08913674;
    case 362u: goto L_08913684;
    case 363u: goto L_089136CC;
    case 364u: goto L_08913700;
    case 365u: goto L_0891370C;
    case 366u: goto L_08913714;
    case 367u: goto L_0891371C;
    case 368u: goto L_0891373C;
    case 369u: goto L_08913744;
    case 370u: goto L_08913764;
    case 371u: goto L_0891376C;
    case 372u: goto L_08913774;
    case 373u: goto L_0891377C;
    case 374u: goto L_08913780;
    case 375u: goto L_089137A8;
    case 376u: goto L_089137E8;
    case 377u: goto L_089137F8;
    case 378u: goto L_089137FC;
    case 379u: goto L_0891380C;
    case 380u: goto L_08913838;
    case 381u: goto L_0891385C;
    case 382u: goto L_08913878;
    case 383u: goto L_08913880;
    case 384u: goto L_08913884;
    case 385u: goto L_08913898;
    case 386u: goto L_089138E4;
    case 387u: goto L_089138E8;
    case 388u: goto L_089138FC;
    case 389u: goto L_0891390C;
    case 390u: goto L_08913938;
    case 391u: goto L_0891393C;
    case 392u: goto L_08913950;
    case 393u: goto L_08913970;
    case 394u: goto L_0891398C;
    case 395u: goto L_089139BC;
    case 396u: goto L_089139F8;
    case 397u: goto L_08913A14;
    case 398u: goto L_08913A20;
    case 399u: goto L_08913A40;
    case 400u: goto L_08913A48;
    case 401u: goto L_08913A60;
    case 402u: goto L_08913A6C;
    case 403u: goto L_08913A9C;
    case 404u: goto L_08913AAC;
    case 405u: goto L_08913AD8;
    case 406u: goto L_08913AF8;
    case 407u: goto L_08913B04;
    case 408u: goto L_08913B1C;
    case 409u: goto L_08913B24;
    case 410u: goto L_08913B2C;
    case 411u: goto L_08913B34;
    case 412u: goto L_08913B3C;
    case 413u: goto L_08913B44;
    case 414u: goto L_08913B60;
    case 415u: goto L_08913B70;
    case 416u: goto L_08913B9C;
    case 417u: goto L_08913BA8;
    case 418u: goto L_08913BB4;
    case 419u: goto L_08913BC0;
    case 420u: goto L_08913BD0;
    case 421u: goto L_08913BE8;
    case 422u: goto L_08913C30;
    case 423u: goto L_08913C40;
    case 424u: goto L_08913C4C;
    case 425u: goto L_08913C58;
    case 426u: goto L_08913C64;
    case 427u: goto L_08913C74;
    case 428u: goto L_08913C78;
    case 429u: goto L_08913C80;
    case 430u: goto L_08913C88;
    case 431u: goto L_08913C9C;
    case 432u: goto L_08913CB0;
    case 433u: goto L_08913CB8;
    case 434u: goto L_08913CC0;
    case 435u: goto L_08913CC4;
    case 436u: goto L_08913CE8;
    case 437u: goto L_08913D14;
    case 438u: goto L_08913D20;
    case 439u: goto L_08913D2C;
    case 440u: goto L_08913D38;
    case 441u: goto L_08913D48;
    case 442u: goto L_08913D64;
    case 443u: goto L_08913DA8;
    case 444u: goto L_08913DB4;
    case 445u: goto L_08913DC8;
    case 446u: goto L_08913DD4;
    case 447u: goto L_08913DDC;
    case 448u: goto L_08913DE4;
    case 449u: goto L_08913DEC;
    case 450u: goto L_08913DFC;
    case 451u: goto L_08913E04;
    case 452u: goto L_08913E14;
    case 453u: goto L_08913E1C;
    case 454u: goto L_08913E2C;
    case 455u: goto L_08913E34;
    case 456u: goto L_08913E44;
    case 457u: goto L_08913E4C;
    case 458u: goto L_08913E5C;
    case 459u: goto L_08913E64;
    case 460u: goto L_08913E74;
    case 461u: goto L_08913EB8;
    case 462u: goto L_08913EC0;
    case 463u: goto L_08913EC8;
    case 464u: goto L_08913EDC;
    case 465u: goto L_08913EE8;
    case 466u: goto L_08913EF8;
    case 467u: goto L_08913F00;
    case 468u: goto L_08913F1C;
    case 469u: goto L_08913F24;
    case 470u: goto L_08913F34;
    case 471u: goto L_08913F3C;
    case 472u: goto L_08913F50;
    case 473u: goto L_08913F58;
    case 474u: goto L_08913F68;
    case 475u: goto L_08913F70;
    case 476u: goto L_08913F84;
    case 477u: goto L_08913F8C;
    case 478u: goto L_08913F9C;
    case 479u: goto L_08913FAC;
    case 480u: goto L_08913FD0;
    case 481u: goto L_08913FD8;
    case 482u: goto L_08913FE4;
    case 483u: goto L_08913FEC;
    case 484u: goto L_08913FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08910000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08910004;
L_08910004:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08910008;
L_08910008:
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0891002Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0891002Cu) goto L_0891002C;
    return;
L_0891002C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24156)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0891004Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 387u, 0x08A7EEF8u>(ctx, &aot_mem) && ctx.pc == 0x0891004Cu) goto L_0891004C;
    return;
L_0891004C:
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910130;
      }
      goto L_0891006C;
    }
L_0891006C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910130;
      }
      goto L_08910074;
    }
L_08910074:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24116)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (18944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[8] = (19200u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24156)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] >> 8u);
    ctx.gpr[9] = (15u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5168));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[10] = (4096u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[8] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[8] = (2560u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08910130;
L_08910130:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0891013Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0891013Cu) goto L_0891013C;
    return;
L_0891013C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08910148u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08910148u) goto L_08910148;
    return;
L_08910148:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7082)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910160;
      }
      goto L_08910158;
    }
L_08910158:
    ctx.gpr[31] = (0x08910160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 340u, 0x0890E5ACu>(ctx, &aot_mem) && ctx.pc == 0x08910160u) goto L_08910160;
    return;
L_08910160:
    ctx.gpr[31] = (0x08910168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x08910168u) goto L_08910168;
    return;
L_08910168:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089101B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0891020Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 283u, 0x08AD1230u>(ctx, &aot_mem) && ctx.pc == 0x0891020Cu) goto L_0891020C;
    return;
L_0891020C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891025C;
      }
      goto L_08910214;
    }
L_08910214:
    ctx.gpr[31] = (0x0891021Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891021Cu) goto L_0891021C;
    return;
L_0891021C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17664u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15360u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08910264;
      }
      goto L_08910254;
    }
L_08910254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891029C;
      }
      goto L_0891025C;
    }
L_0891025C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EF8;
      }
      goto L_08910264;
    }
L_08910264:
    ctx.gpr[31] = (0x0891026Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891026Cu) goto L_0891026C;
    return;
L_0891026C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0891029C;
      }
      goto L_08910278;
    }
L_08910278:
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089102B0;
      }
      goto L_0891029C;
    }
L_0891029C:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089102B0;
L_089102B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910368;
      }
      goto L_089102D0;
    }
L_089102D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_089102F4;
    }
    goto L_089102E8;
L_089102E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089102F4;
      }
      goto L_089102F4;
    }
L_089102F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08910314;
    }
    goto L_08910308;
L_08910308:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08910314;
      }
      goto L_08910314;
    }
L_08910314:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910348;
      }
      goto L_08910324;
    }
L_08910324:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910340;
      }
      goto L_08910338;
    }
L_08910338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08910368;
      }
      goto L_08910340;
    }
L_08910340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08910368;
      }
      goto L_08910348;
    }
L_08910348:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910364;
      }
      goto L_0891035C;
    }
L_0891035C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08910368;
      }
      goto L_08910364;
    }
L_08910364:
    ctx.gpr[18] = (0u | 1u);
    goto L_08910368;
L_08910368:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910390;
      }
      goto L_0891037C;
    }
L_0891037C:
    ctx.gpr[4] = (17558u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089103F4;
      }
      goto L_08910390;
    }
L_08910390:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089103C0;
      }
      goto L_089103AC;
    }
L_089103AC:
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089103F4;
      }
      goto L_089103C0;
    }
L_089103C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17558u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[15];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089103F4;
L_089103F4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11212)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11216)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8016), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8012), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7082), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
    ctx.gpr[31] = (0x08910470u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08910470u) goto L_08910470;
    return;
L_08910470:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0891047Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0891047Cu) goto L_0891047C;
    return;
L_0891047C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[22];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[24];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089104FC;
      }
      goto L_089104EC;
    }
L_089104EC:
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089104FC;
L_089104FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910514;
      }
      goto L_08910504;
    }
L_08910504:
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08910514;
L_08910514:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891052C;
      }
      goto L_0891051C;
    }
L_0891051C:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891052C;
L_0891052C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910544;
      }
      goto L_08910534;
    }
L_08910534:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08910544;
L_08910544:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
        goto L_08910558;
    }
    goto L_08910558;
L_08910558:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 31 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
        goto L_08910568;
    }
    goto L_08910568;
L_08910568:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_0891057C;
    }
    goto L_0891057C;
L_0891057C:
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 31 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[6]);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[7]);
        goto L_08910590;
    }
    goto L_08910590;
L_08910590:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_089105A4;
    }
    goto L_089105A4;
L_089105A4:
    ctx.gpr[7] = (0u | 31u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 31 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_089105B4;
    }
    goto L_089105B4;
L_089105B4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
        goto L_089105C8;
    }
    goto L_089105C8;
L_089105C8:
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
        goto L_089105DC;
    }
    goto L_089105DC;
L_089105DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08910EC8;
      }
      goto L_089105EC;
    }
L_089105EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[7]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (2269u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-720));
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[30];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    goto L_08910634;
L_08910634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08910E8C;
      }
      goto L_08910648;
    }
L_08910648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    goto L_08910674;
L_08910674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_089106F0;
    }
    goto L_08910698;
L_08910698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_089106F0;
    }
    goto L_089106B4;
L_089106B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_089106F0;
    }
    goto L_089106D0;
L_089106D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(77)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
        goto L_08910E68;
    }
    goto L_089106EC;
L_089106EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_089106F0;
L_089106F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[18];
    ctx.fpr[19] = ctx.fpr[16] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[15] - ctx.fpr[13];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910E58;
      }
      goto L_0891074C;
    }
L_0891074C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (17205u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_089107AC;
      }
      goto L_089107A4;
    }
L_089107A4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089107AC;
L_089107AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910E58;
      }
      goto L_089107B4;
    }
L_089107B4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (18548u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 9216u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089107DC;
      }
      goto L_089107D4;
    }
L_089107D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08910908;
      }
      goto L_089107DC;
    }
L_089107DC:
    ctx.gpr[7] = (18676u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 9216u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_0891090C;
    }
    goto L_089107F8;
L_089107F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910838;
      }
      goto L_08910818;
    }
L_08910818:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08910838;
L_08910838:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910874;
      }
      goto L_08910854;
    }
L_08910854:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08910874;
L_08910874:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089108B0;
      }
      goto L_08910890;
    }
L_08910890:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089108B0;
L_089108B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(77)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089108EC;
      }
      goto L_089108CC;
    }
L_089108CC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(77)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089108EC;
L_089108EC:
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910908;
      }
      goto L_08910904;
    }
L_08910904:
    ctx.gpr[4] = (0u | 1u);
    goto L_08910908;
L_08910908:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0891090C;
L_0891090C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910E58;
      }
      goto L_08910918;
    }
L_08910918:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08910E58;
      }
      goto L_08910934;
    }
L_08910934:
    ctx.gpr[21] = (ctx.gpr[4] << 6u);
    ctx.gpr[17] = (ctx.gpr[4] << 8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0891094C;
L_0891094C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_08910E3C;
    }
    goto L_08910960;
L_08910960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[4]);
    goto L_08910978;
L_08910978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910E28;
      }
      goto L_08910994;
    }
L_08910994:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[24];
    ctx.fpr[24] = ctx.fpr[20] + ctx.fpr[24];
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[26];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[24];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910E28;
      }
      goto L_089109E0;
    }
L_089109E0:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (17077u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08910A3C;
      }
      goto L_08910A34;
    }
L_08910A34:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08910A3C;
L_08910A3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910E18;
      }
      goto L_08910A44;
    }
L_08910A44:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910A90;
      }
      goto L_08910A58;
    }
L_08910A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910DE8;
      }
      goto L_08910A90;
    }
L_08910A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910B58;
      }
      goto L_08910AAC;
    }
L_08910AAC:
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[30];
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910B18;
      }
      goto L_08910ADC;
    }
L_08910ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4108)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08910B10u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08912950;
L_08910B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910B58;
      }
      goto L_08910B18;
    }
L_08910B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4108)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08910B58u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0891212C;
L_08910B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4236)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08910C30;
      }
      goto L_08910B78;
    }
L_08910B78:
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[20] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910BF0;
      }
      goto L_08910BB4;
    }
L_08910BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4236)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08910BE8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08912950;
L_08910BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C30;
      }
      goto L_08910BF0;
    }
L_08910BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4236)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08910C30u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0891212C;
L_08910C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4109)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08910D08;
      }
      goto L_08910C50;
    }
L_08910C50:
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[20] + ctx.fpr[30];
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08910CC8;
      }
      goto L_08910C8C;
    }
L_08910C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4109)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08910CC0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08912950;
L_08910CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D08;
      }
      goto L_08910CC8;
    }
L_08910CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4109)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08910D08u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0891212C;
L_08910D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4237)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08910E18;
      }
      goto L_08910D28;
    }
L_08910D28:
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[30];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[20] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08910DA4;
    }
    goto L_08910D68;
L_08910D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4237)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08910D9Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08912950;
L_08910D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910E18;
      }
      goto L_08910DA4;
    }
L_08910DA4:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4237)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08910DE0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0891212C;
L_08910DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910E18;
      }
      goto L_08910DE8;
    }
L_08910DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08910E18u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08912634;
L_08910E18:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08910E28;
L_08910E28:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08910978;
      }
      goto L_08910E38;
    }
L_08910E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08910E3C;
L_08910E3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_0891094C;
      }
      goto L_08910E58;
    }
L_08910E58:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_08910E68;
L_08910E68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08910674;
      }
      goto L_08910E8C;
    }
L_08910E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08910634;
      }
      goto L_08910EC8;
    }
L_08910EC8:
    ctx.gpr[31] = (0x08910ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 332u, 0x0890E414u>(ctx, &aot_mem) && ctx.pc == 0x08910ED0u) goto L_08910ED0;
    return;
L_08910ED0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910EF0;
      }
      goto L_08910EE0;
    }
L_08910EE0:
    ctx.gpr[31] = (0x08910EE8u);
    // nop
    goto L_08910F40;
L_08910EE8:
    ctx.gpr[31] = (0x08910EF0u);
    // nop
    goto L_089114E4;
L_08910EF0:
    ctx.gpr[31] = (0x08910EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x08910EF8u) goto L_08910EF8;
    return;
L_08910EF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24292)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08910FA4;
      }
      goto L_08910F94;
    }
L_08910F94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08910FA4;
      }
      goto L_08910F9C;
    }
L_08910F9C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891108C;
      }
      goto L_08910FA4;
    }
L_08910FA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24100)));
    ctx.gpr[31] = (0x08910FB4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08910FB4u) goto L_08910FB4;
    return;
L_08910FB4:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08910FC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08910FC0u) goto L_08910FC0;
    return;
L_08910FC0:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08910FCCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08910FCCu) goto L_08910FCC;
    return;
L_08910FCC:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08910FD8u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08910FD8u) goto L_08910FD8;
    return;
L_08910FD8:
    ctx.gpr[31] = (0x08910FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 389u, 0x08A4DD08u>(ctx, &aot_mem) && ctx.pc == 0x08910FE0u) goto L_08910FE0;
    return;
L_08910FE0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9984)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08911014u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(264), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08911014u) goto L_08911014;
    return;
L_08911014:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10832));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08911094;
      }
      goto L_0891108C;
    }
L_0891108C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891149C;
      }
      goto L_08911094;
    }
L_08911094:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
        goto L_08911450;
    }
    goto L_0891109C;
L_0891109C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(264))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
        goto L_08911450;
    }
    goto L_089110B8;
L_089110B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (16166u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08911124;
      }
      goto L_08911118;
    }
L_08911118:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08911124;
L_08911124:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1030)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(264))))));
        goto L_08911438;
    }
    goto L_08911148;
L_08911148:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (15938u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36700u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08911174u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08911174u) goto L_08911174;
    return;
L_08911174:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[30] << 2u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1288)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24332)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24328)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9984)));
    ctx.gpr[31] = (0x089111A8u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089111A8u) goto L_089111A8;
    return;
L_089111A8:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089111CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x089111CCu) goto L_089111CC;
    return;
L_089111CC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_089111E0;
    }
    goto L_089111D4;
L_089111D4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_089111E0;
L_089111E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089111F0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x089111F0u) goto L_089111F0;
    return;
L_089111F0:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08911204u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08911204u) goto L_08911204;
    return;
L_08911204:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08911210u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08911210u) goto L_08911210;
    return;
L_08911210:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9988)));
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_0891123C;
      }
      goto L_08911234;
    }
L_08911234:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0891123C;
L_0891123C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1030)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08911264;
      }
      goto L_08911250;
    }
L_08911250:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
      if (branch_taken) {
          goto L_089112B8;
      }
      goto L_08911264;
    }
L_08911264:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1288)));
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[20];
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08911298;
    }
    goto L_08911298;
L_08911298:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089112A8;
    }
    goto L_089112A8;
L_089112A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1032)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    goto L_089112B8;
L_089112B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1028)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1036)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08911348;
      }
      goto L_089112F0;
    }
L_089112F0:
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.fpr[26] = ctx.fpr[24] / ctx.fpr[15];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08911348;
      }
      goto L_08911344;
    }
L_08911344:
    ctx.gpr[6] = (0u | 0u);
    goto L_08911348;
L_08911348:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1028)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1028)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1032)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1036)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1032)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1036)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911404;
      }
      goto L_089113CC;
    }
L_089113CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089113F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08911994;
L_089113F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08911404;
L_08911404:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[4] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1030)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911148;
      }
      goto L_08911434;
    }
L_08911434:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(264))))));
    goto L_08911438;
L_08911438:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(264), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08911094;
      }
      goto L_08911450;
    }
L_08911450:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0891149Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 332u, 0x0890E414u>(ctx, &aot_mem) && ctx.pc == 0x0891149Cu) goto L_0891149C;
    return;
L_0891149C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089114E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24292)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08911548;
      }
      goto L_08911538;
    }
L_08911538:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08911548;
      }
      goto L_08911540;
    }
L_08911540:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911614;
      }
      goto L_08911548;
    }
L_08911548:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24100)));
    ctx.gpr[31] = (0x08911558u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08911558u) goto L_08911558;
    return;
L_08911558:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08911564u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08911564u) goto L_08911564;
    return;
L_08911564:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08911570u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08911570u) goto L_08911570;
    return;
L_08911570:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0891157Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0891157Cu) goto L_0891157C;
    return;
L_0891157C:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[20] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(220), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17408u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-27356)));
      if (branch_taken) {
          goto L_0891161C;
      }
      goto L_08911614;
    }
L_08911614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891194C;
      }
      goto L_0891161C;
    }
L_0891161C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(220))))));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(220))))));
        goto L_089118E4;
    }
    goto L_08911634;
L_08911634:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[19] = (ctx.gpr[4] << 8u);
      if (branch_taken) {
          goto L_089118E0;
      }
      goto L_08911674;
    }
L_08911674:
    ctx.gpr[18] = (ctx.gpr[4] << 9u);
    goto L_08911678;
L_08911678:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (16280u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16908u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[8] = (ctx.gpr[16] << 2u);
    ctx.gpr[9] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1060)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[16] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_089116D8;
    }
    goto L_089116D8;
L_089116D8:
    ctx.gpr[8] = (14138u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 27100u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08911718;
      }
      goto L_08911710;
    }
L_08911710:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08911718;
L_08911718:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[14] = ctx.fpr[30] / ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08911740;
    }
    goto L_08911740;
L_08911740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.gpr[8] = (16656u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089117E0;
      }
      goto L_08911788;
    }
L_08911788:
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.fpr[24] = ctx.fpr[22] / ctx.fpr[15];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (16720u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089117E0;
      }
      goto L_089117DC;
    }
L_089117DC:
    ctx.gpr[4] = (0u | 0u);
    goto L_089117E0;
L_089117E0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[15];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[15];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089118B0;
      }
      goto L_08911874;
    }
L_08911874:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891189Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_08911994;
L_0891189C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_089118B0;
L_089118B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911678;
      }
      goto L_089118E0;
    }
L_089118E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(220))))));
    goto L_089118E4;
L_089118E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(220), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891161C;
      }
      goto L_089118FC;
    }
L_089118FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0891194Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 332u, 0x0890E414u>(ctx, &aot_mem) && ctx.pc == 0x0891194Cu) goto L_0891194C;
    return;
L_0891194C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[8] = (ctx.gpr[8] & 4095u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08911A20;
      }
      goto L_08911A14;
    }
L_08911A14:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_08911A20;
L_08911A20:
    ctx.gpr[4] = (15049u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17664u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[30] = (2232u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(20144));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[5] = (15616u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    goto L_08911AD8;
L_08911AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1018 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08911AF8;
      }
      goto L_08911AE8;
    }
L_08911AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 508 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
        goto L_08911B08;
    }
    goto L_08911AF8;
L_08911AF8:
    ctx.gpr[31] = (0x08911B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 332u, 0x0890E414u>(ctx, &aot_mem) && ctx.pc == 0x08911B00u) goto L_08911B00;
    return;
L_08911B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_08911B08;
L_08911B08:
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[16] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[23] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[23] = ctx.fpr[23] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[2];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[1];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[2] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2227u << 16u);
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.fpr[27] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24120)));
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[27];
    ctx.gpr[4] = (2227u << 16u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[25] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24124)));
    ctx.fpr[10] = ctx.fpr[10] + ctx.fpr[25];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[9] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[9] + ctx.fpr[27];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[8] + ctx.fpr[25];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[27];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[25];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[27] = ctx.fpr[14] + ctx.fpr[27];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[25] = ctx.fpr[13] + ctx.fpr[25];
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[5]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[7]));
        goto L_08911D3C;
    }
    goto L_08911D3C;
L_08911D3C:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[9]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[9]));
        goto L_08911D50;
    }
    goto L_08911D50;
L_08911D50:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[11]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[11]));
        goto L_08911D60;
    }
    goto L_08911D60;
L_08911D60:
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[1]));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[1])));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    ctx.set_fpu_condition((ctx.fpr[6] < ctx.fpr[3]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[6]));
        goto L_08911D7C;
    }
    goto L_08911D7C;
L_08911D7C:
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[8]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[8]));
        goto L_08911D8C;
    }
    goto L_08911D8C;
L_08911D8C:
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[10]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[10]));
        goto L_08911D9C;
    }
    goto L_08911D9C;
L_08911D9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[3]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[11] - ctx.fpr[1];
    ctx.fpr[14] = ctx.fpr[10] - ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[9] - ctx.fpr[1];
    ctx.fpr[16] = ctx.fpr[8] - ctx.fpr[12];
    ctx.fpr[17] = ctx.fpr[7] - ctx.fpr[1];
    ctx.fpr[18] = ctx.fpr[6] - ctx.fpr[12];
    ctx.fpr[19] = ctx.fpr[27] - ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[25] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[23] + ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[21] + ctx.fpr[24];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[14]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[4] + ctx.fpr[12];
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7080)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[23] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[23] + ctx.fpr[24];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[24];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[15]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[4] + ctx.fpr[13];
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7080)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[26];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[23] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[23] + ctx.fpr[24];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[24];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[15]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[4] + ctx.fpr[13];
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7080)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[26];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[23] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[23] + ctx.fpr[24];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[24];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[15]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[4] + ctx.fpr[13];
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7080)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[26];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8012), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-8016), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08911AD8;
      }
      goto L_089120E4;
    }
L_089120E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891212C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
    ctx.gpr[31] = (0x0891219Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0891219Cu) goto L_0891219C;
    return;
L_0891219C:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1018 ? 1u : 0u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(20144));
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[28] = ctx.fpr[30] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[23] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08912224;
      }
      goto L_08912214;
    }
L_08912214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 508 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08912234;
      }
      goto L_08912224;
    }
L_08912224:
    ctx.gpr[31] = (0x0891222Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 332u, 0x0890E414u>(ctx, &aot_mem) && ctx.pc == 0x0891222Cu) goto L_0891222C;
    return;
L_0891222C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_08912234;
L_08912234:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24280)));
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[9]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24284)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24276)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08912288;
    }
    goto L_08912288;
L_08912288:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0891229C;
    }
    goto L_0891229C;
L_0891229C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[15];
    ctx.fpr[22] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24284)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24276)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08912318;
    }
    goto L_08912318;
L_08912318:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0891232C;
    }
    goto L_0891232C;
L_0891232C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[15];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24284)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24276)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_089123A8;
    }
    goto L_089123A8;
L_089123A8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089123BC;
    }
    goto L_089123BC;
L_089123BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24284)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24276)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08912434;
    }
    goto L_08912434;
L_08912434:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08912448;
    }
    goto L_08912448;
L_08912448:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[9] << 24u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 24u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29008));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-8012), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-8016), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
    ctx.gpr[31] = (0x08912684u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08912684u) goto L_08912684;
    return;
L_08912684:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1018 ? 1u : 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20144));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[5] = (17024u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[28];
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[28] = ctx.fpr[20] + ctx.fpr[28];
      if (branch_taken) {
          goto L_089126C4;
      }
      goto L_089126B4;
    }
L_089126B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 508 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089126D4;
      }
      goto L_089126C4;
    }
L_089126C4:
    ctx.gpr[31] = (0x089126CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 332u, 0x0890E414u>(ctx, &aot_mem) && ctx.pc == 0x089126CCu) goto L_089126CC;
    return;
L_089126CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_089126D4;
L_089126D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29008));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-8012), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24296), ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] & 4095u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[22];
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[22];
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089129F8;
      }
      goto L_089129EC;
    }
L_089129EC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089129F8;
L_089129F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (15049u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08912A40u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 467u, 0x08AB29B0u>(ctx, &aot_mem) && ctx.pc == 0x08912A40u) goto L_08912A40;
    return;
L_08912A40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912A60;
      }
      goto L_08912A48;
    }
L_08912A48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7082)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08912A68;
    }
    goto L_08912A58;
L_08912A58:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_08912F98;
      }
      goto L_08912A60;
    }
L_08912A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089130B4;
      }
      goto L_08912A68;
    }
L_08912A68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7082), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20492)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08912A9Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 526u, 0x08AD670Cu>(ctx, &aot_mem) && ctx.pc == 0x08912A9Cu) goto L_08912A9C;
    return;
L_08912A9C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28536)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18844)));
    ctx.gpr[31] = (0x08912AC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x088735E0u>(ctx, &aot_mem) && ctx.pc == 0x08912AC4u) goto L_08912AC4;
    return;
L_08912AC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08912AD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08912AD0u) goto L_08912AD0;
    return;
L_08912AD0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24244)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24228)));
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24248)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24232)));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24208)));
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24204)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[24] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[15] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16073u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[31] = (0x08912BB0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08912BB0u) goto L_08912BB0;
    return;
L_08912BB0:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24220)));
    ctx.gpr[31] = (0x08912BC8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08912BC8u) goto L_08912BC8;
    return;
L_08912BC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24336)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08912BE0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08912BE0u) goto L_08912BE0;
    return;
L_08912BE0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08912BF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08912BF4u) goto L_08912BF4;
    return;
L_08912BF4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08912C00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08912C00u) goto L_08912C00;
    return;
L_08912C00:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24224)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 16u);
    ctx.gpr[31] = (0x08912C54u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08912C54u) goto L_08912C54;
    return;
L_08912C54:
    ctx.gpr[4] = (17280u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08912C74;
L_08912C74:
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 16 ? 1u : 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08912C94;
L_08912C94:
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08912D5C;
      }
      goto L_08912CC4;
    }
L_08912CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912D5C;
      }
      goto L_08912CD0;
    }
L_08912CD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08912D5C;
      }
      goto L_08912CD8;
    }
L_08912CD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912D5C;
      }
      goto L_08912CE0;
    }
L_08912CE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08912CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08912CECu) goto L_08912CEC;
    return;
L_08912CEC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[31] = (0x08912D34u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08912D34u) goto L_08912D34;
    return;
L_08912D34:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[26];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24208)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[24] + ctx.fpr[22];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    goto L_08912D5C;
L_08912D5C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[30];
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08912D6C;
      }
      goto L_08912D64;
    }
L_08912D64:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08912D74;
      }
      goto L_08912D6C;
    }
L_08912D6C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08912D74;
L_08912D74:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[30];
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08912DAC;
      }
      goto L_08912D7C;
    }
L_08912D7C:
    ctx.gpr[4] = (16073u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = ctx.fpr[28] + ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[31] = (0x08912DA0u);
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08912DA0u) goto L_08912DA0;
    return;
L_08912DA0:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08912DE0;
      }
      goto L_08912DAC;
    }
L_08912DAC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16073u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.gpr[31] = (0x08912DD8u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08912DD8u) goto L_08912DD8;
    return;
L_08912DD8:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08912DE0;
L_08912DE0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24216)));
    ctx.gpr[31] = (0x08912DF8u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08912DF8u) goto L_08912DF8;
    return;
L_08912DF8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24336)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08912E10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08912E10u) goto L_08912E10;
    return;
L_08912E10:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08912E24u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08912E24u) goto L_08912E24;
    return;
L_08912E24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08912E38u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08912E38u) goto L_08912E38;
    return;
L_08912E38:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08912E44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08912E44u) goto L_08912E44;
    return;
L_08912E44:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912C94;
      }
      goto L_08912F84;
    }
L_08912F84:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912C74;
      }
      goto L_08912F94;
    }
L_08912F94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    goto L_08912F98;
L_08912F98:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089130B4;
      }
      goto L_08912FB0;
    }
L_08912FB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24292)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089130B4;
      }
      goto L_08912FC0;
    }
L_08912FC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24292)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089130B4;
      }
      goto L_08912FD0;
    }
L_08912FD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24292)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089130B4;
      }
      goto L_08912FE0;
    }
L_08912FE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20492)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08913014u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 151u, 0x08A5D2B0u>(ctx, &aot_mem) && ctx.pc == 0x08913014u) goto L_08913014;
    return;
L_08913014:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24112)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24116)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (18944u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (19200u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-30332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20492)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24288)));
        goto L_089130A8;
    }
    goto L_0891308C;
L_0891308C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20492)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089130A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089130A0u) goto L_089130A0;
    return;
L_089130A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089130B0;
      }
      goto L_089130A8;
    }
L_089130A8:
    ctx.gpr[31] = (0x089130B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20492)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089130B0u) goto L_089130B0;
    return;
L_089130B0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-30332), static_cast<std::uint8_t>(0u));
    goto L_089130B4;
L_089130B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089130FC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24052)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24056), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24048)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24060), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24076)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913190:
    ctx.gpr[2] = (2231u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32368));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089131A8;
L_089131A8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_089131EC;
      }
      goto L_089131B0;
    }
L_089131B0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089131EC;
      }
      goto L_089131B8;
    }
L_089131B8:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089131EC;
      }
      goto L_089131C4;
    }
L_089131C4:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089131D8;
      }
      goto L_089131D0;
    }
L_089131D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089131DC;
      }
      goto L_089131D8;
    }
L_089131D8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_089131DC;
L_089131DC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089131A8;
      }
      goto L_089131EC;
    }
L_089131EC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089131F4:
    ctx.gpr[2] = (2231u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32112));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08913208;
L_08913208:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08913238;
      }
      goto L_08913210;
    }
L_08913210:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913238;
      }
      goto L_08913218;
    }
L_08913218:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913238;
      }
      goto L_08913224;
    }
L_08913224:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08913208;
      }
      goto L_08913238;
    }
L_08913238:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08913394;
      }
      goto L_08913280;
    }
L_08913280:
    ctx.gpr[30] = (0u | 8220u);
    ctx.gpr[23] = (0u | 8221u);
    ctx.gpr[22] = (0u | 732u);
    ctx.gpr[21] = (0u | 8482u);
    ctx.gpr[20] = (0u | 8250u);
    ctx.gpr[19] = (0u | 339u);
    ctx.gpr[18] = (0u | 376u);
    goto L_0891329C;
L_0891329C:
    ctx.gpr[31] = (0x089132A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 101u, 0x088B46C4u>(ctx, &aot_mem) && ctx.pc == 0x089132A4u) goto L_089132A4;
    return;
L_089132A4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 160 ? 1u : 0u);
      if (branch_taken) {
          goto L_089132CC;
      }
      goto L_089132B8;
    }
L_089132B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_089132C0;
    }
L_089132C0:
    ctx.gpr[4] = (0u | 63u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_089132CC;
    }
L_089132CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_089132D4;
    }
L_089132D4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(17320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089132EC:
    ctx.gpr[4] = (0u | 8364u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_089132F8;
    }
L_089132F8:
    ctx.gpr[4] = (0u | 8218u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913304;
    }
L_08913304:
    ctx.gpr[4] = (0u | 8222u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913310;
    }
L_08913310:
    ctx.gpr[4] = (0u | 710u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_0891331C;
    }
L_0891331C:
    ctx.gpr[4] = (0u | 8249u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913328;
    }
L_08913328:
    ctx.gpr[4] = (0u | 338u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913334;
    }
L_08913334:
    ctx.gpr[4] = (0u | 8216u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913340;
    }
L_08913340:
    ctx.gpr[4] = (0u | 8217u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_0891334C;
    }
L_0891334C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913354;
    }
L_08913354:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_0891335C;
    }
L_0891335C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913364;
    }
L_08913364:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_0891336C;
    }
L_0891336C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913374;
    }
L_08913374:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_0891337C;
    }
L_0891337C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08913384;
      }
      goto L_08913384;
    }
L_08913384:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891329C;
      }
      goto L_08913394;
    }
L_08913394:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089133CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08913468;
      }
      goto L_08913408;
    }
L_08913408:
    ctx.gpr[19] = (0u | 223u);
    ctx.gpr[20] = (0u | 126u);
    ctx.gpr[21] = (0u | 232u);
    ctx.gpr[22] = (0u | 94u);
    ctx.gpr[23] = (0u | 233u);
    goto L_0891341C;
L_0891341C:
    ctx.gpr[31] = (0x08913424u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 60u, 0x088B44F0u>(ctx, &aot_mem) && ctx.pc == 0x08913424u) goto L_08913424;
    return;
L_08913424:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891343C;
      }
      goto L_08913434;
    }
L_08913434:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08913458;
      }
      goto L_0891343C;
    }
L_0891343C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0891344C;
      }
      goto L_08913444;
    }
L_08913444:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08913458;
      }
      goto L_0891344C;
    }
L_0891344C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08913458;
      }
      goto L_08913454;
    }
L_08913454:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[23]));
    goto L_08913458;
L_08913458:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891341C;
      }
      goto L_08913468;
    }
L_08913468:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891349C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 12u);
    { const std::uint32_t dividend = ctx.gpr[18]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089134ECu);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x089134ECu) goto L_089134EC;
    return;
L_089134EC:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0891353C;
      }
      goto L_089134FC;
    }
L_089134FC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08913500;
L_08913500:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08913510u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x08913510u) goto L_08913510;
    return;
L_08913510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913500;
      }
      goto L_0891353C;
    }
L_0891353C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913588;
      }
      goto L_0891357C;
    }
L_0891357C:
    ctx.gpr[31] = (0x08913584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08913584u) goto L_08913584;
    return;
L_08913584:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08913588;
L_08913588:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891359C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089135D0;
      }
      goto L_089135B0;
    }
L_089135B0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089135B0;
      }
      goto L_089135D0;
    }
L_089135D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089135D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08913604u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08913684;
L_08913604:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913668;
      }
      goto L_08913610;
    }
L_08913610:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08913624u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17104));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08913624u) goto L_08913624;
    return;
L_08913624:
    ctx.gpr[2] = (2275u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10848));
    goto L_08913630;
L_08913630:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913630;
      }
      goto L_08913660;
    }
L_08913660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913674;
      }
      goto L_08913668;
    }
L_08913668:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08913674;
L_08913674:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[7] << 16u);
    ctx.gpr[21] = (ctx.gpr[8] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08913774;
      }
      goto L_089136CC;
    }
L_089136CC:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08913700u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x08913700u) goto L_08913700;
    return;
L_08913700:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891376C;
      }
      goto L_0891370C;
    }
L_0891370C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08913744;
      }
      goto L_08913714;
    }
L_08913714:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891377C;
      }
      goto L_0891371C;
    }
L_0891371C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891373Cu);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    goto L_08913684;
L_0891373C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913780;
      }
      goto L_08913744;
    }
L_08913744:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08913764u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    goto L_08913684;
L_08913764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913780;
      }
      goto L_0891376C;
    }
L_0891376C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08913780;
      }
      goto L_08913774;
    }
L_08913774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08913780;
      }
      goto L_0891377C;
    }
L_0891377C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08913780;
L_08913780:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089137A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] >> 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089137E8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x089137E8u) goto L_089137E8;
    return;
L_089137E8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08913838;
      }
      goto L_089137F8;
    }
L_089137F8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089137FC;
L_089137FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891380Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x0891380Cu) goto L_0891380C;
    return;
L_0891380C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089137FC;
      }
      goto L_08913838;
    }
L_08913838:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891385C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913884;
      }
      goto L_08913878;
    }
L_08913878:
    ctx.gpr[31] = (0x08913880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08913880u) goto L_08913880;
    return;
L_08913880:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08913884;
L_08913884:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (0u | 12u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[23] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0891398C;
      }
      goto L_089138E4;
    }
L_089138E4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_089138E8;
L_089138E8:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[19]);
    goto L_089138FC;
L_089138FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891390Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x0891390Cu) goto L_0891390C;
    return;
L_0891390C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089138FC;
      }
      goto L_08913938;
    }
L_08913938:
    ctx.gpr[21] = (0u | 0u);
    goto L_0891393C;
L_0891393C:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913950u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x08913950u) goto L_08913950;
    return;
L_08913950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891393C;
      }
      goto L_08913970;
    }
L_08913970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089138E8;
      }
      goto L_0891398C;
    }
L_0891398C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2400), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089139BC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2444), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 101u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2448), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    goto L_089139F8;
L_089139F8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089139F8;
      }
      goto L_08913A14;
    }
L_08913A14:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10848));
    goto L_08913A20;
L_08913A20:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913A20;
      }
      goto L_08913A40;
    }
L_08913A40:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913A48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(35));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08913A60u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08913A60u) goto L_08913A60;
    return;
L_08913A60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_08913A9C;
L_08913A9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08913AACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x08913AACu) goto L_08913AAC;
    return;
L_08913AAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913A9C;
      }
      goto L_08913AD8;
    }
L_08913AD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913AF8:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2448)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913B04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08913B1Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2448), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 483u, 0x0887AF60u>(ctx, &aot_mem) && ctx.pc == 0x08913B1Cu) goto L_08913B1C;
    return;
L_08913B1C:
    ctx.gpr[31] = (0x08913B24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08913560;
L_08913B24:
    ctx.gpr[31] = (0x08913B2Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_0891385C;
L_08913B2C:
    ctx.gpr[31] = (0x08913B34u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08913560;
L_08913B34:
    ctx.gpr[31] = (0x08913B3Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    goto L_0891385C;
L_08913B3C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_08913B44;
L_08913B44:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913B44;
      }
      goto L_08913B60;
    }
L_08913B60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913B70:
    if (lcs::lcs_menu_text_hook(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [lcs-menu-pages] CText::Get answers the PC menu keys
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08913B9Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089135D8;
L_08913B9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913BD0;
      }
      goto L_08913BA8;
    }
L_08913BA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913BD0;
      }
      goto L_08913BB4;
    }
L_08913BB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913BD0;
      }
      goto L_08913BC0;
    }
L_08913BC0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08913BD0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089135D8;
L_08913BD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913BE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08913C30u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08913C30u) goto L_08913C30;
    return;
L_08913C30:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08913C40u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089135D8;
L_08913C40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08913C78;
      }
      goto L_08913C4C;
    }
L_08913C4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913C78;
      }
      goto L_08913C58;
    }
L_08913C58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913C78;
      }
      goto L_08913C64;
    }
L_08913C64:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08913C74u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089135D8;
L_08913C74:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08913C78;
L_08913C78:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913CC0;
      }
      goto L_08913C80;
    }
L_08913C80:
    ctx.gpr[31] = (0x08913C88u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08913C88u) goto L_08913C88;
    return;
L_08913C88:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08913C9Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08913240;
L_08913C9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913CB0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 281u, 0x08AF9498u>(ctx, &aot_mem) && ctx.pc == 0x08913CB0u) goto L_08913CB0;
    return;
L_08913CB0:
    ctx.gpr[31] = (0x08913CB8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08913CB8u) goto L_08913CB8;
    return;
L_08913CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08913CC4;
      }
      goto L_08913CC0;
    }
L_08913CC0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08913CC4;
L_08913CC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913CE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08913D14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089135D8;
L_08913D14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913D48;
      }
      goto L_08913D20;
    }
L_08913D20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913D48;
      }
      goto L_08913D2C;
    }
L_08913D2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913D48;
      }
      goto L_08913D38;
    }
L_08913D38:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08913D48u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089135D8;
L_08913D48:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913D64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[31] = (0x08913DA8u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    goto L_08913B04;
L_08913DA8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08913DB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17116));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 189u, 0x088B9044u>(ctx, &aot_mem) && ctx.pc == 0x08913DB4u) goto L_08913DB4;
    return;
L_08913DB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08913E64;
      }
      goto L_08913DC8;
    }
L_08913DC8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08913E04;
      }
      goto L_08913DD4;
    }
L_08913DD4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08913E1C;
      }
      goto L_08913DDC;
    }
L_08913DDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08913E34;
      }
      goto L_08913DE4;
    }
L_08913DE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08913E4C;
      }
      goto L_08913DEC;
    }
L_08913DEC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913DFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17124));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08913DFCu) goto L_08913DFC;
    return;
L_08913DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913E64;
      }
      goto L_08913E04;
    }
L_08913E04:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913E14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17136));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08913E14u) goto L_08913E14;
    return;
L_08913E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913E64;
      }
      goto L_08913E1C;
    }
L_08913E1C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913E2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17148));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08913E2Cu) goto L_08913E2C;
    return;
L_08913E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913E64;
      }
      goto L_08913E34;
    }
L_08913E34:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913E44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17160));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08913E44u) goto L_08913E44;
    return;
L_08913E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913E64;
      }
      goto L_08913E4C;
    }
L_08913E4C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913E5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17172));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08913E5Cu) goto L_08913E5C;
    return;
L_08913E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913E64;
      }
      goto L_08913E64;
    }
L_08913E64:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913E74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17184));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 209u, 0x088B91A0u>(ctx, &aot_mem) && ctx.pc == 0x08913E74u) goto L_08913E74;
    return;
L_08913E74:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17188));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17196));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17204));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[30] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08913EB8;
L_08913EB8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08913EC8;
      }
      goto L_08913EC0;
    }
L_08913EC0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913FD8;
      }
      goto L_08913EC8;
    }
L_08913EC8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913EDCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08913A6C;
L_08913EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913FD0;
      }
      goto L_08913EE8;
    }
L_08913EE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08913EF8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x08913EF8u) goto L_08913EF8;
    return;
L_08913EF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913F24;
      }
      goto L_08913F00;
    }
L_08913F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[8] = (6u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08913F1Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32768));
    goto L_08913898;
L_08913F1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08913FD0;
      }
      goto L_08913F24;
    }
L_08913F24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08913F34u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x08913F34u) goto L_08913F34;
    return;
L_08913F34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913F58;
      }
      goto L_08913F3C;
    }
L_08913F3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913F50u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_0891349C;
L_08913F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08913FD0;
      }
      goto L_08913F58;
    }
L_08913F58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08913F68u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x08913F68u) goto L_08913F68;
    return;
L_08913F68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08913F8C;
      }
      goto L_08913F70;
    }
L_08913F70:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08913F84u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089137A8;
L_08913F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08913FD0;
      }
      goto L_08913F8C;
    }
L_08913F8C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913FD0;
      }
      goto L_08913F9C;
    }
L_08913F9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08913FACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x08913FACu) goto L_08913FAC;
    return;
L_08913FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913F9C;
      }
      goto L_08913FD0;
    }
L_08913FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913EB8;
      }
      goto L_08913FD8;
    }
L_08913FD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08913FE4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_0891359C;
L_08913FE4:
    ctx.gpr[31] = (0x08913FECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 218u, 0x088B9288u>(ctx, &aot_mem) && ctx.pc == 0x08913FECu) goto L_08913FEC;
    return;
L_08913FEC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08913FF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17104));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 189u, 0x088B9044u>(ctx, &aot_mem) && ctx.pc == 0x08913FF8u) goto L_08913FF8;
    return;
L_08913FF8:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2448), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.pc = 0x08914000u; return;
}

void recomp_unit_0067(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0067_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_67(Runtime &runtime) {
    runtime.register_generated_unit(67u, 0x08910000u, 16384u, &recomp_unit_0067, &recomp_unit_0067_entry);
    runtime.register_function(0x08910000u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910004u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910008u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891002Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891004Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891006Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910074u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910130u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891013Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910148u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910158u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910160u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910168u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891020Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910214u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891021Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910254u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891025Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910264u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891026Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910278u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891029Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910308u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910314u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910324u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910338u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910340u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910348u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891035Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910364u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910368u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891037Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910390u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910470u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891047Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910504u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910514u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891051Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891052Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910534u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910544u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910558u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910568u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891057Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910590u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910634u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910648u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910674u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910698u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891074Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910818u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910838u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910854u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910874u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910890u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910904u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910908u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891090Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910918u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910934u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891094Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910960u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910978u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910994u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910ADCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910ED0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911014u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891108Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911094u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891109Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911118u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911124u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911148u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911174u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911204u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911210u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911234u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891123Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911250u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911264u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911298u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911344u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911348u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911404u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911434u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911438u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911450u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891149Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911538u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911540u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911548u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911558u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911564u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911570u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891157Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911614u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891161Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911634u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911674u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911678u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911710u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911718u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911740u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911788u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911874u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891189Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891194Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911994u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891212Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891219Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912214u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912224u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891222Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912234u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912288u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891229Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912318u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891232Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912434u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912448u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912634u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912684u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912950u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913014u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891308Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913190u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913208u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913210u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913218u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913224u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913238u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913240u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913280u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891329Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913304u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913310u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891331Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913328u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913334u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913340u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891334Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913354u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891335Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913364u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891336Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913374u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891337Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913384u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913394u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913408u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891341Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913424u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913434u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891343Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913444u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891344Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913454u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913458u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913468u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891349Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913500u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913510u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891353Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913560u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891357Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913584u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913588u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891359Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913604u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913610u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913624u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913630u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913660u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913668u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913674u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913684u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913700u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891370Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913714u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891371Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891373Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913744u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913764u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891376Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913774u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891377Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913780u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891380Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913838u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891385Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913878u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913880u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913884u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913898u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891390Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913938u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891393Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913950u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913970u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891398Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FF8u, &recomp_unit_0067, "recomp_unit_0067");
}
} // namespace psprecomp
