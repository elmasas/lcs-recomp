#include "lcs_controls.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0097[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78,
    79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0,
    93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110,
    0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0,
    0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166,
    0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 171, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 207, 0,
    208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 214, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 225, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0,
    0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0,
    253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0,
    0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 308, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0,
    0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 342, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 354, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 360, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0,
    374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 385, 386, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0,
    0, 394, 0, 395, 396, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411,
    0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 419, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 424, 425, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 441, 0, 442, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453,
    0, 454, 0, 455, 0, 456, 457, 0, 458, 0, 459, 0, 460, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0,
    0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0,
    493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 502, 0,
    0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0,
    509, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515,
    0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0,
    525, 526, 0, 527, 0, 528, 0, 529, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0,
    552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0,
    0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0,
    0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 578, 579, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0,
    0, 589, 0, 0, 590, 0, 0, 591, 0, 592, 593, 0, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0,
    0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0,
    0, 605, 0, 0, 0, 606, 0, 607, 0, 0, 0, 608, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612,
    0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0,
    619, 0, 0, 0, 620, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625,
    0, 0, 626, 0, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 631, 0, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0,
    0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0,
    640, 0, 641, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0,
    0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 656,
};
void recomp_unit_0097_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08988000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0097[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08988000;
    case 2u: goto L_08988024;
    case 3u: goto L_0898802C;
    case 4u: goto L_08988038;
    case 5u: goto L_08988040;
    case 6u: goto L_08988054;
    case 7u: goto L_08988060;
    case 8u: goto L_08988080;
    case 9u: goto L_08988090;
    case 10u: goto L_089880A4;
    case 11u: goto L_089880D4;
    case 12u: goto L_089880F4;
    case 13u: goto L_08988100;
    case 14u: goto L_0898812C;
    case 15u: goto L_08988174;
    case 16u: goto L_08988188;
    case 17u: goto L_08988194;
    case 18u: goto L_089881AC;
    case 19u: goto L_089881B8;
    case 20u: goto L_089881CC;
    case 21u: goto L_089881E4;
    case 22u: goto L_089881EC;
    case 23u: goto L_089881F4;
    case 24u: goto L_08988214;
    case 25u: goto L_0898821C;
    case 26u: goto L_08988280;
    case 27u: goto L_08988288;
    case 28u: goto L_08988294;
    case 29u: goto L_0898829C;
    case 30u: goto L_089882D8;
    case 31u: goto L_08988304;
    case 32u: goto L_0898830C;
    case 33u: goto L_08988374;
    case 34u: goto L_0898837C;
    case 35u: goto L_0898838C;
    case 36u: goto L_089883BC;
    case 37u: goto L_089883C8;
    case 38u: goto L_089883D4;
    case 39u: goto L_089883E4;
    case 40u: goto L_089883F0;
    case 41u: goto L_089883F8;
    case 42u: goto L_08988400;
    case 43u: goto L_08988438;
    case 44u: goto L_08988450;
    case 45u: goto L_08988460;
    case 46u: goto L_08988480;
    case 47u: goto L_08988490;
    case 48u: goto L_089884A0;
    case 49u: goto L_089884A8;
    case 50u: goto L_089884B8;
    case 51u: goto L_089884C8;
    case 52u: goto L_08988520;
    case 53u: goto L_08988530;
    case 54u: goto L_08988554;
    case 55u: goto L_08988580;
    case 56u: goto L_0898858C;
    case 57u: goto L_089885C8;
    case 58u: goto L_089885D0;
    case 59u: goto L_089885D8;
    case 60u: goto L_08988658;
    case 61u: goto L_08988668;
    case 62u: goto L_0898867C;
    case 63u: goto L_089886A4;
    case 64u: goto L_089886C8;
    case 65u: goto L_08988734;
    case 66u: goto L_08988748;
    case 67u: goto L_08988760;
    case 68u: goto L_0898876C;
    case 69u: goto L_08988780;
    case 70u: goto L_08988794;
    case 71u: goto L_0898879C;
    case 72u: goto L_089887AC;
    case 73u: goto L_089887B0;
    case 74u: goto L_089887C0;
    case 75u: goto L_089887D4;
    case 76u: goto L_089887D8;
    case 77u: goto L_089887E8;
    case 78u: goto L_089887FC;
    case 79u: goto L_08988800;
    case 80u: goto L_08988810;
    case 81u: goto L_08988828;
    case 82u: goto L_0898882C;
    case 83u: goto L_0898883C;
    case 84u: goto L_08988854;
    case 85u: goto L_0898885C;
    case 86u: goto L_08988894;
    case 87u: goto L_089888B0;
    case 88u: goto L_089889C0;
    case 89u: goto L_089889F4;
    case 90u: goto L_08988A48;
    case 91u: goto L_08988A68;
    case 92u: goto L_08988A74;
    case 93u: goto L_08988A80;
    case 94u: goto L_08988A8C;
    case 95u: goto L_08988AA4;
    case 96u: goto L_08988AB8;
    case 97u: goto L_08988AC8;
    case 98u: goto L_08988B30;
    case 99u: goto L_08988B68;
    case 100u: goto L_08988B9C;
    case 101u: goto L_08988BD0;
    case 102u: goto L_08988C04;
    case 103u: goto L_08988C0C;
    case 104u: goto L_08988C28;
    case 105u: goto L_08988C30;
    case 106u: goto L_08988C38;
    case 107u: goto L_08988C64;
    case 108u: goto L_08988C6C;
    case 109u: goto L_08988C74;
    case 110u: goto L_08988C7C;
    case 111u: goto L_08988C88;
    case 112u: goto L_08988C94;
    case 113u: goto L_08988CA0;
    case 114u: goto L_08988CBC;
    case 115u: goto L_08988CDC;
    case 116u: goto L_08988CE8;
    case 117u: goto L_08988D54;
    case 118u: goto L_08988D84;
    case 119u: goto L_08988D8C;
    case 120u: goto L_08988DC8;
    case 121u: goto L_08988DEC;
    case 122u: goto L_08988E20;
    case 123u: goto L_08988E3C;
    case 124u: goto L_08988E70;
    case 125u: goto L_08988E78;
    case 126u: goto L_08988E7C;
    case 127u: goto L_08988EAC;
    case 128u: goto L_08988EC8;
    case 129u: goto L_08988EFC;
    case 130u: goto L_08988F04;
    case 131u: goto L_08988F38;
    case 132u: goto L_08988F70;
    case 133u: goto L_08988F74;
    case 134u: goto L_08988FA4;
    case 135u: goto L_08988FC0;
    case 136u: goto L_08988FF4;
    case 137u: goto L_08988FFC;
    case 138u: goto L_08989030;
    case 139u: goto L_08989058;
    case 140u: goto L_08989088;
    case 141u: goto L_089890A4;
    case 142u: goto L_089890D8;
    case 143u: goto L_089890E0;
    case 144u: goto L_089890EC;
    case 145u: goto L_089890F8;
    case 146u: goto L_08989104;
    case 147u: goto L_08989110;
    case 148u: goto L_08989124;
    case 149u: goto L_089891BC;
    case 150u: goto L_089891C8;
    case 151u: goto L_089891D4;
    case 152u: goto L_089891DC;
    case 153u: goto L_08989210;
    case 154u: goto L_08989254;
    case 155u: goto L_08989270;
    case 156u: goto L_089892A4;
    case 157u: goto L_089892AC;
    case 158u: goto L_089892E0;
    case 159u: goto L_08989314;
    case 160u: goto L_08989320;
    case 161u: goto L_0898932C;
    case 162u: goto L_08989338;
    case 163u: goto L_08989344;
    case 164u: goto L_08989358;
    case 165u: goto L_089893F0;
    case 166u: goto L_089893FC;
    case 167u: goto L_08989408;
    case 168u: goto L_08989410;
    case 169u: goto L_08989434;
    case 170u: goto L_0898945C;
    case 171u: goto L_08989460;
    case 172u: goto L_08989468;
    case 173u: goto L_08989490;
    case 174u: goto L_089894BC;
    case 175u: goto L_089894F4;
    case 176u: goto L_08989514;
    case 177u: goto L_08989558;
    case 178u: goto L_08989574;
    case 179u: goto L_08989590;
    case 180u: goto L_089895CC;
    case 181u: goto L_089895EC;
    case 182u: goto L_08989608;
    case 183u: goto L_08989638;
    case 184u: goto L_08989650;
    case 185u: goto L_0898966C;
    case 186u: goto L_0898969C;
    case 187u: goto L_089896A4;
    case 188u: goto L_089896CC;
    case 189u: goto L_089896FC;
    case 190u: goto L_08989720;
    case 191u: goto L_0898972C;
    case 192u: goto L_08989738;
    case 193u: goto L_08989744;
    case 194u: goto L_08989750;
    case 195u: goto L_0898975C;
    case 196u: goto L_08989770;
    case 197u: goto L_089897D0;
    case 198u: goto L_089897E4;
    case 199u: goto L_08989828;
    case 200u: goto L_08989844;
    case 201u: goto L_08989884;
    case 202u: goto L_089898C0;
    case 203u: goto L_089898CC;
    case 204u: goto L_089898D8;
    case 205u: goto L_089898E4;
    case 206u: goto L_089898F0;
    case 207u: goto L_089898F8;
    case 208u: goto L_08989900;
    case 209u: goto L_08989908;
    case 210u: goto L_08989914;
    case 211u: goto L_0898994C;
    case 212u: goto L_08989958;
    case 213u: goto L_08989994;
    case 214u: goto L_089899A0;
    case 215u: goto L_089899A4;
    case 216u: goto L_089899C4;
    case 217u: goto L_089899D4;
    case 218u: goto L_089899E0;
    case 219u: goto L_089899E8;
    case 220u: goto L_089899F0;
    case 221u: goto L_089899F4;
    case 222u: goto L_08989A4C;
    case 223u: goto L_08989A58;
    case 224u: goto L_08989A80;
    case 225u: goto L_08989A8C;
    case 226u: goto L_08989A90;
    case 227u: goto L_08989AB0;
    case 228u: goto L_08989AC0;
    case 229u: goto L_08989AD0;
    case 230u: goto L_08989AF0;
    case 231u: goto L_08989B18;
    case 232u: goto L_08989B28;
    case 233u: goto L_08989B30;
    case 234u: goto L_08989B3C;
    case 235u: goto L_08989B44;
    case 236u: goto L_08989B5C;
    case 237u: goto L_08989B70;
    case 238u: goto L_08989B94;
    case 239u: goto L_08989B9C;
    case 240u: goto L_08989BB4;
    case 241u: goto L_08989BC0;
    case 242u: goto L_08989BD8;
    case 243u: goto L_08989BEC;
    case 244u: goto L_08989BF8;
    case 245u: goto L_08989C04;
    case 246u: goto L_08989C1C;
    case 247u: goto L_08989C30;
    case 248u: goto L_08989C38;
    case 249u: goto L_08989C84;
    case 250u: goto L_08989C90;
    case 251u: goto L_08989CEC;
    case 252u: goto L_08989CF8;
    case 253u: goto L_08989D00;
    case 254u: goto L_08989D0C;
    case 255u: goto L_08989D14;
    case 256u: goto L_08989D38;
    case 257u: goto L_08989D44;
    case 258u: goto L_08989D74;
    case 259u: goto L_08989DA8;
    case 260u: goto L_08989DB0;
    case 261u: goto L_08989DCC;
    case 262u: goto L_08989DD4;
    case 263u: goto L_08989DDC;
    case 264u: goto L_08989DE8;
    case 265u: goto L_08989DF0;
    case 266u: goto L_08989DF8;
    case 267u: goto L_08989E00;
    case 268u: goto L_08989E30;
    case 269u: goto L_08989E3C;
    case 270u: goto L_08989E44;
    case 271u: goto L_08989E4C;
    case 272u: goto L_08989E6C;
    case 273u: goto L_08989E90;
    case 274u: goto L_08989EAC;
    case 275u: goto L_08989EBC;
    case 276u: goto L_08989EC4;
    case 277u: goto L_08989EEC;
    case 278u: goto L_08989EF4;
    case 279u: goto L_08989F0C;
    case 280u: goto L_08989F14;
    case 281u: goto L_08989F20;
    case 282u: goto L_08989F28;
    case 283u: goto L_08989F34;
    case 284u: goto L_08989F3C;
    case 285u: goto L_08989F4C;
    case 286u: goto L_08989F70;
    case 287u: goto L_08989FB8;
    case 288u: goto L_08989FCC;
    case 289u: goto L_0898A010;
    case 290u: goto L_0898A020;
    case 291u: goto L_0898A028;
    case 292u: goto L_0898A060;
    case 293u: goto L_0898A068;
    case 294u: goto L_0898A094;
    case 295u: goto L_0898A09C;
    case 296u: goto L_0898A0A4;
    case 297u: goto L_0898A0B4;
    case 298u: goto L_0898A0D4;
    case 299u: goto L_0898A0DC;
    case 300u: goto L_0898A0E8;
    case 301u: goto L_0898A104;
    case 302u: goto L_0898A110;
    case 303u: goto L_0898A12C;
    case 304u: goto L_0898A134;
    case 305u: goto L_0898A14C;
    case 306u: goto L_0898A15C;
    case 307u: goto L_0898A17C;
    case 308u: goto L_0898A184;
    case 309u: goto L_0898A188;
    case 310u: goto L_0898A1C0;
    case 311u: goto L_0898A1CC;
    case 312u: goto L_0898A204;
    case 313u: goto L_0898A210;
    case 314u: goto L_0898A220;
    case 315u: goto L_0898A228;
    case 316u: goto L_0898A240;
    case 317u: goto L_0898A248;
    case 318u: goto L_0898A250;
    case 319u: goto L_0898A258;
    case 320u: goto L_0898A260;
    case 321u: goto L_0898A268;
    case 322u: goto L_0898A270;
    case 323u: goto L_0898A278;
    case 324u: goto L_0898A290;
    case 325u: goto L_0898A298;
    case 326u: goto L_0898A2AC;
    case 327u: goto L_0898A2C0;
    case 328u: goto L_0898A2C4;
    case 329u: goto L_0898A2D4;
    case 330u: goto L_0898A320;
    case 331u: goto L_0898A330;
    case 332u: goto L_0898A334;
    case 333u: goto L_0898A37C;
    case 334u: goto L_0898A3C4;
    case 335u: goto L_0898A3D4;
    case 336u: goto L_0898A3E0;
    case 337u: goto L_0898A3E8;
    case 338u: goto L_0898A428;
    case 339u: goto L_0898A430;
    case 340u: goto L_0898A444;
    case 341u: goto L_0898A458;
    case 342u: goto L_0898A45C;
    case 343u: goto L_0898A46C;
    case 344u: goto L_0898A484;
    case 345u: goto L_0898A4CC;
    case 346u: goto L_0898A4E4;
    case 347u: goto L_0898A538;
    case 348u: goto L_0898A544;
    case 349u: goto L_0898A550;
    case 350u: goto L_0898A558;
    case 351u: goto L_0898A588;
    case 352u: goto L_0898A5CC;
    case 353u: goto L_0898A5E0;
    case 354u: goto L_0898A5E4;
    case 355u: goto L_0898A624;
    case 356u: goto L_0898A634;
    case 357u: goto L_0898A640;
    case 358u: goto L_0898A650;
    case 359u: goto L_0898A65C;
    case 360u: goto L_0898A660;
    case 361u: goto L_0898A680;
    case 362u: goto L_0898A690;
    case 363u: goto L_0898A6B0;
    case 364u: goto L_0898A6BC;
    case 365u: goto L_0898A6C4;
    case 366u: goto L_0898A6D0;
    case 367u: goto L_0898A714;
    case 368u: goto L_0898A724;
    case 369u: goto L_0898A73C;
    case 370u: goto L_0898A744;
    case 371u: goto L_0898A750;
    case 372u: goto L_0898A760;
    case 373u: goto L_0898A778;
    case 374u: goto L_0898A780;
    case 375u: goto L_0898A798;
    case 376u: goto L_0898A7A8;
    case 377u: goto L_0898A7F8;
    case 378u: goto L_0898A838;
    case 379u: goto L_0898A840;
    case 380u: goto L_0898A848;
    case 381u: goto L_0898A890;
    case 382u: goto L_0898A8AC;
    case 383u: goto L_0898A8B8;
    case 384u: goto L_0898A8C4;
    case 385u: goto L_0898A8CC;
    case 386u: goto L_0898A8D0;
    case 387u: goto L_0898A8D8;
    case 388u: goto L_0898A8EC;
    case 389u: goto L_0898A8F4;
    case 390u: goto L_0898A948;
    case 391u: goto L_0898A950;
    case 392u: goto L_0898A96C;
    case 393u: goto L_0898A978;
    case 394u: goto L_0898A984;
    case 395u: goto L_0898A98C;
    case 396u: goto L_0898A990;
    case 397u: goto L_0898A998;
    case 398u: goto L_0898A9AC;
    case 399u: goto L_0898A9B4;
    case 400u: goto L_0898A9F8;
    case 401u: goto L_0898AA0C;
    case 402u: goto L_0898AA14;
    case 403u: goto L_0898AA2C;
    case 404u: goto L_0898AA34;
    case 405u: goto L_0898AA3C;
    case 406u: goto L_0898AA44;
    case 407u: goto L_0898AA4C;
    case 408u: goto L_0898AA54;
    case 409u: goto L_0898AA5C;
    case 410u: goto L_0898AA64;
    case 411u: goto L_0898AA7C;
    case 412u: goto L_0898AA84;
    case 413u: goto L_0898AA98;
    case 414u: goto L_0898AAB0;
    case 415u: goto L_0898AAB8;
    case 416u: goto L_0898AAC0;
    case 417u: goto L_0898AAD8;
    case 418u: goto L_0898AAE0;
    case 419u: goto L_0898AAE4;
    case 420u: goto L_0898AB44;
    case 421u: goto L_0898AB54;
    case 422u: goto L_0898AB60;
    case 423u: goto L_0898AB6C;
    case 424u: goto L_0898AB74;
    case 425u: goto L_0898AB78;
    case 426u: goto L_0898AB84;
    case 427u: goto L_0898ABB8;
    case 428u: goto L_0898ABC4;
    case 429u: goto L_0898ABD8;
    case 430u: goto L_0898ABEC;
    case 431u: goto L_0898ABFC;
    case 432u: goto L_0898AC20;
    case 433u: goto L_0898AC80;
    case 434u: goto L_0898AC88;
    case 435u: goto L_0898AC90;
    case 436u: goto L_0898ACA0;
    case 437u: goto L_0898ACB8;
    case 438u: goto L_0898ACCC;
    case 439u: goto L_0898ACDC;
    case 440u: goto L_0898ACE4;
    case 441u: goto L_0898ACEC;
    case 442u: goto L_0898ACF4;
    case 443u: goto L_0898AD34;
    case 444u: goto L_0898AD44;
    case 445u: goto L_0898AD50;
    case 446u: goto L_0898AD58;
    case 447u: goto L_0898AD74;
    case 448u: goto L_0898AD90;
    case 449u: goto L_0898ADAC;
    case 450u: goto L_0898ADC4;
    case 451u: goto L_0898ADD4;
    case 452u: goto L_0898ADE8;
    case 453u: goto L_0898ADFC;
    case 454u: goto L_0898AE04;
    case 455u: goto L_0898AE0C;
    case 456u: goto L_0898AE14;
    case 457u: goto L_0898AE18;
    case 458u: goto L_0898AE20;
    case 459u: goto L_0898AE28;
    case 460u: goto L_0898AE30;
    case 461u: goto L_0898AE34;
    case 462u: goto L_0898AE6C;
    case 463u: goto L_0898AE98;
    case 464u: goto L_0898AED4;
    case 465u: goto L_0898AF00;
    case 466u: goto L_0898AF1C;
    case 467u: goto L_0898AF44;
    case 468u: goto L_0898AF80;
    case 469u: goto L_0898AFAC;
    case 470u: goto L_0898AFE8;
    case 471u: goto L_0898B00C;
    case 472u: goto L_0898B01C;
    case 473u: goto L_0898B048;
    case 474u: goto L_0898B080;
    case 475u: goto L_0898B0AC;
    case 476u: goto L_0898B0E8;
    case 477u: goto L_0898B10C;
    case 478u: goto L_0898B130;
    case 479u: goto L_0898B15C;
    case 480u: goto L_0898B194;
    case 481u: goto L_0898B1AC;
    case 482u: goto L_0898B1BC;
    case 483u: goto L_0898B1D8;
    case 484u: goto L_0898B1F4;
    case 485u: goto L_0898B210;
    case 486u: goto L_0898B248;
    case 487u: goto L_0898B274;
    case 488u: goto L_0898B2B0;
    case 489u: goto L_0898B2C0;
    case 490u: goto L_0898B2C8;
    case 491u: goto L_0898B2D0;
    case 492u: goto L_0898B2EC;
    case 493u: goto L_0898B300;
    case 494u: goto L_0898B308;
    case 495u: goto L_0898B310;
    case 496u: goto L_0898B318;
    case 497u: goto L_0898B320;
    case 498u: goto L_0898B348;
    case 499u: goto L_0898B350;
    case 500u: goto L_0898B358;
    case 501u: goto L_0898B370;
    case 502u: goto L_0898B378;
    case 503u: goto L_0898B388;
    case 504u: goto L_0898B3A4;
    case 505u: goto L_0898B3AC;
    case 506u: goto L_0898B3B8;
    case 507u: goto L_0898B3C8;
    case 508u: goto L_0898B3E8;
    case 509u: goto L_0898B400;
    case 510u: goto L_0898B414;
    case 511u: goto L_0898B424;
    case 512u: goto L_0898B42C;
    case 513u: goto L_0898B434;
    case 514u: goto L_0898B43C;
    case 515u: goto L_0898B47C;
    case 516u: goto L_0898B48C;
    case 517u: goto L_0898B498;
    case 518u: goto L_0898B4A0;
    case 519u: goto L_0898B4B4;
    case 520u: goto L_0898B4C4;
    case 521u: goto L_0898B4D4;
    case 522u: goto L_0898B4E8;
    case 523u: goto L_0898B4F0;
    case 524u: goto L_0898B4F8;
    case 525u: goto L_0898B500;
    case 526u: goto L_0898B504;
    case 527u: goto L_0898B50C;
    case 528u: goto L_0898B514;
    case 529u: goto L_0898B51C;
    case 530u: goto L_0898B520;
    case 531u: goto L_0898B558;
    case 532u: goto L_0898B584;
    case 533u: goto L_0898B5C0;
    case 534u: goto L_0898B5EC;
    case 535u: goto L_0898B608;
    case 536u: goto L_0898B630;
    case 537u: goto L_0898B66C;
    case 538u: goto L_0898B698;
    case 539u: goto L_0898B6D4;
    case 540u: goto L_0898B6E4;
    case 541u: goto L_0898B6F4;
    case 542u: goto L_0898B720;
    case 543u: goto L_0898B758;
    case 544u: goto L_0898B784;
    case 545u: goto L_0898B7C0;
    case 546u: goto L_0898B7D0;
    case 547u: goto L_0898B7FC;
    case 548u: goto L_0898B828;
    case 549u: goto L_0898B850;
    case 550u: goto L_0898B868;
    case 551u: goto L_0898B870;
    case 552u: goto L_0898B880;
    case 553u: goto L_0898B8B8;
    case 554u: goto L_0898B8E4;
    case 555u: goto L_0898B920;
    case 556u: goto L_0898B930;
    case 557u: goto L_0898B938;
    case 558u: goto L_0898B940;
    case 559u: goto L_0898B95C;
    case 560u: goto L_0898B970;
    case 561u: goto L_0898B98C;
    case 562u: goto L_0898B998;
    case 563u: goto L_0898B9A0;
    case 564u: goto L_0898B9A8;
    case 565u: goto L_0898B9B0;
    case 566u: goto L_0898B9B8;
    case 567u: goto L_0898B9C0;
    case 568u: goto L_0898B9DC;
    case 569u: goto L_0898B9E4;
    case 570u: goto L_0898BA04;
    case 571u: goto L_0898BA0C;
    case 572u: goto L_0898BA20;
    case 573u: goto L_0898BA28;
    case 574u: goto L_0898BA3C;
    case 575u: goto L_0898BA48;
    case 576u: goto L_0898BA50;
    case 577u: goto L_0898BA58;
    case 578u: goto L_0898BA6C;
    case 579u: goto L_0898BA70;
    case 580u: goto L_0898BAA0;
    case 581u: goto L_0898BAB8;
    case 582u: goto L_0898BAD0;
    case 583u: goto L_0898BB00;
    case 584u: goto L_0898BB28;
    case 585u: goto L_0898BB3C;
    case 586u: goto L_0898BB50;
    case 587u: goto L_0898BB68;
    case 588u: goto L_0898BB74;
    case 589u: goto L_0898BB84;
    case 590u: goto L_0898BB90;
    case 591u: goto L_0898BB9C;
    case 592u: goto L_0898BBA4;
    case 593u: goto L_0898BBA8;
    case 594u: goto L_0898BBB4;
    case 595u: goto L_0898BBC0;
    case 596u: goto L_0898BBC8;
    case 597u: goto L_0898BBD0;
    case 598u: goto L_0898BBEC;
    case 599u: goto L_0898BBF4;
    case 600u: goto L_0898BC10;
    case 601u: goto L_0898BC48;
    case 602u: goto L_0898BC54;
    case 603u: goto L_0898BC5C;
    case 604u: goto L_0898BC70;
    case 605u: goto L_0898BC84;
    case 606u: goto L_0898BC94;
    case 607u: goto L_0898BC9C;
    case 608u: goto L_0898BCAC;
    case 609u: goto L_0898BCB0;
    case 610u: goto L_0898BCD8;
    case 611u: goto L_0898BCE8;
    case 612u: goto L_0898BCFC;
    case 613u: goto L_0898BD14;
    case 614u: goto L_0898BD2C;
    case 615u: goto L_0898BD38;
    case 616u: goto L_0898BD48;
    case 617u: goto L_0898BD54;
    case 618u: goto L_0898BD74;
    case 619u: goto L_0898BD80;
    case 620u: goto L_0898BD90;
    case 621u: goto L_0898BD98;
    case 622u: goto L_0898BDA0;
    case 623u: goto L_0898BDBC;
    case 624u: goto L_0898BDC4;
    case 625u: goto L_0898BDFC;
    case 626u: goto L_0898BE08;
    case 627u: goto L_0898BE18;
    case 628u: goto L_0898BE24;
    case 629u: goto L_0898BE30;
    case 630u: goto L_0898BE38;
    case 631u: goto L_0898BE3C;
    case 632u: goto L_0898BE48;
    case 633u: goto L_0898BE54;
    case 634u: goto L_0898BE64;
    case 635u: goto L_0898BE74;
    case 636u: goto L_0898BE90;
    case 637u: goto L_0898BE98;
    case 638u: goto L_0898BED4;
    case 639u: goto L_0898BEE4;
    case 640u: goto L_0898BF00;
    case 641u: goto L_0898BF08;
    case 642u: goto L_0898BF18;
    case 643u: goto L_0898BF20;
    case 644u: goto L_0898BF30;
    case 645u: goto L_0898BF34;
    case 646u: goto L_0898BF64;
    case 647u: goto L_0898BF78;
    case 648u: goto L_0898BF90;
    case 649u: goto L_0898BF9C;
    case 650u: goto L_0898BFA8;
    case 651u: goto L_0898BFB8;
    case 652u: goto L_0898BFC0;
    case 653u: goto L_0898BFC8;
    case 654u: goto L_0898BFE4;
    case 655u: goto L_0898BFEC;
    case 656u: goto L_0898BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08988000:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08988040;
      }
      goto L_08988024;
    }
