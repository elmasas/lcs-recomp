#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "decomp.hpp"  // [decomp-hook]
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0029[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0,
    0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 44, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 50,
    0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68,
    0, 0, 0, 0, 69, 70, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0,
    85, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99,
    0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116,
    0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0,
    165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183,
    0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0,
    192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0,
    199, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281,
    0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 311,
    0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0,
    319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329,
    0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354,
    0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0,
    393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0,
    425, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0,
    437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0,
    444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 446, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0,
    0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0,
    486, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0,
    493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 503,
    0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 507, 0, 0, 0, 0, 0, 0, 0, 508,
    0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524,
    0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0,
    530, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 543, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547,
    0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 0, 558, 0, 559, 0, 0, 560, 0,
    561, 0, 562, 0, 563, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566,
    0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0,
    0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 577,
    0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 584, 0, 585, 0, 0, 586, 0, 0,
    587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 591, 0, 592, 593, 594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 598,
    0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606,
    0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 614, 615, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0,
    0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 622, 623, 0, 624, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0,
    0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 637, 638, 0, 639, 0, 640, 0, 0, 0,
    0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0,
    648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 0, 661, 0, 662,
    0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 672, 0, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0, 676,
    0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686, 0,
    687, 688, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692,
    0, 693, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0,
    0, 704, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 710,
    0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 719, 0, 720, 0, 0, 0, 721, 722, 0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 726, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0,
    0, 730, 731, 0, 0, 0, 732, 0, 733, 0, 0, 0, 734, 735, 736, 0, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 739, 740, 0, 0, 0, 741,
};
void recomp_unit_0029_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08878000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0029[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08878000;
    case 2u: goto L_08878050;
    case 3u: goto L_08878060;
    case 4u: goto L_088780F4;
    case 5u: goto L_08878104;
    case 6u: goto L_08878110;
    case 7u: goto L_08878118;
    case 8u: goto L_08878120;
    case 9u: goto L_0887814C;
    case 10u: goto L_08878188;
    case 11u: goto L_088781A0;
    case 12u: goto L_088781B4;
    case 13u: goto L_088781C0;
    case 14u: goto L_088781D0;
    case 15u: goto L_088781E0;
    case 16u: goto L_08878200;
    case 17u: goto L_08878210;
    case 18u: goto L_0887821C;
    case 19u: goto L_08878230;
    case 20u: goto L_08878240;
    case 21u: goto L_08878248;
    case 22u: goto L_0887825C;
    case 23u: goto L_08878264;
    case 24u: goto L_0887826C;
    case 25u: goto L_0887827C;
    case 26u: goto L_08878298;
    case 27u: goto L_088782AC;
    case 28u: goto L_088782CC;
    case 29u: goto L_088782D4;
    case 30u: goto L_088782DC;
    case 31u: goto L_088782E0;
    case 32u: goto L_088782F4;
    case 33u: goto L_08878308;
    case 34u: goto L_08878318;
    case 35u: goto L_08878324;
    case 36u: goto L_0887835C;
    case 37u: goto L_0887836C;
    case 38u: goto L_08878374;
    case 39u: goto L_08878384;
    case 40u: goto L_0887838C;
    case 41u: goto L_08878398;
    case 42u: goto L_088783A0;
    case 43u: goto L_088783B4;
    case 44u: goto L_088783BC;
    case 45u: goto L_088783C0;
    case 46u: goto L_088783CC;
    case 47u: goto L_088783D8;
    case 48u: goto L_088783E8;
    case 49u: goto L_088783F8;
    case 50u: goto L_088783FC;
    case 51u: goto L_08878414;
    case 52u: goto L_08878420;
    case 53u: goto L_08878430;
    case 54u: goto L_08878434;
    case 55u: goto L_0887843C;
    case 56u: goto L_0887844C;
    case 57u: goto L_08878454;
    case 58u: goto L_0887847C;
    case 59u: goto L_08878490;
    case 60u: goto L_08878498;
    case 61u: goto L_088784A0;
    case 62u: goto L_088784AC;
    case 63u: goto L_088784BC;
    case 64u: goto L_088784D0;
    case 65u: goto L_088784E0;
    case 66u: goto L_088784EC;
    case 67u: goto L_088784F4;
    case 68u: goto L_088784FC;
    case 69u: goto L_08878510;
    case 70u: goto L_08878514;
    case 71u: goto L_08878518;
    case 72u: goto L_08878528;
    case 73u: goto L_08878578;
    case 74u: goto L_08878658;
    case 75u: goto L_08878674;
    case 76u: goto L_08878688;
    case 77u: goto L_088786A0;
    case 78u: goto L_088786B4;
    case 79u: goto L_088786C0;
    case 80u: goto L_088786C8;
    case 81u: goto L_088786CC;
    case 82u: goto L_088786D8;
    case 83u: goto L_088786E4;
    case 84u: goto L_088786F0;
    case 85u: goto L_08878700;
    case 86u: goto L_08878708;
    case 87u: goto L_08878718;
    case 88u: goto L_08878724;
    case 89u: goto L_08878734;
    case 90u: goto L_08878744;
    case 91u: goto L_0887874C;
    case 92u: goto L_08878760;
    case 93u: goto L_0887877C;
    case 94u: goto L_088787AC;
    case 95u: goto L_088787CC;
    case 96u: goto L_088787E0;
    case 97u: goto L_088787E8;
    case 98u: goto L_088787F4;
    case 99u: goto L_088787FC;
    case 100u: goto L_08878804;
    case 101u: goto L_0887880C;
    case 102u: goto L_08878814;
    case 103u: goto L_0887881C;
    case 104u: goto L_08878830;
    case 105u: goto L_08878838;
    case 106u: goto L_08878844;
    case 107u: goto L_0887884C;
    case 108u: goto L_08878854;
    case 109u: goto L_0887885C;
    case 110u: goto L_08878864;
    case 111u: goto L_0887886C;
    case 112u: goto L_08878880;
    case 113u: goto L_08878894;
    case 114u: goto L_088788C8;
    case 115u: goto L_088788E4;
    case 116u: goto L_088788FC;
    case 117u: goto L_08878908;
    case 118u: goto L_08878910;
    case 119u: goto L_08878924;
    case 120u: goto L_08878938;
    case 121u: goto L_08878944;
    case 122u: goto L_0887895C;
    case 123u: goto L_08878968;
    case 124u: goto L_088789F8;
    case 125u: goto L_08878A04;
    case 126u: goto L_08878A20;
    case 127u: goto L_08878A30;
    case 128u: goto L_08878A64;
    case 129u: goto L_08878A78;
    case 130u: goto L_08878A9C;
    case 131u: goto L_08878AD8;
    case 132u: goto L_08878AEC;
    case 133u: goto L_08878B24;
    case 134u: goto L_08878B34;
    case 135u: goto L_08878B40;
    case 136u: goto L_08878B50;
    case 137u: goto L_08878B58;
    case 138u: goto L_08878B64;
    case 139u: goto L_08878B6C;
    case 140u: goto L_08878B84;
    case 141u: goto L_08878BAC;
    case 142u: goto L_08878BB8;
    case 143u: goto L_08878BD4;
    case 144u: goto L_08878BE0;
    case 145u: goto L_08878BF0;
    case 146u: goto L_08878C28;
    case 147u: goto L_08878C30;
    case 148u: goto L_08878C44;
    case 149u: goto L_08878C64;
    case 150u: goto L_08878C78;
    case 151u: goto L_08878CD4;
    case 152u: goto L_08878D00;
    case 153u: goto L_08878D18;
    case 154u: goto L_08878D30;
    case 155u: goto L_08878D48;
    case 156u: goto L_08878D68;
    case 157u: goto L_08878D80;
    case 158u: goto L_08878D94;
    case 159u: goto L_08878DA8;
    case 160u: goto L_08878DBC;
    case 161u: goto L_08878DD0;
    case 162u: goto L_08878DDC;
    case 163u: goto L_08878DE4;
    case 164u: goto L_08878DF0;
    case 165u: goto L_08878E00;
    case 166u: goto L_08878E08;
    case 167u: goto L_08878E18;
    case 168u: goto L_08878E28;
    case 169u: goto L_08878E34;
    case 170u: goto L_08878E44;
    case 171u: goto L_08878E50;
    case 172u: goto L_08878E54;
    case 173u: goto L_08878E5C;
    case 174u: goto L_08878EAC;
    case 175u: goto L_08878EB4;
    case 176u: goto L_08878EC4;
    case 177u: goto L_08878ED8;
    case 178u: goto L_08878EEC;
    case 179u: goto L_08878F1C;
    case 180u: goto L_08878F34;
    case 181u: goto L_08878F44;
    case 182u: goto L_08878F74;
    case 183u: goto L_08878F7C;
    case 184u: goto L_08878F88;
    case 185u: goto L_08878F94;
    case 186u: goto L_08878FA8;
    case 187u: goto L_08878FB0;
    case 188u: goto L_08878FCC;
    case 189u: goto L_08878FD4;
    case 190u: goto L_08878FF0;
    case 191u: goto L_08878FF8;
    case 192u: goto L_08879000;
    case 193u: goto L_0887900C;
    case 194u: goto L_08879028;
    case 195u: goto L_08879030;
    case 196u: goto L_08879060;
    case 197u: goto L_0887906C;
    case 198u: goto L_08879078;
    case 199u: goto L_08879080;
    case 200u: goto L_08879088;
    case 201u: goto L_08879094;
    case 202u: goto L_0887909C;
    case 203u: goto L_088790A4;
    case 204u: goto L_088790AC;
    case 205u: goto L_088790BC;
    case 206u: goto L_088790D4;
    case 207u: goto L_088790DC;
    case 208u: goto L_088790E0;
    case 209u: goto L_08879100;
    case 210u: goto L_08879120;
    case 211u: goto L_0887913C;
    case 212u: goto L_08879158;
    case 213u: goto L_0887916C;
    case 214u: goto L_08879174;
    case 215u: goto L_08879180;
    case 216u: goto L_08879208;
    case 217u: goto L_08879214;
    case 218u: goto L_08879228;
    case 219u: goto L_08879234;
    case 220u: goto L_08879254;
    case 221u: goto L_0887926C;
    case 222u: goto L_08879274;
    case 223u: goto L_08879280;
    case 224u: goto L_08879304;
    case 225u: goto L_0887931C;
    case 226u: goto L_08879344;
    case 227u: goto L_08879350;
    case 228u: goto L_08879370;
    case 229u: goto L_08879384;
    case 230u: goto L_088793B4;
    case 231u: goto L_088793C0;
    case 232u: goto L_088793C8;
    case 233u: goto L_088793D4;
    case 234u: goto L_088793E8;
    case 235u: goto L_08879414;
    case 236u: goto L_08879420;
    case 237u: goto L_08879428;
    case 238u: goto L_08879434;
    case 239u: goto L_08879450;
    case 240u: goto L_08879488;
    case 241u: goto L_08879490;
    case 242u: goto L_08879498;
    case 243u: goto L_088794A8;
    case 244u: goto L_088794B0;
    case 245u: goto L_088794C8;
    case 246u: goto L_088794DC;
    case 247u: goto L_088794E4;
    case 248u: goto L_0887952C;
    case 249u: goto L_08879570;
    case 250u: goto L_0887958C;
    case 251u: goto L_088795C8;
    case 252u: goto L_088795DC;
    case 253u: goto L_088795E4;
    case 254u: goto L_088795EC;
    case 255u: goto L_08879648;
    case 256u: goto L_0887966C;
    case 257u: goto L_088796B4;
    case 258u: goto L_088796BC;
    case 259u: goto L_088796C4;
    case 260u: goto L_0887970C;
    case 261u: goto L_08879750;
    case 262u: goto L_08879774;
    case 263u: goto L_088797AC;
    case 264u: goto L_088797B4;
    case 265u: goto L_088797BC;
    case 266u: goto L_088797D4;
    case 267u: goto L_088797E0;
    case 268u: goto L_08879868;
    case 269u: goto L_0887989C;
    case 270u: goto L_088798F0;
    case 271u: goto L_0887990C;
    case 272u: goto L_08879918;
    case 273u: goto L_0887992C;
    case 274u: goto L_0887995C;
    case 275u: goto L_08879974;
    case 276u: goto L_08879980;
    case 277u: goto L_088799B0;
    case 278u: goto L_088799B8;
    case 279u: goto L_088799C4;
    case 280u: goto L_088799F4;
    case 281u: goto L_088799FC;
    case 282u: goto L_08879A08;
    case 283u: goto L_08879A1C;
    case 284u: goto L_08879A4C;
    case 285u: goto L_08879A64;
    case 286u: goto L_08879A6C;
    case 287u: goto L_08879AA4;
    case 288u: goto L_08879AAC;
    case 289u: goto L_08879AB4;
    case 290u: goto L_08879B10;
    case 291u: goto L_08879B34;
    case 292u: goto L_08879B50;
    case 293u: goto L_08879B88;
    case 294u: goto L_08879B90;
    case 295u: goto L_08879B98;
    case 296u: goto L_08879BB4;
    case 297u: goto L_08879BBC;
    case 298u: goto L_08879BD8;
    case 299u: goto L_08879BEC;
    case 300u: goto L_08879BF4;
    case 301u: goto L_08879C48;
    case 302u: goto L_08879C6C;
    case 303u: goto L_08879C88;
    case 304u: goto L_08879C94;
    case 305u: goto L_08879CBC;
    case 306u: goto L_08879CC4;
    case 307u: goto L_08879CD0;
    case 308u: goto L_08879CD8;
    case 309u: goto L_08879CEC;
    case 310u: goto L_08879CF4;
    case 311u: goto L_08879CFC;
    case 312u: goto L_08879D10;
    case 313u: goto L_08879D20;
    case 314u: goto L_08879D34;
    case 315u: goto L_08879D4C;
    case 316u: goto L_08879D54;
    case 317u: goto L_08879D68;
    case 318u: goto L_08879D74;
    case 319u: goto L_08879D80;
    case 320u: goto L_08879D94;
    case 321u: goto L_08879DC4;
    case 322u: goto L_08879DCC;
    case 323u: goto L_08879DFC;
    case 324u: goto L_08879E04;
    case 325u: goto L_08879E20;
    case 326u: goto L_08879E48;
    case 327u: goto L_08879E54;
    case 328u: goto L_08879E74;
    case 329u: goto L_08879E7C;
    case 330u: goto L_08879E84;
    case 331u: goto L_08879E90;
    case 332u: goto L_08879EAC;
    case 333u: goto L_08879EB4;
    case 334u: goto L_08879EC4;
    case 335u: goto L_08879ED4;
    case 336u: goto L_08879EDC;
    case 337u: goto L_08879EE4;
    case 338u: goto L_08879EFC;
    case 339u: goto L_08879F14;
    case 340u: goto L_08879F20;
    case 341u: goto L_08879F2C;
    case 342u: goto L_08879F38;
    case 343u: goto L_08879F44;
    case 344u: goto L_08879F50;
    case 345u: goto L_08879F5C;
    case 346u: goto L_08879F68;
    case 347u: goto L_08879F7C;
    case 348u: goto L_08879F84;
    case 349u: goto L_08879FB0;
    case 350u: goto L_08879FB8;
    case 351u: goto L_08879FC4;
    case 352u: goto L_08879FCC;
    case 353u: goto L_08879FEC;
    case 354u: goto L_08879FFC;
    case 355u: goto L_0887A008;
    case 356u: goto L_0887A01C;
    case 357u: goto L_0887A028;
    case 358u: goto L_0887A034;
    case 359u: goto L_0887A04C;
    case 360u: goto L_0887A05C;
    case 361u: goto L_0887A074;
    case 362u: goto L_0887A088;
    case 363u: goto L_0887A0BC;
    case 364u: goto L_0887A0C4;
    case 365u: goto L_0887A0F0;
    case 366u: goto L_0887A0F8;
    case 367u: goto L_0887A10C;
    case 368u: goto L_0887A120;
    case 369u: goto L_0887A148;
    case 370u: goto L_0887A154;
    case 371u: goto L_0887A174;
    case 372u: goto L_0887A19C;
    case 373u: goto L_0887A210;
    case 374u: goto L_0887A218;
    case 375u: goto L_0887A220;
    case 376u: goto L_0887A234;
    case 377u: goto L_0887A23C;
    case 378u: goto L_0887A254;
    case 379u: goto L_0887A268;
    case 380u: goto L_0887A270;
    case 381u: goto L_0887A2B4;
    case 382u: goto L_0887A2EC;
    case 383u: goto L_0887A31C;
    case 384u: goto L_0887A398;
    case 385u: goto L_0887A3A0;
    case 386u: goto L_0887A3A8;
    case 387u: goto L_0887A3F0;
    case 388u: goto L_0887A434;
    case 389u: goto L_0887A464;
    case 390u: goto L_0887A4D8;
    case 391u: goto L_0887A4E0;
    case 392u: goto L_0887A4E8;
    case 393u: goto L_0887A500;
    case 394u: goto L_0887A50C;
    case 395u: goto L_0887A594;
    case 396u: goto L_0887A5C8;
    case 397u: goto L_0887A61C;
    case 398u: goto L_0887A64C;
    case 399u: goto L_0887A6BC;
    case 400u: goto L_0887A6C4;
    case 401u: goto L_0887A6CC;
    case 402u: goto L_0887A74C;
    case 403u: goto L_0887A7C0;
    case 404u: goto L_0887A7C8;
    case 405u: goto L_0887A7D0;
    case 406u: goto L_0887A7F0;
    case 407u: goto L_0887A7F8;
    case 408u: goto L_0887A814;
    case 409u: goto L_0887A828;
    case 410u: goto L_0887A830;
    case 411u: goto L_0887A874;
    case 412u: goto L_0887A8A4;
    case 413u: goto L_0887A8E4;
    case 414u: goto L_0887A8F0;
    case 415u: goto L_0887A8F8;
    case 416u: goto L_0887A900;
    case 417u: goto L_0887A960;
    case 418u: goto L_0887A980;
    case 419u: goto L_0887A9B4;
    case 420u: goto L_0887A9C4;
    case 421u: goto L_0887A9CC;
    case 422u: goto L_0887A9E4;
    case 423u: goto L_0887A9EC;
    case 424u: goto L_0887A9F8;
    case 425u: goto L_0887AA00;
    case 426u: goto L_0887AA08;
    case 427u: goto L_0887AA1C;
    case 428u: goto L_0887AA24;
    case 429u: goto L_0887AA2C;
    case 430u: goto L_0887AA34;
    case 431u: goto L_0887AA3C;
    case 432u: goto L_0887AA4C;
    case 433u: goto L_0887AA54;
    case 434u: goto L_0887AA5C;
    case 435u: goto L_0887AA64;
    case 436u: goto L_0887AA78;
    case 437u: goto L_0887AA80;
    case 438u: goto L_0887AA8C;
    case 439u: goto L_0887AB10;
    case 440u: goto L_0887AB28;
    case 441u: goto L_0887AB48;
    case 442u: goto L_0887AB50;
    case 443u: goto L_0887AB78;
    case 444u: goto L_0887AB80;
    case 445u: goto L_0887AB8C;
    case 446u: goto L_0887AC10;
    case 447u: goto L_0887AC14;
    case 448u: goto L_0887AC1C;
    case 449u: goto L_0887AC40;
    case 450u: goto L_0887AC54;
    case 451u: goto L_0887AC68;
    case 452u: goto L_0887AC70;
    case 453u: goto L_0887AC78;
    case 454u: goto L_0887ACA0;
    case 455u: goto L_0887ACA8;
    case 456u: goto L_0887ACB4;
    case 457u: goto L_0887ACBC;
    case 458u: goto L_0887ACC4;
    case 459u: goto L_0887ACD8;
    case 460u: goto L_0887ACE0;
    case 461u: goto L_0887ACE8;
    case 462u: goto L_0887ACF0;
    case 463u: goto L_0887ACF8;
    case 464u: goto L_0887AD0C;
    case 465u: goto L_0887AD20;
    case 466u: goto L_0887AD28;
    case 467u: goto L_0887AD30;
    case 468u: goto L_0887AD40;
    case 469u: goto L_0887AD58;
    case 470u: goto L_0887AD60;
    case 471u: goto L_0887AD6C;
    case 472u: goto L_0887ADF4;
    case 473u: goto L_0887AE04;
    case 474u: goto L_0887AE38;
    case 475u: goto L_0887AE40;
    case 476u: goto L_0887AE4C;
    case 477u: goto L_0887AED4;
    case 478u: goto L_0887AED8;
    case 479u: goto L_0887AEE0;
    case 480u: goto L_0887AEE8;
    case 481u: goto L_0887AF1C;
    case 482u: goto L_0887AF24;
    case 483u: goto L_0887AF60;
    case 484u: goto L_0887AF70;
    case 485u: goto L_0887AF78;
    case 486u: goto L_0887AF80;
    case 487u: goto L_0887AF8C;
    case 488u: goto L_0887AF98;
    case 489u: goto L_0887AFBC;
    case 490u: goto L_0887AFC4;
    case 491u: goto L_0887AFEC;
    case 492u: goto L_0887AFF8;
    case 493u: goto L_0887B000;
    case 494u: goto L_0887B00C;
    case 495u: goto L_0887B020;
    case 496u: goto L_0887B03C;
    case 497u: goto L_0887B044;
    case 498u: goto L_0887B04C;
    case 499u: goto L_0887B054;
    case 500u: goto L_0887B060;
    case 501u: goto L_0887B068;
    case 502u: goto L_0887B074;
    case 503u: goto L_0887B07C;
    case 504u: goto L_0887B084;
    case 505u: goto L_0887B090;
    case 506u: goto L_0887B0D8;
    case 507u: goto L_0887B0DC;
    case 508u: goto L_0887B0FC;
    case 509u: goto L_0887B114;
    case 510u: goto L_0887B11C;
    case 511u: goto L_0887B134;
    case 512u: goto L_0887B140;
    case 513u: goto L_0887B148;
    case 514u: goto L_0887B1A4;
    case 515u: goto L_0887B1A8;
    case 516u: goto L_0887B1C4;
    case 517u: goto L_0887B1D0;
    case 518u: goto L_0887B214;
    case 519u: goto L_0887B238;
    case 520u: goto L_0887B240;
    case 521u: goto L_0887B250;
    case 522u: goto L_0887B26C;
    case 523u: goto L_0887B274;
    case 524u: goto L_0887B27C;
    case 525u: goto L_0887B298;
    case 526u: goto L_0887B2AC;
    case 527u: goto L_0887B2C8;
    case 528u: goto L_0887B2DC;
    case 529u: goto L_0887B2F0;
    case 530u: goto L_0887B300;
    case 531u: goto L_0887B310;
    case 532u: goto L_0887B31C;
    case 533u: goto L_0887B324;
    case 534u: goto L_0887B32C;
    case 535u: goto L_0887B334;
    case 536u: goto L_0887B33C;
    case 537u: goto L_0887B344;
    case 538u: goto L_0887B34C;
    case 539u: goto L_0887B354;
    case 540u: goto L_0887B35C;
    case 541u: goto L_0887B364;
    case 542u: goto L_0887B36C;
    case 543u: goto L_0887B370;
    case 544u: goto L_0887B3A8;
    case 545u: goto L_0887B3D0;
    case 546u: goto L_0887B3F0;
    case 547u: goto L_0887B3FC;
    case 548u: goto L_0887B404;
    case 549u: goto L_0887B40C;
    case 550u: goto L_0887B414;
    case 551u: goto L_0887B41C;
    case 552u: goto L_0887B428;
    case 553u: goto L_0887B430;
    case 554u: goto L_0887B43C;
    case 555u: goto L_0887B444;
    case 556u: goto L_0887B450;
    case 557u: goto L_0887B458;
    case 558u: goto L_0887B464;
    case 559u: goto L_0887B46C;
    case 560u: goto L_0887B478;
    case 561u: goto L_0887B480;
    case 562u: goto L_0887B488;
    case 563u: goto L_0887B490;
    case 564u: goto L_0887B4A0;
    case 565u: goto L_0887B4A8;
    case 566u: goto L_0887B4FC;
    case 567u: goto L_0887B504;
    case 568u: goto L_0887B510;
    case 569u: goto L_0887B534;
    case 570u: goto L_0887B578;
    case 571u: goto L_0887B588;
    case 572u: goto L_0887B5A4;
    case 573u: goto L_0887B5BC;
    case 574u: goto L_0887B5CC;
    case 575u: goto L_0887B5DC;
    case 576u: goto L_0887B5EC;
    case 577u: goto L_0887B5FC;
    case 578u: goto L_0887B60C;
    case 579u: goto L_0887B61C;
    case 580u: goto L_0887B62C;
    case 581u: goto L_0887B63C;
    case 582u: goto L_0887B64C;
    case 583u: goto L_0887B65C;
    case 584u: goto L_0887B660;
    case 585u: goto L_0887B668;
    case 586u: goto L_0887B674;
    case 587u: goto L_0887B680;
    case 588u: goto L_0887B6A0;
    case 589u: goto L_0887B6A8;
    case 590u: goto L_0887B6B4;
    case 591u: goto L_0887B6C0;
    case 592u: goto L_0887B6C8;
    case 593u: goto L_0887B6CC;
    case 594u: goto L_0887B6D0;
    case 595u: goto L_0887B6D8;
    case 596u: goto L_0887B6E4;
    case 597u: goto L_0887B6F0;
    case 598u: goto L_0887B6FC;
    case 599u: goto L_0887B714;
    case 600u: goto L_0887B71C;
    case 601u: goto L_0887B72C;
    case 602u: goto L_0887B73C;
    case 603u: goto L_0887B744;
    case 604u: goto L_0887B74C;
    case 605u: goto L_0887B764;
    case 606u: goto L_0887B77C;
    case 607u: goto L_0887B788;
    case 608u: goto L_0887B794;
    case 609u: goto L_0887B7A0;
    case 610u: goto L_0887B7AC;
    case 611u: goto L_0887B7B8;
    case 612u: goto L_0887B7C4;
    case 613u: goto L_0887B7D0;
    case 614u: goto L_0887B7E4;
    case 615u: goto L_0887B7E8;
    case 616u: goto L_0887B810;
    case 617u: goto L_0887B888;
    case 618u: goto L_0887B8B4;
    case 619u: goto L_0887B8F4;
    case 620u: goto L_0887B914;
    case 621u: goto L_0887B928;
    case 622u: goto L_0887B930;
    case 623u: goto L_0887B934;
    case 624u: goto L_0887B93C;
    case 625u: goto L_0887B950;
    case 626u: goto L_0887B958;
    case 627u: goto L_0887B96C;
    case 628u: goto L_0887B990;
    case 629u: goto L_0887B9B8;
    case 630u: goto L_0887B9C8;
    case 631u: goto L_0887B9E0;
    case 632u: goto L_0887BA08;
    case 633u: goto L_0887BA10;
    case 634u: goto L_0887BA30;
    case 635u: goto L_0887BA38;
    case 636u: goto L_0887BA48;
    case 637u: goto L_0887BA5C;
    case 638u: goto L_0887BA60;
    case 639u: goto L_0887BA68;
    case 640u: goto L_0887BA70;
    case 641u: goto L_0887BA8C;
    case 642u: goto L_0887BAAC;
    case 643u: goto L_0887BAC4;
    case 644u: goto L_0887BAD0;
    case 645u: goto L_0887BAE8;
    case 646u: goto L_0887BAF0;
    case 647u: goto L_0887BAF8;
    case 648u: goto L_0887BB00;
    case 649u: goto L_0887BB08;
    case 650u: goto L_0887BB10;
    case 651u: goto L_0887BB18;
    case 652u: goto L_0887BB20;
    case 653u: goto L_0887BB28;
    case 654u: goto L_0887BB30;
    case 655u: goto L_0887BB38;
    case 656u: goto L_0887BB40;
    case 657u: goto L_0887BB4C;
    case 658u: goto L_0887BB54;
    case 659u: goto L_0887BB60;
    case 660u: goto L_0887BB68;
    case 661u: goto L_0887BB74;
    case 662u: goto L_0887BB7C;
    case 663u: goto L_0887BB88;
    case 664u: goto L_0887BB90;
    case 665u: goto L_0887BB98;
    case 666u: goto L_0887BBA0;
    case 667u: goto L_0887BBA8;
    case 668u: goto L_0887BBB0;
    case 669u: goto L_0887BBB8;
    case 670u: goto L_0887BBC0;
    case 671u: goto L_0887BBC8;
    case 672u: goto L_0887BBCC;
    case 673u: goto L_0887BBDC;
    case 674u: goto L_0887BBE8;
    case 675u: goto L_0887BBF4;
    case 676u: goto L_0887BBFC;
    case 677u: goto L_0887BC04;
    case 678u: goto L_0887BC10;
    case 679u: goto L_0887BC28;
    case 680u: goto L_0887BC30;
    case 681u: goto L_0887BC38;
    case 682u: goto L_0887BC40;
    case 683u: goto L_0887BC4C;
    case 684u: goto L_0887BC58;
    case 685u: goto L_0887BC70;
    case 686u: goto L_0887BC78;
    case 687u: goto L_0887BC80;
    case 688u: goto L_0887BC84;
    case 689u: goto L_0887BC8C;
    case 690u: goto L_0887BCDC;
    case 691u: goto L_0887BCEC;
    case 692u: goto L_0887BCFC;
    case 693u: goto L_0887BD04;
    case 694u: goto L_0887BD10;
    case 695u: goto L_0887BD18;
    case 696u: goto L_0887BD24;
    case 697u: goto L_0887BD38;
    case 698u: goto L_0887BD40;
    case 699u: goto L_0887BD48;
    case 700u: goto L_0887BD54;
    case 701u: goto L_0887BD60;
    case 702u: goto L_0887BD68;
    case 703u: goto L_0887BD74;
    case 704u: goto L_0887BD84;
    case 705u: goto L_0887BD88;
    case 706u: goto L_0887BDA8;
    case 707u: goto L_0887BDD0;
    case 708u: goto L_0887BDE0;
    case 709u: goto L_0887BDEC;
    case 710u: goto L_0887BDFC;
    case 711u: goto L_0887BE0C;
    case 712u: goto L_0887BE18;
    case 713u: goto L_0887BE34;
    case 714u: goto L_0887BE3C;
    case 715u: goto L_0887BE60;
    case 716u: goto L_0887BE6C;
    case 717u: goto L_0887BE94;
    case 718u: goto L_0887BEAC;
    case 719u: goto L_0887BF08;
    case 720u: goto L_0887BF10;
    case 721u: goto L_0887BF20;
    case 722u: goto L_0887BF24;
    case 723u: goto L_0887BF34;
    case 724u: goto L_0887BF3C;
    case 725u: goto L_0887BF4C;
    case 726u: goto L_0887BF50;
    case 727u: goto L_0887BF54;
    case 728u: goto L_0887BF6C;
    case 729u: goto L_0887BF74;
    case 730u: goto L_0887BF84;
    case 731u: goto L_0887BF88;
    case 732u: goto L_0887BF98;
    case 733u: goto L_0887BFA0;
    case 734u: goto L_0887BFB0;
    case 735u: goto L_0887BFB4;
    case 736u: goto L_0887BFB8;
    case 737u: goto L_0887BFD0;
    case 738u: goto L_0887BFD8;
    case 739u: goto L_0887BFE8;
    case 740u: goto L_0887BFEC;
    case 741u: goto L_0887BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08878000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(-112));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 139u);
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[10] = (0u | 200u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08878050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x08878050u) goto L_08878050;
    return;
