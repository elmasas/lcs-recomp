#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_world_detail.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0084[4087] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 24, 0, 25, 26, 0, 0, 0, 0, 0, 27, 0,
    0, 28, 29, 0, 30, 0, 0, 31, 32, 0, 33, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 37, 0, 38, 0, 0, 39, 40, 0, 41, 42, 0,
    43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0,
    50, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0,
    0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0,
    76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 113, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167,
    0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174,
    0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0,
    0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0,
    0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203,
    0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253,
    0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 282, 283, 0, 0, 0, 0, 0, 0,
    284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324,
    0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 399, 0, 0, 400, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0,
    0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0,
    424, 0, 0, 0, 0, 425, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0,
    0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 440, 0, 0, 0,
    441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 445, 446, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 453,
    0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0,
    0, 460, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 469, 0,
    0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0,
    0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 487, 0, 0, 0, 0, 488, 0, 0, 489, 0, 490,
    0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 494, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 498, 499, 0, 0, 0,
    0, 500, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 504, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0,
    0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523,
    524, 0, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    534, 0, 0, 0, 0, 535, 0, 536, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 542, 543, 0, 544, 0,
    0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0,
    0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0,
    0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0,
    563, 0, 0, 0, 0, 564, 0, 0, 565, 566, 567, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 571, 0, 0, 0, 0, 0, 572,
    0, 0, 573, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 578, 0, 0, 579,
    0, 0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 590, 0, 591, 0, 0, 592, 0,
    593, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 606, 0,
    0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 0, 619, 0, 620,
    0, 621, 0, 0, 622, 0, 623, 0, 624, 0, 0, 625, 0, 626, 0, 627, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633,
    0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 0, 637, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0,
    0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0,
    0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 653, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 657,
};
void recomp_unit_0084_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08954000u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0084[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08954000;
    case 2u: goto L_0895400C;
    case 3u: goto L_08954018;
    case 4u: goto L_0895402C;
    case 5u: goto L_08954038;
    case 6u: goto L_0895403C;
    case 7u: goto L_08954044;
    case 8u: goto L_08954060;
    case 9u: goto L_08954068;
    case 10u: goto L_08954070;
    case 11u: goto L_08954078;
    case 12u: goto L_08954084;
    case 13u: goto L_08954090;
    case 14u: goto L_08954098;
    case 15u: goto L_089540A4;
    case 16u: goto L_089540AC;
    case 17u: goto L_089540B4;
    case 18u: goto L_0895410C;
    case 19u: goto L_089541B0;
    case 20u: goto L_089541B8;
    case 21u: goto L_089541C0;
    case 22u: goto L_089541C8;
    case 23u: goto L_089541D0;
    case 24u: goto L_089541D4;
    case 25u: goto L_089541DC;
    case 26u: goto L_089541E0;
    case 27u: goto L_089541F8;
    case 28u: goto L_08954204;
    case 29u: goto L_08954208;
    case 30u: goto L_08954210;
    case 31u: goto L_0895421C;
    case 32u: goto L_08954220;
    case 33u: goto L_08954228;
    case 34u: goto L_0895422C;
    case 35u: goto L_08954244;
    case 36u: goto L_08954250;
    case 37u: goto L_08954254;
    case 38u: goto L_0895425C;
    case 39u: goto L_08954268;
    case 40u: goto L_0895426C;
    case 41u: goto L_08954274;
    case 42u: goto L_08954278;
    case 43u: goto L_08954280;
    case 44u: goto L_0895428C;
    case 45u: goto L_08954298;
    case 46u: goto L_089542B4;
    case 47u: goto L_089542C0;
    case 48u: goto L_089542F0;
    case 49u: goto L_089542F8;
    case 50u: goto L_08954300;
    case 51u: goto L_08954308;
    case 52u: goto L_08954318;
    case 53u: goto L_08954324;
    case 54u: goto L_0895432C;
    case 55u: goto L_08954344;
    case 56u: goto L_0895434C;
    case 57u: goto L_08954364;
    case 58u: goto L_0895436C;
    case 59u: goto L_08954374;
    case 60u: goto L_08954384;
    case 61u: goto L_0895438C;
    case 62u: goto L_089543D4;
    case 63u: goto L_08954430;
    case 64u: goto L_08954434;
    case 65u: goto L_0895443C;
    case 66u: goto L_08954448;
    case 67u: goto L_08954450;
    case 68u: goto L_0895446C;
    case 69u: goto L_089544F4;
    case 70u: goto L_089544FC;
    case 71u: goto L_08954504;
    case 72u: goto L_0895452C;
    case 73u: goto L_08954558;
    case 74u: goto L_08954564;
    case 75u: goto L_08954578;
    case 76u: goto L_08954580;
    case 77u: goto L_08954594;
    case 78u: goto L_089545A0;
    case 79u: goto L_089545A8;
    case 80u: goto L_089545C0;
    case 81u: goto L_089545D8;
    case 82u: goto L_089545E0;
    case 83u: goto L_08954628;
    case 84u: goto L_0895463C;
    case 85u: goto L_08954644;
    case 86u: goto L_08954658;
    case 87u: goto L_089546BC;
    case 88u: goto L_089546E0;
    case 89u: goto L_08954700;
    case 90u: goto L_08954708;
    case 91u: goto L_0895471C;
    case 92u: goto L_0895474C;
    case 93u: goto L_08954760;
    case 94u: goto L_089547AC;
    case 95u: goto L_08954830;
    case 96u: goto L_08954844;
    case 97u: goto L_08954854;
    case 98u: goto L_089548F8;
    case 99u: goto L_08954904;
    case 100u: goto L_0895490C;
    case 101u: goto L_08954918;
    case 102u: goto L_0895493C;
    case 103u: goto L_08954948;
    case 104u: goto L_08954954;
    case 105u: goto L_08954960;
    case 106u: goto L_08954968;
    case 107u: goto L_08954970;
    case 108u: goto L_089549BC;
    case 109u: goto L_089549D0;
    case 110u: goto L_089549D8;
    case 111u: goto L_089549F0;
    case 112u: goto L_08954A74;
    case 113u: goto L_08954A84;
    case 114u: goto L_08954A88;
    case 115u: goto L_08954AA8;
    case 116u: goto L_08954AB8;
    case 117u: goto L_08954ABC;
    case 118u: goto L_08954ADC;
    case 119u: goto L_08954AEC;
    case 120u: goto L_08954AF0;
    case 121u: goto L_08954BCC;
    case 122u: goto L_08954BD4;
    case 123u: goto L_08954C14;
    case 124u: goto L_08954C28;
    case 125u: goto L_08954C30;
    case 126u: goto L_08954C44;
    case 127u: goto L_08954CA8;
    case 128u: goto L_08954CBC;
    case 129u: goto L_08954CC8;
    case 130u: goto L_08954CDC;
    case 131u: goto L_08954D10;
    case 132u: goto L_08954D90;
    case 133u: goto L_08954DA4;
    case 134u: goto L_08954DB0;
    case 135u: goto L_08954E10;
    case 136u: goto L_08954E48;
    case 137u: goto L_08954E54;
    case 138u: goto L_08954E64;
    case 139u: goto L_08954E6C;
    case 140u: goto L_08954E74;
    case 141u: goto L_08954EA8;
    case 142u: goto L_08954EF8;
    case 143u: goto L_08954F00;
    case 144u: goto L_08954F08;
    case 145u: goto L_08954F24;
    case 146u: goto L_08954F30;
    case 147u: goto L_08954F3C;
    case 148u: goto L_08954F44;
    case 149u: goto L_08954F4C;
    case 150u: goto L_08954F68;
    case 151u: goto L_08954F80;
    case 152u: goto L_08954FA4;
    case 153u: goto L_08954FD4;
    case 154u: goto L_08954FE0;
    case 155u: goto L_08954FE8;
    case 156u: goto L_08954FF0;
    case 157u: goto L_08955008;
    case 158u: goto L_08955020;
    case 159u: goto L_08955044;
    case 160u: goto L_08955074;
    case 161u: goto L_08955084;
    case 162u: goto L_0895508C;
    case 163u: goto L_08955094;
    case 164u: goto L_089550B0;
    case 165u: goto L_089550C8;
    case 166u: goto L_089550F0;
    case 167u: goto L_089550FC;
    case 168u: goto L_08955108;
    case 169u: goto L_08955110;
    case 170u: goto L_08955118;
    case 171u: goto L_08955130;
    case 172u: goto L_08955148;
    case 173u: goto L_08955170;
    case 174u: goto L_0895517C;
    case 175u: goto L_0895518C;
    case 176u: goto L_08955194;
    case 177u: goto L_089551F0;
    case 178u: goto L_089551F8;
    case 179u: goto L_08955204;
    case 180u: goto L_0895520C;
    case 181u: goto L_08955214;
    case 182u: goto L_08955230;
    case 183u: goto L_08955248;
    case 184u: goto L_0895526C;
    case 185u: goto L_0895529C;
    case 186u: goto L_089552A8;
    case 187u: goto L_089552B0;
    case 188u: goto L_089552B8;
    case 189u: goto L_089552D4;
    case 190u: goto L_089552E0;
    case 191u: goto L_089552E8;
    case 192u: goto L_089552F0;
    case 193u: goto L_08955308;
    case 194u: goto L_08955320;
    case 195u: goto L_08955344;
    case 196u: goto L_08955374;
    case 197u: goto L_08955384;
    case 198u: goto L_0895538C;
    case 199u: goto L_08955394;
    case 200u: goto L_089553B0;
    case 201u: goto L_089553C8;
    case 202u: goto L_089553F0;
    case 203u: goto L_089553FC;
    case 204u: goto L_08955408;
    case 205u: goto L_08955410;
    case 206u: goto L_08955418;
    case 207u: goto L_08955434;
    case 208u: goto L_08955440;
    case 209u: goto L_08955448;
    case 210u: goto L_08955450;
    case 211u: goto L_08955468;
    case 212u: goto L_08955480;
    case 213u: goto L_089554A8;
    case 214u: goto L_089554B4;
    case 215u: goto L_089554C4;
    case 216u: goto L_089554CC;
    case 217u: goto L_089554D8;
    case 218u: goto L_089554E8;
    case 219u: goto L_08955548;
    case 220u: goto L_08955550;
    case 221u: goto L_08955560;
    case 222u: goto L_0895557C;
    case 223u: goto L_08955588;
    case 224u: goto L_08955598;
    case 225u: goto L_089555C0;
    case 226u: goto L_089556B0;
    case 227u: goto L_089556B8;
    case 228u: goto L_089556D4;
    case 229u: goto L_08955718;
    case 230u: goto L_0895571C;
    case 231u: goto L_0895574C;
    case 232u: goto L_08955754;
    case 233u: goto L_0895575C;
    case 234u: goto L_08955764;
    case 235u: goto L_0895576C;
    case 236u: goto L_08955788;
    case 237u: goto L_089557A0;
    case 238u: goto L_089557C4;
    case 239u: goto L_089557F4;
    case 240u: goto L_08955800;
    case 241u: goto L_08955808;
    case 242u: goto L_08955810;
    case 243u: goto L_0895582C;
    case 244u: goto L_08955838;
    case 245u: goto L_08955840;
    case 246u: goto L_08955848;
    case 247u: goto L_08955860;
    case 248u: goto L_08955878;
    case 249u: goto L_08955890;
    case 250u: goto L_089558B4;
    case 251u: goto L_089558E4;
    case 252u: goto L_089558F4;
    case 253u: goto L_089558FC;
    case 254u: goto L_08955904;
    case 255u: goto L_0895590C;
    case 256u: goto L_08955914;
    case 257u: goto L_0895591C;
    case 258u: goto L_08955938;
    case 259u: goto L_08955944;
    case 260u: goto L_0895594C;
    case 261u: goto L_08955954;
    case 262u: goto L_08955970;
    case 263u: goto L_08955988;
    case 264u: goto L_089559AC;
    case 265u: goto L_089559DC;
    case 266u: goto L_089559E8;
    case 267u: goto L_089559F0;
    case 268u: goto L_089559F8;
    case 269u: goto L_08955A10;
    case 270u: goto L_08955A28;
    case 271u: goto L_08955A40;
    case 272u: goto L_08955A64;
    case 273u: goto L_08955A94;
    case 274u: goto L_08955AA4;
    case 275u: goto L_08955AAC;
    case 276u: goto L_08955AC0;
    case 277u: goto L_08955AC8;
    case 278u: goto L_08955B18;
    case 279u: goto L_08955B3C;
    case 280u: goto L_08955B48;
    case 281u: goto L_08955B58;
    case 282u: goto L_08955B60;
    case 283u: goto L_08955B64;
    case 284u: goto L_08955B80;
    case 285u: goto L_08955B88;
    case 286u: goto L_08955BA0;
    case 287u: goto L_08955BC8;
    case 288u: goto L_08955BD4;
    case 289u: goto L_08955BE0;
    case 290u: goto L_08955BE8;
    case 291u: goto L_08955BF0;
    case 292u: goto L_08955C08;
    case 293u: goto L_08955C2C;
    case 294u: goto L_08955C5C;
    case 295u: goto L_08955C68;
    case 296u: goto L_08955C70;
    case 297u: goto L_08955C80;
    case 298u: goto L_08955CE0;
    case 299u: goto L_08955CE8;
    case 300u: goto L_08955CF8;
    case 301u: goto L_08955D14;
    case 302u: goto L_08955D20;
    case 303u: goto L_08955D30;
    case 304u: goto L_08955D58;
    case 305u: goto L_08955E38;
    case 306u: goto L_08955E48;
    case 307u: goto L_08955E74;
    case 308u: goto L_08955E84;
    case 309u: goto L_08955EC4;
    case 310u: goto L_08955EE8;
    case 311u: goto L_08955F00;
    case 312u: goto L_08955F0C;
    case 313u: goto L_08955F5C;
    case 314u: goto L_08955FB4;
    case 315u: goto L_08955FC0;
    case 316u: goto L_08955FF0;
    case 317u: goto L_08956004;
    case 318u: goto L_08956010;
    case 319u: goto L_0895601C;
    case 320u: goto L_08956028;
    case 321u: goto L_0895603C;
    case 322u: goto L_08956044;
    case 323u: goto L_08956070;
    case 324u: goto L_0895607C;
    case 325u: goto L_08956088;
    case 326u: goto L_08956090;
    case 327u: goto L_089560A8;
    case 328u: goto L_089560B0;
    case 329u: goto L_08956100;
    case 330u: goto L_08956128;
    case 331u: goto L_08956138;
    case 332u: goto L_089562B0;
    case 333u: goto L_089562C0;
    case 334u: goto L_089562CC;
    case 335u: goto L_089562D4;
    case 336u: goto L_0895631C;
    case 337u: goto L_08956388;
    case 338u: goto L_08956394;
    case 339u: goto L_089563AC;
    case 340u: goto L_089563C0;
    case 341u: goto L_089563D4;
    case 342u: goto L_0895644C;
    case 343u: goto L_08956464;
    case 344u: goto L_0895648C;
    case 345u: goto L_089564DC;
    case 346u: goto L_08956504;
    case 347u: goto L_08956514;
    case 348u: goto L_0895653C;
    case 349u: goto L_08956548;
    case 350u: goto L_08956554;
    case 351u: goto L_089565A4;
    case 352u: goto L_089565B4;
    case 353u: goto L_089566A0;
    case 354u: goto L_089566B0;
    case 355u: goto L_089566BC;
    case 356u: goto L_089566C0;
    case 357u: goto L_089566DC;
    case 358u: goto L_089566E8;
    case 359u: goto L_08956778;
    case 360u: goto L_08956788;
    case 361u: goto L_089567A4;
    case 362u: goto L_089567B0;
    case 363u: goto L_08956838;
    case 364u: goto L_0895684C;
    case 365u: goto L_08956850;
    case 366u: goto L_08956864;
    case 367u: goto L_08956870;
    case 368u: goto L_089568A0;
    case 369u: goto L_089568CC;
    case 370u: goto L_089568E4;
    case 371u: goto L_089568FC;
    case 372u: goto L_08956954;
    case 373u: goto L_08956968;
    case 374u: goto L_0895697C;
    case 375u: goto L_089569C4;
    case 376u: goto L_089569F0;
    case 377u: goto L_08956A1C;
    case 378u: goto L_08956A48;
    case 379u: goto L_08956A74;
    case 380u: goto L_08956AA0;
    case 381u: goto L_08956ACC;
    case 382u: goto L_08956AF8;
    case 383u: goto L_08956B04;
    case 384u: goto L_08956B20;
    case 385u: goto L_08956B40;
    case 386u: goto L_08956B88;
    case 387u: goto L_08956BA0;
    case 388u: goto L_08956BB4;
    case 389u: goto L_08956BCC;
    case 390u: goto L_08956BE4;
    case 391u: goto L_08956C3C;
    case 392u: goto L_08956C48;
    case 393u: goto L_08956C50;
    case 394u: goto L_08956C54;
    case 395u: goto L_08956C60;
    case 396u: goto L_08956CA0;
    case 397u: goto L_08956CCC;
    case 398u: goto L_08956CE8;
    case 399u: goto L_08956CEC;
    case 400u: goto L_08956CF8;
    case 401u: goto L_08956D00;
    case 402u: goto L_08956D20;
    case 403u: goto L_08956D34;
    case 404u: goto L_08956D38;
    case 405u: goto L_08956D44;
    case 406u: goto L_08956D4C;
    case 407u: goto L_08956D74;
    case 408u: goto L_08956D84;
    case 409u: goto L_08956D8C;
    case 410u: goto L_08956DA0;
    case 411u: goto L_08956DAC;
    case 412u: goto L_08956DBC;
    case 413u: goto L_08956DC8;
    case 414u: goto L_08956DD4;
    case 415u: goto L_08956DE8;
    case 416u: goto L_08956E04;
    case 417u: goto L_08956E18;
    case 418u: goto L_08956E38;
    case 419u: goto L_08956E40;
    case 420u: goto L_08956E50;
    case 421u: goto L_08956E58;
    case 422u: goto L_08956E64;
    case 423u: goto L_08956E74;
    case 424u: goto L_08956E80;
    case 425u: goto L_08956E94;
    case 426u: goto L_08956E98;
    case 427u: goto L_08956EA0;
    case 428u: goto L_08956ECC;
    case 429u: goto L_08956EDC;
    case 430u: goto L_08956EE4;
    case 431u: goto L_08956F08;
    case 432u: goto L_08956F9C;
    case 433u: goto L_08956FC8;
    case 434u: goto L_08956FEC;
    case 435u: goto L_08956FF8;
    case 436u: goto L_08957004;
    case 437u: goto L_0895700C;
    case 438u: goto L_0895701C;
    case 439u: goto L_0895706C;
    case 440u: goto L_08957070;
    case 441u: goto L_08957080;
    case 442u: goto L_08957090;
    case 443u: goto L_089570B4;
    case 444u: goto L_089570C4;
    case 445u: goto L_0895711C;
    case 446u: goto L_08957120;
    case 447u: goto L_08957130;
    case 448u: goto L_08957144;
    case 449u: goto L_0895714C;
    case 450u: goto L_08957154;
    case 451u: goto L_08957160;
    case 452u: goto L_08957174;
    case 453u: goto L_0895717C;
    case 454u: goto L_08957184;
    case 455u: goto L_08957198;
    case 456u: goto L_089571AC;
    case 457u: goto L_089571B4;
    case 458u: goto L_089571D8;
    case 459u: goto L_089571E0;
    case 460u: goto L_08957204;
    case 461u: goto L_08957210;
    case 462u: goto L_08957224;
    case 463u: goto L_0895723C;
    case 464u: goto L_08957250;
    case 465u: goto L_08957284;
    case 466u: goto L_089572B8;
    case 467u: goto L_089572EC;
    case 468u: goto L_089572F4;
    case 469u: goto L_089572F8;
    case 470u: goto L_08957304;
    case 471u: goto L_0895730C;
    case 472u: goto L_08957330;
    case 473u: goto L_08957338;
    case 474u: goto L_0895738C;
    case 475u: goto L_089573A0;
    case 476u: goto L_089573BC;
    case 477u: goto L_089573C8;
    case 478u: goto L_089573DC;
    case 479u: goto L_089573E4;
    case 480u: goto L_089573F0;
    case 481u: goto L_089573F8;
    case 482u: goto L_08957408;
    case 483u: goto L_08957410;
    case 484u: goto L_08957418;
    case 485u: goto L_0895742C;
    case 486u: goto L_08957450;
    case 487u: goto L_08957454;
    case 488u: goto L_08957468;
    case 489u: goto L_08957474;
    case 490u: goto L_0895747C;
    case 491u: goto L_08957488;
    case 492u: goto L_089574A0;
    case 493u: goto L_089574AC;
    case 494u: goto L_089574B4;
    case 495u: goto L_089574C8;
    case 496u: goto L_089574D0;
    case 497u: goto L_089574E4;
    case 498u: goto L_089574EC;
    case 499u: goto L_089574F0;
    case 500u: goto L_08957504;
    case 501u: goto L_08957514;
    case 502u: goto L_0895751C;
    case 503u: goto L_08957524;
    case 504u: goto L_08957538;
    case 505u: goto L_0895753C;
    case 506u: goto L_08957544;
    case 507u: goto L_0895756C;
    case 508u: goto L_089575B0;
    case 509u: goto L_089575B8;
    case 510u: goto L_08957624;
    case 511u: goto L_08957630;
    case 512u: goto L_08957648;
    case 513u: goto L_08957658;
    case 514u: goto L_08957664;
    case 515u: goto L_089576A8;
    case 516u: goto L_089576B0;
    case 517u: goto L_089576B4;
    case 518u: goto L_089576C8;
    case 519u: goto L_089576F0;
    case 520u: goto L_08957704;
    case 521u: goto L_0895773C;
    case 522u: goto L_08957770;
    case 523u: goto L_0895777C;
    case 524u: goto L_08957780;
    case 525u: goto L_08957794;
    case 526u: goto L_089577A0;
    case 527u: goto L_089577A8;
    case 528u: goto L_089577B4;
    case 529u: goto L_089577D4;
    case 530u: goto L_08957800;
    case 531u: goto L_0895781C;
    case 532u: goto L_08957838;
    case 533u: goto L_08957854;
    case 534u: goto L_08957880;
    case 535u: goto L_08957894;
    case 536u: goto L_0895789C;
    case 537u: goto L_089578A0;
    case 538u: goto L_089578BC;
    case 539u: goto L_089578C8;
    case 540u: goto L_089578D0;
    case 541u: goto L_089578D8;
    case 542u: goto L_089578EC;
    case 543u: goto L_089578F0;
    case 544u: goto L_089578F8;
    case 545u: goto L_08957908;
    case 546u: goto L_08957914;
    case 547u: goto L_08957938;
    case 548u: goto L_08957948;
    case 549u: goto L_08957968;
    case 550u: goto L_08957984;
    case 551u: goto L_089579A4;
    case 552u: goto L_089579D0;
    case 553u: goto L_089579F0;
    case 554u: goto L_089579F8;
    case 555u: goto L_08957A04;
    case 556u: goto L_08957A18;
    case 557u: goto L_08957A28;
    case 558u: goto L_08957A44;
    case 559u: goto L_08957A5C;
    case 560u: goto L_08957A64;
    case 561u: goto L_08957A6C;
    case 562u: goto L_08957A74;
    case 563u: goto L_08957A80;
    case 564u: goto L_08957A94;
    case 565u: goto L_08957AA0;
    case 566u: goto L_08957AA4;
    case 567u: goto L_08957AA8;
    case 568u: goto L_08957AB0;
    case 569u: goto L_08957AC4;
    case 570u: goto L_08957AE0;
    case 571u: goto L_08957AE4;
    case 572u: goto L_08957AFC;
    case 573u: goto L_08957B08;
    case 574u: goto L_08957B10;
    case 575u: goto L_08957B20;
    case 576u: goto L_08957B60;
    case 577u: goto L_08957B6C;
    case 578u: goto L_08957B70;
    case 579u: goto L_08957B7C;
    case 580u: goto L_08957B88;
    case 581u: goto L_08957B90;
    case 582u: goto L_08957B98;
    case 583u: goto L_08957BA4;
    case 584u: goto L_08957BAC;
    case 585u: goto L_08957BB4;
    case 586u: goto L_08957BC0;
    case 587u: goto L_08957BC8;
    case 588u: goto L_08957BD0;
    case 589u: goto L_08957BDC;
    case 590u: goto L_08957BE4;
    case 591u: goto L_08957BEC;
    case 592u: goto L_08957BF8;
    case 593u: goto L_08957C00;
    case 594u: goto L_08957C08;
    case 595u: goto L_08957C14;
    case 596u: goto L_08957C1C;
    case 597u: goto L_08957C24;
    case 598u: goto L_08957C30;
    case 599u: goto L_08957C38;
    case 600u: goto L_08957C40;
    case 601u: goto L_08957C4C;
    case 602u: goto L_08957C54;
    case 603u: goto L_08957C5C;
    case 604u: goto L_08957C68;
    case 605u: goto L_08957C70;
    case 606u: goto L_08957C78;
    case 607u: goto L_08957C84;
    case 608u: goto L_08957C8C;
    case 609u: goto L_08957C94;
    case 610u: goto L_08957CA0;
    case 611u: goto L_08957CA8;
    case 612u: goto L_08957CB0;
    case 613u: goto L_08957CBC;
    case 614u: goto L_08957CC4;
    case 615u: goto L_08957CCC;
    case 616u: goto L_08957CD8;
    case 617u: goto L_08957CE0;
    case 618u: goto L_08957CE8;
    case 619u: goto L_08957CF4;
    case 620u: goto L_08957CFC;
    case 621u: goto L_08957D04;
    case 622u: goto L_08957D10;
    case 623u: goto L_08957D18;
    case 624u: goto L_08957D20;
    case 625u: goto L_08957D2C;
    case 626u: goto L_08957D34;
    case 627u: goto L_08957D3C;
    case 628u: goto L_08957D48;
    case 629u: goto L_08957D50;
    case 630u: goto L_08957D5C;
    case 631u: goto L_08957D68;
    case 632u: goto L_08957D74;
    case 633u: goto L_08957D7C;
    case 634u: goto L_08957D84;
    case 635u: goto L_08957D8C;
    case 636u: goto L_08957D94;
    case 637u: goto L_08957DAC;
    case 638u: goto L_08957DB0;
    case 639u: goto L_08957DB8;
    case 640u: goto L_08957DE8;
    case 641u: goto L_08957E04;
    case 642u: goto L_08957E0C;
    case 643u: goto L_08957E18;
    case 644u: goto L_08957E38;
    case 645u: goto L_08957E64;
    case 646u: goto L_08957E88;
    case 647u: goto L_08957EB4;
    case 648u: goto L_08957EF8;
    case 649u: goto L_08957F20;
    case 650u: goto L_08957F38;
    case 651u: goto L_08957F3C;
    case 652u: goto L_08957F48;
    case 653u: goto L_08957F88;
    case 654u: goto L_08957F8C;
    case 655u: goto L_08957FA0;
    case 656u: goto L_08957FB4;
    case 657u: goto L_08957FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08954000:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(277)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954068;
      }
      goto L_0895400C;
    }