L_08988024:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988038;
      }
      goto L_0898802C;
    }
L_0898802C:
    ctx.gpr[16] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08988040;
      }
      goto L_08988038;
    }
L_08988038:
    ctx.gpr[16] = (0u | 21u);
    ctx.gpr[17] = (0u | 2u);
    goto L_08988040;
L_08988040:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (ctx.gpr[18] << 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    ctx.gpr[17] = (ctx.gpr[16] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08988060;
      }
      goto L_08988054;
    }
L_08988054:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08988060;
L_08988060:
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[31] = (0x08988080u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08988080u) goto L_08988080;
    return;
L_08988080:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[17]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
        goto L_08988090;
    }
    goto L_08988090;
L_08988090:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[30];
        goto L_089880A4;
    }
    goto L_089880A4;
L_089880A4:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.fpr[17] = ctx.fpr[26] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089880D4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x089880D4u) goto L_089880D4;
    return;
L_089880D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08988100;
      }
      goto L_089880F4;
    }
L_089880F4:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_08988100;
L_08988100:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[24];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[13]));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[16] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 661u, 0x08987F34u>(ctx, &aot_mem); return;
      }
      goto L_0898812C;
    }
L_0898812C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988174:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24896)));
    ctx.gpr[5] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908)));
      if (branch_taken) {
          goto L_089881B8;
      }
      goto L_08988188;
    }