L_08878050:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878060:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15260)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15256)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15284)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(15276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(15280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(15288), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088780F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878104u);
    ctx.gpr[4] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08878104u) goto L_08878104;
    return;
L_08878104:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878110:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878118:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878120:
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
L_0887814C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4560));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878188u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2064));
    ctx.pc = 0x08B0BC24u;
    return;
L_08878188:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088781A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088781B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088781C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088781D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0BC2Cu;
    return;
L_088781D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088781E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878200u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08B0BBDCu;
    return;
L_08878200:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887826C;
      }
      goto L_08878210;
    }
L_08878210:
    ctx.gpr[19] = (0u | 5000u);
    ctx.gpr[31] = (0x0887821Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x0887821Cu) goto L_0887821C;
    return;
L_0887821C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08878230u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BC44u;
    return;
L_08878230:
    ctx.gpr[17] = (32770u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(424));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08878264;
      }
      goto L_08878240;
    }
L_08878240:
    ctx.gpr[31] = (0x08878248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x08878248u) goto L_08878248;
    return;
L_08878248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0887825Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BC44u;
    return;
L_0887825C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08878240;
      }
      goto L_08878264;
    }
L_08878264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887827C;
      }
      goto L_0887826C;
    }
L_0887826C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0887827Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC44u;
    return;