L_0895400C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954068;
      }
      goto L_08954018;
    }
L_08954018:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_0895403C;
    }
    goto L_0895402C;
L_0895402C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954068;
      }
      goto L_08954038;
    }
L_08954038:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_0895403C;
L_0895403C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954068;
      }
      goto L_08954044;
    }
L_08954044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954068;
      }
      goto L_08954060;
    }
L_08954060:
    ctx.gpr[31] = (0x08954068u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 565u, 0x089530DCu>(ctx, &aot_mem) && ctx.pc == 0x08954068u) goto L_08954068;
    return;
L_08954068:
    ctx.gpr[31] = (0x08954070u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 67u, 0x089504D0u>(ctx, &aot_mem) && ctx.pc == 0x08954070u) goto L_08954070;
    return;
L_08954070:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954098;
      }
      goto L_08954078;
    }
L_08954078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954090;
      }
      goto L_08954084;
    }
L_08954084:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08954090u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 346u, 0x08951DE8u>(ctx, &aot_mem) && ctx.pc == 0x08954090u) goto L_08954090;
    return;
L_08954090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895438C;
      }
      goto L_08954098;
    }
L_08954098:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089541C0;
      }
      goto L_089540A4;
    }
L_089540A4:
    ctx.gpr[31] = (0x089540ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089540ACu) goto L_089540AC;
    return;
