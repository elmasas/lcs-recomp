#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "decomp.hpp"  // [decomp-hook]
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0012[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 6, 7, 0, 0, 0, 8, 0, 0,
    9, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 15, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 0, 0, 20, 21, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34,
    0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 39, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0,
    0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 56, 57, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 154, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 160, 0,
    0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 175, 176, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 178, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 193, 0, 194, 195, 0, 196,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 201, 0, 202, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205,
    0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    215, 0, 216, 217, 0, 218, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 225, 0, 226, 227,
    0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 239, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 263, 0, 264, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 286, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0,
    0, 301, 0, 0, 302, 0, 0, 303, 304, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 318, 319, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0,
    0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 338,
    0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0,
    0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0,
    0, 0, 0, 0, 374, 375, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 387, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 396, 397, 0, 0, 0, 398, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 405, 0,
    406, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0,
    0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 443, 0, 444, 0, 445, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0,
    0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 0, 466,
    0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0,
    0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505,
    0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 518, 0, 0, 519, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 526, 0, 527,
    0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 534,
    0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0,
    545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 550, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    553, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0,
    0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 577, 0, 578, 579, 0, 0, 580, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 583,
};
void recomp_unit_0012_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08834000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0012[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08834000;
    case 2u: goto L_0883400C;
    case 3u: goto L_0883403C;
    case 4u: goto L_0883404C;
    case 5u: goto L_0883405C;
    case 6u: goto L_08834060;
    case 7u: goto L_08834064;
    case 8u: goto L_08834074;
    case 9u: goto L_08834080;
    case 10u: goto L_08834088;
    case 11u: goto L_08834090;
    case 12u: goto L_088340A4;
    case 13u: goto L_088340B4;
    case 14u: goto L_088340C4;
    case 15u: goto L_088340C8;
    case 16u: goto L_088340CC;
    case 17u: goto L_088340DC;
    case 18u: goto L_088340F0;
    case 19u: goto L_08834100;
    case 20u: goto L_08834110;
    case 21u: goto L_08834114;
    case 22u: goto L_08834118;
    case 23u: goto L_0883412C;
    case 24u: goto L_08834138;
    case 25u: goto L_08834140;
    case 26u: goto L_08834148;
    case 27u: goto L_08834194;
    case 28u: goto L_088341A4;
    case 29u: goto L_088341B4;
    case 30u: goto L_088341C0;
    case 31u: goto L_088341CC;
    case 32u: goto L_088341E4;
    case 33u: goto L_088341F0;
    case 34u: goto L_088341FC;
    case 35u: goto L_0883420C;
    case 36u: goto L_08834214;
    case 37u: goto L_0883421C;
    case 38u: goto L_08834228;
    case 39u: goto L_08834230;
    case 40u: goto L_08834234;
    case 41u: goto L_08834240;
    case 42u: goto L_08834274;
    case 43u: goto L_08834298;
    case 44u: goto L_088342A4;
    case 45u: goto L_088342B0;
    case 46u: goto L_088342C0;
    case 47u: goto L_088342CC;
    case 48u: goto L_088342D4;
    case 49u: goto L_088342DC;
    case 50u: goto L_088342E8;
    case 51u: goto L_088342F4;
    case 52u: goto L_08834304;
    case 53u: goto L_08834318;
    case 54u: goto L_08834328;
    case 55u: goto L_08834338;
    case 56u: goto L_0883433C;
    case 57u: goto L_08834340;
    case 58u: goto L_08834348;
    case 59u: goto L_08834354;
    case 60u: goto L_08834360;
    case 61u: goto L_08834370;
    case 62u: goto L_08834394;
    case 63u: goto L_088343A0;
    case 64u: goto L_088343A8;
    case 65u: goto L_088343AC;
    case 66u: goto L_088343B4;
    case 67u: goto L_088343BC;
    case 68u: goto L_088343EC;
    case 69u: goto L_088344B4;
    case 70u: goto L_088344E0;
    case 71u: goto L_08834544;
    case 72u: goto L_08834558;
    case 73u: goto L_08834564;
    case 74u: goto L_0883457C;
    case 75u: goto L_08834590;
    case 76u: goto L_088345A8;
    case 77u: goto L_088345FC;
    case 78u: goto L_08834608;
    case 79u: goto L_08834614;
    case 80u: goto L_08834624;
    case 81u: goto L_08834634;
    case 82u: goto L_08834648;
    case 83u: goto L_0883464C;
    case 84u: goto L_08834664;
    case 85u: goto L_08834670;
    case 86u: goto L_0883467C;
    case 87u: goto L_088346B0;
    case 88u: goto L_088346C0;
    case 89u: goto L_08834734;
    case 90u: goto L_08834738;
    case 91u: goto L_08834744;
    case 92u: goto L_08834750;
    case 93u: goto L_08834758;
    case 94u: goto L_0883478C;
    case 95u: goto L_088347A0;
    case 96u: goto L_088347B8;
    case 97u: goto L_088347E0;
    case 98u: goto L_088347EC;
    case 99u: goto L_088347F8;
    case 100u: goto L_08834814;
    case 101u: goto L_08834838;
    case 102u: goto L_0883485C;
    case 103u: goto L_08834864;
    case 104u: goto L_08834870;
    case 105u: goto L_08834894;
    case 106u: goto L_0883489C;
    case 107u: goto L_088348A8;
    case 108u: goto L_088348C4;
    case 109u: goto L_088348E8;
    case 110u: goto L_088348F0;
    case 111u: goto L_088348FC;
    case 112u: goto L_08834920;
    case 113u: goto L_0883492C;
    case 114u: goto L_08834934;
    case 115u: goto L_08834950;
    case 116u: goto L_08834964;
    case 117u: goto L_08834978;
    case 118u: goto L_0883499C;
    case 119u: goto L_088349A4;
    case 120u: goto L_088349B0;
    case 121u: goto L_088349D4;
    case 122u: goto L_088349DC;
    case 123u: goto L_088349E8;
    case 124u: goto L_08834A0C;
    case 125u: goto L_08834A18;
    case 126u: goto L_08834A58;
    case 127u: goto L_08834A7C;
    case 128u: goto L_08834A88;
    case 129u: goto L_08834A98;
    case 130u: goto L_08834AA0;
    case 131u: goto L_08834AAC;
    case 132u: goto L_08834AC4;
    case 133u: goto L_08834AD4;
    case 134u: goto L_08834AEC;
    case 135u: goto L_08834B10;
    case 136u: goto L_08834B1C;
    case 137u: goto L_08834B2C;
    case 138u: goto L_08834B48;
    case 139u: goto L_08834B5C;
    case 140u: goto L_08834B8C;
    case 141u: goto L_08834BC0;
    case 142u: goto L_08834BD0;
    case 143u: goto L_08834BDC;
    case 144u: goto L_08834BE4;
    case 145u: goto L_08834C00;
    case 146u: goto L_08834C14;
    case 147u: goto L_08834C30;
    case 148u: goto L_08834C50;
    case 149u: goto L_08834C6C;
    case 150u: goto L_08834CA0;
    case 151u: goto L_08834CAC;
    case 152u: goto L_08834CD8;
    case 153u: goto L_08834CF4;
    case 154u: goto L_08834D04;
    case 155u: goto L_08834D08;
    case 156u: goto L_08834D1C;
    case 157u: goto L_08834D58;
    case 158u: goto L_08834D64;
    case 159u: goto L_08834D6C;
    case 160u: goto L_08834D78;
    case 161u: goto L_08834D84;
    case 162u: goto L_08834D90;
    case 163u: goto L_08834D98;
    case 164u: goto L_08834DB4;
    case 165u: goto L_08834DC8;
    case 166u: goto L_08834DE8;
    case 167u: goto L_08834E08;
    case 168u: goto L_08834E10;
    case 169u: goto L_08834E20;
    case 170u: goto L_08834E30;
    case 171u: goto L_08834E34;
    case 172u: goto L_08834E3C;
    case 173u: goto L_08834E44;
    case 174u: goto L_08834E5C;
    case 175u: goto L_08834E60;
    case 176u: goto L_08834E64;
    case 177u: goto L_08834E94;
    case 178u: goto L_08834E9C;
    case 179u: goto L_08834EA0;
    case 180u: goto L_08834EA8;
    case 181u: goto L_08834F2C;
    case 182u: goto L_08834F38;
    case 183u: goto L_08834F40;
    case 184u: goto L_08834F48;
    case 185u: goto L_08834F50;
    case 186u: goto L_08834F70;
    case 187u: goto L_08834F78;
    case 188u: goto L_08834F98;
    case 189u: goto L_08834FAC;
    case 190u: goto L_08834FC8;
    case 191u: goto L_08834FDC;
    case 192u: goto L_08834FE4;
    case 193u: goto L_08834FE8;
    case 194u: goto L_08834FF0;
    case 195u: goto L_08834FF4;
    case 196u: goto L_08834FFC;
    case 197u: goto L_08835010;
    case 198u: goto L_0883502C;
    case 199u: goto L_08835040;
    case 200u: goto L_08835048;
    case 201u: goto L_0883504C;
    case 202u: goto L_08835054;
    case 203u: goto L_08835058;
    case 204u: goto L_08835070;
    case 205u: goto L_0883507C;
    case 206u: goto L_08835090;
    case 207u: goto L_08835098;
    case 208u: goto L_088350A8;
    case 209u: goto L_088350F4;
    case 210u: goto L_08835114;
    case 211u: goto L_0883511C;
    case 212u: goto L_0883513C;
    case 213u: goto L_08835150;
    case 214u: goto L_0883516C;
    case 215u: goto L_08835180;
    case 216u: goto L_08835188;
    case 217u: goto L_0883518C;
    case 218u: goto L_08835194;
    case 219u: goto L_08835198;
    case 220u: goto L_088351A0;
    case 221u: goto L_088351B4;
    case 222u: goto L_088351D0;
    case 223u: goto L_088351E4;
    case 224u: goto L_088351EC;
    case 225u: goto L_088351F0;
    case 226u: goto L_088351F8;
    case 227u: goto L_088351FC;
    case 228u: goto L_08835214;
    case 229u: goto L_08835220;
    case 230u: goto L_08835234;
    case 231u: goto L_0883523C;
    case 232u: goto L_0883524C;
    case 233u: goto L_08835298;
    case 234u: goto L_088352E4;
    case 235u: goto L_088352F0;
    case 236u: goto L_0883530C;
    case 237u: goto L_08835320;
    case 238u: goto L_08835328;
    case 239u: goto L_08835330;
    case 240u: goto L_08835334;
    case 241u: goto L_08835350;
    case 242u: goto L_0883535C;
    case 243u: goto L_08835370;
    case 244u: goto L_08835378;
    case 245u: goto L_08835388;
    case 246u: goto L_088353D4;
    case 247u: goto L_088353F8;
    case 248u: goto L_08835404;
    case 249u: goto L_0883544C;
    case 250u: goto L_08835480;
    case 251u: goto L_08835488;
    case 252u: goto L_0883549C;
    case 253u: goto L_088354A4;
    case 254u: goto L_088354AC;
    case 255u: goto L_088354C8;
    case 256u: goto L_088354D0;
    case 257u: goto L_08835524;
    case 258u: goto L_088355E0;
    case 259u: goto L_088355F4;
    case 260u: goto L_08835600;
    case 261u: goto L_08835630;
    case 262u: goto L_08835678;
    case 263u: goto L_0883568C;
    case 264u: goto L_08835694;
    case 265u: goto L_0883569C;
    case 266u: goto L_088356A0;
    case 267u: goto L_088356C4;
    case 268u: goto L_088356D8;
    case 269u: goto L_088356EC;
    case 270u: goto L_088356F4;
    case 271u: goto L_08835700;
    case 272u: goto L_08835764;
    case 273u: goto L_08835770;
    case 274u: goto L_0883578C;
    case 275u: goto L_08835924;
    case 276u: goto L_0883593C;
    case 277u: goto L_08835944;
    case 278u: goto L_08835978;
    case 279u: goto L_08835984;
    case 280u: goto L_08835994;
    case 281u: goto L_088359A0;
    case 282u: goto L_088359A8;
    case 283u: goto L_088359B0;
    case 284u: goto L_088359C0;
    case 285u: goto L_088359CC;
    case 286u: goto L_088359D4;
    case 287u: goto L_088359D8;
    case 288u: goto L_08835A10;
    case 289u: goto L_08835A78;
    case 290u: goto L_08835A9C;
    case 291u: goto L_08835AA4;
    case 292u: goto L_08835AAC;
    case 293u: goto L_08835AB8;
    case 294u: goto L_08835AC8;
    case 295u: goto L_08835AD0;
    case 296u: goto L_08835AD8;
    case 297u: goto L_08835AE0;
    case 298u: goto L_08835AE8;
    case 299u: goto L_08835AF0;
    case 300u: goto L_08835AF8;
    case 301u: goto L_08835B04;
    case 302u: goto L_08835B10;
    case 303u: goto L_08835B1C;
    case 304u: goto L_08835B20;
    case 305u: goto L_08835B38;
    case 306u: goto L_08835B44;
    case 307u: goto L_08835B50;
    case 308u: goto L_08835B60;
    case 309u: goto L_08835B68;
    case 310u: goto L_08835B8C;
    case 311u: goto L_08835B98;
    case 312u: goto L_08835BA4;
    case 313u: goto L_08835BB0;
    case 314u: goto L_08835BB4;
    case 315u: goto L_08835BCC;
    case 316u: goto L_08835BD8;
    case 317u: goto L_08835BE4;
    case 318u: goto L_08835BF0;
    case 319u: goto L_08835BF4;
    case 320u: goto L_08835C08;
    case 321u: goto L_08835C24;
    case 322u: goto L_08835C60;
    case 323u: goto L_08835CC8;
    case 324u: goto L_08835CE8;
    case 325u: goto L_08835CF0;
    case 326u: goto L_08835CF8;
    case 327u: goto L_08835D10;
    case 328u: goto L_08835D1C;
    case 329u: goto L_08835D34;
    case 330u: goto L_08835D3C;
    case 331u: goto L_08835D70;
    case 332u: goto L_08835E28;
    case 333u: goto L_08835E40;
    case 334u: goto L_08835E4C;
    case 335u: goto L_08835E68;
    case 336u: goto L_08835E70;
    case 337u: goto L_08835E78;
    case 338u: goto L_08835E7C;
    case 339u: goto L_08835E84;
    case 340u: goto L_08835E94;
    case 341u: goto L_08835EA4;
    case 342u: goto L_08835EB4;
    case 343u: goto L_08835ED4;
    case 344u: goto L_08835EEC;
    case 345u: goto L_08835F04;
    case 346u: goto L_08835F1C;
    case 347u: goto L_08835F2C;
    case 348u: goto L_08835F78;
    case 349u: goto L_08835F8C;
    case 350u: goto L_08835FA0;
    case 351u: goto L_08835FB4;
    case 352u: goto L_08835FC0;
    case 353u: goto L_08835FC8;
    case 354u: goto L_08835FE4;
    case 355u: goto L_08835FEC;
    case 356u: goto L_08835FFC;
    case 357u: goto L_08836014;
    case 358u: goto L_0883605C;
    case 359u: goto L_088360A0;
    case 360u: goto L_088360D8;
    case 361u: goto L_088360E8;
    case 362u: goto L_08836104;
    case 363u: goto L_08836114;
    case 364u: goto L_0883615C;
    case 365u: goto L_08836170;
    case 366u: goto L_0883617C;
    case 367u: goto L_0883618C;
    case 368u: goto L_088361AC;
    case 369u: goto L_088361B4;
    case 370u: goto L_088361BC;
    case 371u: goto L_088361CC;
    case 372u: goto L_088361EC;
    case 373u: goto L_088361F4;
    case 374u: goto L_08836210;
    case 375u: goto L_08836214;
    case 376u: goto L_0883621C;
    case 377u: goto L_08836228;
    case 378u: goto L_08836230;
    case 379u: goto L_08836240;
    case 380u: goto L_08836260;
    case 381u: goto L_0883628C;
    case 382u: goto L_08836294;
    case 383u: goto L_0883629C;
    case 384u: goto L_088362A4;
    case 385u: goto L_088362AC;
    case 386u: goto L_088362B4;
    case 387u: goto L_088362C0;
    case 388u: goto L_088362C4;
    case 389u: goto L_088362EC;
    case 390u: goto L_088362FC;
    case 391u: goto L_08836318;
    case 392u: goto L_08836354;
    case 393u: goto L_08836368;
    case 394u: goto L_08836394;
    case 395u: goto L_0883639C;
    case 396u: goto L_088363A8;
    case 397u: goto L_088363AC;
    case 398u: goto L_088363BC;
    case 399u: goto L_088363C0;
    case 400u: goto L_088363E4;
    case 401u: goto L_0883642C;
    case 402u: goto L_088364C0;
    case 403u: goto L_088364EC;
    case 404u: goto L_088364F4;
    case 405u: goto L_088364F8;
    case 406u: goto L_08836500;
    case 407u: goto L_08836514;
    case 408u: goto L_08836520;
    case 409u: goto L_08836528;
    case 410u: goto L_08836538;
    case 411u: goto L_08836550;
    case 412u: goto L_08836568;
    case 413u: goto L_0883657C;
    case 414u: goto L_08836590;
    case 415u: goto L_08836598;
    case 416u: goto L_088365B4;
    case 417u: goto L_08836634;
    case 418u: goto L_08836640;
    case 419u: goto L_08836688;
    case 420u: goto L_08836694;
    case 421u: goto L_088366A4;
    case 422u: goto L_088366AC;
    case 423u: goto L_088366E4;
    case 424u: goto L_088366EC;
    case 425u: goto L_08836760;
    case 426u: goto L_088367F8;
    case 427u: goto L_08836804;
    case 428u: goto L_08836834;
    case 429u: goto L_08836860;
    case 430u: goto L_088368A8;
    case 431u: goto L_088368DC;
    case 432u: goto L_08836928;
    case 433u: goto L_08836930;
    case 434u: goto L_08836984;
    case 435u: goto L_08836990;
    case 436u: goto L_0883699C;
    case 437u: goto L_088369A8;
    case 438u: goto L_088369B4;
    case 439u: goto L_088369C4;
    case 440u: goto L_088369D0;
    case 441u: goto L_088369D8;
    case 442u: goto L_088369E0;
    case 443u: goto L_08836A90;
    case 444u: goto L_08836A98;
    case 445u: goto L_08836AA0;
    case 446u: goto L_08836AA4;
    case 447u: goto L_08836AB8;
    case 448u: goto L_08836ADC;
    case 449u: goto L_08836AF4;
    case 450u: goto L_08836B08;
    case 451u: goto L_08836B34;
    case 452u: goto L_08836B4C;
    case 453u: goto L_08836B54;
    case 454u: goto L_08836B74;
    case 455u: goto L_08836BA4;
    case 456u: goto L_08836BB0;
    case 457u: goto L_08836BD0;
    case 458u: goto L_08836BDC;
    case 459u: goto L_08836C1C;
    case 460u: goto L_08836C2C;
    case 461u: goto L_08836C3C;
    case 462u: goto L_08836C44;
    case 463u: goto L_08836C54;
    case 464u: goto L_08836C64;
    case 465u: goto L_08836C6C;
    case 466u: goto L_08836C7C;
    case 467u: goto L_08836C98;
    case 468u: goto L_08836CB0;
    case 469u: goto L_08836CB8;
    case 470u: goto L_08836CD8;
    case 471u: goto L_08836CF0;
    case 472u: goto L_08836D04;
    case 473u: goto L_08836D14;
    case 474u: goto L_08836D6C;
    case 475u: goto L_08836D94;
    case 476u: goto L_08836DA0;
    case 477u: goto L_08836DAC;
    case 478u: goto L_08836E08;
    case 479u: goto L_08836E10;
    case 480u: goto L_08836E24;
    case 481u: goto L_08836EA4;
    case 482u: goto L_08836EA8;
    case 483u: goto L_08836EB8;
    case 484u: goto L_08836ED0;
    case 485u: goto L_08836EE0;
    case 486u: goto L_08836EFC;
    case 487u: goto L_08836F28;
    case 488u: goto L_08836F38;
    case 489u: goto L_08836F4C;
    case 490u: goto L_08836FC4;
    case 491u: goto L_08836FE0;
    case 492u: goto L_08836FE8;
    case 493u: goto L_08837000;
    case 494u: goto L_088370A4;
    case 495u: goto L_088370B8;
    case 496u: goto L_088370C8;
    case 497u: goto L_088370E4;
    case 498u: goto L_08837140;
    case 499u: goto L_08837148;
    case 500u: goto L_08837188;
    case 501u: goto L_088371A0;
    case 502u: goto L_088371A8;
    case 503u: goto L_088371C0;
    case 504u: goto L_088371E0;
    case 505u: goto L_088371FC;
    case 506u: goto L_08837210;
    case 507u: goto L_08837218;
    case 508u: goto L_08837224;
    case 509u: goto L_08837230;
    case 510u: goto L_08837244;
    case 511u: goto L_08837288;
    case 512u: goto L_0883730C;
    case 513u: goto L_08837320;
    case 514u: goto L_088373C0;
    case 515u: goto L_08837404;
    case 516u: goto L_08837414;
    case 517u: goto L_08837420;
    case 518u: goto L_08837508;
    case 519u: goto L_08837514;
    case 520u: goto L_08837518;
    case 521u: goto L_08837550;
    case 522u: goto L_0883755C;
    case 523u: goto L_088375D0;
    case 524u: goto L_088375D8;
    case 525u: goto L_088375DC;
    case 526u: goto L_088375F4;
    case 527u: goto L_088375FC;
    case 528u: goto L_08837608;
    case 529u: goto L_08837614;
    case 530u: goto L_08837628;
    case 531u: goto L_08837660;
    case 532u: goto L_088376DC;
    case 533u: goto L_088376F4;
    case 534u: goto L_088376FC;
    case 535u: goto L_08837710;
    case 536u: goto L_0883771C;
    case 537u: goto L_08837734;
    case 538u: goto L_08837740;
    case 539u: goto L_08837764;
    case 540u: goto L_088377BC;
    case 541u: goto L_088377D4;
    case 542u: goto L_088377DC;
    case 543u: goto L_088377E8;
    case 544u: goto L_088377F4;
    case 545u: goto L_08837800;
    case 546u: goto L_0883780C;
    case 547u: goto L_08837818;
    case 548u: goto L_08837860;
    case 549u: goto L_08837968;
    case 550u: goto L_0883796C;
    case 551u: goto L_088379A8;
    case 552u: goto L_088379B4;
    case 553u: goto L_08837A00;
    case 554u: goto L_08837A08;
    case 555u: goto L_08837A6C;
    case 556u: goto L_08837A84;
    case 557u: goto L_08837A8C;
    case 558u: goto L_08837AFC;
    case 559u: goto L_08837BBC;
    case 560u: goto L_08837C28;
    case 561u: goto L_08837C64;
    case 562u: goto L_08837CA0;
    case 563u: goto L_08837CC8;
    case 564u: goto L_08837CD4;
    case 565u: goto L_08837CD8;
    case 566u: goto L_08837D18;
    case 567u: goto L_08837D5C;
    case 568u: goto L_08837D64;
    case 569u: goto L_08837D90;
    case 570u: goto L_08837DCC;
    case 571u: goto L_08837E48;
    case 572u: goto L_08837E4C;
    case 573u: goto L_08837E74;
    case 574u: goto L_08837EA8;
    case 575u: goto L_08837F9C;
    case 576u: goto L_08837FAC;
    case 577u: goto L_08837FB4;
    case 578u: goto L_08837FBC;
    case 579u: goto L_08837FC0;
    case 580u: goto L_08837FCC;
    case 581u: goto L_08837FDC;
    case 582u: goto L_08837FE8;
    case 583u: goto L_08837FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08834000:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(66));
    ctx.gpr[21] = (0u | 2u);
    goto L_0883400C;