L_08988188:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089881EC;
      }
      goto L_08988194;
    }
L_08988194:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 210 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089881EC;
      }
      goto L_089881AC;
    }
L_089881AC:
    ctx.gpr[4] = (0u | 209u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089881EC;
      }
      goto L_089881B8;
    }
L_089881B8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24896), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089881EC;
      }
      goto L_089881CC;
    }
L_089881CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089881EC;
      }
      goto L_089881E4;
    }
L_089881E4:
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089881EC;
L_089881EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089881F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08988288;
      }
      goto L_08988214;
    }
L_08988214:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08988280;
      }
      goto L_0898821C;
    }
L_0898821C:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[16] >> 24u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (ctx.gpr[16] >> 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] >> 8u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08988280u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x08988280u) goto L_08988280;
    return;
L_08988280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898837C;
      }
      goto L_08988288;
    }
L_08988288:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898830C;
      }
      goto L_08988294;
    }
L_08988294:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988280;
      }
      goto L_0898829C;
    }
L_0898829C:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x089882D8u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089882D8u) goto L_089882D8;
    return;
L_089882D8:
    ctx.gpr[4] = (ctx.gpr[16] >> 24u);
    ctx.gpr[5] = (ctx.gpr[16] >> 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] >> 8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08988304u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08988304u) goto L_08988304;
    return;
L_08988304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08988280;
      }
      goto L_0898830C;
    }
L_0898830C:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[16] >> 24u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (ctx.gpr[16] >> 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] >> 8u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08988374u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x08988374u) goto L_08988374;
    return;
L_08988374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08988280;
      }
      goto L_0898837C;
    }
L_0898837C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898838C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16401)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08988530;
      }
      goto L_089883BC;
    }
L_089883BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988530;
      }
      goto L_089883C8;
    }
L_089883C8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089883D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x089883D4u) goto L_089883D4;
    return;
L_089883D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_089883F8;
    }
    goto L_089883E4;
L_089883E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089884A8;
      }
      goto L_089883F0;
    }
L_089883F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08988530;
      }
      goto L_089883F8;
    }
L_089883F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (17361u << 16u);
      if (branch_taken) {
          goto L_089883F0;
      }
      goto L_08988400;
    }
L_08988400:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6548));
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17108u << 16u);
    ctx.gpr[31] = (0x08988438u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08988438u) goto L_08988438;
    return;
L_08988438:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08988450u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x08988450u) goto L_08988450;
    return;
L_08988450:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08988460u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x08988460u) goto L_08988460;
    return;
L_08988460:
    ctx.gpr[5] = (17158u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08988480u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08988480u) goto L_08988480;
    return;
L_08988480:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08988490u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x08988490u) goto L_08988490;
    return;
L_08988490:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089884A0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x089884A0u) goto L_089884A0;
    return;
L_089884A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08988530;
      }
      goto L_089884A8;
    }
L_089884A8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x089884B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 296u, 0x088A945Cu>(ctx, &aot_mem) && ctx.pc == 0x089884B8u) goto L_089884B8;
    return;
L_089884B8:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x089884C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x089884C8u) goto L_089884C8;
    return;
L_089884C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (17371u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17379u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6548));
    ctx.gpr[5] = (17106u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17138u << 16u);
    ctx.gpr[31] = (0x08988520u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08988520u) goto L_08988520;
    return;
L_08988520:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08988530u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x08988530u) goto L_08988530;
    return;
L_08988530:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7488));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08988580u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14220));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 366u, 0x08AF5CA4u>(ctx, &aot_mem) && ctx.pc == 0x08988580u) goto L_08988580;
    return;
L_08988580:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898858C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089885C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21848));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089885C8u) goto L_089885C8;
    return;
L_089885C8:
    ctx.gpr[31] = (0x089885D0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x089885D0u) goto L_089885D0;
    return;
L_089885D0:
    ctx.gpr[31] = (0x089885D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x089885D8u) goto L_089885D8;
    return;
L_089885D8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7940), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7376), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[21] = (2277u << 16u);
    ctx.gpr[20] = (2277u << 16u);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[23] = (2269u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25488));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-9024));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8512));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8000));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-9536));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4624));
    ctx.gpr[30] = (2228u << 16u);
    goto L_08988658;
L_08988658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08988668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 901u, 0x08AD3A74u>(ctx, &aot_mem) && ctx.pc == 0x08988668u) goto L_08988668;
    return;
L_08988668:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08988658;
      }
      goto L_0898867C;
    }
L_0898867C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6428), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7088), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7908), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-24928)));
    goto L_089886A4;
L_089886A4:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089886A4;
      }
      goto L_089886C8;
    }
L_089886C8:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6416), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6404), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6403), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6396), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6392), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6380), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6388), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384), 0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08988734;
L_08988734:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08988734;
      }
      goto L_08988748;
    }
L_08988748:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6432), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4368));
    goto L_08988760;
L_08988760:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_0898876C;
L_0898876C:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898876C;
      }
      goto L_08988780;
    }
L_08988780:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08988760;
      }
      goto L_08988794;
    }
L_08988794:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089887B0;
      }
      goto L_0898879C;
    }
L_0898879C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089887ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22024));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x089887ACu) goto L_089887AC;
    return;
L_089887AC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-24928), ctx.gpr[2]);
    goto L_089887B0;
L_089887B0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24924)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089887D8;
      }
      goto L_089887C0;
    }
L_089887C0:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089887D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22144));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x089887D4u) goto L_089887D4;
    return;
L_089887D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24924), ctx.gpr[2]);
    goto L_089887D8;
L_089887D8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24916)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988800;
      }
      goto L_089887E8;
    }
L_089887E8:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089887FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21980));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x089887FCu) goto L_089887FC;
    return;
L_089887FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24916), ctx.gpr[2]);
    goto L_08988800;
L_08988800:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24912)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898882C;
      }
      goto L_08988810;
    }
L_08988810:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21956));
    ctx.gpr[31] = (0x08988828u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21944));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08988828u) goto L_08988828;
    return;
L_08988828:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24912), ctx.gpr[2]);
    goto L_0898882C;
L_0898882C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24920)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (2230u << 16u);
        goto L_0898885C;
    }
    goto L_0898883C;
L_0898883C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21932));
    ctx.gpr[31] = (0x08988854u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21916));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08988854u) goto L_08988854;
    return;
L_08988854:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24920), ctx.gpr[2]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898885C;
L_0898885C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 7u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6452));
    goto L_08988894;
L_08988894:
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08988894;
      }
      goto L_089888B0;
    }
L_089888B0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6442), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6440), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6320), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7083), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7084), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6472), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6464), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-25490), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6462), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6456), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6376), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6372), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6368), 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6364), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6360), ctx.gpr[8]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6356), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6352), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6788), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6348), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6344), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6340), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6792), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6336), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6332), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6328), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6324), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6796), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089889C0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x089889C0u) goto L_089889C0;
    return;
L_089889C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089889F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2000));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16401)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1952), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1956), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1960), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1964), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1968), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1972), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1976), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1980), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1984), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1988), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1992), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 446u, 0x0898E458u>(ctx, &aot_mem); return;
      }
      goto L_08988A48;
    }