L_0887827C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088782AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088782DC;
      }
      goto L_088782CC;
    }
L_088782CC:
    ctx.gpr[31] = (0x088782D4u);
    // nop
    goto L_08878308;
L_088782D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088782E0;
      }
      goto L_088782DC;
    }
L_088782DC:
    ctx.gpr[16] = (0u | 1u);
    goto L_088782E0;
L_088782E0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088782F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878318u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0B97Cu;
    return;
L_08878318:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0887844C;
      }
      goto L_0887835C;
    }
L_0887835C:
    ctx.gpr[19] = (2225u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2044));
    goto L_0887836C;
L_0887836C:
    ctx.gpr[31] = (0x08878374u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0B97Cu;
    return;
L_08878374:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088783F8;
      }
      goto L_08878384;
    }
L_08878384:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088783F8;
      }
      goto L_0887838C;
    }
L_0887838C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088783A0;
      }
      goto L_08878398;
    }
L_08878398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_088783C0;
      }
      goto L_088783A0;
    }
L_088783A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088783BC;
      }
      goto L_088783B4;
    }
L_088783B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088783C0;
      }
      goto L_088783BC;
    }
L_088783BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088783C0;
L_088783C0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088783CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0B974u;
    return;
L_088783CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088783FC;
      }
      goto L_088783D8;
    }
L_088783D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088783E8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08878120;
L_088783E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088783FC;
      }
      goto L_088783F8;
    }
L_088783F8:
    ctx.gpr[4] = (0u | 0u);
    goto L_088783FC;