L_0883400C:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(198), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(199), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(201), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(202), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(203), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08834060;
      }
      goto L_0883403C;
    }
L_0883403C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08834064;
    }
    goto L_0883404C;
L_0883404C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08834064;
      }
      goto L_0883405C;
    }
L_0883405C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08834060;
L_08834060:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08834064;
L_08834064:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834194;
      }
      goto L_08834074;
    }
L_08834074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08834088;
      }
      goto L_08834080;
    }
L_08834080:
    ctx.gpr[31] = (0x08834088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08834088u) goto L_08834088;
    return;
L_08834088:
    ctx.gpr[31] = (0x08834090u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 302u, 0x08A09374u>(ctx, &aot_mem) && ctx.pc == 0x08834090u) goto L_08834090;
    return;
L_08834090:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088340C8;
      }
      goto L_088340A4;
    }
L_088340A4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_088340CC;
    }
    goto L_088340B4;
L_088340B4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088340CC;
      }
      goto L_088340C4;
    }
L_088340C4:
    ctx.gpr[5] = (0u | 1u);
    goto L_088340C8;
L_088340C8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_088340CC;
L_088340CC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834194;
      }
      goto L_088340DC;
    }
L_088340DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08834114;
      }
      goto L_088340F0;
    }
L_088340F0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08834118;
    }
    goto L_08834100;