L_08988A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (50944u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08988A68u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    goto L_08988174;
L_08988A68:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08988A74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08988A74u) goto L_08988A74;
    return;
L_08988A74:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08988A80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08988A80u) goto L_08988A80;
    return;
L_08988A80:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08988A8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08988A8Cu) goto L_08988A8C;
    return;
L_08988A8C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08988AA4;
      }
      goto L_08988AA4;
    }
L_08988AA4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7940)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 55u, 0x0898C44Cu>(ctx, &aot_mem); return;
      }
      goto L_08988AB8;
    }
L_08988AB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 55u, 0x0898C44Cu>(ctx, &aot_mem); return;
      }
      goto L_08988AC8;
    }
L_08988AC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08988C04;
      }
      goto L_08988B30;
    }
L_08988B30:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988C04;
      }
      goto L_08988B68;
    }
L_08988B68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988C04;
      }
      goto L_08988B9C;
    }
L_08988B9C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988C04;
      }
      goto L_08988BD0;
    }
L_08988BD0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988C38;
      }
      goto L_08988C04;
    }
L_08988C04:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988C38;
      }
      goto L_08988C0C;
    }
L_08988C0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08988C28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x08988C28u) goto L_08988C28;
    return;
L_08988C28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988C38;
      }
      goto L_08988C30;
    }
L_08988C30:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (2232u << 16u);
    goto L_08988C38;
L_08988C38:
    // Third person crosshair mode, while free-aiming (right mouse held).
    if (lcs::lcs_free_aim_active()) aot_mem.aot_store8(0x08B35BDCu, 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08988C64u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 491u, 0x088EABACu>(ctx, &aot_mem) && ctx.pc == 0x08988C64u) goto L_08988C64;
    return;
L_08988C64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988C7C;
      }
      goto L_08988C6C;
    }
L_08988C6C:
    // Third person crosshair for guns, while free-aiming.
    if (lcs::lcs_free_aim_active()) {
        const std::uint32_t weapon_type = aot_mem.aot_load32(
            ctx.gpr[16] + 1428u + static_cast<std::uint32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + 1720u))) * 28u);
        if (lcs::lcs_free_aim_weapon(weapon_type)) ctx.gpr[19] = 1u;
    }
    ctx.gpr[31] = (0x08988C74u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08988C74u) goto L_08988C74;
    return;
L_08988C74:
    ctx.gpr[31] = (0x08988C7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1017u, 0x08A97CDCu>(ctx, &aot_mem) && ctx.pc == 0x08988C7Cu) goto L_08988C7C;
    return;
L_08988C7C:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989908;
      }
      goto L_08988C88;
    }
L_08988C88:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08988C94u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08988C94u) goto L_08988C94;
    return;
L_08988C94:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08988CA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08988CA0u) goto L_08988CA0;
    return;
L_08988CA0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6320))))));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08988CBC;
    }
    goto L_08988CBC;
L_08988CBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6320), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08988CE8;
      }
      goto L_08988CDC;
    }
L_08988CDC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08988CE8;
L_08988CE8:
    ctx.gpr[4] = (15304u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6320))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988F04;
      }
      goto L_08988D54;
    }
L_08988D54:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08988D84u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 491u, 0x088EABACu>(ctx, &aot_mem) && ctx.pc == 0x08988D84u) goto L_08988D84;
    return;
L_08988D84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988F04;
      }
      goto L_08988D8C;
    }
L_08988D8C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(384)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(388)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[16] == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_08988E78;
      }
      goto L_08988DC8;
    }
L_08988DC8:
    if (lcs::lcs_free_aim_active()) { ctx.fpr[12] = 240.0f; ctx.fpr[13] = 136.0f; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16716u << 16u);
      if (branch_taken) {
          goto L_08988E7C;
      }
      goto L_08988DEC;
    }
L_08988DEC:
    ctx.gpr[4] = (16793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    if (lcs::lcs_free_aim_active()) ctx.fpr[15] *= 0.6f;
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(716));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[31] = (0x08988E20u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08988E20u) goto L_08988E20;
    return;
L_08988E20:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(732));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08988E3Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08988E3Cu) goto L_08988E3C;
    return;
L_08988E3C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08988E70u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08988E70u) goto L_08988E70;
    return;
L_08988E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08988EFC;
      }
      goto L_08988E78;
    }
L_08988E78:
    if (lcs::lcs_free_aim_active()) { ctx.fpr[12] = 240.0f; ctx.fpr[13] = 136.0f; }
    ctx.gpr[4] = (16716u << 16u);
    goto L_08988E7C;
L_08988E7C:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    if (lcs::lcs_free_aim_active()) ctx.fpr[15] *= 0.6f;
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[31] = (0x08988EACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08988EACu) goto L_08988EAC;
    return;
L_08988EAC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08988EC8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08988EC8u) goto L_08988EC8;
    return;
L_08988EC8:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08988EFCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08988EFCu) goto L_08988EFC;
    return;
L_08988EFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089898CC;
      }
      goto L_08988F04;
    }
L_08988F04:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_08988F74;
      }
      goto L_08988F38;
    }
L_08988F38:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988FFC;
      }
      goto L_08988F70;
    }
L_08988F70:
    ctx.gpr[5] = (2277u << 16u);
    goto L_08988F74;
L_08988F74:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (17232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(756));
    ctx.gpr[5] = (17104u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17192u << 16u);
    ctx.gpr[31] = (0x08988FA4u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08988FA4u) goto L_08988FA4;
    return;
L_08988FA4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(772));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08988FC0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08988FC0u) goto L_08988FC0;
    return;
L_08988FC0:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08988FF4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08988FF4u) goto L_08988FF4;
    return;
L_08988FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089898CC;
      }
      goto L_08988FFC;
    }
L_08988FFC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089891DC;
      }
      goto L_08989030;
    }
L_08989030:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_089890E0;
      }
      goto L_08989058;
    }
L_08989058:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (17232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(776));
    ctx.gpr[5] = (17104u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17192u << 16u);
    ctx.gpr[31] = (0x08989088u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08989088u) goto L_08989088;
    return;
L_08989088:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(792));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089890A4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089890A4u) goto L_089890A4;
    return;
L_089890A4:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089890D8u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x089890D8u) goto L_089890D8;
    return;
L_089890D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089898CC;
      }
      goto L_089890E0;
    }
L_089890E0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089890ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089890ECu) goto L_089890EC;
    return;
L_089890EC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089890F8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089890F8u) goto L_089890F8;
    return;
L_089890F8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08989104u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989104u) goto L_08989104;
    return;
L_08989104:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08989110u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989110u) goto L_08989110;
    return;
L_08989110:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24924)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08989124u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989124u) goto L_08989124;
    return;
L_08989124:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[9] = (16256u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x089891BCu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 326u, 0x08A26120u>(ctx, &aot_mem) && ctx.pc == 0x089891BCu) goto L_089891BC;
    return;
L_089891BC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089891C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089891C8u) goto L_089891C8;
    return;
L_089891C8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089891D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089891D4u) goto L_089891D4;
    return;
L_089891D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089898CC;
      }
      goto L_089891DC;
    }
L_089891DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089892AC;
      }
      goto L_08989210;
    }
L_08989210:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (17241u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17123u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(796));
    ctx.gpr[5] = (17283u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17182u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[31] = (0x08989254u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08989254u) goto L_08989254;
    return;
L_08989254:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(812));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989270u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08989270u) goto L_08989270;
    return;
L_08989270:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089892A4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x089892A4u) goto L_089892A4;
    return;
L_089892A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089898CC;
      }
      goto L_089892AC;
    }
L_089892AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08989314;
      }
      goto L_089892E0;
    }
L_089892E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08989410;
      }
      goto L_08989314;
    }
L_08989314:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08989320u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989320u) goto L_08989320;
    return;
L_08989320:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0898932Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898932Cu) goto L_0898932C;
    return;
L_0898932C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08989338u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989338u) goto L_08989338;
    return;
L_08989338:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08989344u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989344u) goto L_08989344;
    return;
L_08989344:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24924)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08989358u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989358u) goto L_08989358;
    return;
L_08989358:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[9] = (16256u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x089893F0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 326u, 0x08A26120u>(ctx, &aot_mem) && ctx.pc == 0x089893F0u) goto L_089893F0;
    return;
L_089893F0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089893FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089893FCu) goto L_089893FC;
    return;
L_089893FC:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08989408u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989408u) goto L_08989408;
    return;
L_08989408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089898CC;
      }
      goto L_08989410;
    }
L_08989410:
    ctx.gpr[4] = (17234u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 63u);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17160u << 16u);
    ctx.gpr[31] = (0x08989434u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08989434u) goto L_08989434;
    return;
L_08989434:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08989460;
      }
      goto L_0898945C;
    }
L_0898945C:
    ctx.gpr[18] = (0u | 65u);
    goto L_08989460;
L_08989460:
    ctx.gpr[31] = (0x08989468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08989468u) goto L_08989468;
    return;
L_08989468:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089894BC;
      }
      goto L_08989490;
    }
L_08989490:
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24896), ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 67u);
    ctx.gpr[4] = (17160u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17262u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17158u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089894BC;
L_089894BC:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[30] = ctx.fpr[22] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7488));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1920), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089894F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089894F4u) goto L_089894F4;
    return;
L_089894F4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989514u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08989514u) goto L_08989514;
    return;
L_08989514:
    ctx.gpr[7] = (15395u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 55050u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08989558u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08989558u) goto L_08989558;
    return;
L_08989558:
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08989574u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08989574u) goto L_08989574;
    return;
L_08989574:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989590u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08989590u) goto L_08989590;
    return;
L_08989590:
    ctx.gpr[7] = (16253u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 28836u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089895CCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x089895CCu) goto L_089895CC;
    return;
L_089895CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1924)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[31] = (0x089895ECu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089895ECu) goto L_089895EC;
    return;
L_089895EC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989608u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08989608u) goto L_08989608;
    return;
L_08989608:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08989638u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08989638u) goto L_08989638;
    return;
L_08989638:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1928)));
    ctx.gpr[31] = (0x08989650u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08989650u) goto L_08989650;
    return;
L_08989650:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898966Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898966Cu) goto L_0898966C;
    return;
L_0898966C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0898969Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x0898969Cu) goto L_0898969C;
    return;
L_0898969C:
    ctx.gpr[31] = (0x089896A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089896A4u) goto L_089896A4;
    return;
L_089896A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_089898CC;
      }
      goto L_089896CC;
    }
L_089896CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17076u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089896FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089896FCu) goto L_089896FC;
    return;
L_089896FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(836));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08989720u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 368u, 0x088521F8u>(ctx, &aot_mem) && ctx.pc == 0x08989720u) goto L_08989720;
    return;
L_08989720:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0898972Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898972Cu) goto L_0898972C;
    return;
L_0898972C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08989738u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989738u) goto L_08989738;
    return;
L_08989738:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08989744u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989744u) goto L_08989744;
    return;
L_08989744:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08989750u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989750u) goto L_08989750;
    return;
L_08989750:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0898975Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898975Cu) goto L_0898975C;
    return;
L_0898975C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24912)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08989770u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989770u) goto L_08989770;
    return;
L_08989770:
    ctx.gpr[4] = (16382u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (0u | 245u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[18] = (ctx.gpr[6] - ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[31] = (0x089897D0u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089897D0u) goto L_089897D0;
    return;
L_089897D0:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089897E4u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089897E4u) goto L_089897E4;
    return;
L_089897E4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (17174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08989844;
      }
      goto L_08989828;
    }
L_08989828:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (17327u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08989884;
      }
      goto L_08989844;
    }
L_08989844:
    ctx.gpr[5] = (17280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08989884;
L_08989884:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(856)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (16256u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089898C0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 326u, 0x08A26120u>(ctx, &aot_mem) && ctx.pc == 0x089898C0u) goto L_089898C0;
    return;
L_089898C0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089898CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089898CCu) goto L_089898CC;
    return;
L_089898CC:
    aot_mem.aot_store8(0x08B35BDCu, 0u);
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089898D8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089898D8u) goto L_089898D8;
    return;