L_088783FC:
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08878414u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC34u;
    return;
L_08878414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08878434;
      }
      goto L_08878420;
    }
L_08878420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878434;
      }
      goto L_08878430;
    }
L_08878430:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_08878434;
L_08878434:
    ctx.gpr[31] = (0x0887843Cu);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08B0BC14u;
    return;
L_0887843C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887836C;
      }
      goto L_0887844C;
    }
L_0887844C:
    ctx.gpr[31] = (0x08878454u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBB4u;
    return;
L_08878454:
    ctx.gpr[2] = (0u | 0u);
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
L_0887847C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878490u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088784BC;
L_08878490:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088784A0;
      }
      goto L_08878498;
    }
L_08878498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088784AC;
      }
      goto L_088784A0;
    }
L_088784A0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_088784AC;
L_088784AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088784BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088784F4;
      }
      goto L_088784D0;
    }
L_088784D0:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088784E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15296)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 491u, 0x08AFE064u>(ctx, &aot_mem) && ctx.pc == 0x088784E0u) goto L_088784E0;
    return;
L_088784E0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088784FC;
      }
      goto L_088784EC;
    }
L_088784EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08878514;
      }
      goto L_088784F4;
    }
L_088784F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08878518;
      }
      goto L_088784FC;
    }
L_088784FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15296)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878514;
      }
      goto L_08878510;
    }
L_08878510:
    ctx.gpr[4] = (0u | 1u);
    goto L_08878514;
L_08878514:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_08878518;
L_08878518:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08878578u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08878578u) goto L_08878578;
    return;
L_08878578:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[18] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[19] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[19] + ctx.fpr[17];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887877C;
      }
      goto L_08878658;
    }
L_08878658:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(76));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08878674;
L_08878674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878760;
      }
      goto L_08878688;
    }
L_08878688:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[21]);
    goto L_088786A0;
L_088786A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088786C8;
      }
      goto L_088786B4;
    }
L_088786B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088786C8;
      }
      goto L_088786C0;
    }
L_088786C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088786CC;
      }
      goto L_088786C8;
    }
L_088786C8:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    goto L_088786CC;
L_088786CC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088786D8u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 193u, 0x08A313B8u>(ctx, &aot_mem) && ctx.pc == 0x088786D8u) goto L_088786D8;
    return;
L_088786D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088786F0;
      }
      goto L_088786E4;
    }
L_088786E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088786F0;
L_088786F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08878708;
      }
      goto L_08878700;
    }
L_08878700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08878708;
L_08878708:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08878718u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 80u, 0x089F891Cu>(ctx, &aot_mem) && ctx.pc == 0x08878718u) goto L_08878718;
    return;
L_08878718:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878734;
      }
      goto L_08878724;
    }
L_08878724:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08878734;
L_08878734:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887874C;
      }
      goto L_08878744;
    }
L_08878744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    goto L_0887874C;
L_0887874C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088786A0;
      }
      goto L_08878760;
    }
L_08878760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08878674;
      }
      goto L_0887877C;
    }
L_0887877C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088787AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887886C;
      }
      goto L_088787CC;
    }
L_088787CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088787E8;
      }
      goto L_088787E0;
    }
L_088787E0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_088787E8;
L_088787E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088787FC;
      }
      goto L_088787F4;
    }
L_088787F4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_088787FC;
L_088787FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887880C;
      }
      goto L_08878804;
    }
L_08878804:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_0887880C;
L_0887880C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887881C;
      }
      goto L_08878814;
    }
L_08878814:
    ctx.gpr[31] = (0x0887881Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 195u, 0x08A313D8u>(ctx, &aot_mem) && ctx.pc == 0x0887881Cu) goto L_0887881C;
    return;
L_0887881C:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08878838;
      }
      goto L_08878830;
    }
L_08878830:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08878838;
L_08878838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887884C;
      }
      goto L_08878844;
    }
L_08878844:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_0887884C;
L_0887884C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887885C;
      }
      goto L_08878854;
    }
L_08878854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_0887885C;
L_0887885C:
    ctx.gpr[31] = (0x08878864u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 82u, 0x089F893Cu>(ctx, &aot_mem) && ctx.pc == 0x08878864u) goto L_08878864;
    return;
L_08878864:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088787CC;
      }
      goto L_0887886C;
    }
L_0887886C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878894u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 86u, 0x08A306C8u>(ctx, &aot_mem) && ctx.pc == 0x08878894u) goto L_08878894;
    return;
L_08878894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20336));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088788C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08878910;
      }
      goto L_088788E4;
    }
L_088788E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20336));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088788FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 586u, 0x08A2EBC4u>(ctx, &aot_mem) && ctx.pc == 0x088788FCu) goto L_088788FC;
    return;
L_088788FC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878910;
      }
      goto L_08878908;
    }
L_08878908:
    ctx.gpr[31] = (0x08878910u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08878944;
L_08878910:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15296)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 480u, 0x08AFDF60u>(ctx, &aot_mem) && ctx.pc == 0x08878938u) goto L_08878938;
    return;
L_08878938:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887895Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15296)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 488u, 0x08AFE020u>(ctx, &aot_mem) && ctx.pc == 0x0887895Cu) goto L_0887895C;
    return;
L_0887895C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15300)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15296)));
    ctx.gpr[7] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(15304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15312), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15308), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(15316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088789F8u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08878880;
L_088789F8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08878A04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15324));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08878A04u) goto L_08878A04;
    return;
L_08878A04:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(0));
    ctx.gpr[31] = (0x08878A20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1992));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AF04u>(ctx, &aot_mem) && ctx.pc == 0x08878A20u) goto L_08878A20;
    return;
L_08878A20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878A30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878A64u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878A64u) goto L_08878A64;
    return;
L_08878A64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08878A78u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 116u, 0x0891C8C8u>(ctx, &aot_mem) && ctx.pc == 0x08878A78u) goto L_08878A78;
    return;
L_08878A78:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878AD8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878AD8u) goto L_08878AD8;
    return;
L_08878AD8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08878AECu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 116u, 0x0891C8C8u>(ctx, &aot_mem) && ctx.pc == 0x08878AECu) goto L_08878AEC;
    return;
L_08878AEC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08878B24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08878B34;
L_08878B34:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878B6C;
      }
      goto L_08878B40;
    }
L_08878B40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878B6C;
      }
      goto L_08878B50;
    }
L_08878B50:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08878B64;
      }
      goto L_08878B58;
    }
L_08878B58:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08878B34;
      }
      goto L_08878B64;
    }
L_08878B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08878BAC;
      }
      goto L_08878B6C;
    }
L_08878B6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08878B84u);
    ctx.gpr[7] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878B84u) goto L_08878B84;
    return;
L_08878B84:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08878BAC;
L_08878BAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08878BD4;
L_08878BD4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878C30;
      }
      goto L_08878BE0;
    }
L_08878BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878C30;
      }
      goto L_08878BF0;
    }
L_08878BF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[31] = (0x08878C28u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 116u, 0x0891C8C8u>(ctx, &aot_mem) && ctx.pc == 0x08878C28u) goto L_08878C28;
    return;
L_08878C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08878BD4;
      }
      goto L_08878C30;
    }
L_08878C30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878C44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878C64u);
    ctx.gpr[7] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878C64u) goto L_08878C64;
    return;
L_08878C64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08878C78u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 116u, 0x0891C8C8u>(ctx, &aot_mem) && ctx.pc == 0x08878C78u) goto L_08878C78;
    return;
L_08878C78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878CD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878D00u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D00u) goto L_08878D00;
    return;
L_08878D00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08878D18u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D18u) goto L_08878D18;
    return;
L_08878D18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[31] = (0x08878D30u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D30u) goto L_08878D30;
    return;
L_08878D30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08878D48u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D48u) goto L_08878D48;
    return;
L_08878D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08878D68u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D68u) goto L_08878D68;
    return;
L_08878D68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08878D80u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D80u) goto L_08878D80;
    return;
L_08878D80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 72u);
    ctx.gpr[31] = (0x08878D94u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D94u) goto L_08878D94;
    return;
L_08878D94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
        goto L_08878DD0;
    }
    goto L_08878DBC;
L_08878DBC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08878DDC;
      }
      goto L_08878DD0;
    }
L_08878DD0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    goto L_08878DDC;
L_08878DDC:
    ctx.gpr[31] = (0x08878DE4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08878DE4u) goto L_08878DE4;
    return;
L_08878DE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878DF0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    goto L_08878E00;
L_08878E00:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878E50;
      }
      goto L_08878E08;
    }
L_08878E08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878E50;
      }
      goto L_08878E18;
    }
L_08878E18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878E34;
      }
      goto L_08878E28;
    }
L_08878E28:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878E44;
      }
      goto L_08878E34;
    }
L_08878E34:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08878E00;
      }
      goto L_08878E44;
    }
L_08878E44:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08878E54;
      }
      goto L_08878E50;
    }
L_08878E50:
    ctx.gpr[2] = (0u | 0u);
    goto L_08878E54;
L_08878E54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878EACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 206u, 0x08AECA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08878EACu) goto L_08878EAC;
    return;
L_08878EAC:
    ctx.gpr[31] = (0x08878EB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 790u, 0x089C31B4u>(ctx, &aot_mem) && ctx.pc == 0x08878EB4u) goto L_08878EB4;
    return;
L_08878EB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878EC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_08878ED8;
L_08878ED8:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    goto L_08878EEC;
L_08878EEC:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08878EEC;
      }
      goto L_08878F1C;
    }
L_08878F1C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878ED8;
      }
      goto L_08878F34;
    }
L_08878F34:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    goto L_08878F44;
L_08878F44:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08878F44;
      }
      goto L_08878F74;
    }
L_08878F74:
    ctx.gpr[31] = (0x08878F7Cu);
    // nop
    goto L_08879C88;
L_08878F7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878F88:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08878FA8;
      }
      goto L_08878F94;
    }
L_08878F94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08878F94;
      }
      goto L_08878FA8;
    }
L_08878FA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878FB0:
    ctx.gpr[9] = (ctx.gpr[6] & 65535u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08878FF8;
      }
      goto L_08878FCC;
    }
L_08878FCC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878FF0;
      }
      goto L_08878FD4;
    }
L_08878FD4:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08878FD4;
      }
      goto L_08878FF0;
    }
L_08878FF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08879028;
      }
      goto L_08878FF8;
    }
L_08878FF8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08878FF0;
      }
      goto L_08879000;
    }
L_08879000:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878FF0;
      }
      goto L_0887900C;
    }
L_0887900C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08878FF8;
      }
      goto L_08879028;
    }
L_08879028:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879060u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08878F88;
L_08879060:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887906Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08878F88;
L_0887906C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879088;
      }
      goto L_08879078;
    }
L_08879078:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879094;
      }
      goto L_08879080;
    }
L_08879080:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879094;
      }
      goto L_08879088;
    }
L_08879088:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887909C;
      }
      goto L_08879094;
    }
L_08879094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088790E0;
      }
      goto L_0887909C;
    }
L_0887909C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088790DC;
      }
      goto L_088790A4;
    }
L_088790A4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088790DC;
      }
      goto L_088790AC;
    }
L_088790AC:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088790D4;
      }
      goto L_088790BC;
    }
L_088790BC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887909C;
      }
      goto L_088790D4;
    }
L_088790D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088790E0;
      }
      goto L_088790DC;
    }
L_088790DC:
    ctx.gpr[2] = (0u | 1u);
    goto L_088790E0;
L_088790E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[2] = (2269u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08879120;
L_08879120:
    ctx.gpr[3] = (ctx.gpr[12] << 6u);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879214;
      }
      goto L_0887913C;
    }