L_08834100:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08834118;
      }
      goto L_08834110;
    }
L_08834110:
    ctx.gpr[5] = (0u | 1u);
    goto L_08834114;
L_08834114:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08834118;
L_08834118:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834194;
      }
      goto L_0883412C;
    }
L_0883412C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834140;
      }
      goto L_08834138;
    }
L_08834138:
    ctx.gpr[31] = (0x08834140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08834140u) goto L_08834140;
    return;
L_08834140:
    ctx.gpr[31] = (0x08834148u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 311u, 0x08A09408u>(ctx, &aot_mem) && ctx.pc == 0x08834148u) goto L_08834148;
    return;
L_08834148:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(204), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(206), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(210), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 136u);
    ctx.gpr[31] = (0x08834194u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 42u, 0x08974230u>(ctx, &aot_mem) && ctx.pc == 0x08834194u) goto L_08834194;
    return;
L_08834194:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0883400C;
      }
      goto L_088341A4;
    }
L_088341A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08834234;
      }
      goto L_088341B4;
    }
L_088341B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08834234;
      }
      goto L_088341C0;
    }
L_088341C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834234;
      }
      goto L_088341CC;
    }
L_088341CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088341E4u);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_088341E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (32833u << 16u);
      if (branch_taken) {
          goto L_08834214;
      }
      goto L_088341F0;
    }
L_088341F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08834214;
      }
      goto L_088341FC;
    }
L_088341FC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883420Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10484));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0883420Cu) goto L_0883420C;
    return;
L_0883420C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834230;
      }
      goto L_08834214;
    }
L_08834214:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08834230;
      }
      goto L_0883421C;
    }
L_0883421C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08834228u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10444));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08834228u) goto L_08834228;
    return;
L_08834228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    goto L_08834230;
L_08834230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    goto L_08834234;
L_08834234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_088343BC;
      }
      goto L_08834240;
    }
L_08834240:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(221), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(222), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(223), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(230));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08834274u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-23652));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08834274u) goto L_08834274;
    return;
L_08834274:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[16] = (0u | 136u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08834298u);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08B0B7D4u;
    return;
L_08834298:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088342D4;
      }
      goto L_088342A4;
    }
L_088342A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088342D4;
      }
      goto L_088342B0;
    }
L_088342B0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088342C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10412));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x088342C0u) goto L_088342C0;
    return;
L_088342C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x088342CCu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B7E4u;
    return;
L_088342CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088343BC;
      }
      goto L_088342D4;
    }
L_088342D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088343BC;
      }
      goto L_088342DC;
    }
L_088342DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088342E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10384));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x088342E8u) goto L_088342E8;
    return;
L_088342E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x088342F4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B7E4u;
    return;
L_088342F4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088343BC;
      }
      goto L_08834304;
    }
L_08834304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0883433C;
      }
      goto L_08834318;
    }
L_08834318:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08834340;
    }
    goto L_08834328;
L_08834328:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08834340;
      }
      goto L_08834338;
    }
L_08834338:
    ctx.gpr[4] = (0u | 1u);
    goto L_0883433C;
L_0883433C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08834340;
L_08834340:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088343BC;
      }
      goto L_08834348;
    }
L_08834348:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08834354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10352));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 407u, 0x0882B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08834354u) goto L_08834354;
    return;
L_08834354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08834360u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B7E4u;
    return;
L_08834360:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 17u);
    goto L_08834370;
L_08834370:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(220)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(224)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08834370;
      }
      goto L_08834394;
    }
L_08834394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20932)));
        goto L_088343AC;
    }
    goto L_088343A0;
L_088343A0:
    ctx.gpr[31] = (0x088343A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088343A8u) goto L_088343A8;
    return;
L_088343A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20932)));
    goto L_088343AC;
L_088343AC:
    ctx.gpr[31] = (0x088343B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 281u, 0x08A091E4u>(ctx, &aot_mem) && ctx.pc == 0x088343B4u) goto L_088343B4;
    return;
L_088343B4:
    ctx.gpr[31] = (0x088343BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 96u, 0x0882C580u>(ctx, &aot_mem) && ctx.pc == 0x088343BCu) goto L_088343BC;
    return;
L_088343BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088343EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1564)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1560)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1592)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(1588)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(1580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088344B4:
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
L_088344E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[31]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08834544u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 540u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08834544u) goto L_08834544;
    return;
L_08834544:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08834558u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08834558u) goto L_08834558;
    return;