L_089540AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089541B8;
      }
      goto L_089540B4;
    }
L_089540B4:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0895410Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 294u, 0x089D6254u>(ctx, &aot_mem) && ctx.pc == 0x0895410Cu) goto L_0895410C;
    return;
L_0895410C:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (15383u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23157u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] & 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
        goto L_089541C8;
    }
    goto L_089541B0;
L_089541B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_089541D4;
      }
      goto L_089541B8;
    }
L_089541B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895438C;
      }
      goto L_089541C0;
    }
L_089541C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895438C;
      }
      goto L_089541C8;
    }
L_089541C8:
    if (ctx.gpr[22] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
        goto L_089541E0;
    }
    goto L_089541D0;
L_089541D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_089541D4;
L_089541D4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
        goto L_08954208;
    }
    goto L_089541DC;
L_089541DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    goto L_089541E0;
L_089541E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
        goto L_08954208;
    }
    goto L_089541F8;
L_089541F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954300;
      }
      goto L_08954204;
    }
L_08954204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    goto L_08954208;
L_08954208:
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_08954220;
    }
    goto L_08954210;
L_08954210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[22] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_0895422C;
    }
    goto L_0895421C;
L_0895421C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_08954220;
L_08954220:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
        goto L_08954254;
    }
    goto L_08954228;
L_08954228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_0895422C;
L_0895422C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
        goto L_08954254;
    }
    goto L_08954244;
L_08954244:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954300;
      }
      goto L_08954250;
    }
L_08954250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
    goto L_08954254;
L_08954254:
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_0895426C;
    }
    goto L_0895425C;
L_0895425C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    if (ctx.gpr[22] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
        goto L_08954278;
    }
    goto L_08954268;
L_08954268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_0895426C;
L_0895426C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895428C;
      }
      goto L_08954274;
    }
L_08954274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    goto L_08954278;
L_08954278:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895428C;
      }
      goto L_08954280;
    }
L_08954280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954300;
      }
      goto L_0895428C;
    }
L_0895428C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089542F8;
      }
      goto L_08954298;
    }
L_08954298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089542B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 397u, 0x08952244u>(ctx, &aot_mem) && ctx.pc == 0x089542B4u) goto L_089542B4;
    return;
L_089542B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954308;
      }
      goto L_089542C0;
    }
L_089542C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089542F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 200u, 0x089514F8u>(ctx, &aot_mem) && ctx.pc == 0x089542F0u) goto L_089542F0;
    return;
L_089542F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954374;
      }
      goto L_089542F8;
    }
L_089542F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895438C;
      }
      goto L_08954300;
    }
L_08954300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895438C;
      }
      goto L_08954308;
    }
L_08954308:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08954324;
      }
      goto L_08954318;
    }
L_08954318:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[22] << 3u);
      if (branch_taken) {
          goto L_0895432C;
      }
      goto L_08954324;
    }
L_08954324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0895436C;
      }
      goto L_0895432C;
    }