L_0887913C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879214;
      }
      goto L_08879158;
    }
L_08879158:
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[2]);
    goto L_0887916C;
L_0887916C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879208;
      }
      goto L_08879174;
    }
L_08879174:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08879208;
      }
      goto L_08879180;
    }
L_08879180:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887916C;
      }
      goto L_08879208;
    }
L_08879208:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08879214;
L_08879214:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[12]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879120;
      }
      goto L_08879228;
    }
L_08879228:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3600)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879344;
      }
      goto L_08879234;
    }
L_08879234:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(3600));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879344;
      }
      goto L_08879254;
    }
L_08879254:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3600), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_0887926C;
L_0887926C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879304;
      }
      goto L_08879274;
    }
L_08879274:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08879304;
      }
      goto L_08879280;
    }
L_08879280:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0887926C;
      }
      goto L_08879304;
    }
L_08879304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3600)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08879344;
      }
      goto L_0887931C;
    }
L_0887931C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[31] = (0x08879344u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    goto L_0887B020;
L_08879344:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x08879370u) goto L_08879370;
    return;
L_08879370:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    goto L_08879384;
L_08879384:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088793B4u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    goto L_0887B1D0;
L_088793B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088793C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08879CC4;
L_088793C0:
    ctx.gpr[31] = (0x088793C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08879F84;
L_088793C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088793D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 470u, 0x08986DCCu>(ctx, &aot_mem) && ctx.pc == 0x088793D4u) goto L_088793D4;
    return;
L_088793D4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08879384;
      }
      goto L_088793E8;
    }
L_088793E8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(3600));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08879414u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    goto L_0887B1D0;
L_08879414:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08879420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08879CC4;
L_08879420:
    ctx.gpr[31] = (0x08879428u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08879F84;
L_08879428:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08879434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 465u, 0x08986D70u>(ctx, &aot_mem) && ctx.pc == 0x08879434u) goto L_08879434;
    return;
L_08879434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879488u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878FB0;
L_08879488:
    ctx.gpr[31] = (0x08879490u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08879F84;
L_08879490:
    ctx.gpr[31] = (0x08879498u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08878F88;
L_08879498:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    goto L_088794A8;
L_088794A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_088794DC;
      }
      goto L_088794B0;
    }
L_088794B0:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088794DC;
      }
      goto L_088794C8;
    }
L_088794C8:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_088794A8;
      }
      goto L_088794DC;
    }
L_088794DC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08879570;
      }
      goto L_088794E4;
    }
L_088794E4:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08879570;
      }
      goto L_0887952C;
    }
L_0887952C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08879570u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_0887B020;
L_08879570:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887958C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] & 65535u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(3600));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08879648;
      }
      goto L_088795C8;
    }
L_088795C8:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088795DCu);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878FB0;
L_088795DC:
    ctx.gpr[31] = (0x088795E4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08879F84;
L_088795E4:
    ctx.gpr[31] = (0x088795ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08878F88;
L_088795EC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08879648u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_0887B020;
L_08879648:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887966C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x088796B4u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878FB0;
L_088796B4:
    ctx.gpr[31] = (0x088796BCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08879F84;
L_088796BC:
    ctx.gpr[31] = (0x088796C4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08878F88;
L_088796C4:
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3600), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08879750;
      }
      goto L_0887970C;
    }
L_0887970C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08879750u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_0887B020;
L_08879750:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x088797ACu);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878FB0;
L_088797AC:
    ctx.gpr[31] = (0x088797B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08879F84;
L_088797B4:
    ctx.gpr[31] = (0x088797BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08878F88;
L_088797BC:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(3600));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0887989C;
      }
      goto L_088797D4;
    }
L_088797D4:
    ctx.gpr[8] = (0u | 7u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] << 4u);
    goto L_088797E0;
L_088797E0:
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(44), ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_088797E0;
      }
      goto L_08879868;
    }
L_08879868:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(88), 0u);
      if (branch_taken) {
          goto L_088798F0;
      }
      goto L_0887989C;
    }
L_0887989C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(3600), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088798F0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_0887B020;
L_088798F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887990C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2064));
    goto L_08879918;
L_08879918:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    goto L_0887992C;
L_0887992C:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_0887992C;
      }
      goto L_0887995C;
    }
L_0887995C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879918;
      }
      goto L_08879974;
    }
L_08879974:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    goto L_08879980;
L_08879980:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879980;
      }
      goto L_088799B0;
    }
L_088799B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088799B8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3600));
    goto L_088799C4;
L_088799C4:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088799C4;
      }
      goto L_088799F4;
    }
L_088799F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088799FC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    goto L_08879A08;
L_08879A08:
    ctx.gpr[5] = (ctx.gpr[7] << 6u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    goto L_08879A1C;
L_08879A1C:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          goto L_08879A1C;
      }
      goto L_08879A4C;
    }
L_08879A4C:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879A08;
      }
      goto L_08879A64;
    }
L_08879A64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879AA4u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878FB0;
L_08879AA4:
    ctx.gpr[31] = (0x08879AACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08879F84;
L_08879AAC:
    ctx.gpr[31] = (0x08879AB4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08878F88;
L_08879AB4:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08879B34;
      }
      goto L_08879B10;
    }
L_08879B10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08879B34u);
    ctx.gpr[11] = (0u | 0u);
    goto L_0887B020;
L_08879B34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879B50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879B88u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878FB0;
L_08879B88:
    ctx.gpr[31] = (0x08879B90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08879F84;
L_08879B90:
    ctx.gpr[31] = (0x08879B98u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08878F88;
L_08879B98:
    ctx.gpr[5] = (ctx.gpr[18] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    goto L_08879BB4;
L_08879BB4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08879BEC;
      }
      goto L_08879BBC;
    }
L_08879BBC:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879BEC;
      }
      goto L_08879BD8;
    }
L_08879BD8:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08879BB4;
      }
      goto L_08879BEC;
    }
L_08879BEC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08879C6C;
      }
      goto L_08879BF4;
    }
L_08879BF4:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08879C6C;
      }
      goto L_08879C48;
    }
L_08879C48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08879C6Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_0887B020;
L_08879C6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879C88:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3984));
    goto L_08879C94;
L_08879C94:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879C94;
      }
      goto L_08879CBC;
    }
L_08879CBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879CC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879CF4;
      }
      goto L_08879CD0;
    }
L_08879CD0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879CF4;
      }
      goto L_08879CD8;
    }
L_08879CD8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08879CFC;
      }
      goto L_08879CEC;
    }
L_08879CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879D10;
      }
      goto L_08879CF4;
    }
L_08879CF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E74;
      }
      goto L_08879CFC;
    }
L_08879CFC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
      if (branch_taken) {
          goto L_08879CFC;
      }
      goto L_08879D10;
    }
L_08879D10:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879D34;
      }
      goto L_08879D20;
    }
L_08879D20:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08879D20;
      }
      goto L_08879D34;
    }
L_08879D34:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08879E04;
      }
      goto L_08879D4C;
    }
L_08879D4C:
    ctx.gpr[2] = (0u | 126u);
    ctx.gpr[11] = (0u | 97u);
    goto L_08879D54;
L_08879D54:
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[3] = (ctx.gpr[4] + ctx.gpr[3]);
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08879DCC;
      }
      goto L_08879D68;
    }
L_08879D68:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08879DCC;
      }
      goto L_08879D74;
    }
L_08879D74:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08879DCC;
      }
      goto L_08879D80;
    }
L_08879D80:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_08879DFC;
      }
      goto L_08879D94;
    }
L_08879D94:
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[29] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
      if (branch_taken) {
          goto L_08879D94;
      }
      goto L_08879DC4;
    }
L_08879DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879DFC;
      }
      goto L_08879DCC;
    }
L_08879DCC:
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[29] + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879DFC;
      }
      goto L_08879DFC;
    }
L_08879DFC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879D54;
      }
      goto L_08879E04;
    }
L_08879E04:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E48;
      }
      goto L_08879E20;
    }
L_08879E20:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879E20;
      }
      goto L_08879E48;
    }
L_08879E48:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E74;
      }
      goto L_08879E54;
    }
L_08879E54:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879E54;
      }
      goto L_08879E74;
    }
L_08879E74:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879E7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879F7C;
      }
      goto L_08879E84;
    }
L_08879E84:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[3] = (0u | 126u);
      if (branch_taken) {
          goto L_08879F7C;
      }
      goto L_08879E90;
    }
L_08879E90:
    ctx.gpr[2] = (0u | 79u);
    ctx.gpr[11] = (0u | 83u);
    ctx.gpr[10] = (0u | 77u);
    ctx.gpr[9] = (0u | 227u);
    ctx.gpr[8] = (0u | 225u);
    ctx.gpr[7] = (0u | 224u);
    ctx.gpr[6] = (0u | 226u);
    goto L_08879EAC;
L_08879EAC:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08879EE4;
      }
      goto L_08879EB4;
    }
L_08879EB4:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879EDC;
      }
      goto L_08879EC4;
    }
L_08879EC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[3];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879EB4;
      }
      goto L_08879ED4;
    }
L_08879ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879EE4;
      }
      goto L_08879EDC;
    }
L_08879EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879F7C;
      }
      goto L_08879EE4;
    }
L_08879EE4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-76));
    ctx.gpr[13] = (ctx.gpr[12] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879F68;
      }
      goto L_08879EFC;
    }
L_08879EFC:
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[12]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879F14:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F68;
      }
      goto L_08879F20;
    }
L_08879F20:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F68;
      }
      goto L_08879F2C;
    }
L_08879F2C:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F68;
      }
      goto L_08879F38;
    }
L_08879F38:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F68;
      }
      goto L_08879F44;
    }
L_08879F44:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F68;
      }
      goto L_08879F50;
    }
L_08879F50:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F68;
      }
      goto L_08879F5C;
    }
L_08879F5C:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F68;
      }
      goto L_08879F68;
    }
L_08879F68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879EAC;
      }
      goto L_08879F7C;
    }
L_08879F7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879F84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1136));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08879FC4;
      }
      goto L_08879FB0;
    }
L_08879FB0:
    ctx.gpr[31] = (0x08879FB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08878F88;
L_08879FB8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08879FCC;
      }
      goto L_08879FC4;
    }
L_08879FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A174;
      }
      goto L_08879FCC;
    }
L_08879FCC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(588), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879FCC;
      }
      goto L_08879FEC;
    }
L_08879FEC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0887A0F8;
      }
      goto L_08879FFC;
    }
L_08879FFC:
    ctx.gpr[20] = (0u | 126u);
    ctx.gpr[21] = (0u | 107u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(588));
    goto L_0887A008;
L_0887A008:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887A0C4;
      }
      goto L_0887A01C;
    }
L_0887A01C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0887A0C4;
      }
      goto L_0887A028;
    }
L_0887A028:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887A0C4;
      }
      goto L_0887A034;
    }
L_0887A034:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887A04Cu);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x0887A04Cu) goto L_0887A04C;
    return;
L_0887A04C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0887A05Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_0887B534;
L_0887A05C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[31] = (0x0887A074u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08878F88;
L_0887A074:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887A0F0;
      }
      goto L_0887A088;
    }
L_0887A088:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(588)));
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(588), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
      if (branch_taken) {
          goto L_0887A088;
      }
      goto L_0887A0BC;
    }
L_0887A0BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A0F0;
      }
      goto L_0887A0C4;
    }
L_0887A0C4:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    goto L_0887A0F0;
L_0887A0F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A008;
      }
      goto L_0887A0F8;
    }