L_08834558:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08834564u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 540u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08834564u) goto L_08834564;
    return;
L_08834564:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0883457Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 540u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x0883457Cu) goto L_0883457C;
    return;
L_0883457C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08834590u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 540u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08834590u) goto L_08834590;
    return;
L_08834590:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x088345A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 540u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x088345A8u) goto L_088345A8;
    return;
L_088345A8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(65), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(69), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[1]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[1]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(73)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088345FCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x088345FCu) goto L_088345FC;
    return;
L_088345FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883464C;
      }
      goto L_08834608;
    }
L_08834608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08834634;
    }
    goto L_08834614;
L_08834614:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x08834624u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08834624u) goto L_08834624;
    return;
L_08834624:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08834634;
L_08834634:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883464C;
      }
      goto L_08834648;
    }
L_08834648:
    ctx.gpr[22] = (0u | 1u);
    goto L_0883464C;
L_0883464C:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(74), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(77), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08834664u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08834664u) goto L_08834664;
    return;
L_08834664:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_08834738;
    }
    goto L_08834670;
L_08834670:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834734;
      }
      goto L_0883467C;
    }
L_0883467C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088346B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    goto L_08835A10;
L_088346B0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08834734;
      }
      goto L_088346C0;
    }
L_088346C0:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08834734;
L_08834734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08834738;
L_08834738:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834758;
      }
      goto L_08834744;
    }
L_08834744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834758;
      }
      goto L_08834750;
    }
L_08834750:
    ctx.gpr[31] = (0x08834758u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08834758u) goto L_08834758;
    return;
L_08834758:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883478C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088347A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10176));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088347A0u) goto L_088347A0;
    return;
L_088347A0:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    goto L_088347B8;
L_088347B8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088347B8;
      }
      goto L_088347E0;
    }
L_088347E0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088347ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10140));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088347ECu) goto L_088347EC;
    return;
L_088347EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088347F8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08834864;
      }
      goto L_08834838;
    }
L_08834838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x0883485Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x0883485Cu) goto L_0883485C;
    return;
L_0883485C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834920;
      }
      goto L_08834864;
    }
L_08834864:
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883489C;
      }
      goto L_08834870;
    }
L_08834870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08834894u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08834894u) goto L_08834894;
    return;
L_08834894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834920;
      }
      goto L_0883489C;
    }
L_0883489C:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08834920;
      }
      goto L_088348A8;
    }
L_088348A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] >> 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088348F0;
      }
      goto L_088348C4;
    }
L_088348C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088348E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x088348E8u) goto L_088348E8;
    return;
L_088348E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834920;
      }
      goto L_088348F0;
    }
L_088348F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834920;
      }
      goto L_088348FC;
    }
L_088348FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08834920u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08834920u) goto L_08834920;
    return;
L_08834920:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0883492Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x0883492Cu) goto L_0883492C;
    return;
L_0883492C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834950;
      }
      goto L_08834934;
    }
L_08834934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08834950u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08834950u) goto L_08834950;
    return;
L_08834950:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088349A4;
      }
      goto L_08834978;
    }
L_08834978:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883499Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x0883499Cu) goto L_0883499C;
    return;
L_0883499C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834A0C;
      }
      goto L_088349A4;
    }
L_088349A4:
    ctx.gpr[7] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088349DC;
      }
      goto L_088349B0;
    }
L_088349B0:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088349D4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x088349D4u) goto L_088349D4;
    return;
L_088349D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834A0C;
      }
      goto L_088349DC;
    }
L_088349DC:
    ctx.gpr[7] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08834A0C;
      }
      goto L_088349E8;
    }
L_088349E8:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08834A0Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08834A0Cu) goto L_08834A0C;
    return;
L_08834A0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834A18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08834A58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10108));
    goto L_088344B4;
L_08834A58:
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[17] = (2225u << 16u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[19] = (0u | 13u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1392));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-10072));
    goto L_08834A7C;
L_08834A7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834B48;
      }
      goto L_08834A88;
    }
L_08834A88:
    ctx.gpr[20] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08834B48;
      }
      goto L_08834A98;
    }
L_08834A98:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08834AAC;
      }
      goto L_08834AA0;
    }
L_08834AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08834B48;
      }
      goto L_08834AAC;
    }
L_08834AAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08834AC4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08834AC4u) goto L_08834AC4;
    return;
L_08834AC4:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08834AD4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08834AD4u) goto L_08834AD4;
    return;
L_08834AD4:
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08834AECu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    goto L_088344B4;
L_08834AEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08834B10u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08834B10u) goto L_08834B10;
    return;
L_08834B10:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08834B1Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08834B1Cu) goto L_08834B1C;
    return;
L_08834B1C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08834B48;
      }
      goto L_08834B2C;
    }
L_08834B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08834B48u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08834B48u) goto L_08834B48;
    return;
L_08834B48:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08834A7C;
      }
      goto L_08834B5C;
    }
L_08834B5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    ctx.gpr[18] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08834BC0;
L_08834BC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08834C00;
      }
      goto L_08834BD0;
    }
L_08834BD0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08834BDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08834BDCu) goto L_08834BDC;
    return;
L_08834BDC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834C00;
      }
      goto L_08834BE4;
    }
L_08834BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08834C00u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08834C00u) goto L_08834C00;
    return;
L_08834C00:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08834BC0;
      }
      goto L_08834C14;
    }
L_08834C14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834C30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834D04;
      }
      goto L_08834C50;
    }
L_08834C50:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08834CF4;
      }
      goto L_08834C6C;
    }
L_08834C6C:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1392));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08834CA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08834CA0u) goto L_08834CA0;
    return;
L_08834CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08834CD8;
      }
      goto L_08834CAC;
    }
L_08834CAC:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08834CD8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08834CD8u) goto L_08834CD8;
    return;
L_08834CD8:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08834D08;
      }
      goto L_08834CF4;
    }
L_08834CF4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834C50;
      }
      goto L_08834D04;
    }
L_08834D04:
    ctx.gpr[2] = (0u | 0u);
    goto L_08834D08;
L_08834D08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1392));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08834D58;
L_08834D58:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08834DB4;
      }
      goto L_08834D64;
    }
L_08834D64:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834DB4;
      }
      goto L_08834D6C;
    }
L_08834D6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834DB4;
      }
      goto L_08834D78;
    }
L_08834D78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08834DB4;
      }
      goto L_08834D84;
    }
L_08834D84:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08834D90u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08834D90u) goto L_08834D90;
    return;
L_08834D90:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834DB4;
      }
      goto L_08834D98;
    }
L_08834D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08834DB4u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08834DB4u) goto L_08834DB4;
    return;
L_08834DB4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08834D58;
      }
      goto L_08834DC8;
    }
L_08834DC8:
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
L_08834DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834E3C;
      }
      goto L_08834E08;
    }
L_08834E08:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08834E10;
L_08834E10:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08834E30;
    }
    goto L_08834E20;
L_08834E20:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08834E34;
      }
      goto L_08834E30;
    }
L_08834E30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08834E34;
L_08834E34:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08834E10;
    }
    goto L_08834E3C;
L_08834E3C:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08834E60;
    }
    goto L_08834E44;
L_08834E44:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_08834E64;
    }
    goto L_08834E5C;
L_08834E5C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08834E60;
L_08834E60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08834E64;
L_08834E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834E9C;
      }
      goto L_08834E94;
    }
L_08834E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08834EA0;
      }
      goto L_08834E9C;
    }
L_08834E9C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08834EA0;
L_08834EA0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[6] = (ctx.gpr[8] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (16192u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08835764;
      }
      goto L_08834F2C;
    }
L_08834F2C:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-12));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088350F4;
      }
      goto L_08834F38;
    }
L_08834F38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088350F4;
      }
      goto L_08834F40;
    }
L_08834F40:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08835298;
      }
      goto L_08834F48;
    }
L_08834F48:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088353D4;
      }
      goto L_08834F50;
    }
L_08834F50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[26])) && ctx.fpr[20] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(20000));
      if (branch_taken) {
          goto L_08834F78;
      }
      goto L_08834F70;
    }
L_08834F70:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08834F98;
      }
      goto L_08834F78;
    }
L_08834F78:
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    goto L_08834F98;
L_08834F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08834FFC;
      }
      goto L_08834FAC;
    }
L_08834FAC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08834FE4;
      }
      goto L_08834FC8;
    }
L_08834FC8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08834FE8;
    }
    goto L_08834FDC;
L_08834FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08834FF4;
      }
      goto L_08834FE4;
    }
L_08834FE4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08834FE8;
L_08834FE8:
    ctx.gpr[31] = (0x08834FF0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08834FF0u) goto L_08834FF0;
    return;
L_08834FF0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08834FF4;
L_08834FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835058;
      }
      goto L_08834FFC;
    }
L_08834FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08835058;
      }
      goto L_08835010;
    }
L_08835010:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08835048;
      }
      goto L_0883502C;
    }
L_0883502C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0883504C;
    }
    goto L_08835040;
L_08835040:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08835058;
      }
      goto L_08835048;
    }
L_08835048:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883504C;
L_0883504C:
    ctx.gpr[31] = (0x08835054u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08835054u) goto L_08835054;
    return;
L_08835054:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08835058;
L_08835058:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08835070u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08835070u) goto L_08835070;
    return;
L_08835070:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883507Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A063D8u>(ctx, &aot_mem) && ctx.pc == 0x0883507Cu) goto L_0883507C;
    return;
L_0883507C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08835090u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08835090u) goto L_08835090;
    return;
L_08835090:
    ctx.gpr[31] = (0x08835098u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08835098u) goto L_08835098;
    return;
L_08835098:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088350A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x088350A8u) goto L_088350A8;
    return;
L_088350A8:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 5u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835770;
      }
      goto L_088350F4;
    }
L_088350F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[26])) && ctx.fpr[20] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_0883511C;
      }
      goto L_08835114;
    }
L_08835114:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883513C;
      }
      goto L_0883511C;
    }