L_089898D8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089898E4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089898E4u) goto L_089898E4;
    return;
L_089898E4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089898F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089898F0u) goto L_089898F0;
    return;
L_089898F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989900;
      }
      goto L_089898F8;
    }
L_089898F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 478u, 0x0898E690u>(ctx, &aot_mem); return;
      }
      goto L_08989900;
    }
L_08989900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08989914;
      }
      goto L_08989908;
    }
L_08989908:
    aot_mem.aot_store8(0x08B35BDCu, 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6320), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    goto L_08989914;
L_08989914:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6360)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08989994;
      }
      goto L_0898994C;
    }
L_0898994C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08989958u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 725u, 0x0898FA74u>(ctx, &aot_mem) && ctx.pc == 0x08989958u) goto L_08989958;
    return;
L_08989958:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6360), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089899A4;
      }
      goto L_08989994;
    }
L_08989994:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089899A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 725u, 0x0898FA74u>(ctx, &aot_mem) && ctx.pc == 0x089899A0u) goto L_089899A0;
    return;
L_089899A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089899A4;
L_089899A4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089899C4;
      }
      goto L_089899C4;
    }
L_089899C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089899F4;
      }
      goto L_089899D4;
    }
L_089899D4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089899E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 607u, 0x08ADA7C8u>(ctx, &aot_mem) && ctx.pc == 0x089899E0u) goto L_089899E0;
    return;
L_089899E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089899F4;
      }
      goto L_089899E8;
    }
L_089899E8:
    ctx.gpr[31] = (0x089899F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 635u, 0x08987C48u>(ctx, &aot_mem) && ctx.pc == 0x089899F0u) goto L_089899F0;
    return;
L_089899F0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_089899F4;
L_089899F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6336)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08989A80;
      }
      goto L_08989A4C;
    }
L_08989A4C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08989A58u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 725u, 0x0898FA74u>(ctx, &aot_mem) && ctx.pc == 0x08989A58u) goto L_08989A58;
    return;
L_08989A58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6336), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08989A90;
      }
      goto L_08989A80;
    }
L_08989A80:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08989A8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 725u, 0x0898FA74u>(ctx, &aot_mem) && ctx.pc == 0x08989A8Cu) goto L_08989A8C;
    return;
L_08989A8C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08989A90;
L_08989A90:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08989AC0;
      }
      goto L_08989AB0;
    }
L_08989AB0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    goto L_08989AC0;
L_08989AC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6324)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A188;
      }
      goto L_08989AD0;
    }
L_08989AD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[31] = (0x08989AF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08989AF0u) goto L_08989AF0;
    return;
L_08989AF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08989B18u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08989B18u) goto L_08989B18;
    return;
L_08989B18:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08989B28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 607u, 0x08ADA7C8u>(ctx, &aot_mem) && ctx.pc == 0x08989B28u) goto L_08989B28;
    return;
L_08989B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989DA8;
      }
      goto L_08989B30;
    }
L_08989B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 13u);
      if (branch_taken) {
          goto L_08989D00;
      }
      goto L_08989B3C;
    }
L_08989B3C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08989D00;
      }
      goto L_08989B44;
    }
L_08989B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08989B70;
      }
      goto L_08989B5C;
    }
L_08989B5C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08989B70;
L_08989B70:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08989B9C;
      }
      goto L_08989B94;
    }
L_08989B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08989BB4;
      }
      goto L_08989B9C;
    }
L_08989B9C:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08989BB4;
L_08989BB4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989CF8;
      }
      goto L_08989BC0;
    }
L_08989BC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08989BEC;
      }
      goto L_08989BD8;
    }
L_08989BD8:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08989BEC;
L_08989BEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08989BF8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 81u, 0x08A0D004u>(ctx, &aot_mem) && ctx.pc == 0x08989BF8u) goto L_08989BF8;
    return;
L_08989BF8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989CF8;
      }
      goto L_08989C04;
    }
L_08989C04:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08989C30;
      }
      goto L_08989C1C;
    }
L_08989C1C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08989C30;
L_08989C30:
    ctx.gpr[31] = (0x08989C38u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 636u, 0x08AB38A8u>(ctx, &aot_mem) && ctx.pc == 0x08989C38u) goto L_08989C38;
    return;
L_08989C38:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15112u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (15216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08989C84u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989C84u) goto L_08989C84;
    return;
L_08989C84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08989C90u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989C90u) goto L_08989C90;
    return;
L_08989C90:
    ctx.gpr[4] = (17379u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (16900u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16924u << 16u);
    ctx.gpr[6] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (16256u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (0u | 255u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (0u | 255u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989CECu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 326u, 0x08A26120u>(ctx, &aot_mem) && ctx.pc == 0x08989CECu) goto L_08989CEC;
    return;
L_08989CEC:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08989CF8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08989CF8u) goto L_08989CF8;
    return;
L_08989CF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989DA8;
      }
      goto L_08989D00;
    }
L_08989D00:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08989D0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 607u, 0x08ADA7C8u>(ctx, &aot_mem) && ctx.pc == 0x08989D0Cu) goto L_08989D0C;
    return;
L_08989D0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (17363u << 16u);
      if (branch_taken) {
          goto L_08989DA8;
      }
      goto L_08989D14;
    }
L_08989D14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(892));
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17396u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17038u << 16u);
    ctx.gpr[31] = (0x08989D38u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08989D38u) goto L_08989D38;
    return;
L_08989D38:
    ctx.gpr[4] = (0u | 69u);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08989D44;
    }
    goto L_08989D44;
L_08989D44:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(888));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08989D74u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08989D74u) goto L_08989D74;
    return;
L_08989D74:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(892));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08989DA8u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08989DA8u) goto L_08989DA8;
    return;
L_08989DA8:
    ctx.gpr[31] = (0x08989DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08989DB0u) goto L_08989DB0;
    return;
L_08989DB0:
    ctx.gpr[4] = (15959u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2621u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16145u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.gpr[31] = (0x08989DCCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08989DCCu) goto L_08989DCC;
    return;
L_08989DCC:
    ctx.gpr[31] = (0x08989DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08989DD4u) goto L_08989DD4;
    return;
L_08989DD4:
    ctx.gpr[31] = (0x08989DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08989DDCu) goto L_08989DDC;
    return;
L_08989DDC:
    ctx.gpr[4] = (17440u << 16u);
    ctx.gpr[31] = (0x08989DE8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08989DE8u) goto L_08989DE8;
    return;
L_08989DE8:
    ctx.gpr[31] = (0x08989DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08989DF0u) goto L_08989DF0;
    return;
L_08989DF0:
    ctx.gpr[31] = (0x08989DF8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08989DF8u) goto L_08989DF8;
    return;
L_08989DF8:
    ctx.gpr[31] = (0x08989E00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08989E00u) goto L_08989E00;
    return;
L_08989E00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 9999u);
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08989E30;
    }
    goto L_08989E30;
L_08989E30:
    ctx.gpr[4] = (0u | 9999u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898A184;
      }
      goto L_08989E3C;
    }
L_08989E3C:
    ctx.gpr[31] = (0x08989E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 83u, 0x0891857Cu>(ctx, &aot_mem) && ctx.pc == 0x08989E44u) goto L_08989E44;
    return;
L_08989E44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A184;
      }
      goto L_08989E4C;
    }
L_08989E4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A184;
      }
      goto L_08989E6C;
    }
L_08989E6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898A184;
      }
      goto L_08989E90;
    }
L_08989E90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08989EACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08989EACu) goto L_08989EAC;
    return;
L_08989EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A184;
      }
      goto L_08989EBC;
    }
L_08989EBC:
    ctx.gpr[31] = (0x08989EC4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08989EC4u) goto L_08989EC4;
    return;
L_08989EC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(908));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x08989EECu);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08989EECu) goto L_08989EEC;
    return;
L_08989EEC:
    ctx.gpr[31] = (0x08989EF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08989EF4u) goto L_08989EF4;
    return;
L_08989EF4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989F0Cu);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08989F0Cu) goto L_08989F0C;
    return;
L_08989F0C:
    ctx.gpr[31] = (0x08989F14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08989F14u) goto L_08989F14;
    return;
L_08989F14:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08989F20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 607u, 0x08ADA7C8u>(ctx, &aot_mem) && ctx.pc == 0x08989F20u) goto L_08989F20;
    return;
L_08989F20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A17C;
      }
      goto L_08989F28;
    }
L_08989F28:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 1000 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898A134;
      }
      goto L_08989F34;
    }
L_08989F34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A134;
      }
      goto L_08989F3C;
    }
L_08989F3C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(936));
    ctx.gpr[31] = (0x08989F4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21844));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08989F4Cu) goto L_08989F4C;
    return;
L_08989F4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 31u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0898A028;
    }
    goto L_08989F70;
L_08989F70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (0u | 9999u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21840));
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
        goto L_08989FB8;
    }
    goto L_08989FB8;
L_08989FB8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08989FCCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08989FCCu) goto L_08989FCC;
    return;
L_08989FCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (0u | 9999u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(924));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21840));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
        goto L_0898A010;
    }
    goto L_0898A010;
L_0898A010:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0898A020u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A020u) goto L_0898A020;
    return;
L_0898A020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A094;
      }
      goto L_0898A028;
    }
L_0898A028:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 9999u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21840));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_0898A060;
    }
    goto L_0898A060;
L_0898A060:
    ctx.gpr[31] = (0x0898A068u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A068u) goto L_0898A068;
    return;
L_0898A068:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(924));
    ctx.gpr[31] = (0x0898A094u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21840));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A094u) goto L_0898A094;
    return;
L_0898A094:
    ctx.gpr[31] = (0x0898A09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x0898A09Cu) goto L_0898A09C;
    return;
L_0898A09C:
    ctx.gpr[31] = (0x0898A0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898A0A4u) goto L_0898A0A4;
    return;
L_0898A0A4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[31] = (0x0898A0B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A0B4u) goto L_0898A0B4;
    return;
L_0898A0B4:
    ctx.gpr[6] = (16948u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17375u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898A0D4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898A0D4u) goto L_0898A0D4;
    return;
L_0898A0D4:
    ctx.gpr[31] = (0x0898A0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898A0DCu) goto L_0898A0DC;
    return;
L_0898A0DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(936));
    ctx.gpr[31] = (0x0898A0E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A0E8u) goto L_0898A0E8;
    return;
L_0898A0E8:
    ctx.gpr[5] = (17376u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898A104u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898A104u) goto L_0898A104;
    return;
L_0898A104:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(924));
    ctx.gpr[31] = (0x0898A110u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A110u) goto L_0898A110;
    return;
L_0898A110:
    ctx.gpr[6] = (17378u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898A12Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898A12Cu) goto L_0898A12C;
    return;
L_0898A12C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A17C;
      }
      goto L_0898A134;
    }
L_0898A134:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898A14Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21840));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A14Cu) goto L_0898A14C;
    return;
L_0898A14C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898A15Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A15Cu) goto L_0898A15C;
    return;
L_0898A15C:
    ctx.gpr[6] = (17375u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (16948u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898A17Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898A17Cu) goto L_0898A17C;
    return;
L_0898A17C:
    ctx.gpr[31] = (0x0898A184u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898A184u) goto L_0898A184;
    return;
L_0898A184:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898A188;
L_0898A188:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898A204;
      }
      goto L_0898A1C0;
    }
L_0898A1C0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0898A1CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 725u, 0x0898FA74u>(ctx, &aot_mem) && ctx.pc == 0x0898A1CCu) goto L_0898A1CC;
    return;
L_0898A1CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6376), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898A210;
      }
      goto L_0898A204;
    }
L_0898A204:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0898A210u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 725u, 0x0898FA74u>(ctx, &aot_mem) && ctx.pc == 0x0898A210u) goto L_0898A210;
    return;
L_0898A210:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6364)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A624;
      }
      goto L_0898A220;
    }
L_0898A220:
    ctx.gpr[31] = (0x0898A228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898A228u) goto L_0898A228;
    return;
L_0898A228:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x0898A240u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898A240u) goto L_0898A240;
    return;