L_0895432C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[5]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0895434C;
    }
    goto L_08954344;
L_08954344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0895436C;
      }
      goto L_0895434C;
    }
L_0895434C:
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895436C;
      }
      goto L_08954364;
    }
L_08954364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0895436C;
      }
      goto L_0895436C;
    }
L_0895436C:
    ctx.gpr[31] = (0x08954374u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 200u, 0x089514F8u>(ctx, &aot_mem) && ctx.pc == 0x08954374u) goto L_08954374;
    return;
L_08954374:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08954384u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 345u, 0x08951DE0u>(ctx, &aot_mem) && ctx.pc == 0x08954384u) goto L_08954384;
    return;
L_08954384:
    ctx.gpr[31] = (0x0895438Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 448u, 0x08952724u>(ctx, &aot_mem) && ctx.pc == 0x0895438Cu) goto L_0895438C;
    return;
L_0895438C:
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
L_089543D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[31]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(297)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08954448;
      }
      goto L_08954430;
    }
L_08954430:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954434;
L_08954434:
    ctx.gpr[31] = (0x0895443Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x0895443Cu) goto L_0895443C;
    return;
L_0895443C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08954434;
      }
      goto L_08954448;
    }
L_08954448:
    ctx.gpr[31] = (0x08954450u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    // Switching lists requires the game's resource registration and instance
    // flag initialization, just as activating a newly streamed sector does.
    if (lcs::request_world_detail_refresh(rt, ctx.gpr[20], aot_mem.aot_load32(ctx.gpr[29] + 516u))) {
        if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 565u, 0x089530DCu>(ctx, &aot_mem) && ctx.pc == 0x08954450u) goto L_08954450;
        return;
    }
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 448u, 0x08952724u>(ctx, &aot_mem) && ctx.pc == 0x08954450u) goto L_08954450;
    return;
L_08954450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089544FC;
      }
      goto L_0895446C;
    }
L_0895446C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.gpr[11] = (2269u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-2784));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[11]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-720));
    ctx.gpr[5] = (0u & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08954504;
      }
      goto L_089544F4;
    }
L_089544F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954564;
      }
      goto L_089544FC;
    }
L_089544FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089562D4;
      }
      goto L_08954504;
    }
L_08954504:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (15104u << 16u);
      if (branch_taken) {
          goto L_08954558;
      }
      goto L_0895452C;
    }
L_0895452C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[3] = (ctx.gpr[3] << 8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[3] = (ctx.gpr[3] >> 8u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895452C;
      }
      goto L_08954558;
    }
L_08954558:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08954564;
L_08954564:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08954594;
      }
      goto L_08954578;
    }
L_08954578:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089545D8;
      }
      goto L_08954580;
    }
L_08954580:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089545E0;
      }
      goto L_08954594;
    }
L_08954594:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089545C0;
      }
      goto L_089545A0;
    }
L_089545A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089545D8;
      }
      goto L_089545A8;
    }
L_089545A8:
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[6] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089545E0;
      }
      goto L_089545C0;
    }
L_089545C0:
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089545E0;
      }
      goto L_089545D8;
    }
L_089545D8:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[4]);
    goto L_089545E0;
L_089545E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0895463C;
      }
      goto L_08954628;
    }
L_08954628:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(684)));
        goto L_08954644;
    }
    goto L_0895463C;
L_0895463C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(684)));
    goto L_08954644;
L_08954644:
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08954658;
    }
    goto L_08954658;
L_08954658:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0895493C;
      }
      goto L_089546BC;
    }
L_089546BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[4]);
    goto L_089546E0;
L_089546E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    goto L_08954700;
L_08954700:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08954918;
      }
      goto L_08954708;
    }
L_08954708:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954918;
      }
      goto L_0895471C;
    }
L_0895471C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895490C;
      }
      goto L_0895474C;
    }
L_0895474C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08954760u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x08954760u) goto L_08954760;
    return;
L_08954760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[19]);
    ctx.gpr[31] = (0x089547ACu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 762u, 0x0894FEB8u>(ctx, &aot_mem) && ctx.pc == 0x089547ACu) goto L_089547AC;
    return;
L_089547AC:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08954830u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08954830u) goto L_08954830;
    return;
L_08954830:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08954844u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 387u, 0x08A7EEF8u>(ctx, &aot_mem) && ctx.pc == 0x08954844u) goto L_08954844;
    return;
L_08954844:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x08954854u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 768u, 0x0894FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08954854u) goto L_08954854;
    return;
L_08954854:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895490C;
      }
      goto L_089548F8;
    }
L_089548F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895490C;
      }
      goto L_08954904;
    }
L_08954904:
    ctx.gpr[31] = (0x0895490Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0895490Cu) goto L_0895490C;
    return;
L_0895490C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
      if (branch_taken) {
          goto L_08954700;
      }
      goto L_08954918;
    }
L_08954918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089546E0;
      }
      goto L_0895493C;
    }
L_0895493C:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08954948u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08954948u) goto L_08954948;
    return;
L_08954948:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08954954u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08954954u) goto L_08954954;
    return;
L_08954954:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08954960u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08954960u) goto L_08954960;
    return;
L_08954960:
    ctx.gpr[31] = (0x08954968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 479u, 0x088CF960u>(ctx, &aot_mem) && ctx.pc == 0x08954968u) goto L_08954968;
    return;
L_08954968:
    ctx.gpr[31] = (0x08954970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 485u, 0x088CF9D0u>(ctx, &aot_mem) && ctx.pc == 0x08954970u) goto L_08954970;
    return;
L_08954970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-32));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089549D0;
      }
      goto L_089549BC;
    }
L_089549BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (2227u << 16u);
      if (branch_taken) {
          goto L_089549D8;
      }
      goto L_089549D0;
    }
L_089549D0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (2227u << 16u);
    goto L_089549D8;
L_089549D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(684)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_089549F0;
    }
    goto L_089549F0;
L_089549F0:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(22640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11016)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08954A88;
      }
      goto L_08954A74;
    }
L_08954A74:
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_08954A84;
    }
    goto L_08954A84;
L_08954A84:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    goto L_08954A88;
L_08954A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11008)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08954ABC;
      }
      goto L_08954AA8;
    }
L_08954AA8:
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_08954AB8;
    }
    goto L_08954AB8;
L_08954AB8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_08954ABC;
L_08954ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11012)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08954AF0;
      }
      goto L_08954ADC;
    }
L_08954ADC:
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_08954AEC;
    }
    goto L_08954AEC;
L_08954AEC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08954AF0;
L_08954AF0:
    ctx.gpr[4] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[8] << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[6] = (5888u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (23808u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836)));
    ctx.gpr[7] = (23552u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7144)));
    ctx.gpr[7] = (21504u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (51200u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (51457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (39680u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954BD4;
      }
      goto L_08954BCC;
    }
L_08954BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11108)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08954BD4;
L_08954BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08954C28;
      }
      goto L_08954C14;
    }
L_08954C14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(684)));
        goto L_08954C30;
    }
    goto L_08954C28;
L_08954C28:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(684)));
    goto L_08954C30;
L_08954C30:
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08954C44;
    }
    goto L_08954C44;
L_08954C44:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1136));
    ctx.gpr[31] = (0x08954CA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x08954CA8u) goto L_08954CA8;
    return;
L_08954CA8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08954CBCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 761u, 0x0894FE98u>(ctx, &aot_mem) && ctx.pc == 0x08954CBCu) goto L_08954CBC;
    return;
L_08954CBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08954CC8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 763u, 0x0894FEE0u>(ctx, &aot_mem) && ctx.pc == 0x08954CC8u) goto L_08954CC8;
    return;
L_08954CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08954CDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08954CDCu) goto L_08954CDC;
    return;
L_08954CDC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (15360u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[31] = (0x08954D10u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 768u, 0x0894FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08954D10u) goto L_08954D10;
    return;
L_08954D10:
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (15u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[7] = (2048u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08955AC8;
      }
      goto L_08954D90;
    }
L_08954D90:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954DB0;
      }
      goto L_08954DA4;
    }
L_08954DA4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08954DB0;
L_08954DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (0u | 255u);
      if (branch_taken) {
          goto L_089555C0;
      }
      goto L_08954E10;
    }
L_08954E10:
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[7] = (2560u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-29668));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[4]);
    goto L_08954E48;
L_08954E48:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08954E6C;
      }
      goto L_08954E54;
    }
L_08954E54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08954E64u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 180u, 0x08951078u>(ctx, &aot_mem) && ctx.pc == 0x08954E64u) goto L_08954E64;
    return;
L_08954E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954E74;
      }
      goto L_08954E6C;
    }
L_08954E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    goto L_08954E74;
L_08954E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089551F0;
      }
      goto L_08954EA8;
    }
L_08954EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955194;
      }
      goto L_08954EF8;
    }
L_08954EF8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08954F30;
      }
      goto L_08954F00;
    }
L_08954F00:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08954F24;
      }
      goto L_08954F08;
    }
L_08954F08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954F30;
      }
      goto L_08954F24;
    }
L_08954F24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954EF8;
      }
      goto L_08954F30;
    }
L_08954F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955084;
      }
      goto L_08954F3C;
    }
L_08954F3C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08954FE0;
      }
      goto L_08954F44;
    }
L_08954F44:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08954F68;
      }
      goto L_08954F4C;
    }
L_08954F4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FE0;
      }
      goto L_08954F68;
    }
L_08954F68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954FD4;
      }
      goto L_08954F80;
    }
L_08954F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FD4;
      }
      goto L_08954FA4;
    }
L_08954FA4:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08954FD4;
L_08954FD4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954F3C;
      }
      goto L_08954FE0;
    }
L_08954FE0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895518C;
      }
      goto L_08954FE8;
    }
L_08954FE8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0895518C;
      }
      goto L_08954FF0;
    }
L_08954FF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895518C;
      }
      goto L_08955008;
    }
L_08955008:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955074;
      }
      goto L_08955020;
    }
L_08955020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955074;
      }
      goto L_08955044;
    }
L_08955044:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08955074;
L_08955074:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FE0;
      }
      goto L_08955084;
    }
L_08955084:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955108;
      }
      goto L_0895508C;
    }
L_0895508C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089550B0;
      }
      goto L_08955094;
    }
L_08955094:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955108;
      }
      goto L_089550B0;
    }
L_089550B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089550FC;
      }
      goto L_089550C8;
    }
L_089550C8:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089550FC;
      }
      goto L_089550F0;
    }
L_089550F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089550FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 159u, 0x08950D84u>(ctx, &aot_mem) && ctx.pc == 0x089550FCu) goto L_089550FC;
    return;
L_089550FC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955084;
      }
      goto L_08955108;
    }