L_0883511C:
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    goto L_0883513C;
L_0883513C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088351A0;
      }
      goto L_08835150;
    }
L_08835150:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08835188;
      }
      goto L_0883516C;
    }
L_0883516C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0883518C;
    }
    goto L_08835180;
L_08835180:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08835198;
      }
      goto L_08835188;
    }
L_08835188:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883518C;
L_0883518C:
    ctx.gpr[31] = (0x08835194u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08835194u) goto L_08835194;
    return;
L_08835194:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08835198;
L_08835198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088351FC;
      }
      goto L_088351A0;
    }
L_088351A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088351FC;
      }
      goto L_088351B4;
    }
L_088351B4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088351EC;
      }
      goto L_088351D0;
    }
L_088351D0:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088351F0;
    }
    goto L_088351E4;
L_088351E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088351FC;
      }
      goto L_088351EC;
    }
L_088351EC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088351F0;
L_088351F0:
    ctx.gpr[31] = (0x088351F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088351F8u) goto L_088351F8;
    return;
L_088351F8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088351FC;
L_088351FC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08835214u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08835214u) goto L_08835214;
    return;
L_08835214:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08835220u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A063D8u>(ctx, &aot_mem) && ctx.pc == 0x08835220u) goto L_08835220;
    return;
L_08835220:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08835234u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08835234u) goto L_08835234;
    return;
L_08835234:
    ctx.gpr[31] = (0x0883523Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x0883523Cu) goto L_0883523C;
    return;
L_0883523C:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0883524Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x0883524Cu) goto L_0883524C;
    return;
L_0883524C:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 5u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835770;
      }
      goto L_08835298;
    }
L_08835298:
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15897u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2000));
      if (branch_taken) {
          goto L_088352F0;
      }
      goto L_088352E4;
    }
L_088352E4:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088352F0;
L_088352F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08835328;
      }
      goto L_0883530C;
    }
L_0883530C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835328;
      }
      goto L_08835320;
    }
L_08835320:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08835334;
      }
      goto L_08835328;
    }
L_08835328:
    ctx.gpr[31] = (0x08835330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08835330u) goto L_08835330;
    return;
L_08835330:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08835334;
L_08835334:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08835350u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08835350u) goto L_08835350;
    return;
L_08835350:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883535Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A063D8u>(ctx, &aot_mem) && ctx.pc == 0x0883535Cu) goto L_0883535C;
    return;
L_0883535C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08835370u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08835370u) goto L_08835370;
    return;
L_08835370:
    ctx.gpr[31] = (0x08835378u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08835378u) goto L_08835378;
    return;
L_08835378:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08835388u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x08835388u) goto L_08835388;
    return;
L_08835388:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835770;
      }
      goto L_088353D4;
    }
L_088353D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 213u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2000));
      if (branch_taken) {
          goto L_08835488;
      }
      goto L_088353F8;
    }
L_088353F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08835404u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08835404u) goto L_08835404;
    return;
L_08835404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0883544C;
    }
    goto L_0883544C;
L_0883544C:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08835480;
    }
    goto L_08835480;
L_08835480:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08835700;
      }
      goto L_08835488;
    }
L_08835488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088355E0;
      }
      goto L_0883549C;
    }
L_0883549C:
    ctx.gpr[31] = (0x088354A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088354A4u) goto L_088354A4;
    return;
L_088354A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088355E0;
      }
      goto L_088354AC;
    }
L_088354AC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835524;
      }
      goto L_088354C8;
    }
L_088354C8:
    ctx.gpr[31] = (0x088354D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088354D0u) goto L_088354D0;
    return;
L_088354D0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08835524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08835524u) goto L_08835524;
    return;
L_08835524:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(864)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(820)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(824)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(864));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(816));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835700;
      }
      goto L_088355E0;
    }
L_088355E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088356F4;
      }
      goto L_088355F4;
    }
L_088355F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088356F4;
      }
      goto L_08835600;
    }
L_08835600:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08835630u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08835630u) goto L_08835630;
    return;
L_08835630:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08835694;
      }
      goto L_08835678;
    }
L_08835678:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835694;
      }
      goto L_0883568C;
    }
L_0883568C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088356A0;
      }
      goto L_08835694;
    }
L_08835694:
    ctx.gpr[31] = (0x0883569Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0883569Cu) goto L_0883569C;
    return;
L_0883569C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088356A0;
L_088356A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088356C4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x088356C4u) goto L_088356C4;
    return;
L_088356C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088356D8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 524u, 0x08A06780u>(ctx, &aot_mem) && ctx.pc == 0x088356D8u) goto L_088356D8;
    return;
L_088356D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088356ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x088356ECu) goto L_088356EC;
    return;
L_088356EC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
      if (branch_taken) {
          goto L_08835700;
      }
      goto L_088356F4;
    }
L_088356F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08835700u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08835700u) goto L_08835700;
    return;
L_08835700:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835770;
      }
      goto L_08835764;
    }
L_08835764:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08835770u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10040));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 541u, 0x08AFA638u>(ctx, &aot_mem) && ctx.pc == 0x08835770u) goto L_08835770;
    return;
L_08835770:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(413), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(412), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08835944;
      }
      goto L_0883578C;
    }
L_0883578C:
    ctx.gpr[4] = (0u | 76u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8007)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(274), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.gpr[3] = (ctx.gpr[29] + static_cast<std::uint32_t>(312));
    ctx.gpr[12] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.gpr[13] = (ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.gpr[14] = (ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.gpr[15] = (ctx.gpr[14] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[25] = (ctx.gpr[14] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[24] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[31]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[2] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[3] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store_word_left(ctx.gpr[13] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[14] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[25] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[25] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(413)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2000u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(337), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(341), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[1]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[31] = (0x08835924u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08834DE8;
L_08835924:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(346), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883593Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A878Cu>(ctx, &aot_mem) && ctx.pc == 0x0883593Cu) goto L_0883593C;
    return;
L_0883593C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_08835944;
L_08835944:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(413)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08835978u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08835A10;
L_08835978:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088359B0;
      }
      goto L_08835984;
    }
L_08835984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088359A8;
      }
      goto L_08835994;
    }
L_08835994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088359A8;
      }
      goto L_088359A0;
    }
L_088359A0:
    ctx.gpr[31] = (0x088359A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x088359A8u) goto L_088359A8;
    return;
L_088359A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088359D8;
      }
      goto L_088359B0;
    }
L_088359B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088359D4;
      }
      goto L_088359C0;
    }
L_088359C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088359D4;
      }
      goto L_088359CC;
    }
L_088359CC:
    ctx.gpr[31] = (0x088359D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x088359D4u) goto L_088359D4;
    return;
L_088359D4:
    ctx.gpr[2] = (0u | 1u);
    goto L_088359D8;
L_088359D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835A10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[10] & 255u);
    ctx.gpr[23] = (ctx.gpr[11] & 255u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    goto L_08835A78;
L_08835A78:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1392));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08835AAC;
      }
      goto L_08835A9C;
    }
L_08835A9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835AAC;
      }
      goto L_08835AA4;
    }
L_08835AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08835A78;
      }
      goto L_08835AAC;
    }
L_08835AAC:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08835AF0;
      }
      goto L_08835AB8;
    }
L_08835AB8:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-12));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08835C08;
      }
      goto L_08835AC8;
    }
L_08835AC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08835B38;
      }
      goto L_08835AD0;
    }
L_08835AD0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08835B38;
      }
      goto L_08835AD8;
    }
L_08835AD8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08835AF8;
      }
      goto L_08835AE0;
    }
L_08835AE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08835B8C;
      }
      goto L_08835AE8;
    }
L_08835AE8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08835BCC;
      }
      goto L_08835AF0;
    }
L_08835AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08835D3C;
      }
      goto L_08835AF8;
    }
L_08835AF8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08835B04u);
    ctx.gpr[4] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08835B04u) goto L_08835B04;
    return;
L_08835B04:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08835B20;
      }
      goto L_08835B10;
    }
L_08835B10:
    ctx.gpr[5] = (0u | 271u);
    ctx.gpr[31] = (0x08835B1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 246u, 0x0890DA10u>(ctx, &aot_mem) && ctx.pc == 0x08835B1Cu) goto L_08835B1C;
    return;
L_08835B1C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08835B20;
L_08835B20:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08835C08;
      }
      goto L_08835B38;
    }
L_08835B38:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08835B44u);
    ctx.gpr[4] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08835B44u) goto L_08835B44;
    return;
L_08835B44:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08835B68;
      }
      goto L_08835B50;
    }
L_08835B50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 270u);
    ctx.gpr[31] = (0x08835B60u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 246u, 0x0890DA10u>(ctx, &aot_mem) && ctx.pc == 0x08835B60u) goto L_08835B60;
    return;
L_08835B60:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    goto L_08835B68;
L_08835B68:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08835C08;
      }
      goto L_08835B8C;
    }
L_08835B8C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08835B98u);
    ctx.gpr[4] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08835B98u) goto L_08835B98;
    return;
L_08835B98:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08835BB4;
      }
      goto L_08835BA4;
    }
L_08835BA4:
    ctx.gpr[5] = (0u | 272u);
    ctx.gpr[31] = (0x08835BB0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 246u, 0x0890DA10u>(ctx, &aot_mem) && ctx.pc == 0x08835BB0u) goto L_08835BB0;
    return;
L_08835BB0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08835BB4;
L_08835BB4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08835C08;
      }
      goto L_08835BCC;
    }
L_08835BCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08835BD8u);
    ctx.gpr[4] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08835BD8u) goto L_08835BD8;
    return;
L_08835BD8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08835BF4;
      }
      goto L_08835BE4;
    }
L_08835BE4:
    ctx.gpr[5] = (0u | 273u);
    ctx.gpr[31] = (0x08835BF0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 246u, 0x0890DA10u>(ctx, &aot_mem) && ctx.pc == 0x08835BF0u) goto L_08835BF0;
    return;
L_08835BF0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08835BF4;
L_08835BF4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08835C08;
L_08835C08:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835CF0;
      }
      goto L_08835C24;
    }