L_0898A240:
    ctx.gpr[31] = (0x0898A248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898A248u) goto L_0898A248;
    return;
L_0898A248:
    ctx.gpr[31] = (0x0898A250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x0898A250u) goto L_0898A250;
    return;
L_0898A250:
    ctx.gpr[31] = (0x0898A258u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A258u) goto L_0898A258;
    return;
L_0898A258:
    ctx.gpr[31] = (0x0898A260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898A260u) goto L_0898A260;
    return;
L_0898A260:
    ctx.gpr[31] = (0x0898A268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55174u>(ctx, &aot_mem) && ctx.pc == 0x0898A268u) goto L_0898A268;
    return;
L_0898A268:
    ctx.gpr[31] = (0x0898A270u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898A270u) goto L_0898A270;
    return;
L_0898A270:
    ctx.gpr[31] = (0x0898A278u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898A278u) goto L_0898A278;
    return;
L_0898A278:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(956));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A290u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898A290u) goto L_0898A290;
    return;
L_0898A290:
    ctx.gpr[31] = (0x0898A298u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898A298u) goto L_0898A298;
    return;
L_0898A298:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800))))));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A2C4;
      }
      goto L_0898A2AC;
    }
L_0898A2AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A334;
      }
      goto L_0898A2C0;
    }
L_0898A2C0:
    ctx.gpr[5] = (2230u << 16u);
    goto L_0898A2C4;
L_0898A2C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800))))));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A334;
      }
      goto L_0898A2D4;
    }
L_0898A2D4:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A430;
      }
      goto L_0898A320;
    }
L_0898A320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A430;
      }
      goto L_0898A330;
    }
L_0898A330:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898A334;
L_0898A334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A3D4;
      }
      goto L_0898A37C;
    }
L_0898A37C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A430;
      }
      goto L_0898A3C4;
    }
L_0898A3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A430;
      }
      goto L_0898A3D4;
    }
L_0898A3D4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898A3E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 607u, 0x08ADA7C8u>(ctx, &aot_mem) && ctx.pc == 0x0898A3E0u) goto L_0898A3E0;
    return;
L_0898A3E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A430;
      }
      goto L_0898A3E8;
    }
L_0898A3E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0898A428u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 523u, 0x08987170u>(ctx, &aot_mem) && ctx.pc == 0x0898A428u) goto L_0898A428;
    return;
L_0898A428:
    ctx.gpr[31] = (0x0898A430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 605u, 0x08987AC8u>(ctx, &aot_mem) && ctx.pc == 0x0898A430u) goto L_0898A430;
    return;
L_0898A430:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800))))));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A45C;
      }
      goto L_0898A444;
    }
L_0898A444:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A46C;
      }
      goto L_0898A458;
    }
L_0898A458:
    ctx.gpr[5] = (2230u << 16u);
    goto L_0898A45C;
L_0898A45C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800))))));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898A624;
      }
      goto L_0898A46C;
    }
L_0898A46C:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x0898A484u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898A484u) goto L_0898A484;
    return;
L_0898A484:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898A624;
      }
      goto L_0898A4CC;
    }
L_0898A4CC:
    ctx.gpr[4] = (0u | 91u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(648), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(649), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.gpr[31] = (0x0898A4E4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A4E4u) goto L_0898A4E4;
    return;
L_0898A4E4:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21836));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[31] = (0x0898A538u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A538u) goto L_0898A538;
    return;
L_0898A538:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[31] = (0x0898A544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A544u) goto L_0898A544;
    return;
L_0898A544:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898A550u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 607u, 0x08ADA7C8u>(ctx, &aot_mem) && ctx.pc == 0x0898A550u) goto L_0898A550;
    return;
L_0898A550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A624;
      }
      goto L_0898A558;
    }
L_0898A558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A5E4;
      }
      goto L_0898A588;
    }
L_0898A588:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A5E4;
      }
      goto L_0898A5CC;
    }
L_0898A5CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A624;
      }
      goto L_0898A5E0;
    }
L_0898A5E0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898A5E4;
L_0898A5E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0898A624u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 564u, 0x0898761Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A624u) goto L_0898A624;
    return;
L_0898A624:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6348)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898A650;
      }
      goto L_0898A634;
    }
L_0898A634:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0898A640u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 725u, 0x0898FA74u>(ctx, &aot_mem) && ctx.pc == 0x0898A640u) goto L_0898A640;
    return;
L_0898A640:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6348), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0898A660;
      }
      goto L_0898A650;
    }
L_0898A650:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0898A65Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 725u, 0x0898FA74u>(ctx, &aot_mem) && ctx.pc == 0x0898A65Cu) goto L_0898A65C;
    return;
L_0898A65C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0898A660;
L_0898A660:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898A680;
      }
      goto L_0898A680;
    }
L_0898A680:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6792)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A798;
      }
      goto L_0898A690;
    }
L_0898A690:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(648), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17378u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(649), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0898A798;
      }
      goto L_0898A6B0;
    }
L_0898A6B0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898A6BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 607u, 0x08ADA7C8u>(ctx, &aot_mem) && ctx.pc == 0x0898A6BCu) goto L_0898A6BC;
    return;
L_0898A6BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A780;
      }
      goto L_0898A6C4;
    }
L_0898A6C4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A744;
      }
      goto L_0898A6D0;
    }
L_0898A6D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A724;
      }
      goto L_0898A714;
    }
L_0898A714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A744;
      }
      goto L_0898A724;
    }
L_0898A724:
    ctx.gpr[6] = (17050u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898A73Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 658u, 0x08987E60u>(ctx, &aot_mem) && ctx.pc == 0x0898A73Cu) goto L_0898A73C;
    return;
L_0898A73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A780;
      }
      goto L_0898A744;
    }
L_0898A744:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A780;
      }
      goto L_0898A750;
    }
L_0898A750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A780;
      }
      goto L_0898A760;
    }
L_0898A760:
    ctx.gpr[6] = (17050u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898A778u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 658u, 0x08987E60u>(ctx, &aot_mem) && ctx.pc == 0x0898A778u) goto L_0898A778;
    return;
L_0898A778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A780;
      }
      goto L_0898A780;
    }
L_0898A780:
    ctx.gpr[4] = (16776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0898A6B0;
      }
      goto L_0898A798;
    }
L_0898A798:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7524)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AC90;
      }
      goto L_0898A7A8;
    }
L_0898A7A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7568)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[6] = (2233u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AC88;
      }
      goto L_0898A7F8;
    }
L_0898A7F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898AC88;
      }
      goto L_0898A838;
    }
L_0898A838:
    ctx.gpr[31] = (0x0898A840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x0898A840u) goto L_0898A840;
    return;
L_0898A840:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AC88;
      }
      goto L_0898A848;
    }
L_0898A848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7568)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898A950;
      }
      goto L_0898A890;
    }
L_0898A890:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(9176));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-21828));
      if (branch_taken) {
          goto L_0898A8D8;
      }
      goto L_0898A8AC;
    }
L_0898A8AC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A8B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898A8B8u) goto L_0898A8B8;
    return;
L_0898A8B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A8D0;
      }
      goto L_0898A8C4;
    }
L_0898A8C4:
    ctx.gpr[31] = (0x0898A8CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898A8CCu) goto L_0898A8CC;
    return;
L_0898A8CC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0898A8D0;
L_0898A8D0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_0898A8D8;
L_0898A8D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0898A8ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21816));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898A8ECu) goto L_0898A8EC;
    return;
L_0898A8EC:
    ctx.gpr[31] = (0x0898A8F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x0898A8F4u) goto L_0898A8F4;
    return;
L_0898A8F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7568)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0898A948u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A948u) goto L_0898A948;
    return;
L_0898A948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A9F8;
      }
      goto L_0898A950;
    }
L_0898A950:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(9176));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-21808));
      if (branch_taken) {
          goto L_0898A998;
      }
      goto L_0898A96C;
    }
L_0898A96C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898A978u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898A978u) goto L_0898A978;
    return;
L_0898A978:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A990;
      }
      goto L_0898A984;
    }
L_0898A984:
    ctx.gpr[31] = (0x0898A98Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898A98Cu) goto L_0898A98C;
    return;
L_0898A98C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898A990;
L_0898A990:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_0898A998;
L_0898A998:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0898A9ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21816));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898A9ACu) goto L_0898A9AC;
    return;
L_0898A9AC:
    ctx.gpr[31] = (0x0898A9B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x0898A9B4u) goto L_0898A9B4;
    return;
L_0898A9B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898A9F8u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A9F8u) goto L_0898A9F8;
    return;
L_0898A9F8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9176));
    ctx.gpr[31] = (0x0898AA0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5392));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898AA0Cu) goto L_0898AA0C;
    return;
L_0898AA0C:
    ctx.gpr[31] = (0x0898AA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898AA14u) goto L_0898AA14;
    return;
L_0898AA14:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x0898AA2Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898AA2Cu) goto L_0898AA2C;
    return;
L_0898AA2C:
    ctx.gpr[31] = (0x0898AA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x0898AA34u) goto L_0898AA34;
    return;
L_0898AA34:
    ctx.gpr[31] = (0x0898AA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898AA3Cu) goto L_0898AA3C;
    return;
L_0898AA3C:
    ctx.gpr[31] = (0x0898AA44u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AA44u) goto L_0898AA44;
    return;
L_0898AA44:
    ctx.gpr[31] = (0x0898AA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0898AA4Cu) goto L_0898AA4C;
    return;
L_0898AA4C:
    ctx.gpr[31] = (0x0898AA54u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898AA54u) goto L_0898AA54;
    return;
L_0898AA54:
    ctx.gpr[31] = (0x0898AA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898AA5Cu) goto L_0898AA5C;
    return;
L_0898AA5C:
    ctx.gpr[31] = (0x0898AA64u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898AA64u) goto L_0898AA64;
    return;
L_0898AA64:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898AA7Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898AA7Cu) goto L_0898AA7C;
    return;
L_0898AA7C:
    ctx.gpr[31] = (0x0898AA84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898AA84u) goto L_0898AA84;
    return;
L_0898AA84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AAC0;
      }
      goto L_0898AA98;
    }
L_0898AA98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(964));
    ctx.gpr[5] = (0u | 204u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 185u);
    ctx.gpr[31] = (0x0898AAB0u);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898AAB0u) goto L_0898AAB0;
    return;
L_0898AAB0:
    ctx.gpr[31] = (0x0898AAB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898AAB8u) goto L_0898AAB8;
    return;
L_0898AAB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0898AAE4;
      }
      goto L_0898AAC0;
    }
L_0898AAC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(968));
    ctx.gpr[5] = (0u | 178u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 162u);
    ctx.gpr[31] = (0x0898AAD8u);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898AAD8u) goto L_0898AAD8;
    return;
L_0898AAD8:
    ctx.gpr[31] = (0x0898AAE0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898AAE0u) goto L_0898AAE0;
    return;
L_0898AAE0:
    ctx.gpr[4] = (2229u << 16u);
    goto L_0898AAE4;
L_0898AAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (17382u << 16u);
    ctx.gpr[6] = (17122u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 32768u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5392));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[31] = (0x0898AB44u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898AB44u) goto L_0898AB44;
    return;
L_0898AB44:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AB84;
      }
      goto L_0898AB54;
    }
L_0898AB54:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0898AB60u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898AB60u) goto L_0898AB60;
    return;
L_0898AB60:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AB78;
      }
      goto L_0898AB6C;
    }
L_0898AB6C:
    ctx.gpr[31] = (0x0898AB74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898AB74u) goto L_0898AB74;
    return;
L_0898AB74:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0898AB78;
L_0898AB78:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898AB84;
L_0898AB84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0898ABB8u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 124u, 0x08844A48u>(ctx, &aot_mem) && ctx.pc == 0x0898ABB8u) goto L_0898ABB8;
    return;
L_0898ABB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898ABC4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898ABC4u) goto L_0898ABC4;
    return;
L_0898ABC4:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31872)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898ABEC;
      }
      goto L_0898ABD8;
    }
L_0898ABD8:
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24876), ctx.gpr[5]);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(31872), ctx.gpr[4]);
    goto L_0898ABEC;
L_0898ABEC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24876)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AC80;
      }
      goto L_0898ABFC;
    }