L_08955108:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895518C;
      }
      goto L_08955110;
    }
L_08955110:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0895518C;
      }
      goto L_08955118;
    }
L_08955118:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895518C;
      }
      goto L_08955130;
    }
L_08955130:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895517C;
      }
      goto L_08955148;
    }
L_08955148:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895517C;
      }
      goto L_08955170;
    }
L_08955170:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895517Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 159u, 0x08950D84u>(ctx, &aot_mem) && ctx.pc == 0x0895517Cu) goto L_0895517C;
    return;
L_0895517C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955108;
      }
      goto L_0895518C;
    }
L_0895518C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08954EF8;
      }
      goto L_08955194;
    }
L_08955194:
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089554CC;
      }
      goto L_089551F0;
    }
L_089551F0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089554CC;
      }
      goto L_089551F8;
    }
L_089551F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955384;
      }
      goto L_08955204;
    }
L_08955204:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089552A8;
      }
      goto L_0895520C;
    }
L_0895520C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955230;
      }
      goto L_08955214;
    }
L_08955214:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089552A8;
      }
      goto L_08955230;
    }
L_08955230:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895529C;
      }
      goto L_08955248;
    }
L_08955248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895529C;
      }
      goto L_0895526C;
    }
L_0895526C:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_0895529C;
L_0895529C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955204;
      }
      goto L_089552A8;
    }
L_089552A8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089552E0;
      }
      goto L_089552B0;
    }
L_089552B0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089552D4;
      }
      goto L_089552B8;
    }
L_089552B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089552E0;
      }
      goto L_089552D4;
    }
L_089552D4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089552A8;
      }
      goto L_089552E0;
    }
L_089552E0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089554C4;
      }
      goto L_089552E8;
    }
L_089552E8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089554C4;
      }
      goto L_089552F0;
    }
L_089552F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089554C4;
      }
      goto L_08955308;
    }
L_08955308:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955374;
      }
      goto L_08955320;
    }
L_08955320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955374;
      }
      goto L_08955344;
    }
L_08955344:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08955374;
L_08955374:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089552E0;
      }
      goto L_08955384;
    }
L_08955384:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955408;
      }
      goto L_0895538C;
    }
L_0895538C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089553B0;
      }
      goto L_08955394;
    }
L_08955394:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955408;
      }
      goto L_089553B0;
    }
L_089553B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089553FC;
      }
      goto L_089553C8;
    }
L_089553C8:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089553FC;
      }
      goto L_089553F0;
    }
L_089553F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089553FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 159u, 0x08950D84u>(ctx, &aot_mem) && ctx.pc == 0x089553FCu) goto L_089553FC;
    return;
L_089553FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955384;
      }
      goto L_08955408;
    }
L_08955408:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955440;
      }
      goto L_08955410;
    }
L_08955410:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955434;
      }
      goto L_08955418;
    }
L_08955418:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955440;
      }
      goto L_08955434;
    }
L_08955434:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955408;
      }
      goto L_08955440;
    }
L_08955440:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089554C4;
      }
      goto L_08955448;
    }
L_08955448:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089554C4;
      }
      goto L_08955450;
    }
L_08955450:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089554C4;
      }
      goto L_08955468;
    }
L_08955468:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089554B4;
      }
      goto L_08955480;
    }
L_08955480:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089554B4;
      }
      goto L_089554A8;
    }
L_089554A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089554B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 159u, 0x08950D84u>(ctx, &aot_mem) && ctx.pc == 0x089554B4u) goto L_089554B4;
    return;
L_089554B4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955440;
      }
      goto L_089554C4;
    }
L_089554C4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089551F8;
      }
      goto L_089554CC;
    }
L_089554CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955550;
      }
      goto L_089554D8;
    }
L_089554D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08955548;
      }
      goto L_089554E8;
    }
L_089554E8:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(7492));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(7496))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089554E8;
      }
      goto L_08955548;
    }
L_08955548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955588;
      }
      goto L_08955550;
    }
L_08955550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08955588;
      }
      goto L_08955560;
    }
L_08955560:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(7492));
    ctx.gpr[31] = (0x0895557Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 435u, 0x08952520u>(ctx, &aot_mem) && ctx.pc == 0x0895557Cu) goto L_0895557C;
    return;
L_0895557C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(7496))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08955560;
      }
      goto L_08955588;
    }
L_08955588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955598u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 190u, 0x089512E4u>(ctx, &aot_mem) && ctx.pc == 0x08955598u) goto L_08955598;
    return;
L_08955598:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08954E48;
      }
      goto L_089555C0;
    }
L_089555C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (56319u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4102));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089556B8;
      }
      goto L_089556B0;
    }
L_089556B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089556D4;
      }
      goto L_089556B8;
    }
L_089556B8:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_089556D4;
    }
    goto L_089556D4;
L_089556D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08955AC0;
      }
      goto L_08955718;
    }
L_08955718:
    ctx.gpr[8] = (ctx.gpr[10] << 2u);
    goto L_0895571C;
L_0895571C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089558FC;
      }
      goto L_0895574C;
    }
L_0895574C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895575C;
      }
      goto L_08955754;
    }
L_08955754:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955AAC;
      }
      goto L_0895575C;
    }
L_0895575C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08955800;
      }
      goto L_08955764;
    }
L_08955764:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955788;
      }
      goto L_0895576C;
    }
L_0895576C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955800;
      }
      goto L_08955788;
    }
L_08955788:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089557F4;
      }
      goto L_089557A0;
    }
L_089557A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089557F4;
      }
      goto L_089557C4;
    }
L_089557C4:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[2]);
    goto L_089557F4;
L_089557F4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895575C;
      }
      goto L_08955800;
    }
L_08955800:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955838;
      }
      goto L_08955808;
    }
L_08955808:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895582C;
      }
      goto L_08955810;
    }
L_08955810:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955838;
      }
      goto L_0895582C;
    }
L_0895582C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955800;
      }
      goto L_08955838;
    }
L_08955838:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089558F4;
      }
      goto L_08955840;
    }
L_08955840:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089558F4;
      }
      goto L_08955848;
    }
L_08955848:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089558F4;
      }
      goto L_08955860;
    }
L_08955860:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089558E4;
      }
      goto L_08955878;
    }
L_08955878:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089558E4;
      }
      goto L_08955890;
    }
L_08955890:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089558E4;
      }
      goto L_089558B4;
    }
L_089558B4:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[2]);
    goto L_089558E4;
L_089558E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955838;
      }
      goto L_089558F4;
    }
L_089558F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895574C;
      }
      goto L_089558FC;
    }
L_089558FC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895590C;
      }
      goto L_08955904;
    }
L_08955904:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955AAC;
      }
      goto L_0895590C;
    }
L_0895590C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08955944;
      }
      goto L_08955914;
    }
L_08955914:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955938;
      }
      goto L_0895591C;
    }
L_0895591C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955944;
      }
      goto L_08955938;
    }
L_08955938:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895590C;
      }
      goto L_08955944;
    }
L_08955944:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089559E8;
      }
      goto L_0895594C;
    }
L_0895594C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08955970;
      }
      goto L_08955954;
    }
L_08955954:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089559E8;
      }
      goto L_08955970;
    }
L_08955970:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089559DC;
      }
      goto L_08955988;
    }
L_08955988:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089559DC;
      }
      goto L_089559AC;
    }
L_089559AC:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[2]);
    goto L_089559DC;
L_089559DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955944;
      }
      goto L_089559E8;
    }
L_089559E8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08955AA4;
      }
      goto L_089559F0;
    }
L_089559F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955AA4;
      }
      goto L_089559F8;
    }
L_089559F8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08955AA4;
      }
      goto L_08955A10;
    }
L_08955A10:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A94;
      }
      goto L_08955A28;
    }
L_08955A28:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955A94;
      }
      goto L_08955A40;
    }
L_08955A40:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A94;
      }
      goto L_08955A64;
    }
L_08955A64:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[2]);
    goto L_08955A94;
L_08955A94:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089559E8;
      }
      goto L_08955AA4;
    }
L_08955AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089558FC;
      }
      goto L_08955AAC;
    }
L_08955AAC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895571C;
      }
      goto L_08955AC0;
    }
L_08955AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955E38;
      }
      goto L_08955AC8;
    }
L_08955AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 6u);
      if (branch_taken) {
          goto L_08955D58;
      }
      goto L_08955B18;
    }
L_08955B18:
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-29668));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[4]);
    goto L_08955B3C;
L_08955B3C:
    ctx.gpr[30] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
        goto L_08955B60;
    }
    goto L_08955B48;
L_08955B48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955B58u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 180u, 0x08951078u>(ctx, &aot_mem) && ctx.pc == 0x08955B58u) goto L_08955B58;
    return;
L_08955B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955B64;
      }
      goto L_08955B60;
    }
L_08955B60:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    goto L_08955B64;
L_08955B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955BE8;
      }
      goto L_08955B80;
    }
L_08955B80:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955C68;
      }
      goto L_08955B88;
    }
L_08955B88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955BD4;
      }
      goto L_08955BA0;
    }
L_08955BA0:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955BD4;
      }
      goto L_08955BC8;
    }
L_08955BC8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955BD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 159u, 0x08950D84u>(ctx, &aot_mem) && ctx.pc == 0x08955BD4u) goto L_08955BD4;
    return;
L_08955BD4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955B88;
      }
      goto L_08955BE0;
    }
L_08955BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955C68;
      }
      goto L_08955BE8;
    }
L_08955BE8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955C68;
      }
      goto L_08955BF0;
    }
L_08955BF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955C5C;
      }
      goto L_08955C08;
    }
L_08955C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955C5C;
      }
      goto L_08955C2C;
    }
L_08955C2C:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08955C5C;
L_08955C5C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955BF0;
      }
      goto L_08955C68;
    }
L_08955C68:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955CE8;
      }
      goto L_08955C70;
    }
L_08955C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08955CE0;
      }
      goto L_08955C80;
    }
L_08955C80:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7492));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(7496))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08955C80;
      }
      goto L_08955CE0;
    }
L_08955CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D20;
      }
      goto L_08955CE8;
    }
L_08955CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08955D20;
      }
      goto L_08955CF8;
    }
L_08955CF8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(7492));
    ctx.gpr[31] = (0x08955D14u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 435u, 0x08952520u>(ctx, &aot_mem) && ctx.pc == 0x08955D14u) goto L_08955D14;
    return;
L_08955D14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7496))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08955CF8;
      }
      goto L_08955D20;
    }
L_08955D20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955D30u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 190u, 0x089512E4u>(ctx, &aot_mem) && ctx.pc == 0x08955D30u) goto L_08955D30;
    return;