L_08835C24:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08835C60u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08835C60u) goto L_08835C60;
    return;
L_08835C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    ctx.gpr[31] = (0x08835CC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08835CC8u) goto L_08835CC8;
    return;
L_08835CC8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
        goto L_08835CF8;
    }
    goto L_08835CE8;
L_08835CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835D34;
      }
      goto L_08835CF0;
    }
L_08835CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08835D3C;
      }
      goto L_08835CF8;
    }
L_08835CF8:
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835D34;
      }
      goto L_08835D10;
    }
L_08835D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835D34;
      }
      goto L_08835D1C;
    }
L_08835D1C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    goto L_08835D34;
L_08835D34:
    ctx.gpr[2] = (ctx.gpr[18] << 24u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    goto L_08835D3C;
L_08835D3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835D70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    ctx.gpr[30] = (2233u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-3400));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (50424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17656u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16264u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    goto L_08835E28;
L_08835E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088363C0;
      }
      goto L_08835E40;
    }
L_08835E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835E7C;
      }
      goto L_08835E4C;
    }
L_08835E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08835E7C;
      }
      goto L_08835E68;
    }
L_08835E68:
    ctx.gpr[31] = (0x08835E70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 300u, 0x0899DD78u>(ctx, &aot_mem) && ctx.pc == 0x08835E70u) goto L_08835E70;
    return;
L_08835E70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835E7C;
      }
      goto L_08835E78;
    }
L_08835E78:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_08835E7C;
L_08835E7C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088363BC;
      }
      goto L_08835E84;
    }
L_08835E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08835EB4;
      }
      goto L_08835E94;
    }
L_08835E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08835EB4;
      }
      goto L_08835EA4;
    }
L_08835EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08835F2C;
      }
      goto L_08835EB4;
    }
L_08835EB4:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835F2C;
      }
      goto L_08835ED4;
    }
L_08835ED4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835F2C;
      }
      goto L_08835EEC;
    }
L_08835EEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835F2C;
      }
      goto L_08835F04;
    }
L_08835F04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835F2C;
      }
      goto L_08835F1C;
    }
L_08835F1C:
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08835F2C;
L_08835F2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835FB4;
      }
      goto L_08835F78;
    }
L_08835F78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835FB4;
      }
      goto L_08835F8C;
    }
L_08835F8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835FB4;
      }
      goto L_08835FA0;
    }
L_08835FA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08835FEC;
      }
      goto L_08835FB4;
    }
L_08835FB4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08835FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08835FC0u) goto L_08835FC0;
    return;
L_08835FC0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835FE4;
      }
      goto L_08835FC8;
    }
L_08835FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08835FE4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835FE4u) goto L_08835FE4;
    return;
L_08835FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088363C0;
      }
      goto L_08835FEC;
    }
L_08835FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08836104;
      }
      goto L_08835FFC;
    }
L_08835FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19500));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08836104;
      }
      goto L_08836014;
    }
L_08836014:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (0u | 23u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883605Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x0883605Cu) goto L_0883605C;
    return;
L_0883605C:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088360A0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088360A0u) goto L_088360A0;
    return;
L_088360A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088360D8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088360D8u) goto L_088360D8;
    return;
L_088360D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_08836104;
      }
      goto L_088360E8;
    }
L_088360E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16576u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08836104u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 526u, 0x088C351Cu>(ctx, &aot_mem) && ctx.pc == 0x08836104u) goto L_08836104;
    return;
L_08836104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883615C;
      }
      goto L_08836114;
    }
L_08836114:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (0u | 3000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (16179u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 13107u);
    ctx.gpr[4] = (0u | 73u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883615Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 79u, 0x08998570u>(ctx, &aot_mem) && ctx.pc == 0x0883615Cu) goto L_0883615C;
    return;
L_0883615C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836230;
      }
      goto L_08836170;
    }
L_08836170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836230;
      }
      goto L_0883617C;
    }
L_0883617C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883621C;
      }
      goto L_0883618C;
    }
L_0883618C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088363AC;
      }
      goto L_088361AC;
    }
L_088361AC:
    ctx.gpr[31] = (0x088361B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088361B4u) goto L_088361B4;
    return;
L_088361B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088363AC;
      }
      goto L_088361BC;
    }
L_088361BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[31] = (0x088361CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x088361CCu) goto L_088361CC;
    return;
L_088361CC:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08836210;
      }
      goto L_088361EC;
    }
L_088361EC:
    ctx.gpr[31] = (0x088361F4u);
    ctx.gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x088361F4u) goto L_088361F4;
    return;
L_088361F4:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836214;
      }
      goto L_08836210;
    }
L_08836210:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08836214;
L_08836214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088363AC;
      }
      goto L_0883621C;
    }
L_0883621C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08836228u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08834814;
L_08836228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088363AC;
      }
      goto L_08836230;
    }
L_08836230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088362EC;
      }
      goto L_08836240;
    }
L_08836240:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8004), ctx.gpr[16]);
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088362B4;
      }
      goto L_08836260;
    }
L_08836260:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0883628Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0883628Cu) goto L_0883628C;
    return;
L_0883628C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088362B4;
      }
      goto L_08836294;
    }
L_08836294:
    ctx.gpr[31] = (0x0883629Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 556u, 0x08A43568u>(ctx, &aot_mem) && ctx.pc == 0x0883629Cu) goto L_0883629C;
    return;
L_0883629C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088362B4;
      }
      goto L_088362A4;
    }
L_088362A4:
    ctx.gpr[31] = (0x088362ACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 327u, 0x08AA58B0u>(ctx, &aot_mem) && ctx.pc == 0x088362ACu) goto L_088362AC;
    return;
L_088362AC:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8004), 0u);
        goto L_088362C4;
    }
    goto L_088362B4;
L_088362B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088362C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08834814;
L_088362C0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8004), 0u);
    goto L_088362C4;
L_088362C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088363AC;
      }
      goto L_088362EC;
    }
L_088362EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088363AC;
      }
      goto L_088362FC;
    }
L_088362FC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8004), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836354;
      }
      goto L_08836318;
    }
L_08836318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088363A8;
      }
      goto L_08836354;
    }
L_08836354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883639C;
      }
      goto L_08836368;
    }
L_08836368:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08836394u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08836394u) goto L_08836394;
    return;
L_08836394:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088363A8;
      }
      goto L_0883639C;
    }
L_0883639C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088363A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08834814;
L_088363A8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8004), 0u);
    goto L_088363AC;
L_088363AC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088363C0;
      }
      goto L_088363BC;
    }
L_088363BC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_088363C0;
L_088363C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08835E28;
      }
      goto L_088363E4;
    }
L_088363E4:
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
L_0883642C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1752)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1780)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(1760), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(1768), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1772), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(1784), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088364C0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088364F4;
      }
      goto L_088364EC;
    }
L_088364EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088364F8;
      }
      goto L_088364F4;
    }
L_088364F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088364F8;
L_088364F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08836514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08836514u) goto L_08836514;
    return;
L_08836514:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08836520u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9976));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08836520u) goto L_08836520;
    return;
L_08836520:
    ctx.gpr[31] = (0x08836528u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08836528u) goto L_08836528;
    return;
L_08836528:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08836538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9964));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08836538u) goto L_08836538;
    return;
L_08836538:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-3272), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08836550u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9956));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08836550u) goto L_08836550;
    return;
L_08836550:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3272));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08836568u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9948));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08836568u) goto L_08836568;
    return;
L_08836568:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0883657Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9940));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x0883657Cu) goto L_0883657C;
    return;
L_0883657C:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08836590u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9928));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08836590u) goto L_08836590;
    return;
L_08836590:
    ctx.gpr[31] = (0x08836598u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08836598u) goto L_08836598;
    return;
L_08836598:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088365B4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
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
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7968)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8000)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7996)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (20224u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08836640;
      }
      goto L_08836634;
    }
L_08836634:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_08836640;
L_08836640:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16128u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08836694;
    }
    goto L_08836688;
L_08836688:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088366A4;
      }
      goto L_08836694;
    }
L_08836694:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_088366A4;
L_088366A4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7996), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088366AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x088366E4u);
    // nop
    goto L_088364C0;
L_088366E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088368A8;
      }
      goto L_088366EC;
    }
L_088366EC:
    ctx.gpr[4] = (0u | 230u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7988));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7992));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7980)));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[20] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7972)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = ctx.fpr[13] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08836760u);
    ctx.fpr[19] = ctx.fpr[15] + ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 24u, 0x08AD4128u>(ctx, &aot_mem) && ctx.pc == 0x08836760u) goto L_08836760;
    return;
L_08836760:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17376u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7980)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7972)));
    ctx.gpr[4] = (0u | 100u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-7984), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[8] = (16896u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7984));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27020)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.fpr[22] = ctx.fpr[24] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[28] + ctx.fpr[22];
    ctx.fpr[19] = ctx.fpr[28] + ctx.fpr[24];
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[26];
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[26];
    ctx.gpr[31] = (0x088367F8u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 24u, 0x08AD4128u>(ctx, &aot_mem) && ctx.pc == 0x088367F8u) goto L_088367F8;
    return;
L_088367F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088368A8;
      }
      goto L_08836804;
    }
L_08836804:
    ctx.fpr[22] = ctx.fpr[28] + ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[26];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08836834;
    }
    goto L_08836834;
L_08836834:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08836860;
    }
    goto L_08836860;
L_08836860:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088368A8u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 24u, 0x08AD4128u>(ctx, &aot_mem) && ctx.pc == 0x088368A8u) goto L_088368A8;
    return;
L_088368A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088368DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[31]);
    ctx.gpr[31] = (0x08836928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 282u, 0x08AD11FCu>(ctx, &aot_mem) && ctx.pc == 0x08836928u) goto L_08836928;
    return;
L_08836928:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836A98;
      }
      goto L_08836930;
    }
L_08836930:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-16212), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8000)));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08836984u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08836984u) goto L_08836984;
    return;