L_0898ABFC:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24876)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5392));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898AC20u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24876), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 25u, 0x08A54394u>(ctx, &aot_mem) && ctx.pc == 0x0898AC20u) goto L_0898AC20;
    return;
L_0898AC20:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[6] = (17162u << 16u);
    ctx.gpr[4] = (17382u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[31] = (0x0898AC80u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898AC80u) goto L_0898AC80;
    return;
L_0898AC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AC90;
      }
      goto L_0898AC88;
    }
L_0898AC88:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24876), 0u);
    goto L_0898AC90;
L_0898AC90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7088)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B3B8;
      }
      goto L_0898ACA0;
    }
L_0898ACA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7088)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7908)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898ADD4;
      }
      goto L_0898ACB8;
    }
L_0898ACB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898ADC4;
      }
      goto L_0898ACCC;
    }
L_0898ACCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898AD58;
      }
      goto L_0898ACDC;
    }
L_0898ACDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898AD74;
      }
      goto L_0898ACE4;
    }
L_0898ACE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898AD90;
      }
      goto L_0898ACEC;
    }
L_0898ACEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0898ADAC;
      }
      goto L_0898ACF4;
    }
L_0898ACF4:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6428), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424), 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7088)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6436), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AD44;
      }
      goto L_0898AD34;
    }
L_0898AD34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898AD50;
      }
      goto L_0898AD44;
    }
L_0898AD44:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), ctx.gpr[4]);
    goto L_0898AD50;
L_0898AD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ADC4;
      }
      goto L_0898AD58;
    }
L_0898AD58:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898ADC4;
      }
      goto L_0898AD74;
    }
L_0898AD74:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898ADC4;
      }
      goto L_0898AD90;
    }
L_0898AD90:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898ADC4;
      }
      goto L_0898ADAC;
    }
L_0898ADAC:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6428), ctx.gpr[4]);
    goto L_0898ADC4;
L_0898ADC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7088)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7908), ctx.gpr[4]);
    goto L_0898ADD4;
L_0898ADD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    ctx.gpr[5] = (17279u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898B3B8;
      }
      goto L_0898ADE8;
    }
L_0898ADE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898AE18;
      }
      goto L_0898ADFC;
    }
L_0898ADFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B1AC;
      }
      goto L_0898AE04;
    }
L_0898AE04:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B15C;
      }
      goto L_0898AE0C;
    }
L_0898AE0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AE34;
      }
      goto L_0898AE14;
    }
L_0898AE14:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    goto L_0898AE18;
L_0898AE18:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898AF44;
      }
      goto L_0898AE20;
    }
L_0898AE20:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B048;
      }
      goto L_0898AE28;
    }
L_0898AE28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B1AC;
      }
      goto L_0898AE30;
    }
L_0898AE30:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898AE34;
L_0898AE34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6424)));
      if (branch_taken) {
          goto L_0898AE98;
      }
      goto L_0898AE6C;
    }
L_0898AE6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898AED4;
      }
      goto L_0898AE98;
    }
L_0898AE98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898AED4;
L_0898AED4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6424), ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AF1C;
      }
      goto L_0898AF00;
    }
L_0898AF00:
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6424), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898AF1C;
L_0898AF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B1AC;
      }
      goto L_0898AF44;
    }
L_0898AF44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6424)));
      if (branch_taken) {
          goto L_0898AFAC;
      }
      goto L_0898AF80;
    }
L_0898AF80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898AFE8;
      }
      goto L_0898AFAC;
    }
L_0898AFAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898AFE8;
L_0898AFE8:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B01C;
      }
      goto L_0898B00C;
    }
L_0898B00C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), 0u);
    goto L_0898B01C;
L_0898B01C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B1AC;
      }
      goto L_0898B048;
    }
L_0898B048:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424)));
      if (branch_taken) {
          goto L_0898B0AC;
      }
      goto L_0898B080;
    }
L_0898B080:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B0E8;
      }
      goto L_0898B0AC;
    }
L_0898B0AC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898B0E8;
L_0898B0E8:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B130;
      }
      goto L_0898B10C;
    }
L_0898B10C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7908)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6436), ctx.gpr[4]);
    goto L_0898B130;
L_0898B130:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B1AC;
      }
      goto L_0898B15C;
    }
L_0898B15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6428)));
    ctx.gpr[5] = (0u | 1000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424), ctx.gpr[5]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B1AC;
      }
      goto L_0898B194;
    }
L_0898B194:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6424), ctx.gpr[4]);
    goto L_0898B1AC;
L_0898B1AC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9536)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898B3AC;
      }
      goto L_0898B1BC;
    }
L_0898B1BC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898B3AC;
      }
      goto L_0898B1D8;
    }
L_0898B1D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898B3AC;
      }
      goto L_0898B1F4;
    }
L_0898B1F4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B3AC;
      }
      goto L_0898B210;
    }
L_0898B210:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6428)));
      if (branch_taken) {
          goto L_0898B274;
      }
      goto L_0898B248;
    }
L_0898B248:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B2B0;
      }
      goto L_0898B274;
    }
L_0898B274:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898B2B0;
L_0898B2B0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0898B2C0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6428), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898B2C0u) goto L_0898B2C0;
    return;
L_0898B2C0:
    ctx.gpr[31] = (0x0898B2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898B2C8u) goto L_0898B2C8;
    return;
L_0898B2C8:
    ctx.gpr[31] = (0x0898B2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898B2D0u) goto L_0898B2D0;
    return;
L_0898B2D0:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898B2ECu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898B2ECu) goto L_0898B2EC;
    return;
L_0898B2EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898B300u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B300u) goto L_0898B300;
    return;
L_0898B300:
    ctx.gpr[31] = (0x0898B308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898B308u) goto L_0898B308;
    return;
L_0898B308:
    ctx.gpr[31] = (0x0898B310u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B310u) goto L_0898B310;
    return;
L_0898B310:
    ctx.gpr[31] = (0x0898B318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0898B318u) goto L_0898B318;
    return;
L_0898B318:
    ctx.gpr[31] = (0x0898B320u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898B320u) goto L_0898B320;
    return;
L_0898B320:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(972));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x0898B348u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898B348u) goto L_0898B348;
    return;
L_0898B348:
    ctx.gpr[31] = (0x0898B350u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898B350u) goto L_0898B350;
    return;
L_0898B350:
    ctx.gpr[31] = (0x0898B358u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898B358u) goto L_0898B358;
    return;
L_0898B358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898B370u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898B370u) goto L_0898B370;
    return;
L_0898B370:
    ctx.gpr[31] = (0x0898B378u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898B378u) goto L_0898B378;
    return;
L_0898B378:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6816)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B3A4;
      }
      goto L_0898B388;
    }
L_0898B388:
    ctx.gpr[5] = (17387u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6436)));
    ctx.gpr[31] = (0x0898B3A4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A546D4u>(ctx, &aot_mem) && ctx.pc == 0x0898B3A4u) goto L_0898B3A4;
    return;
L_0898B3A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B3B8;
      }
      goto L_0898B3AC;
    }
L_0898B3AC:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    goto L_0898B3B8;
L_0898B3B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6396)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B3E8;
      }
      goto L_0898B3C8;
    }
L_0898B3C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6388), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384), 0u);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392), 0u);
      if (branch_taken) {
          goto L_0898BA28;
      }
      goto L_0898B3E8;
    }
L_0898B3E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6396)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6392)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898B4C4;
      }
      goto L_0898B400;
    }
L_0898B400:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B4B4;
      }
      goto L_0898B414;
    }
L_0898B414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898B4A0;
      }
      goto L_0898B424;
    }
L_0898B424:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898B4A0;
      }
      goto L_0898B42C;
    }
L_0898B42C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898B4A0;
      }
      goto L_0898B434;
    }
L_0898B434:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0898B4A0;
      }
      goto L_0898B43C;
    }
L_0898B43C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6388), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384), 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6396)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6380), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B48C;
      }
      goto L_0898B47C;
    }
L_0898B47C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898B498;
      }
      goto L_0898B48C;
    }
L_0898B48C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    goto L_0898B498;
L_0898B498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B4B4;
      }
      goto L_0898B4A0;
    }
L_0898B4A0:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6388), 0u);
    goto L_0898B4B4;
L_0898B4B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6396)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6392), ctx.gpr[4]);
    goto L_0898B4C4;
L_0898B4C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BA28;
      }
      goto L_0898B4D4;
    }
L_0898B4D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B504;
      }
      goto L_0898B4E8;
    }
L_0898B4E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B870;
      }
      goto L_0898B4F0;
    }
L_0898B4F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B828;
      }
      goto L_0898B4F8;
    }
L_0898B4F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B520;
      }
      goto L_0898B500;
    }
L_0898B500:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    goto L_0898B504;
L_0898B504:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B630;
      }
      goto L_0898B50C;
    }
L_0898B50C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B720;
      }
      goto L_0898B514;
    }
L_0898B514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B870;
      }
      goto L_0898B51C;
    }
L_0898B51C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898B520;
L_0898B520:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384)));
      if (branch_taken) {
          goto L_0898B584;
      }
      goto L_0898B558;
    }
L_0898B558:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B5C0;
      }
      goto L_0898B584;
    }
L_0898B584:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898B5C0;
L_0898B5C0:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384), ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B608;
      }
      goto L_0898B5EC;
    }
L_0898B5EC:
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898B608;
L_0898B608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B870;
      }
      goto L_0898B630;
    }
L_0898B630:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384)));
      if (branch_taken) {
          goto L_0898B698;
      }
      goto L_0898B66C;
    }
L_0898B66C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B6D4;
      }
      goto L_0898B698;
    }
L_0898B698:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898B6D4;
L_0898B6D4:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B6F4;
      }
      goto L_0898B6E4;
    }
L_0898B6E4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116), 0u);
    goto L_0898B6F4;
L_0898B6F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B870;
      }
      goto L_0898B720;
    }
L_0898B720:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384)));
      if (branch_taken) {
          goto L_0898B784;
      }
      goto L_0898B758;
    }
L_0898B758:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B7C0;
      }
      goto L_0898B784;
    }
L_0898B784:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898B7C0;
L_0898B7C0:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B7FC;
      }
      goto L_0898B7D0;
    }
L_0898B7D0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6388), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6380), ctx.gpr[4]);
    goto L_0898B7FC;
L_0898B7FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B870;
      }
      goto L_0898B828;
    }
L_0898B828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6388)));
    ctx.gpr[5] = (17948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898B868;
      }
      goto L_0898B850;
    }
L_0898B850:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384), ctx.gpr[4]);
    goto L_0898B868;
L_0898B868:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0898B870;
L_0898B870:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9536)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BA28;
      }
      goto L_0898B880;
    }
L_0898B880:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6388)));
      if (branch_taken) {
          goto L_0898B8E4;
      }
      goto L_0898B8B8;
    }
L_0898B8B8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B920;
      }
      goto L_0898B8E4;
    }
L_0898B8E4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898B920;
L_0898B920:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0898B930u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6388), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898B930u) goto L_0898B930;
    return;
L_0898B930:
    ctx.gpr[31] = (0x0898B938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898B938u) goto L_0898B938;
    return;
L_0898B938:
    ctx.gpr[31] = (0x0898B940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898B940u) goto L_0898B940;
    return;
L_0898B940:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898B95Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898B95Cu) goto L_0898B95C;
    return;
L_0898B95C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898B970u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B970u) goto L_0898B970;
    return;
L_0898B970:
    ctx.gpr[4] = (17387u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898B98Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 199u, 0x08A54F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B98Cu) goto L_0898B98C;
    return;
L_0898B98C:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0898B998u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 198u, 0x08A54F3Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B998u) goto L_0898B998;
    return;
L_0898B998:
    ctx.gpr[31] = (0x0898B9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898B9A0u) goto L_0898B9A0;
    return;
L_0898B9A0:
    ctx.gpr[31] = (0x0898B9A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B9A8u) goto L_0898B9A8;
    return;
L_0898B9A8:
    ctx.gpr[31] = (0x0898B9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0898B9B0u) goto L_0898B9B0;
    return;