L_08955D30:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08955B3C;
      }
      goto L_08955D58;
    }
L_08955D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (56319u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4102));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08955E38;
L_08955E38:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08956138;
      }
      goto L_08955E48;
    }
L_08955E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29664)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29664)));
        goto L_08955E74;
    }
    goto L_08955E74;
L_08955E74:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29664), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[31] = (0x08955E84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B01FF8u>(ctx, &aot_mem) && ctx.pc == 0x08955E84u) goto L_08955E84;
    return;
L_08955E84:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (256u << 16u);
      if (branch_taken) {
          goto L_08956138;
      }
      goto L_08955EC4;
    }
L_08955EC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2560u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[30] = (56319u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[4]);
    goto L_08955EE8;
L_08955EE8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[10] = (4096u << 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[22];
    ctx.gpr[11] = (15u << 16u);
      if (branch_taken) {
          goto L_08955FB4;
      }
      goto L_08955F00;
    }
L_08955F00:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955F5C;
      }
      goto L_08955F0C;
    }
L_08955F0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955FB4;
      }
      goto L_08955F5C;
    }
L_08955F5C:
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[10]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2560u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08955FB4;
L_08955FB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08956004;
      }
      goto L_08955FC0;
    }
L_08955FC0:
    ctx.gpr[4] = (23808u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08956004;
      }
      goto L_08955FF0;
    }
L_08955FF0:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 240u);
        goto L_08956004;
    }
    goto L_08956004;
L_08956004:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895603C;
      }
      goto L_08956010;
    }
L_08956010:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08956028;
      }
      goto L_0895601C;
    }
L_0895601C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08956028u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 190u, 0x089512E4u>(ctx, &aot_mem) && ctx.pc == 0x08956028u) goto L_08956028;
    return;
L_08956028:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895603Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 180u, 0x08951078u>(ctx, &aot_mem) && ctx.pc == 0x0895603Cu) goto L_0895603C;
    return;
L_0895603C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08956070;
      }
      goto L_08956044;
    }
L_08956044:
    ctx.gpr[4] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (ctx.gpr[19] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08956070;
L_08956070:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956090;
      }
      goto L_0895607C;
    }
L_0895607C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08956088u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 435u, 0x08952520u>(ctx, &aot_mem) && ctx.pc == 0x08956088u) goto L_08956088;
    return;
L_08956088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089560A8;
      }
      goto L_08956090;
    }
L_08956090:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    ctx.gpr[31] = (0x089560A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 159u, 0x08950D84u>(ctx, &aot_mem) && ctx.pc == 0x089560A8u) goto L_089560A8;
    return;
L_089560A8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08956128;
      }
      goto L_089560B0;
    }
L_089560B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08956100u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08956100u) goto L_08956100;
    return;
L_08956100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    goto L_08956128;
L_08956128:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08955EE8;
      }
      goto L_08956138;
    }
L_08956138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[5] = (56319u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4102));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (18176u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (21504u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (23808u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (23808u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18432u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18688u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (51456u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[7] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089562B0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 448u, 0x08952724u>(ctx, &aot_mem) && ctx.pc == 0x089562B0u) goto L_089562B0;
    return;
L_089562B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089562D4;
      }
      goto L_089562C0;
    }
L_089562C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089562D4;
      }
      goto L_089562CC;
    }
L_089562CC:
    ctx.gpr[31] = (0x089562D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089562D4u) goto L_089562D4;
    return;
L_089562D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895631C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08956388;
    }
    goto L_08956388;
L_08956388:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089563AC;
      }
      goto L_08956394;
    }
L_08956394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089563C0;
      }
      goto L_089563AC;
    }
L_089563AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_089563C0;
L_089563C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0895644C;
      }
      goto L_089563D4;
    }
L_089563D4:
    ctx.gpr[5] = (4608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(277));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (3840u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0895644C;
L_0895644C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[20] = (256u << 16u);
      if (branch_taken) {
          goto L_08956C60;
      }
      goto L_08956464;
    }
L_08956464:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (255u << 16u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (0u & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_0895648C;
L_0895648C:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(7), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(11), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<12u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<13u>());
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<45u>());
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<77u>());
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<109u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08956504;
      }
      goto L_089564DC;
    }
L_089564DC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (18432u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956504;
L_08956504:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895653C;
      }
      goto L_08956514;
    }
L_08956514:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (18688u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895653C;
L_0895653C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089568E4;
      }
      goto L_08956548;
    }
L_08956548:
    ctx.gpr[4] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089568CC;
      }
      goto L_08956554;
    }
L_08956554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7328)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (53248u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (3840u << 16u);
      if (branch_taken) {
          goto L_08956850;
      }
      goto L_089565A4;
    }
L_089565A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089565B4u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 387u, 0x08A7EEF8u>(ctx, &aot_mem) && ctx.pc == 0x089565B4u) goto L_089565B4;
    return;
L_089565B4:
    ctx.gpr[4] = (7680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 112u);
    ctx.gpr[6] = (49664u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (49920u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[5] & 8u);
    ctx.gpr[6] = (ctx.gpr[6] >> 3u);
    ctx.gpr[7] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (ctx.gpr[5] >> 7u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (50433u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-253));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[13] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[2] = (ctx.gpr[4] & 15u);
    ctx.gpr[11] = (ctx.gpr[4] & 240u);
    ctx.gpr[11] = (ctx.gpr[11] >> 4u);
    ctx.gpr[6] = (ctx.gpr[22] << (ctx.gpr[2] & 31u));
    ctx.gpr[12] = (ctx.gpr[10] & ctx.gpr[20]);
    ctx.gpr[3] = (ctx.gpr[10] >> 8u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[21]);
      if (branch_taken) {
          goto L_089566B0;
      }
      goto L_089566A0;
    }
L_089566A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    goto L_089566B0;
L_089566B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089566C0;
      }
      goto L_089566BC;
    }
L_089566BC:
    ctx.gpr[6] = (0u | 16u);
    goto L_089566C0;
L_089566C0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 112u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089567A4;
      }
      goto L_089566DC;
    }
L_089566DC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[13] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
        goto L_089566E8;
    }
    goto L_089566E8;
L_089566E8:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[12]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[11] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] << (ctx.gpr[11] & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 17 ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[10] & ctx.gpr[20]);
    ctx.gpr[3] = (ctx.gpr[10] >> 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[21]);
      if (branch_taken) {
          goto L_08956788;
      }
      goto L_08956778;
    }
L_08956778:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    goto L_08956788;
L_08956788:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 112u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089566DC;
      }
      goto L_089567A4;
    }
L_089567A4:
    ctx.gpr[4] = (0u | 32u);
    if (ctx.gpr[13] != 0u) {
    ctx.gpr[4] = (0u | 2u);
        goto L_089567B0;
    }
    goto L_089567B0;
L_089567B0:
    ctx.gpr[5] = (45056u << 16u);
    ctx.gpr[5] = (ctx.gpr[12] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (45312u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[3] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (50176u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (51968u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08956838u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08956838u) goto L_08956838;
    return;
L_08956838:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895684Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0895684Cu) goto L_0895684C;
    return;
L_0895684C:
    ctx.gpr[4] = (3840u << 16u);
    goto L_08956850;
L_08956850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956870;
      }
      goto L_08956864;
    }
L_08956864:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089568A0;
      }
      goto L_08956870;
    }
L_08956870:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089568A0;
L_089568A0:
    ctx.gpr[4] = (2560u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089568E4;
      }
      goto L_089568CC;
    }
L_089568CC:
    ctx.gpr[4] = (7680u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089568E4;
L_089568E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (1028u << 16u);
      if (branch_taken) {
          goto L_08956954;
      }
      goto L_089568FC;
    }
L_089568FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(824)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (18176u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (7424u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08956954;
L_08956954:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[16] = (ctx.gpr[16] & 32767u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08956BB4;
      }
      goto L_08956968;
    }
L_08956968:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23416)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08956B20;
      }
      goto L_0895697C;
    }
L_0895697C:
    ctx.set_vfpu_scalar_bits_ct<13u>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits_ct<45u>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits_ct<14u>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.execute_vfpu_vx2i(12u, 13u, 2u, 3u);
    ctx.execute_vfpu_vx2i(13u, 14u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<13u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 2u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<52u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 52u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956BA0;
      }
      goto L_089569C4;
    }
L_089569C4:
    ctx.execute_vfpu_vcmp_ct<53u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 53u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956BA0;
      }
      goto L_089569F0;
    }
L_089569F0:
    ctx.execute_vfpu_vcmp_ct<54u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 54u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956BA0;
      }
      goto L_08956A1C;
    }
L_08956A1C:
    ctx.execute_vfpu_vcmp_ct<55u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 55u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956BA0;
      }
      goto L_08956A48;
    }
L_08956A48:
    ctx.execute_vfpu_vcmp_ct<48u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 48u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08956AF8;
      }
      goto L_08956A74;
    }
L_08956A74:
    ctx.execute_vfpu_vcmp_ct<49u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 49u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08956AF8;
      }
      goto L_08956AA0;
    }
L_08956AA0:
    ctx.execute_vfpu_vcmp_ct<50u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 50u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08956AF8;
      }
      goto L_08956ACC;
    }
L_08956ACC:
    ctx.execute_vfpu_vcmp_ct<51u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 51u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956B20;
      }
      goto L_08956AF8;
    }
L_08956AF8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08956B04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 171u, 0x08A49750u>(ctx, &aot_mem) && ctx.pc == 0x08956B04u) goto L_08956B04;
    return;
L_08956B04:
    ctx.gpr[4] = (39680u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08956BA0;
      }
      goto L_08956B20;
    }
L_08956B20:
    ctx.gpr[5] = (4608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(277));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08956B88;
      }
      goto L_08956B40;
    }
L_08956B40:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[23] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[23] & ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08956B88;
L_08956B88:
    ctx.gpr[4] = (ctx.gpr[16] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956BA0;
L_08956BA0:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08956BCC;
      }
      goto L_08956BB4;
    }
L_08956BB4:
    ctx.gpr[4] = (ctx.gpr[16] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956BCC;
L_08956BCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956C3C;
      }
      goto L_08956BE4;
    }
L_08956BE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(824)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956C3C;
L_08956C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956C50;
      }
      goto L_08956C48;
    }
L_08956C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08956C54;
      }
      goto L_08956C50;
    }
L_08956C50:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    goto L_08956C54;
L_08956C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895648C;
      }
      goto L_08956C60;
    }
L_08956C60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956CA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08956CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 448u, 0x08952724u>(ctx, &aot_mem) && ctx.pc == 0x08956CCCu) goto L_08956CCC;
    return;