L_0887A0F8:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0887A10Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08878F88;
L_0887A10C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A148;
      }
      goto L_0887A120;
    }
L_0887A120:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A120;
      }
      goto L_0887A148;
    }
L_0887A148:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A174;
      }
      goto L_0887A154;
    }
L_0887A154:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A154;
      }
      goto L_0887A174;
    }
L_0887A174:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A19C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A210u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_0887B1D0;
L_0887A210:
    ctx.gpr[31] = (0x0887A218u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08879F84;
L_0887A218:
    ctx.gpr[31] = (0x0887A220u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08878F88;
L_0887A220:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(3600));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    goto L_0887A234;
L_0887A234:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A268;
      }
      goto L_0887A23C;
    }
L_0887A23C:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A268;
      }
      goto L_0887A254;
    }
L_0887A254:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887A234;
      }
      goto L_0887A268;
    }
L_0887A268:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A2EC;
      }
      goto L_0887A270;
    }
L_0887A270:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_0887A2EC;
      }
      goto L_0887A2B4;
    }
L_0887A2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x0887A2ECu);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_0887B020;
L_0887A2EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A31C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[11] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A398u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_0887B1D0;
L_0887A398:
    ctx.gpr[31] = (0x0887A3A0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08879F84;
L_0887A3A0:
    ctx.gpr[31] = (0x0887A3A8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08878F88;
L_0887A3A8:
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3600), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_0887A434;
      }
      goto L_0887A3F0;
    }
L_0887A3F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x0887A434u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_0887B020;
L_0887A434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A4D8u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_0887B1D0;
L_0887A4D8:
    ctx.gpr[31] = (0x0887A4E0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08879F84;
L_0887A4E0:
    ctx.gpr[31] = (0x0887A4E8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08878F88;
L_0887A4E8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3600));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
      if (branch_taken) {
          goto L_0887A5C8;
      }
      goto L_0887A500;
    }
L_0887A500:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
    goto L_0887A50C;
L_0887A50C:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A50C;
      }
      goto L_0887A594;
    }
L_0887A594:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), 0u);
      if (branch_taken) {
          goto L_0887A61C;
      }
      goto L_0887A5C8;
    }
L_0887A5C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3600), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0887A61Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_0887B020;
L_0887A61C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A64C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[11] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] & 65535u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A6BCu);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_0887B1D0;
L_0887A6BC:
    ctx.gpr[31] = (0x0887A6C4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08879F84;
L_0887A6C4:
    ctx.gpr[31] = (0x0887A6CCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08878F88;
L_0887A6CC:
    ctx.gpr[4] = (ctx.gpr[30] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A74C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[30]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A7C0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_0887B1D0;
L_0887A7C0:
    ctx.gpr[31] = (0x0887A7C8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08879F84;
L_0887A7C8:
    ctx.gpr[31] = (0x0887A7D0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08878F88;
L_0887A7D0:
    ctx.gpr[6] = (ctx.gpr[30] << 6u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2064));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    goto L_0887A7F0;
L_0887A7F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A828;
      }
      goto L_0887A7F8;
    }
L_0887A7F8:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A828;
      }
      goto L_0887A814;
    }
L_0887A814:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887A7F0;
      }
      goto L_0887A828;
    }
L_0887A828:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A874;
      }
      goto L_0887A830;
    }
L_0887A830:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    goto L_0887A874;
L_0887A874:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A8A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A8E4u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878FB0;
L_0887A8E4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887A8F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08879CC4;
L_0887A8F0:
    ctx.gpr[31] = (0x0887A8F8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08879F84;
L_0887A8F8:
    ctx.gpr[31] = (0x0887A900u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08878F88;
L_0887A900:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3600), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3600));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0887A960u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    goto L_0887B020;
L_0887A960:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(3600));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    goto L_0887A9B4;
L_0887A9B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_0887A9C4;
L_0887A9C4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_0887AA54;
      }
      goto L_0887A9CC;
    }
L_0887A9CC:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA54;
      }
      goto L_0887A9E4;
    }
L_0887A9E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA54;
      }
      goto L_0887A9EC;
    }
L_0887A9EC:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_0887A9F8;
L_0887A9F8:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0887AA34;
      }
      goto L_0887AA00;
    }
L_0887AA00:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA34;
      }
      goto L_0887AA08;
    }
L_0887AA08:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887AA2C;
      }
      goto L_0887AA1C;
    }
L_0887AA1C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA2C;
      }
      goto L_0887AA24;
    }
L_0887AA24:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0887AA2C;
L_0887AA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A9F8;
      }
      goto L_0887AA34;
    }
L_0887AA34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA4C;
      }
      goto L_0887AA3C;
    }
L_0887AA3C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    goto L_0887AA4C;
L_0887AA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A9C4;
      }
      goto L_0887AA54;
    }
L_0887AA54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC14;
      }
      goto L_0887AA5C;
    }
L_0887AA5C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AB50;
      }
      goto L_0887AA64;
    }
L_0887AA64:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3600), 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0887AA78;
L_0887AA78:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AB10;
      }
      goto L_0887AA80;
    }
L_0887AA80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887AB10;
      }
      goto L_0887AA8C;
    }
L_0887AA8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0887AA78;
      }
      goto L_0887AB10;
    }
L_0887AB10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC14;
      }
      goto L_0887AB28;
    }
L_0887AB28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0887AB48u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_0887B020;
L_0887AB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC14;
      }
      goto L_0887AB50;
    }
L_0887AB50:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
    goto L_0887AB78;
L_0887AB78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC10;
      }
      goto L_0887AB80;
    }
L_0887AB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887AC10;
      }
      goto L_0887AB8C;
    }
L_0887AB8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0887AB78;
      }
      goto L_0887AC10;
    }
L_0887AC10:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    goto L_0887AC14;
L_0887AC14:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A9B4;
      }
      goto L_0887AC1C;
    }
L_0887AC1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AC40:
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2064));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2230u << 16u);
    goto L_0887AC54;
L_0887AC54:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[15] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[14] = (0u | 1u);
    goto L_0887AC68;
L_0887AC68:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887AD28;
      }
      goto L_0887AC70;
    }
L_0887AC70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[11] << 6u);
      if (branch_taken) {
          goto L_0887AD28;
      }
      goto L_0887AC78;
    }
L_0887AC78:
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[12] = (ctx.gpr[10] << 4u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[13] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AD28;
      }
      goto L_0887ACA0;
    }
L_0887ACA0:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AD28;
      }
      goto L_0887ACA8;
    }
L_0887ACA8:
    ctx.gpr[12] = (ctx.gpr[4] | 0u);
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_0887ACB4;
L_0887ACB4:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0887ACF0;
      }
      goto L_0887ACBC;
    }
L_0887ACBC:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887ACF0;
      }
      goto L_0887ACC4;
    }
L_0887ACC4:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887ACE8;
      }
      goto L_0887ACD8;
    }
L_0887ACD8:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887ACE8;
      }
      goto L_0887ACE0;
    }
L_0887ACE0:
    ctx.gpr[15] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[15] | 0u);
    goto L_0887ACE8;
L_0887ACE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ACB4;
      }
      goto L_0887ACF0;
    }
L_0887ACF0:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AD20;
      }
      goto L_0887ACF8;
    }
L_0887ACF8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0887AD20;
      }
      goto L_0887AD0C;
    }
L_0887AD0C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < 8 ? 1u : 0u);
    goto L_0887AD20;
L_0887AD20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC68;
      }
      goto L_0887AD28;
    }
L_0887AD28:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AED8;
      }
      goto L_0887AD30;
    }
L_0887AD30:
    ctx.gpr[11] = (ctx.gpr[11] << 6u);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887AE04;
      }
      goto L_0887AD40;
    }
L_0887AD40:
    ctx.gpr[13] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[8]);
    goto L_0887AD58;
L_0887AD58:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ADF4;
      }
      goto L_0887AD60;
    }
L_0887AD60:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0887ADF4;
      }
      goto L_0887AD6C;
    }
L_0887AD6C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[15]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[12] << 4u);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[12]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0887AD58;
      }
      goto L_0887ADF4;
    }
L_0887ADF4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
      if (branch_taken) {
          goto L_0887AED8;
      }
      goto L_0887AE04;
    }
L_0887AE04:
    ctx.gpr[2] = (ctx.gpr[10] << 4u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[12] << 4u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[12]) < 3 ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[8]);
    goto L_0887AE38;
L_0887AE38:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AED4;
      }
      goto L_0887AE40;
    }
L_0887AE40:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0887AED4;
      }
      goto L_0887AE4C;
    }
L_0887AE4C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[12] << 4u);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[12]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0887AE38;
      }
      goto L_0887AED4;
    }
L_0887AED4:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    goto L_0887AED8;
L_0887AED8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC54;
      }
      goto L_0887AEE0;
    }
L_0887AEE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AEE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AF24;
      }
      goto L_0887AF1C;
    }
L_0887AF1C:
    ctx.gpr[31] = (0x0887AF24u);
    // nop
    goto L_0887AC40;
L_0887AF24:
    ctx.gpr[5] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] << 9u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AF60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887AF70u);
    // nop
    goto L_0887990C;
L_0887AF70:
    ctx.gpr[31] = (0x0887AF78u);
    // nop
    goto L_08879C88;
L_0887AF78:
    ctx.gpr[31] = (0x0887AF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 428u, 0x08986A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887AF80u) goto L_0887AF80;
    return;
L_0887AF80:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0887AF8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8480));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 763u, 0x0883BDD0u>(ctx, &aot_mem) && ctx.pc == 0x0887AF8Cu) goto L_0887AF8C;
    return;
L_0887AF8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AF98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[17]);
    ctx.gpr[17] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(3600));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B00C;
      }
      goto L_0887AFBC;
    }
L_0887AFBC:
    ctx.gpr[31] = (0x0887AFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x0887AFC4u) goto L_0887AFC4;
    return;
L_0887AFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0887AFECu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    goto L_0887B1D0;
L_0887AFEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0887AFF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08879CC4;
L_0887AFF8:
    ctx.gpr[31] = (0x0887B000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08879F84;
L_0887B000:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x0887B00Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 465u, 0x08986D70u>(ctx, &aot_mem) && ctx.pc == 0x0887B00Cu) goto L_0887B00C;
    return;
L_0887B00C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (2269u << 16u);
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(3984));
    ctx.gpr[14] = (ctx.gpr[2] | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0887B03C;
L_0887B03C:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[15] = (static_cast<std::int32_t>(ctx.gpr[12]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887B114;
      }
      goto L_0887B044;
    }
L_0887B044:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B114;
      }
      goto L_0887B04C;
    }
L_0887B04C:
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887B0FC;
      }
      goto L_0887B054;
    }
L_0887B054:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0887B0FC;
      }
      goto L_0887B060;
    }
L_0887B060:
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3984), ctx.gpr[4]);
        goto L_0887B0DC;
    }
    goto L_0887B068;
L_0887B068:
    ctx.gpr[13] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[13] << 5u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    goto L_0887B074;
L_0887B074:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887B0D8;
      }
      goto L_0887B07C;
    }
L_0887B07C:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B0D8;
      }
      goto L_0887B084;
    }
L_0887B084:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B0D8;
      }
      goto L_0887B090;
    }
L_0887B090:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(36), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(44), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(48), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(52), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(60), ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0887B074;
      }
      goto L_0887B0D8;
    }
L_0887B0D8:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3984), ctx.gpr[4]);
    goto L_0887B0DC;
L_0887B0DC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
      if (branch_taken) {
          goto L_0887B1C4;
      }
      goto L_0887B0FC;
    }