L_0898B9B0:
    ctx.gpr[31] = (0x0898B9B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898B9B8u) goto L_0898B9B8;
    return;
L_0898B9B8:
    ctx.gpr[31] = (0x0898B9C0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898B9C0u) goto L_0898B9C0;
    return;
L_0898B9C0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898B9DCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898B9DCu) goto L_0898B9DC;
    return;
L_0898B9DC:
    ctx.gpr[31] = (0x0898B9E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898B9E4u) goto L_0898B9E4;
    return;
L_0898B9E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0898BA04u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898BA04u) goto L_0898BA04;
    return;
L_0898BA04:
    ctx.gpr[31] = (0x0898BA0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898BA0Cu) goto L_0898BA0C;
    return;
L_0898BA0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6380)));
    ctx.gpr[31] = (0x0898BA20u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A546D4u>(ctx, &aot_mem) && ctx.pc == 0x0898BA20u) goto L_0898BA20;
    return;
L_0898BA20:
    ctx.gpr[31] = (0x0898BA28u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 198u, 0x08A54F3Cu>(ctx, &aot_mem) && ctx.pc == 0x0898BA28u) goto L_0898BA28;
    return;
L_0898BA28:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6796)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898BA58;
      }
      goto L_0898BA3C;
    }
L_0898BA3C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898BA48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 607u, 0x08ADA7C8u>(ctx, &aot_mem) && ctx.pc == 0x0898BA48u) goto L_0898BA48;
    return;
L_0898BA48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BA58;
      }
      goto L_0898BA50;
    }
L_0898BA50:
    ctx.gpr[31] = (0x0898BA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 638u, 0x08987CC4u>(ctx, &aot_mem) && ctx.pc == 0x0898BA58u) goto L_0898BA58;
    return;
L_0898BA58:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BC70;
      }
      goto L_0898BA6C;
    }
L_0898BA6C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    goto L_0898BA70;
L_0898BA70:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(74)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898BC5C;
      }
      goto L_0898BAA0;
    }
L_0898BAA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6452));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BAD0;
      }
      goto L_0898BAB8;
    }
L_0898BAB8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0898BAD0;
L_0898BAD0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6452));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6448));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BB3C;
      }
      goto L_0898BB00;
    }
L_0898BB00:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BB3C;
      }
      goto L_0898BB28;
    }
L_0898BB28:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0898BB3C;
L_0898BB3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BB68;
      }
      goto L_0898BB50;
    }
L_0898BB50:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC48;
      }
      goto L_0898BB68;
    }
L_0898BB68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC48;
      }
      goto L_0898BB74;
    }
L_0898BB74:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898BBB4;
      }
      goto L_0898BB84;
    }
L_0898BB84:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898BB90u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898BB90u) goto L_0898BB90;
    return;
L_0898BB90:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BBA8;
      }
      goto L_0898BB9C;
    }
L_0898BB9C:
    ctx.gpr[31] = (0x0898BBA4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898BBA4u) goto L_0898BBA4;
    return;
L_0898BBA4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898BBA8;
L_0898BBA8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0898BBB4;
L_0898BBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0898BBC0u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898BBC0u) goto L_0898BBC0;
    return;
L_0898BBC0:
    ctx.gpr[31] = (0x0898BBC8u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x089870E8u>(ctx, &aot_mem) && ctx.pc == 0x0898BBC8u) goto L_0898BBC8;
    return;
L_0898BBC8:
    ctx.gpr[31] = (0x0898BBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898BBD0u) goto L_0898BBD0;
    return;
L_0898BBD0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(980));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0898BBECu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898BBECu) goto L_0898BBEC;
    return;
L_0898BBEC:
    ctx.gpr[31] = (0x0898BBF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898BBF4u) goto L_0898BBF4;
    return;
L_0898BBF4:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16322u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51289u);
    ctx.gpr[31] = (0x0898BC10u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898BC10u) goto L_0898BC10;
    return;
L_0898BC10:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898BC48u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898BC48u) goto L_0898BC48;
    return;
L_0898BC48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC5C;
      }
      goto L_0898BC54;
    }
L_0898BC54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_0898BC5C;
L_0898BC5C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0898BA70;
      }
      goto L_0898BC70;
    }
L_0898BC70:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898BC94;
      }
      goto L_0898BC84;
    }
L_0898BC84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC9C;
      }
      goto L_0898BC94;
    }
L_0898BC94:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6442), static_cast<std::uint8_t>(0u));
    goto L_0898BC9C;
L_0898BC9C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BCFC;
      }
      goto L_0898BCAC;
    }
L_0898BCAC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    goto L_0898BCB0;
L_0898BCB0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(142)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BCE8;
      }
      goto L_0898BCD8;
    }
L_0898BCD8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6452));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0898BCE8;
L_0898BCE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898BCB0;
      }
      goto L_0898BCFC;
    }
L_0898BCFC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8840));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(332)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 29u, 0x0898C2A8u>(ctx, &aot_mem); return;
      }
      goto L_0898BD14;
    }
L_0898BD14:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8840));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898BF08;
      }
      goto L_0898BD2C;
    }
L_0898BD2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BF08;
      }
      goto L_0898BD38;
    }
L_0898BD38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6442)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BD54;
      }
      goto L_0898BD48;
    }
L_0898BD48:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6440), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0898BD54;
L_0898BD54:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6442), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BD80;
      }
      goto L_0898BD74;
    }
L_0898BD74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6440))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BED4;
      }
      goto L_0898BD80;
    }
L_0898BD80:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[31] = (0x0898BD90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898BD90u) goto L_0898BD90;
    return;
L_0898BD90:
    ctx.gpr[31] = (0x0898BD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x089870E8u>(ctx, &aot_mem) && ctx.pc == 0x0898BD98u) goto L_0898BD98;
    return;
L_0898BD98:
    ctx.gpr[31] = (0x0898BDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55174u>(ctx, &aot_mem) && ctx.pc == 0x0898BDA0u) goto L_0898BDA0;
    return;
L_0898BDA0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(61)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(984));
    ctx.gpr[31] = (0x0898BDBCu);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24908)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898BDBCu) goto L_0898BDBC;
    return;
L_0898BDBC:
    ctx.gpr[31] = (0x0898BDC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898BDC4u) goto L_0898BDC4;
    return;
L_0898BDC4:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898BDFCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898BDFCu) goto L_0898BDFC;
    return;
L_0898BDFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BED4;
      }
      goto L_0898BE08;
    }
L_0898BE08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898BE48;
      }
      goto L_0898BE18;
    }
L_0898BE18:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0898BE24u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898BE24u) goto L_0898BE24;
    return;
L_0898BE24:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BE3C;
      }
      goto L_0898BE30;
    }
L_0898BE30:
    ctx.gpr[31] = (0x0898BE38u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898BE38u) goto L_0898BE38;
    return;
L_0898BE38:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0898BE3C;
L_0898BE3C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0898BE48;
L_0898BE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0898BE54u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898BE54u) goto L_0898BE54;
    return;
L_0898BE54:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[31] = (0x0898BE64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x0898BE64u) goto L_0898BE64;
    return;
L_0898BE64:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898BE74u);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898BE74u) goto L_0898BE74;
    return;
L_0898BE74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(61)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(988));
    ctx.gpr[31] = (0x0898BE90u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24908)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898BE90u) goto L_0898BE90;
    return;
L_0898BE90:
    ctx.gpr[31] = (0x0898BE98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898BE98u) goto L_0898BE98;
    return;
L_0898BE98:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898BED4u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898BED4u) goto L_0898BED4;
    return;
L_0898BED4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6440))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BF08;
      }
      goto L_0898BEE4;
    }
L_0898BEE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6440))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6440), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6440))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BF08;
      }
      goto L_0898BF00;
    }
L_0898BF00:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6440), static_cast<std::uint16_t>(0u));
    goto L_0898BF08;
L_0898BF08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898BF20;
      }
      goto L_0898BF18;
    }
L_0898BF18:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0898BF20;
L_0898BF20:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 29u, 0x0898C2A8u>(ctx, &aot_mem); return;
      }
      goto L_0898BF30;
    }
L_0898BF30:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    goto L_0898BF34;
L_0898BF34:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(74)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 28u, 0x0898C294u>(ctx, &aot_mem); return;
      }
      goto L_0898BF64;
    }
L_0898BF64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BF9C;
      }
      goto L_0898BF78;
    }
L_0898BF78:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BF9C;
      }
      goto L_0898BF90;
    }
L_0898BF90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 27u, 0x0898C28Cu>(ctx, &aot_mem); return;
      }
      goto L_0898BF9C;
    }
L_0898BF9C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 3u, 0x0898C044u>(ctx, &aot_mem); return;
      }
      goto L_0898BFA8;
    }
L_0898BFA8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0898BFB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0898BFB8u) goto L_0898BFB8;
    return;
L_0898BFB8:
    ctx.gpr[31] = (0x0898BFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x089870E8u>(ctx, &aot_mem) && ctx.pc == 0x0898BFC0u) goto L_0898BFC0;
    return;
L_0898BFC0:
    ctx.gpr[31] = (0x0898BFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55174u>(ctx, &aot_mem) && ctx.pc == 0x0898BFC8u) goto L_0898BFC8;
    return;
L_0898BFC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(77)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(78)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x0898BFE4u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24908)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898BFE4u) goto L_0898BFE4;
    return;
L_0898BFE4:
    ctx.gpr[31] = (0x0898BFECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898BFECu) goto L_0898BFEC;
    return;
L_0898BFEC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898BFF8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x0898BFF8u) goto L_0898BFF8;
    return;
L_0898BFF8:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.pc = 0x0898C000u; return;
}

void recomp_unit_0097(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0097_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_97(Runtime &runtime) {
    runtime.register_generated_unit(97u, 0x08988000u, 16384u, &recomp_unit_0097, &recomp_unit_0097_entry);
    runtime.register_function(0x08988000u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988024u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898802Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988038u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988040u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988054u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988060u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988080u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988090u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988100u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898812Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988174u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988188u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988194u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988214u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898821Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988280u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988288u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988294u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898829Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089882D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988304u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898830Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988374u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898837Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898838Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988400u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988438u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988450u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988460u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988480u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988490u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988520u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988530u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988554u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988580u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898858Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988658u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988668u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898867Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988734u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988748u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988760u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898876Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988780u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988794u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898879Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988800u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988810u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988828u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898882Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898883Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988854u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898885Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988894u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989030u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989058u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989088u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989104u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989110u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989124u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989210u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989254u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989270u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989314u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989320u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898932Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989338u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989344u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989358u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989408u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989410u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989434u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898945Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989460u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989468u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989490u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989514u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989558u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989574u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989590u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989608u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989638u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989650u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898966Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898969Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989720u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898972Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989738u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989744u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989750u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898975Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989770u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989828u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989844u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989884u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989900u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989908u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989914u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898994Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989958u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989994u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A010u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A020u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A028u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A060u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A068u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A094u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A09Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A104u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A110u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A12Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A134u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A14Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A15Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A17Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A184u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A188u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A204u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A210u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A220u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A228u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A240u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A248u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A250u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A258u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A260u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A268u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A270u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A278u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A290u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A298u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A320u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A330u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A334u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A37Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A428u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A430u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A444u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A458u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A45Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A46Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A484u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A538u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A544u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A550u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A558u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A588u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A624u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A634u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A640u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A650u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A65Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A660u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A680u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A690u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A714u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A724u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A73Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A744u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A750u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A760u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A778u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A780u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A798u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A838u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A840u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A848u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A890u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A948u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A950u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A96Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A978u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A984u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A98Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A990u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A998u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AED4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B00Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B01Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B048u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B080u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B10Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B130u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B15Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B194u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B210u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B248u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B274u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B300u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B308u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B310u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B318u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B320u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B348u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B350u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B358u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B370u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B378u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B388u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B400u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B414u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B424u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B42Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B434u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B43Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B47Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B48Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B498u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B500u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B504u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B50Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B514u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B51Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B520u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B558u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B584u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B608u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B630u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B66Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B698u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B720u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B758u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B784u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B828u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B850u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B868u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B870u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B880u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B920u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B930u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B938u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B940u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B95Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B970u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B98Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B998u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BED4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFF8u, &recomp_unit_0097, "recomp_unit_0097");
}
} // namespace psprecomp