L_08956CCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08956CF8;
      }
      goto L_08956CE8;
    }
L_08956CE8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08956CEC;
L_08956CEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
        goto L_08956CEC;
    }
    goto L_08956CF8;
L_08956CF8:
    ctx.gpr[31] = (0x08956D00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 464u, 0x08AC7228u>(ctx, &aot_mem) && ctx.pc == 0x08956D00u) goto L_08956D00;
    return;
L_08956D00:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
      if (branch_taken) {
          goto L_08956DAC;
      }
      goto L_08956D20;
    }
L_08956D20:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08956DA0;
      }
      goto L_08956D34;
    }
L_08956D34:
    ctx.gpr[2] = (ctx.gpr[29] | 0u);
    goto L_08956D38;
L_08956D38:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08956D4C;
      }
      goto L_08956D44;
    }
L_08956D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D8C;
      }
      goto L_08956D4C;
    }
L_08956D4C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[11] = (ctx.gpr[5] - ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D84;
      }
      goto L_08956D74;
    }
L_08956D74:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D8C;
      }
      goto L_08956D84;
    }
L_08956D84:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    goto L_08956D8C;
L_08956D8C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08956D38;
      }
      goto L_08956DA0;
    }
L_08956DA0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08956D20;
      }
      goto L_08956DAC;
    }
L_08956DAC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2226u << 16u);
      if (branch_taken) {
          goto L_08956E18;
      }
      goto L_08956DBC;
    }
L_08956DBC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32108));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(500));
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_08956DC8;
L_08956DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956E04;
      }
      goto L_08956DD4;
    }
L_08956DD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08956DE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08956DE8u) goto L_08956DE8;
    return;
L_08956DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    goto L_08956E04;
L_08956E04:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08956DC8;
      }
      goto L_08956E18;
    }
L_08956E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08956EDC;
      }
      goto L_08956E38;
    }
L_08956E38:
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(500));
    goto L_08956E40;
L_08956E40:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08956E58;
      }
      goto L_08956E50;
    }
L_08956E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08956E98;
      }
      goto L_08956E58;
    }
L_08956E58:
    ctx.gpr[7] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08956E80;
      }
      goto L_08956E64;
    }
L_08956E64:
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x08956E74u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08956E74u) goto L_08956E74;
    return;
L_08956E74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956E98;
      }
      goto L_08956E80;
    }
L_08956E80:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08956E98;
      }
      goto L_08956E94;
    }
L_08956E94:
    ctx.gpr[4] = (0u | 1u);
    goto L_08956E98;
L_08956E98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956ECC;
      }
      goto L_08956EA0;
    }
L_08956EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    goto L_08956ECC;
L_08956ECC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08956E40;
      }
      goto L_08956EDC;
    }
L_08956EDC:
    ctx.gpr[31] = (0x08956EE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 448u, 0x08952724u>(ctx, &aot_mem) && ctx.pc == 0x08956EE4u) goto L_08956EE4;
    return;
L_08956EE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956F08:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29716)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29712), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29720)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29708), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29700), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29692)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29688), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956FC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 204 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08957090;
      }
      goto L_08956FEC;
    }
L_08956FEC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 108 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0895701C;
    }
    goto L_08956FF8;
L_08956FF8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895700C;
      }
      goto L_08957004;
    }
L_08957004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(94));
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_0895700C;
    }
L_0895700C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_0895701C;
    }
L_0895701C:
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957070;
      }
      goto L_0895706C;
    }
L_0895706C:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08957070;
L_08957070:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-108));
    goto L_08957080;
L_08957080:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08957144;
      }
      goto L_08957090;
    }
L_08957090:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 230 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_089570C4;
      }
      goto L_089570B4;
    }
L_089570B4:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-204));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08957130;
      }
      goto L_089570C4;
    }
L_089570C4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[11] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(520)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957120;
      }
      goto L_0895711C;
    }
L_0895711C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08957120;
L_08957120:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-230));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_08957130;
L_08957130:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[2] = (ctx.gpr[7] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08957144;
      }
      goto L_08957144;
    }
L_08957144:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895714C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08957154;
L_08957154:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895717C;
      }
      goto L_08957160;
    }
L_08957160:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08957154;
      }
      goto L_08957174;
    }
L_08957174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895717C;
      }
      goto L_0895717C;
    }
L_0895717C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957198u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089571AC;
L_08957198:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089571AC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    goto L_089571B4;
L_089571B4:
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089571B4;
      }
      goto L_089571D8;
    }
L_089571D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089571E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957204u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    goto L_0895714C;
L_08957204:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957224;
      }
      goto L_08957210;
    }
L_08957210:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08957224;
L_08957224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895723C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08957250u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08957250u) goto L_08957250;
    return;
L_08957250:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (49016u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089572F4;
      }
      goto L_08957284;
    }
L_08957284:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089572F4;
      }
      goto L_089572B8;
    }
L_089572B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089572F4;
      }
      goto L_089572EC;
    }
L_089572EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089572F8;
      }
      goto L_089572F4;
    }
L_089572F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089572F8;
L_089572F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957304:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0895730C;
L_0895730C:
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895730C;
      }
      goto L_08957330;
    }
L_08957330:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089573A0;
      }
      goto L_0895738C;
    }
L_0895738C:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089573BC;
      }
      goto L_089573A0;
    }
L_089573A0:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[21] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089573BC;
L_089573BC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (2229u << 16u);
    goto L_089573C8;
L_089573C8:
    ctx.gpr[18] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089573DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089573DCu) goto L_089573DC;
    return;
L_089573DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957410;
      }
      goto L_089573E4;
    }
L_089573E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089573F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895723C;
L_089573F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957408;
      }
      goto L_089573F8;
    }
L_089573F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08957418;
      }
      goto L_08957408;
    }
L_08957408:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08957418;
      }
      goto L_08957410;
    }
L_08957410:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    goto L_08957418;
L_08957418:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089573C8;
      }
      goto L_0895742C;
    }
L_0895742C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957450:
    ctx.gpr[8] = (0u | 0u);
    goto L_08957454;
L_08957454:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957454;
      }
      goto L_08957468;
    }
L_08957468:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08957474;
L_08957474:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089574A0;
      }
      goto L_0895747C;
    }
L_0895747C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_089574A0;
      }
      goto L_08957488;
    }
L_08957488:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08957474;
      }
      goto L_089574A0;
    }
L_089574A0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089574AC:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089574B4;
L_089574B4:
    ctx.gpr[7] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089574D0;
      }
      goto L_089574C8;
    }
L_089574C8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_089574D0;
L_089574D0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089574B4;
      }
      goto L_089574E4;
    }
L_089574E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089574EC:
    ctx.gpr[7] = (0u | 0u);
    goto L_089574F0;
L_089574F0:
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08957524;
      }
      goto L_08957504;
    }
L_08957504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895751C;
      }
      goto L_08957514;
    }
L_08957514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0895753C;
      }
      goto L_0895751C;
    }
L_0895751C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895753C;
      }
      goto L_08957524;
    }
L_08957524:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089574F0;
      }
      goto L_08957538;
    }
L_08957538:
    ctx.gpr[2] = (0u | 0u);
    goto L_0895753C;
L_0895753C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (50588u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0895756C;
L_0895756C:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895756C;
      }
      goto L_089575B0;
    }
L_089575B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089575B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (50588u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    goto L_08957624;
L_08957624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_08957630;
    }
L_08957630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_08957648;
    }
L_08957648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08957658u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08957658u) goto L_08957658;
    return;
L_08957658:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089576C8;
      }
      goto L_08957664;
    }
L_08957664:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089576B0;
      }
      goto L_089576A8;
    }
L_089576A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_089576B4;
      }
      goto L_089576B0;
    }
L_089576B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_089576B4;
L_089576B4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_089576C8;
    }
L_089576C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_089576F0;
L_089576F0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08957624;
      }
      goto L_08957704;
    }
L_08957704:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895773C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08957770u) goto L_08957770;
    return;
L_08957770:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957800;
      }
      goto L_0895777C;
    }
L_0895777C:
    ctx.gpr[7] = (0u | 0u);
    goto L_08957780;
L_08957780:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957780;
      }
      goto L_08957794;
    }
L_08957794:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089577A0;
L_089577A0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089577D4;
      }
      goto L_089577A8;
    }
L_089577A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089577D4;
      }
      goto L_089577B4;
    }
L_089577B4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089577A0;
      }
      goto L_089577D4;
    }
L_089577D4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08957800;
L_08957800:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0895781C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (50588u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08957838;
L_08957838:
    ctx.gpr[7] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08957880;
      }
      goto L_08957854;
    }
L_08957854:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08957880;
L_08957880:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957838;
      }
      goto L_08957894;
    }
L_08957894:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895789C:
    ctx.gpr[7] = (0u | 0u);
    goto L_089578A0;
L_089578A0:
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089578D8;
      }
      goto L_089578BC;
    }
L_089578BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089578D0;
      }
      goto L_089578C8;
    }
L_089578C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089578F0;
      }
      goto L_089578D0;
    }
L_089578D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089578F0;
      }
      goto L_089578D8;
    }
L_089578D8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089578A0;
      }
      goto L_089578EC;
    }
L_089578EC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089578F0;
L_089578F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089578F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957908u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08956FC8;
L_08957908:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957938u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32000));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08957938u) goto L_08957938;
    return;
L_08957938:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08957948;
L_08957948:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957948;
      }
      goto L_08957968;
    }
L_08957968:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(527), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_08957984;
L_08957984:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 106 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957984;
      }
      goto L_089579A4;
    }
L_089579A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(537), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089579D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6832), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(526)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089579F8;
      }
      goto L_089579F0;
    }
L_089579F0:
    ctx.gpr[31] = (0x089579F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 628u, 0x0887B990u>(ctx, &aot_mem) && ctx.pc == 0x089579F8u) goto L_089579F8;
    return;
L_089579F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(537)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A44;
      }
      goto L_08957A04;
    }
L_08957A04:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7126)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08957A44;
      }
      goto L_08957A18;
    }
L_08957A18:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08957A44;
      }
      goto L_08957A28;
    }
L_08957A28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08957A44;
L_08957A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(528)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957A74;
      }
      goto L_08957A5C;
    }
L_08957A5C:
    ctx.gpr[31] = (0x08957A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08957B20;
L_08957A64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A5C;
      }
      goto L_08957A6C;
    }
L_08957A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B10;
      }
      goto L_08957A74;
    }
L_08957A74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(527)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B10;
      }
      goto L_08957A80;
    }
L_08957A80:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25440));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08957AA4;
      }
      goto L_08957A94;
    }