L_0887B0FC:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] & 65535u);
    ctx.gpr[14] = (ctx.gpr[12] << 5u);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B03C;
      }
      goto L_0887B114;
    }
L_0887B114:
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3984), ctx.gpr[4]);
        goto L_0887B1A8;
    }
    goto L_0887B11C;
L_0887B11C:
    ctx.gpr[13] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[14] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[14];
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
      if (branch_taken) {
          goto L_0887B140;
      }
      goto L_0887B134;
    }
L_0887B134:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    goto L_0887B140;
L_0887B140:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) < 0;
    ctx.gpr[13] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0887B1A4;
      }
      goto L_0887B148;
    }
L_0887B148:
    ctx.gpr[14] = (ctx.gpr[12] << 5u);
    ctx.gpr[15] = (ctx.gpr[14] + ctx.gpr[2]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(16), ctx.gpr[25]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24), ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) >= 0;
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
      if (branch_taken) {
          goto L_0887B148;
      }
      goto L_0887B1A4;
    }
L_0887B1A4:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3984), ctx.gpr[4]);
    goto L_0887B1A8;
L_0887B1A8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    goto L_0887B1C4;
L_0887B1C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B1D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[10]);
      if (branch_taken) {
          goto L_0887B274;
      }
      goto L_0887B214;
    }
L_0887B214:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1976));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[31] = (0x0887B238u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B238u) goto L_0887B238;
    return;
L_0887B238:
    ctx.gpr[31] = (0x0887B240u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x0887B240u) goto L_0887B240;
    return;
L_0887B240:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x0887B250u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0887B250u) goto L_0887B250;
    return;
L_0887B250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B27C;
      }
      goto L_0887B26C;
    }
L_0887B26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B298;
      }
      goto L_0887B274;
    }
L_0887B274:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0887B510;
      }
      goto L_0887B27C;
    }
L_0887B27C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B27C;
      }
      goto L_0887B298;
    }
L_0887B298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0887B504;
      }
      goto L_0887B2AC;
    }
L_0887B2AC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    goto L_0887B2C8;
L_0887B2C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 126u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_0887B4A8;
      }
      goto L_0887B2DC;
    }
L_0887B2DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_0887B4A8;
      }
      goto L_0887B2F0;
    }
L_0887B2F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] != ctx.gpr[4]) {
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
        goto L_0887B4A8;
    }
    goto L_0887B300;
L_0887B300:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B36C;
      }
      goto L_0887B310;
    }
L_0887B310:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B344;
      }
      goto L_0887B31C;
    }
L_0887B31C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0887B34C;
      }
      goto L_0887B324;
    }
L_0887B324:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887B354;
      }
      goto L_0887B32C;
    }
L_0887B32C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887B35C;
      }
      goto L_0887B334;
    }
L_0887B334:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887B364;
      }
      goto L_0887B33C;
    }
L_0887B33C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B370;
      }
      goto L_0887B344;
    }
L_0887B344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B370;
      }
      goto L_0887B34C;
    }
L_0887B34C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B370;
      }
      goto L_0887B354;
    }
L_0887B354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B370;
      }
      goto L_0887B35C;
    }
L_0887B35C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B370;
      }
      goto L_0887B364;
    }
L_0887B364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B370;
      }
      goto L_0887B36C;
    }
L_0887B36C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_0887B370;
L_0887B370:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (ctx.gpr[22] < ctx.gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887B3D0;
      }
      goto L_0887B3A8;
    }
L_0887B3A8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887B3A8;
      }
      goto L_0887B3D0;
    }
L_0887B3D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_0887B488;
      }
      goto L_0887B3F0;
    }
L_0887B3F0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B430;
      }
      goto L_0887B3FC;
    }
L_0887B3FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0887B444;
      }
      goto L_0887B404;
    }
L_0887B404:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887B458;
      }
      goto L_0887B40C;
    }
L_0887B40C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887B46C;
      }
      goto L_0887B414;
    }
L_0887B414:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887B480;
      }
      goto L_0887B41C;
    }
L_0887B41C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0887B428u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B428u) goto L_0887B428;
    return;
L_0887B428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B488;
      }
      goto L_0887B430;
    }
L_0887B430:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0887B43Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B43Cu) goto L_0887B43C;
    return;
L_0887B43C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B488;
      }
      goto L_0887B444;
    }
L_0887B444:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0887B450u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B450u) goto L_0887B450;
    return;
L_0887B450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B488;
      }
      goto L_0887B458;
    }
L_0887B458:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0887B464u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B464u) goto L_0887B464;
    return;
L_0887B464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B488;
      }
      goto L_0887B46C;
    }
L_0887B46C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0887B478u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B478u) goto L_0887B478;
    return;
L_0887B478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B488;
      }
      goto L_0887B480;
    }
L_0887B480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B488;
      }
      goto L_0887B488;
    }
L_0887B488:
    ctx.gpr[31] = (0x0887B490u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x0887B490u) goto L_0887B490;
    return;
L_0887B490:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x0887B4A0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0887B4A0u) goto L_0887B4A0;
    return;
L_0887B4A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B4FC;
      }
      goto L_0887B4A8;
    }
L_0887B4A8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[30] = (ctx.gpr[22] < ctx.gpr[30] ? 1u : 0u);
    goto L_0887B4FC;
L_0887B4FC:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B2C8;
      }
      goto L_0887B504;
    }
L_0887B504:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0887B510;
L_0887B510:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B534:
    if (lcs::decomp::run<0x0887B534u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887B578u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x0887B578u) goto L_0887B578;
    return;
L_0887B578:
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0887B588u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0887B588u) goto L_0887B588;
    return;
L_0887B588:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[20] = (0u | 126u);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
      if (branch_taken) {
          goto L_0887B65C;
      }
      goto L_0887B5A4;
    }
L_0887B5A4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1912)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B5BC:
    ctx.gpr[5] = (0u | 48u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B5CC;
    }
L_0887B5CC:
    ctx.gpr[5] = (0u | 49u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B5DC;
    }
L_0887B5DC:
    ctx.gpr[5] = (0u | 50u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B5EC;
    }
L_0887B5EC:
    ctx.gpr[5] = (0u | 51u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B5FC;
    }
L_0887B5FC:
    ctx.gpr[5] = (0u | 52u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B60C;
    }
L_0887B60C:
    ctx.gpr[5] = (0u | 53u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B61C;
    }
L_0887B61C:
    ctx.gpr[5] = (0u | 54u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B62C;
    }
L_0887B62C:
    ctx.gpr[5] = (0u | 55u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B63C;
    }
L_0887B63C:
    ctx.gpr[5] = (0u | 56u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B64C;
    }
L_0887B64C:
    ctx.gpr[5] = (0u | 57u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B660;
      }
      goto L_0887B65C;
    }
L_0887B65C:
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0887B660;
L_0887B660:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887B674;
      }
      goto L_0887B668;
    }
L_0887B668:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B668;
      }
      goto L_0887B674;
    }
L_0887B674:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0887B6A0;
      }
      goto L_0887B680;
    }
L_0887B680:
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887B680;
      }
      goto L_0887B6A0;
    }
L_0887B6A0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B6D0;
      }
      goto L_0887B6A8;
    }
L_0887B6A8:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x0887B6B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0887B6B4u) goto L_0887B6B4;
    return;
L_0887B6B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B6CC;
      }
      goto L_0887B6C0;
    }
L_0887B6C0:
    ctx.gpr[31] = (0x0887B6C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0887B6C8u) goto L_0887B6C8;
    return;
L_0887B6C8:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_0887B6CC;
L_0887B6CC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_0887B6D0;
L_0887B6D0:
    ctx.gpr[31] = (0x0887B6D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 290u, 0x08913190u>(ctx, &aot_mem) && ctx.pc == 0x0887B6D8u) goto L_0887B6D8;
    return;
L_0887B6D8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0887B6E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0887B6E4u) goto L_0887B6E4;
    return;
L_0887B6E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B7E4;
      }
      goto L_0887B6F0;
    }
L_0887B6F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 79u);
      if (branch_taken) {
          goto L_0887B7E4;
      }
      goto L_0887B6FC;
    }
L_0887B6FC:
    ctx.gpr[6] = (0u | 83u);
    ctx.gpr[7] = (0u | 77u);
    ctx.gpr[8] = (0u | 227u);
    ctx.gpr[9] = (0u | 225u);
    ctx.gpr[10] = (0u | 224u);
    ctx.gpr[11] = (0u | 226u);
    goto L_0887B714;
L_0887B714:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887B74C;
      }
      goto L_0887B71C;
    }
L_0887B71C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B744;
      }
      goto L_0887B72C;
    }
L_0887B72C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B71C;
      }
      goto L_0887B73C;
    }
L_0887B73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B74C;
      }
      goto L_0887B744;
    }
L_0887B744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887B7E8;
      }
      goto L_0887B74C;
    }
L_0887B74C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-76));
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B7D0;
      }
      goto L_0887B764;
    }
L_0887B764:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1872)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B77C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7D0;
      }
      goto L_0887B788;
    }
L_0887B788:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7D0;
      }
      goto L_0887B794;
    }
L_0887B794:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7D0;
      }
      goto L_0887B7A0;
    }
L_0887B7A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7D0;
      }
      goto L_0887B7AC;
    }
L_0887B7AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7D0;
      }
      goto L_0887B7B8;
    }
L_0887B7B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7D0;
      }
      goto L_0887B7C4;
    }
L_0887B7C4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7D0;
      }
      goto L_0887B7D0;
    }
L_0887B7D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B714;
      }
      goto L_0887B7E4;
    }
L_0887B7E4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0887B7E8;
L_0887B7E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B810:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15336)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(15344), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(15348), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B888:
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
L_0887B8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887B8F4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B8F4u) goto L_0887B8F4;
    return;
L_0887B8F4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887B930;
      }
      goto L_0887B914;
    }
L_0887B914:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887B928u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0887B928u) goto L_0887B928;
    return;
L_0887B928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887B934;
      }
      goto L_0887B930;
    }
L_0887B930:
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_0887B934;
L_0887B934:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B958;
      }
      goto L_0887B93C;
    }
L_0887B93C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0887B950u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B950u) goto L_0887B950;
    return;
L_0887B950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B96C;
      }
      goto L_0887B958;
    }
L_0887B958:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887B96Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B96Cu) goto L_0887B96C;
    return;
L_0887B96C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0887B990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(535)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887BA8C;
      }
      goto L_0887B9B8;
    }
L_0887B9B8:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7308)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2228u << 16u);
      if (branch_taken) {
          goto L_0887BA8C;
      }
      goto L_0887B9C8;
    }
L_0887B9C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_0887BA8C;
      }
      goto L_0887B9E0;
    }
L_0887B9E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[31] = (0x0887BA08u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 375u, 0x089D6704u>(ctx, &aot_mem) && ctx.pc == 0x0887BA08u) goto L_0887BA08;
    return;
L_0887BA08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887BA38;
      }
      goto L_0887BA10;
    }
L_0887BA10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[31] = (0x0887BA30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 379u, 0x089D6728u>(ctx, &aot_mem) && ctx.pc == 0x0887BA30u) goto L_0887BA30;
    return;
L_0887BA30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BA8C;
      }
      goto L_0887BA38;
    }
L_0887BA38:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887BA60;
      }
      goto L_0887BA48;
    }
L_0887BA48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BA48;
      }
      goto L_0887BA5C;
    }
L_0887BA5C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0887BA60;
L_0887BA60:
    ctx.gpr[31] = (0x0887BA68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 657u, 0x08957FD8u>(ctx, &aot_mem) && ctx.pc == 0x0887BA68u) goto L_0887BA68;
    return;