L_08836984:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08836990u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08836990u) goto L_08836990;
    return;
L_08836990:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0883699Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0883699Cu) goto L_0883699C;
    return;
L_0883699C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x088369A8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088369A8u) goto L_088369A8;
    return;
L_088369A8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088369B4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088369B4u) goto L_088369B4;
    return;
L_088369B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[31] = (0x088369C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 632u, 0x088738A0u>(ctx, &aot_mem) && ctx.pc == 0x088369C4u) goto L_088369C4;
    return;
L_088369C4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088369D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 393u, 0x0894E348u>(ctx, &aot_mem) && ctx.pc == 0x088369D0u) goto L_088369D0;
    return;
L_088369D0:
    ctx.gpr[31] = (0x088369D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 394u, 0x0894E358u>(ctx, &aot_mem) && ctx.pc == 0x088369D8u) goto L_088369D8;
    return;
L_088369D8:
    ctx.gpr[31] = (0x088369E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 316u, 0x08A2603Cu>(ctx, &aot_mem) && ctx.pc == 0x088369E0u) goto L_088369E0;
    return;
L_088369E0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8047)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-8046)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3272));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17184u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08836AA0;
      }
      goto L_08836A90;
    }
L_08836A90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836AA4;
      }
      goto L_08836A98;
    }
L_08836A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837818;
      }
      goto L_08836AA0;
    }
L_08836AA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08836AA4;
L_08836AA4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C1C;
      }
      goto L_08836AB8;
    }
L_08836AB8:
    ctx.gpr[5] = (0u | 180u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8084)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7952)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08836AF4;
      }
      goto L_08836ADC;
    }
L_08836ADC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7952)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08836B08;
      }
      goto L_08836AF4;
    }
L_08836AF4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8084)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08836B08;
L_08836B08:
    ctx.gpr[4] = (49864u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (0x08836B34u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08836B34u) goto L_08836B34;
    return;
L_08836B34:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08836B4Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08836B4Cu) goto L_08836B4C;
    return;
L_08836B4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C1C;
      }
      goto L_08836B54;
    }
L_08836B54:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16908));
    ctx.fpr[20] = ctx.fpr[26] / ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08836B74u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08836B74u) goto L_08836B74;
    return;
L_08836B74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16204)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08836BB0;
      }
      goto L_08836BA4;
    }
L_08836BA4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08836BB0;
L_08836BB0:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16204)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08836BDC;
      }
      goto L_08836BD0;
    }
L_08836BD0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    goto L_08836BDC;
L_08836BDC:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[19] = ctx.fpr[14] + ctx.fpr[19];
    ctx.gpr[7] = (0u | 255u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08836C1Cu);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 326u, 0x08A26120u>(ctx, &aot_mem) && ctx.pc == 0x08836C1Cu) goto L_08836C1C;
    return;
L_08836C1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C44;
      }
      goto L_08836C2C;
    }
L_08836C2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836C44;
      }
      goto L_08836C3C;
    }
L_08836C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08836CB0;
      }
      goto L_08836C44;
    }
L_08836C44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C64;
      }
      goto L_08836C54;
    }
L_08836C54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C6C;
      }
      goto L_08836C64;
    }
L_08836C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 255u);
      if (branch_taken) {
          goto L_08836CB0;
      }
      goto L_08836C6C;
    }
L_08836C6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 60u);
      if (branch_taken) {
          goto L_08836C98;
      }
      goto L_08836C7C;
    }
L_08836C7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8047)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836CB0;
      }
      goto L_08836C98;
    }
L_08836C98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8047)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    goto L_08836CB0;
L_08836CB0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836FC4;
      }
      goto L_08836CB8;
    }
L_08836CB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8084)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7952)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2229u << 16u);
      if (branch_taken) {
          goto L_08836CF0;
      }
      goto L_08836CD8;
    }
L_08836CD8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7952)));
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08836D04;
      }
      goto L_08836CF0;
    }
L_08836CF0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8084)));
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08836D04;
L_08836D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-16908)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08836D14u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08836D14u) goto L_08836D14;
    return;
L_08836D14:
    ctx.gpr[4] = (15477u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (17056u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2468));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2504));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2540));
    goto L_08836D6C;
L_08836D6C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08836DA0;
      }
      goto L_08836D94;
    }
L_08836D94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08836DA0;
L_08836DA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (0x08836DACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08836DACu) goto L_08836DAC;
    return;
L_08836DAC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.hi);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[21]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[20]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08836E08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08836E08u) goto L_08836E08;
    return;
L_08836E08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836EA8;
      }
      goto L_08836E10;
    }
L_08836E10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = ctx.fpr[26] / ctx.fpr[12];
    ctx.gpr[31] = (0x08836E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08836E24u) goto L_08836E24;
    return;
L_08836E24:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = ctx.fpr[26] - ctx.fpr[17];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08836EA4u);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 401u, 0x08A27194u>(ctx, &aot_mem) && ctx.pc == 0x08836EA4u) goto L_08836EA4;
    return;
L_08836EA4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    goto L_08836EA8;
L_08836EA8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836D6C;
      }
      goto L_08836EB8;
    }
L_08836EB8:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08836ED0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 317u, 0x08A26060u>(ctx, &aot_mem) && ctx.pc == 0x08836ED0u) goto L_08836ED0;
    return;
L_08836ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-16908)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08836EE0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08836EE0u) goto L_08836EE0;
    return;
L_08836EE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (0x08836EFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08836EFCu) goto L_08836EFC;
    return;
L_08836EFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08836F28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08836F28u) goto L_08836F28;
    return;
L_08836F28:
    ctx.gpr[4] = (17184u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08836FC4;
      }
      goto L_08836F38;
    }
L_08836F38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = ctx.fpr[26] / ctx.fpr[12];
    ctx.gpr[31] = (0x08836F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08836F4Cu) goto L_08836F4C;
    return;
L_08836F4C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 127u);
    ctx.gpr[5] = (15052u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[7] = (16544u << 16u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08836FC4u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 326u, 0x08A26120u>(ctx, &aot_mem) && ctx.pc == 0x08836FC4u) goto L_08836FC4;
    return;
L_08836FC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8084)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7952)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7952)));
        goto L_08836FE8;
    }
    goto L_08836FE0;
L_08836FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8084)));
      if (branch_taken) {
          goto L_08836FE8;
      }
      goto L_08836FE8;
    }
L_08836FE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7948)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7948)));
        goto L_08837000;
    }
    goto L_08837000;
L_08837000:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11160)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11164)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11168)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (17480u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (17312u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1928));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_088370A4;
L_088370A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088370B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088370B8u) goto L_088370B8;
    return;
L_088370B8:
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088371A0;
      }
      goto L_088370C8;
    }
L_088370C8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (ctx.gpr[30] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_088370E4;
L_088370E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08837140u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08837140u) goto L_08837140;
    return;
L_08837140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837188;
      }
      goto L_08837148;
    }
L_08837148:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[17] = ctx.fpr[26] / ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7976)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[31] = (0x08837188u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 448u, 0x08A27AD4u>(ctx, &aot_mem) && ctx.pc == 0x08837188u) goto L_08837188;
    return;
L_08837188:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088370E4;
      }
      goto L_088371A0;
    }
L_088371A0:
    ctx.gpr[31] = (0x088371A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 317u, 0x08A26060u>(ctx, &aot_mem) && ctx.pc == 0x088371A8u) goto L_088371A8;
    return;
L_088371A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088370A4;
      }
      goto L_088371C0;
    }
L_088371C0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8084)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7948)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7948)));
        goto L_088371FC;
    }
    goto L_088371E0;
L_088371E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8084)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08837210;
      }
      goto L_088371FC;
    }
L_088371FC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08837210;
L_08837210:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088377DC;
      }
      goto L_08837218;
    }
L_08837218:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08837224u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08837224u) goto L_08837224;
    return;
L_08837224:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08837230u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08837230u) goto L_08837230;
    return;
L_08837230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08837244u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08837244u) goto L_08837244;
    return;
L_08837244:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(2172));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(2024));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(2320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    ctx.gpr[4] = (16988u << 16u);
    ctx.gpr[30] = (2233u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-3248));
    ctx.gpr[21] = (2229u << 16u);
    goto L_08837288;
L_08837288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x0883730Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0883730Cu) goto L_0883730C;
    return;
L_0883730C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[30]);
    ctx.fpr[19] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (2230u << 16u);
      if (branch_taken) {
          goto L_088375D8;
      }
      goto L_08837320;
    }
L_08837320:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16220)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16216)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[30] = ctx.fpr[30] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11172)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11176)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11180)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11184)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11188)));
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11192)));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08837514;
      }
      goto L_088373C0;
    }
L_088373C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-8084)));
    ctx.gpr[3] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-7952)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
      if (branch_taken) {
          goto L_08837414;
      }
      goto L_08837404;
    }
L_08837404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-7952)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08837420;
      }
      goto L_08837414;
    }
L_08837414:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-8084)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08837420;
L_08837420:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[11] = (17214u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[16];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08837518;
      }
      goto L_08837508;
    }
L_08837508:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-16212), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08837518;
      }
      goto L_08837514;
    }
L_08837514:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08837518;
L_08837518:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = ctx.fpr[26] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7996)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
      if (branch_taken) {
          goto L_0883755C;
      }
      goto L_08837550;
    }
L_08837550:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[0];
    goto L_0883755C;
L_0883755C:
    ctx.gpr[4] = (14536u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7976)));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[15];
    ctx.gpr[3] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[11] = (49024u << 16u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088375D0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 479u, 0x08A27FFCu>(ctx, &aot_mem) && ctx.pc == 0x088375D0u) goto L_088375D0;
    return;
L_088375D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088375DC;
      }
      goto L_088375D8;
    }
L_088375D8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088375DC;
L_088375DC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08837288;
      }
      goto L_088375F4;
    }
L_088375F4:
    ctx.gpr[31] = (0x088375FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 317u, 0x08A26060u>(ctx, &aot_mem) && ctx.pc == 0x088375FCu) goto L_088375FC;
    return;