L_08957A94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08957AA8;
      }
      goto L_08957AA0;
    }
L_08957AA0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08957AA4;
L_08957AA4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08957AA8;
L_08957AA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B10;
      }
      goto L_08957AB0;
    }
L_08957AB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[16] = (2269u << 16u);
    goto L_08957AC4;
L_08957AC4:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957AE4;
      }
      goto L_08957AE0;
    }
L_08957AE0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    goto L_08957AE4;
L_08957AE4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957AC4;
      }
      goto L_08957AFC;
    }
L_08957AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B10;
      }
      goto L_08957B08;
    }
L_08957B08:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3600));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_08957B10;
L_08957B10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957B20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[5] & 32768u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B6C;
      }
      goto L_08957B60;
    }
L_08957B60:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08957B70;
      }
      goto L_08957B6C;
    }
L_08957B6C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(0u));
    goto L_08957B70;
L_08957B70:
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08957B98;
      }
      goto L_08957B7C;
    }
L_08957B7C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B98;
      }
      goto L_08957B88;
    }
L_08957B88:
    ctx.gpr[31] = (0x08957B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 236u, 0x08958DE0u>(ctx, &aot_mem) && ctx.pc == 0x08957B90u) goto L_08957B90;
    return;
L_08957B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957B98;
    }
L_08957B98:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BB4;
      }
      goto L_08957BA4;
    }
L_08957BA4:
    ctx.gpr[31] = (0x08957BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 95u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x08957BACu) goto L_08957BAC;
    return;
L_08957BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957BB4;
    }
L_08957BB4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 305 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BD0;
      }
      goto L_08957BC0;
    }
L_08957BC0:
    ctx.gpr[31] = (0x08957BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 734u, 0x0895F764u>(ctx, &aot_mem) && ctx.pc == 0x08957BC8u) goto L_08957BC8;
    return;
L_08957BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957BD0;
    }
L_08957BD0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 405 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BEC;
      }
      goto L_08957BDC;
    }
L_08957BDC:
    ctx.gpr[31] = (0x08957BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 58u, 0x089DC6C8u>(ctx, &aot_mem) && ctx.pc == 0x08957BE4u) goto L_08957BE4;
    return;
L_08957BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957BEC;
    }
L_08957BEC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 505 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C08;
      }
      goto L_08957BF8;
    }
L_08957BF8:
    ctx.gpr[31] = (0x08957C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 578u, 0x089DED5Cu>(ctx, &aot_mem) && ctx.pc == 0x08957C00u) goto L_08957C00;
    return;
L_08957C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957C08;
    }
L_08957C08:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 605 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C24;
      }
      goto L_08957C14;
    }
L_08957C14:
    ctx.gpr[31] = (0x08957C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 314u, 0x08A1E0ECu>(ctx, &aot_mem) && ctx.pc == 0x08957C1Cu) goto L_08957C1C;
    return;
L_08957C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957C24;
    }
L_08957C24:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 705 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C40;
      }
      goto L_08957C30;
    }
L_08957C30:
    ctx.gpr[31] = (0x08957C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 86u, 0x08A20614u>(ctx, &aot_mem) && ctx.pc == 0x08957C38u) goto L_08957C38;
    return;
L_08957C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957C40;
    }
L_08957C40:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 805 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C5C;
      }
      goto L_08957C4C;
    }
L_08957C4C:
    ctx.gpr[31] = (0x08957C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 435u, 0x08A21F90u>(ctx, &aot_mem) && ctx.pc == 0x08957C54u) goto L_08957C54;
    return;
L_08957C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957C5C;
    }
L_08957C5C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 905 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C78;
      }
      goto L_08957C68;
    }
L_08957C68:
    ctx.gpr[31] = (0x08957C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 324u, 0x089E1C90u>(ctx, &aot_mem) && ctx.pc == 0x08957C70u) goto L_08957C70;
    return;
L_08957C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957C78;
    }
L_08957C78:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1005 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C94;
      }
      goto L_08957C84;
    }
L_08957C84:
    ctx.gpr[31] = (0x08957C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 464u, 0x089E60BCu>(ctx, &aot_mem) && ctx.pc == 0x08957C8Cu) goto L_08957C8C;
    return;
L_08957C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957C94;
    }
L_08957C94:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1105 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CB0;
      }
      goto L_08957CA0;
    }
L_08957CA0:
    ctx.gpr[31] = (0x08957CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 46u, 0x088E42C4u>(ctx, &aot_mem) && ctx.pc == 0x08957CA8u) goto L_08957CA8;
    return;
L_08957CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957CB0;
    }
L_08957CB0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1205 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CCC;
      }
      goto L_08957CBC;
    }
L_08957CBC:
    ctx.gpr[31] = (0x08957CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 494u, 0x088E6324u>(ctx, &aot_mem) && ctx.pc == 0x08957CC4u) goto L_08957CC4;
    return;
L_08957CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957CCC;
    }
L_08957CCC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1305 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CE8;
      }
      goto L_08957CD8;
    }
L_08957CD8:
    ctx.gpr[31] = (0x08957CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 461u, 0x08991BE8u>(ctx, &aot_mem) && ctx.pc == 0x08957CE0u) goto L_08957CE0;
    return;
L_08957CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957CE8;
    }
L_08957CE8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1405 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D04;
      }
      goto L_08957CF4;
    }
L_08957CF4:
    ctx.gpr[31] = (0x08957CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 110u, 0x08994928u>(ctx, &aot_mem) && ctx.pc == 0x08957CFCu) goto L_08957CFC;
    return;
L_08957CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957D04;
    }
L_08957D04:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1497 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D20;
      }
      goto L_08957D10;
    }
L_08957D10:
    ctx.gpr[31] = (0x08957D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 198u, 0x08A31474u>(ctx, &aot_mem) && ctx.pc == 0x08957D18u) goto L_08957D18;
    return;
L_08957D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957D20;
    }
L_08957D20:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D3C;
      }
      goto L_08957D2C;
    }
L_08957D2C:
    ctx.gpr[31] = (0x08957D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 70u, 0x0897C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08957D34u) goto L_08957D34;
    return;
L_08957D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957D3C;
    }
L_08957D3C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1700 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D50;
      }
      goto L_08957D48;
    }
L_08957D48:
    ctx.gpr[31] = (0x08957D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 445u, 0x08862B14u>(ctx, &aot_mem) && ctx.pc == 0x08957D50u) goto L_08957D50;
    return;
L_08957D50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957D5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08957D74;
      }
      goto L_08957D68;
    }
L_08957D68:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08957D7C;
      }
      goto L_08957D74;
    }
L_08957D74:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08957D7C;
L_08957D7C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D8C;
      }
      goto L_08957D84;
    }
L_08957D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08957D8C;
L_08957D8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957D94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957DB0;
      }
      goto L_08957DAC;
    }
L_08957DAC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08957DB0;
L_08957DB0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08957F20;
      }
      goto L_08957DE8;
    }
L_08957DE8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957E0C;
    }
L_08957E0C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957E18;
    }
L_08957E18:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957E38;
    }
L_08957E38:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957E64;
    }
L_08957E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957E88;
    }
L_08957E88:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0x0000FF00u) | ((ctx.gpr[8] & 0x000000FFu) << 8u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957EB4;
    }
L_08957EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0x0000FF00u) | ((ctx.gpr[8] & 0x000000FFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957EF8;
    }
L_08957EF8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957F20;
    }
L_08957F20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08957F38u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089578F8;
L_08957F38:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08957F3C;
L_08957F3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2269u << 16u);
      if (branch_taken) {
          goto L_08957FB4;
      }
      goto L_08957F88;
    }
L_08957F88:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    goto L_08957F8C;
L_08957F8C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957FA0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089578F8;
L_08957FA0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08957F8C;
      }
      goto L_08957FB4;
    }
L_08957FB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957FD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    ctx.pc = 0x08958000u; return;
}

void recomp_unit_0084(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0084_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_84(Runtime &runtime) {
    runtime.register_generated_unit(84u, 0x08954000u, 16384u, &recomp_unit_0084, &recomp_unit_0084_entry);
    runtime.register_function(0x08954000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895400Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954018u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895402Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954038u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895403Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954044u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954060u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954068u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954070u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954078u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954084u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954090u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954098u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895410Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954204u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954208u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954210u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895421Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954220u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954228u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895422Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954244u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954250u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954254u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895425Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954268u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895426Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954274u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954278u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954280u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895428Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954298u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954300u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954308u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954318u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954324u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895432Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954344u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895434Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954364u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895436Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954374u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954384u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895438Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954430u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954434u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895443Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954448u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954450u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895446Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954504u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895452Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954558u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954564u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954578u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954580u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954594u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954628u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895463Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954644u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954658u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954700u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954708u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895471Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895474Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954760u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954830u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954844u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954904u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895490Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954918u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895493Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954948u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954954u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954960u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954968u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954970u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954ABCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954ADCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955008u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955020u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955044u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955074u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955084u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895508Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955094u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955108u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955110u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955118u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955130u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955148u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955170u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895517Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895518Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955194u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955204u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895520Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955214u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955230u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955248u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895526Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895529Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955308u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955320u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955344u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955374u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955384u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895538Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955394u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955408u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955410u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955418u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955434u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955440u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955448u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955450u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955468u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955480u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955548u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955550u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955560u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895557Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955588u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955598u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955718u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895571Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895574Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955754u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895575Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955764u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895576Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955788u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955800u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955808u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955810u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895582Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955838u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955840u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955848u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955860u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955878u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955890u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955904u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895590Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955914u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895591Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955938u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955944u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895594Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955954u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955970u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955988u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956004u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956010u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895601Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956028u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895603Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956044u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956070u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895607Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956088u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956090u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956100u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956128u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956138u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895631Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956388u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956394u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895644Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956464u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895648Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956504u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956514u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895653Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956548u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956554u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956778u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956788u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956838u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895684Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956850u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956864u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956870u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956954u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956968u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895697Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956ACCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956ECCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957004u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895700Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895701Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895706Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957070u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957080u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957090u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895711Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957120u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957130u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957144u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895714Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957154u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957160u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895717Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957184u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957198u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957204u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957210u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957224u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895723Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957250u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957284u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957304u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895730Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957330u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957338u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895738Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957408u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957410u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957418u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895742Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957450u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957454u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957468u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957474u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895747Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957488u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957504u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957514u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895751Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957524u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957538u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895753Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957544u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895756Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957624u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957630u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957648u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957658u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957664u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957704u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895773Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957770u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895777Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957780u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957794u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957800u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895781Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957838u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957880u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957894u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895789Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957908u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957914u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957938u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957948u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957968u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957984u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FD8u, &recomp_unit_0084, "recomp_unit_0084");
}
} // namespace psprecomp