L_0887BA68:
    ctx.gpr[31] = (0x0887BA70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), 0u);
    goto L_088799B8;
L_0887BA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7308)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), 0u);
    goto L_0887BA8C;
L_0887BA8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BAAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887BAC4u);
    ctx.gpr[16] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0887BAC4u) goto L_0887BAC4;
    return;
L_0887BAC4:
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887BBC8;
      }
      goto L_0887BAD0;
    }
L_0887BAD0:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1624)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BAE8:
    ctx.gpr[31] = (0x0887BAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x0887BAF0u) goto L_0887BAF0;
    return;
L_0887BAF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BAF8;
    }
L_0887BAF8:
    ctx.gpr[31] = (0x0887BB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x0887BB00u) goto L_0887BB00;
    return;
L_0887BB00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB08;
    }
L_0887BB08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB10;
    }
L_0887BB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB18;
    }
L_0887BB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB20;
    }
L_0887BB20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB28;
    }
L_0887BB28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB30;
    }
L_0887BB30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB38;
    }
L_0887BB38:
    ctx.gpr[31] = (0x0887BB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 667u, 0x08A96D98u>(ctx, &aot_mem) && ctx.pc == 0x0887BB40u) goto L_0887BB40;
    return;
L_0887BB40:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB4C;
    }
L_0887BB4C:
    ctx.gpr[31] = (0x0887BB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 671u, 0x08A96DBCu>(ctx, &aot_mem) && ctx.pc == 0x0887BB54u) goto L_0887BB54;
    return;
L_0887BB54:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB60;
    }
L_0887BB60:
    ctx.gpr[31] = (0x0887BB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 675u, 0x08A96DE0u>(ctx, &aot_mem) && ctx.pc == 0x0887BB68u) goto L_0887BB68;
    return;
L_0887BB68:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB74;
    }
L_0887BB74:
    ctx.gpr[31] = (0x0887BB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 679u, 0x08A96E04u>(ctx, &aot_mem) && ctx.pc == 0x0887BB7Cu) goto L_0887BB7C;
    return;
L_0887BB7C:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB88;
    }
L_0887BB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB90;
    }
L_0887BB90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BB98;
    }
L_0887BB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BBA0;
    }
L_0887BBA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BBA8;
    }
L_0887BBA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BBB0;
    }
L_0887BBB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BBB8;
    }
L_0887BBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BBC0;
    }
L_0887BBC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887BBC8;
    }
L_0887BBC8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887BBCC;
L_0887BBCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BBDC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887BBFC;
      }
      goto L_0887BBE8;
    }
L_0887BBE8:
    ctx.gpr[4] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887BC04;
      }
      goto L_0887BBF4;
    }
L_0887BBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC40;
      }
      goto L_0887BBFC;
    }
L_0887BBFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BC84;
      }
      goto L_0887BC04;
    }
L_0887BC04:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC38;
      }
      goto L_0887BC10;
    }
L_0887BC10:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1544)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887BC84;
      }
      goto L_0887BC30;
    }
L_0887BC30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BC84;
      }
      goto L_0887BC38;
    }
L_0887BC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC80;
      }
      goto L_0887BC40;
    }
L_0887BC40:
    ctx.gpr[4] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887BC80;
      }
      goto L_0887BC4C;
    }
L_0887BC4C:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC80;
      }
      goto L_0887BC58;
    }
L_0887BC58:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BC70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887BC84;
      }
      goto L_0887BC78;
    }
L_0887BC78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BC84;
      }
      goto L_0887BC80;
    }
L_0887BC80:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887BC84;
L_0887BC84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BC8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887BD04;
      }
      goto L_0887BCDC;
    }
L_0887BCDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887BD04;
      }
      goto L_0887BCEC;
    }
L_0887BCEC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887BD18;
      }
      goto L_0887BCFC;
    }
L_0887BCFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD84;
      }
      goto L_0887BD04;
    }
L_0887BD04:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0887BD10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1816));
    goto L_0887B888;
L_0887BD10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BD88;
      }
      goto L_0887BD18;
    }
L_0887BD18:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD40;
      }
      goto L_0887BD24;
    }
L_0887BD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0887BD38u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0887BD38u) goto L_0887BD38;
    return;
L_0887BD38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD74;
      }
      goto L_0887BD40;
    }
L_0887BD40:
    ctx.gpr[31] = (0x0887BD48u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 21u, 0x089581A4u>(ctx, &aot_mem) && ctx.pc == 0x0887BD48u) goto L_0887BD48;
    return;
L_0887BD48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29572)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887BD68;
      }
      goto L_0887BD54;
    }
L_0887BD54:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887BD60u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0887BD60u) goto L_0887BD60;
    return;
L_0887BD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD74;
      }
      goto L_0887BD68;
    }
L_0887BD68:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887BD74u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x0887BD74u) goto L_0887BD74;
    return;
L_0887BD74:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887BD18;
      }
      goto L_0887BD84;
    }
L_0887BD84:
    ctx.gpr[2] = (0u | 1u);
    goto L_0887BD88;
L_0887BD88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BDA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887BDE0;
      }
      goto L_0887BDD0;
    }
L_0887BDD0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0887BDEC;
      }
      goto L_0887BDE0;
    }
L_0887BDE0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0887BDEC;
L_0887BDEC:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BE0C;
      }
      goto L_0887BDFC;
    }
L_0887BDFC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
      if (branch_taken) {
          goto L_0887BE18;
      }
      goto L_0887BE0C;
    }
L_0887BE0C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    goto L_0887BE18;
L_0887BE18:
    ctx.gpr[4] = (49864u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_0887BE60;
      }
      goto L_0887BE34;
    }
L_0887BE34:
    ctx.gpr[31] = (0x0887BE3Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0887BE3Cu) goto L_0887BE3C;
    return;
L_0887BE3C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
      if (branch_taken) {
          goto L_0887BE6C;
      }
      goto L_0887BE60;
    }
L_0887BE60:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[22];
    goto L_0887BE6C;
L_0887BE6C:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0887BE94u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 154u, 0x0892D744u>(ctx, &aot_mem) && ctx.pc == 0x0887BE94u) goto L_0887BE94;
    return;
L_0887BE94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BEAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[2];
    ctx.fpr[3] = ctx.fpr[13] + ctx.fpr[1];
    ctx.fpr[4] = ctx.fpr[2] + ctx.fpr[16];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[17];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
      if (branch_taken) {
          goto L_0887BF10;
      }
      goto L_0887BF08;
    }
L_0887BF08:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0887BF24;
      }
      goto L_0887BF10;
    }
L_0887BF10:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BF24;
      }
      goto L_0887BF20;
    }
L_0887BF20:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0887BF24;
L_0887BF24:
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BF3C;
      }
      goto L_0887BF34;
    }
L_0887BF34:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
      if (branch_taken) {
          goto L_0887BF50;
      }
      goto L_0887BF3C;
    }
L_0887BF3C:
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
        goto L_0887BF54;
    }
    goto L_0887BF4C;
L_0887BF4C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    goto L_0887BF50;
L_0887BF50:
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    goto L_0887BF54;
L_0887BF54:
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
      if (branch_taken) {
          goto L_0887BF74;
      }
      goto L_0887BF6C;
    }
L_0887BF6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_0887BF88;
      }
      goto L_0887BF74;
    }
L_0887BF74:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BF88;
      }
      goto L_0887BF84;
    }
L_0887BF84:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0887BF88;
L_0887BF88:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BFA0;
      }
      goto L_0887BF98;
    }
L_0887BF98:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_0887BFB4;
      }
      goto L_0887BFA0;
    }
L_0887BFA0:
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
        goto L_0887BFB8;
    }
    goto L_0887BFB0;
L_0887BFB0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_0887BFB4;
L_0887BFB4:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    goto L_0887BFB8;
L_0887BFB8:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[19];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0887BFD8;
      }
      goto L_0887BFD0;
    }
L_0887BFD0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0887BFEC;
      }
      goto L_0887BFD8;
    }
L_0887BFD8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BFEC;
      }
      goto L_0887BFE8;
    }
L_0887BFE8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887BFEC;
L_0887BFEC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 1u, 0x0887C004u>(ctx, &aot_mem); return;
      }
      goto L_0887BFFC;
    }
L_0887BFFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 3u, 0x0887C018u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 1u, 0x0887C004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0029(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0029_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_29(Runtime &runtime) {
    runtime.register_generated_unit(29u, 0x08878000u, 16384u, &recomp_unit_0029, &recomp_unit_0029_entry);
    runtime.register_function(0x08878000u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878050u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878060u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088780F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878104u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878110u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878118u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878120u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887814Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878188u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878200u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878210u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887821Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878230u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878240u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878248u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887825Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878264u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887826Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887827Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878298u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878308u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878318u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878324u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887835Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887836Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878374u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878384u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887838Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878398u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878414u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878420u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878430u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878434u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887843Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887844Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878454u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887847Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878490u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878498u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878510u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878514u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878518u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878528u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878578u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878658u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878674u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878688u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878700u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878708u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878718u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878724u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878734u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878744u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887874Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878760u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887877Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878804u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887880Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878814u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887881Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878830u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878838u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878844u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887884Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878854u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887885Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878864u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887886Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878880u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878894u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878908u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878910u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878924u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878938u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878944u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887895Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878968u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088789F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A78u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A9Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878AD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878AECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B58u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C78u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878CD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878ED8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879000u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887900Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879028u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879030u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879060u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887906Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879078u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879080u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879088u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879094u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887909Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879100u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879120u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887913Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879158u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887916Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879174u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879180u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879208u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879214u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879228u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879234u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879254u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887926Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879274u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879280u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879304u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887931Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879344u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879350u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879370u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879384u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879414u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879420u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879428u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879434u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879450u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879488u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879490u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879498u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887952Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879570u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887958Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879648u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887966Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088796B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088796BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088796C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887970Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879750u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879774u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879868u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887989Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887990Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879918u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887992Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887995Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879974u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879980u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879AA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879AACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879AB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879ED4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A008u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A01Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A028u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A034u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A04Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A05Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A074u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A088u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A10Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A120u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A148u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A154u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A174u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A19Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A210u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A218u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A220u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A234u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A23Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A254u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A268u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A270u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A31Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A398u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A434u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A464u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A500u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A50Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A594u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A61Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A64Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A74Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A814u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A828u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A830u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A874u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A900u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A960u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A980u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA78u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB78u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC78u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD58u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ADF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AE04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AE38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AE40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AE4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AED4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AED8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AEE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AEE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF78u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B000u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B00Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B020u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B03Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B044u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B04Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B054u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B060u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B068u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B074u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B07Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B084u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B090u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B0D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B0DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B0FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B114u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B11Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B134u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B140u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B148u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B1A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B1A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B1C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B1D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B214u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B238u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B240u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B250u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B26Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B274u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B27Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B298u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B300u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B310u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B31Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B324u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B32Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B334u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B33Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B344u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B34Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B354u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B35Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B364u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B36Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B370u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B404u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B40Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B414u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B41Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B428u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B430u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B43Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B444u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B450u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B458u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B464u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B46Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B478u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B480u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B488u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B490u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B4A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B4A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B4FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B504u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B510u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B534u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B578u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B588u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B60Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B61Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B62Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B63Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B64Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B65Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B660u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B668u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B674u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B680u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B714u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B71Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B72Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B73Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B744u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B74Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B764u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B77Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B788u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B794u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B810u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B888u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B8B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B8F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B914u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B928u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B930u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B934u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B93Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B950u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B958u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B96Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B990u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B9B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B9C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B9E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBC0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC58u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC78u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BEACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFFCu, &recomp_unit_0029, "recomp_unit_0029");
}
} // namespace psprecomp