L_088375FC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08837608u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08837608u) goto L_08837608;
    return;
L_08837608:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08837614u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08837614u) goto L_08837614;
    return;
L_08837614:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08837628u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08837628u) goto L_08837628;
    return;
L_08837628:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    goto L_08837660;
L_08837660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088377BC;
      }
      goto L_088376DC;
    }
L_088376DC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088376F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x088376F4u) goto L_088376F4;
    return;
L_088376F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088377BC;
      }
      goto L_088376FC;
    }
L_088376FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088377BC;
      }
      goto L_08837710;
    }
L_08837710:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x0883771Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0883771Cu) goto L_0883771C;
    return;
L_0883771C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08837740;
      }
      goto L_08837734;
    }
L_08837734:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08837740;
L_08837740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27020)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16345u << 16u);
      if (branch_taken) {
          goto L_088377BC;
      }
      goto L_08837764;
    }
L_08837764:
    ctx.gpr[9] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = ctx.fpr[26] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7976)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[31] = (0x088377BCu);
    ctx.fpr[18] = ctx.fpr[0] + ctx.fpr[19];
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 417u, 0x08A275A8u>(ctx, &aot_mem) && ctx.pc == 0x088377BCu) goto L_088377BC;
    return;
L_088377BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08837660;
      }
      goto L_088377D4;
    }
L_088377D4:
    ctx.gpr[31] = (0x088377DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 317u, 0x08A26060u>(ctx, &aot_mem) && ctx.pc == 0x088377DCu) goto L_088377DC;
    return;
L_088377DC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088377E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088377E8u) goto L_088377E8;
    return;
L_088377E8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088377F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088377F4u) goto L_088377F4;
    return;
L_088377F4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08837800u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08837800u) goto L_08837800;
    return;
L_08837800:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0883780Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0883780Cu) goto L_0883780C;
    return;
L_0883780C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08837818u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08837818u) goto L_08837818;
    return;
L_08837818:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08837860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.gpr[30] = (ctx.gpr[4] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[23] = (ctx.gpr[5] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.gpr[22] = (ctx.gpr[6] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[7] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[8] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[9] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[10] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7992));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7988));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_0883796C;
      }
      goto L_08837968;
    }
L_08837968:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0883796C;
L_0883796C:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088379B4;
      }
      goto L_088379A8;
    }
L_088379A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7976)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088379B4;
L_088379B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7976)));
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
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08837A00u);
    // nop
    goto L_088364C0;
L_08837A00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_08837A8C;
      }
      goto L_08837A08;
    }
L_08837A08:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7992), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7992)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-7988), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08837A6Cu);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08837A6Cu) goto L_08837A6C;
    return;
L_08837A6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08837A84u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 15u, 0x08AD40B0u>(ctx, &aot_mem) && ctx.pc == 0x08837A84u) goto L_08837A84;
    return;
L_08837A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837E74;
      }
      goto L_08837A8C;
    }
L_08837A8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[31] = (0x08837AFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 302u, 0x08A25C44u>(ctx, &aot_mem) && ctx.pc == 0x08837AFCu) goto L_08837AFC;
    return;
L_08837AFC:
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7980), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(-7992), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7988), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[17] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[19] = ctx.fpr[0] - ctx.fpr[12];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = ctx.fpr[19] - ctx.fpr[15];
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[31] = (0x08837BBCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 24u, 0x08AD4128u>(ctx, &aot_mem) && ctx.pc == 0x08837BBCu) goto L_08837BBC;
    return;
L_08837BBC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7980)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7992), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[17] = ctx.fpr[13] + ctx.fpr[19];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[19] = ctx.fpr[15] + ctx.fpr[19];
    ctx.gpr[31] = (0x08837C28u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 24u, 0x08AD4128u>(ctx, &aot_mem) && ctx.pc == 0x08837C28u) goto L_08837C28;
    return;
L_08837C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7980)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152))))));
      if (branch_taken) {
          goto L_08837CA0;
      }
      goto L_08837C64;
    }
L_08837C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7980)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_08837E4C;
    }
    goto L_08837CA0;
L_08837CA0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7992), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08837CD4;
      }
      goto L_08837CC8;
    }
L_08837CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08837CD8;
      }
      goto L_08837CD4;
    }
L_08837CD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    goto L_08837CD8;
L_08837CD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7980)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7980)));
        goto L_08837D64;
    }
    goto L_08837D18;
L_08837D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08837D5Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 24u, 0x08AD4128u>(ctx, &aot_mem) && ctx.pc == 0x08837D5Cu) goto L_08837D5C;
    return;
L_08837D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837E48;
      }
      goto L_08837D64;
    }
L_08837D64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08837D90;
    }
    goto L_08837D90;
L_08837D90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7980)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08837DCC;
    }
    goto L_08837DCC;
L_08837DCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7980)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7972)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[19] = ctx.fpr[16] - ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[17];
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08837E48u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 24u, 0x08AD4128u>(ctx, &aot_mem) && ctx.pc == 0x08837E48u) goto L_08837E48;
    return;
L_08837E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08837E4C;
L_08837E4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-7992), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7988), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08837E74;
L_08837E74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08837EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1804)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1808), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1840)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1836)));
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(1844), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(1816), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(1812), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(1820), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(1832), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(1848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1856), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08837F9C:
    if (lcs::decomp::run<0x08837F9Cu>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08837FACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 505u, 0x0886AC24u>(ctx, &aot_mem) && ctx.pc == 0x08837FACu) goto L_08837FAC;
    return;
L_08837FAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837FBC;
      }
      goto L_08837FB4;
    }
L_08837FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08837FC0;
      }
      goto L_08837FBC;
    }
L_08837FBC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08837FC0;
L_08837FC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08837FCC:
    if (lcs::decomp::run<0x08837FCCu>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08837FDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 512u, 0x0886AC80u>(ctx, &aot_mem) && ctx.pc == 0x08837FDCu) goto L_08837FDC;
    return;
L_08837FDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08837FE8:
    if (lcs::decomp::run<0x08837FE8u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08837FF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 513u, 0x0886AC88u>(ctx, &aot_mem) && ctx.pc == 0x08837FF8u) goto L_08837FF8;
    return;
L_08837FF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0012(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0012_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_12(Runtime &runtime) {
    runtime.register_generated_unit(12u, 0x08834000u, 16384u, &recomp_unit_0012, &recomp_unit_0012_entry);
    runtime.register_function(0x08834000u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883400Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883403Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883404Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883405Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834060u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834064u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834074u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834080u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834088u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834090u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834100u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834110u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834114u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834118u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883412Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834138u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834140u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834148u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834194u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883420Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834214u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883421Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834228u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834230u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834234u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834240u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834274u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834298u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834304u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834318u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834328u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834338u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883433Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834340u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834348u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834354u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834360u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834370u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834394u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088344B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088344E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834544u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834558u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834564u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883457Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834590u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088345A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088345FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834608u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834614u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834624u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834634u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834648u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883464Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834664u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834670u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883467Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088346B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088346C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834734u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834738u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834744u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834750u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834758u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883478Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088347A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088347B8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088347E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088347ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088347F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834814u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834838u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883485Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834864u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834870u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834894u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883489Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834920u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883492Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834934u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834950u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834964u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834978u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883499Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A0Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A58u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A88u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AC4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AD4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B2Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B48u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B5Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B8Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834BC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834BD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834BDCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834BE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C00u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C14u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C30u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D58u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D78u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834DB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834DC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834DE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E30u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E34u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E3Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E5Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E9Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834EA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834EA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F2Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F48u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F70u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F78u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FDCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FFCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835010u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883502Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835040u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835048u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883504Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835054u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835058u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835070u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883507Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835090u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835098u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088350A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088350F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835114u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883511Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883513Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835150u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883516Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835180u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835188u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883518Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835194u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835198u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088351A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088351B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088351D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088351E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088351ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088351F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088351F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088351FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835214u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835220u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835234u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883523Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883524Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835298u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088352E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088352F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883530Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835320u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835328u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835330u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835334u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835350u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883535Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835370u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835378u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835388u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835404u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883544Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835480u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835488u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883549Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088354A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088354ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088354C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088354D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835524u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088355E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088355F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835600u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835630u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835678u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883568Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835694u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883569Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835700u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835764u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835770u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883578Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835924u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883593Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835944u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835978u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835984u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835994u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A78u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A9Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AE0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AF8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B68u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B8Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BCCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CF8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D34u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D3Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D70u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E68u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E70u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E78u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835EA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835EB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835ED4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835EECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F2Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F78u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F8Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FFCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836014u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883605Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088360A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088360D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088360E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836104u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836114u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883615Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836170u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883617Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883618Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836210u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836214u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883621Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836228u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836230u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836240u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836260u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883628Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836294u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883629Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836318u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836354u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836368u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836394u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883639Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883642Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836500u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836514u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836520u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836528u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836538u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836550u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836568u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883657Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836590u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836598u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088365B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836634u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836640u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836688u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836694u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836760u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088367F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836804u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836834u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836860u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088368A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088368DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836928u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836930u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836984u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836990u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883699Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836ADCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836B08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836B34u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836B4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836B54u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836B74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BDCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C2Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C3Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C54u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836CB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836CB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836CD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836CF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836D04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836D14u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836D6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836D94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836DA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836DACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836EA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836EA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836EB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836ED0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836EE0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836EFCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836FC4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836FE0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836FE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837000u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370B8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837140u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837148u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837188u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837210u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837218u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837224u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837230u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837244u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837288u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883730Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837320u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088373C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837404u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837414u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837420u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837508u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837514u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837518u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837550u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883755Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837608u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837614u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837628u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837660u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088376DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088376F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088376FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837710u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883771Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837734u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837740u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837764u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837800u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883780Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837818u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837860u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837968u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883796Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088379A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088379B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A00u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A8Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837AFCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837BBCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837CA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837CC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837CD4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837CD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D5Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837DCCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E48u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837EA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837F9Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FBCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FCCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FDCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FF8u, &recomp_unit_0012, "recomp_unit_0012");
}
} // namespace psprecomp
