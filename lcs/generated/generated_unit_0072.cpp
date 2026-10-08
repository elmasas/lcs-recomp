#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_render_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0072[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0,
    0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0,
    0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0,
    0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 51, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 57, 58, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 65, 66,
    0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 72, 73, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0,
    78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 85, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91,
    92, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 99, 100, 0, 101, 0, 102, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 106,
    107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 113, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 120, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 127, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 135, 0,
    136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 186, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0,
    207, 0, 208, 0, 209, 0, 210, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 223, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 238, 0, 239, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0,
    252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0,
    0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0,
    0, 285, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299,
    0, 0, 0, 300, 0, 0, 301, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0,
    0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0,
    0, 0, 321, 0, 322, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 341, 0, 342, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0,
    361, 0, 362, 0, 0, 363, 0, 364, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0,
    0, 375, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 381, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393,
    0, 0, 394, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 403, 404, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0,
    0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0,
    0, 440, 0, 441, 0, 442, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0,
    446, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454,
    0, 455, 0, 456, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0,
    0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 489,
    0, 490, 0, 491, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 0, 0, 507, 0,
    0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516,
    0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0,
    0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525,
    0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0,
    0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0,
    0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 543, 0, 0, 544, 545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 553, 0, 0, 0,
    554, 0, 0, 0, 555, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0,
    0, 0, 0, 0, 561, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0,
    570, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0,
    0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0,
    0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 585, 0, 586, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0,
    591, 0, 592, 0, 593, 0, 0, 594, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 598, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0,
    0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0,
    0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0,
    0, 0, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 624,
    0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629,
    0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0,
    638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 645, 0, 0, 0, 0, 646, 0,
    0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0,
    0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0,
    657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0,
    664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0,
    669, 0, 0, 0, 0, 670, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0,
    0, 676, 677, 0, 0, 678, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0,
    0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692,
};
void recomp_unit_0072_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08924000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0072[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08924000;
    case 2u: goto L_089240C0;
    case 3u: goto L_089240E8;
    case 4u: goto L_08924184;
    case 5u: goto L_08924194;
    case 6u: goto L_089241A0;
    case 7u: goto L_089241B0;
    case 8u: goto L_089241B8;
    case 9u: goto L_089241C8;
    case 10u: goto L_089241DC;
    case 11u: goto L_089241EC;
    case 12u: goto L_089241F8;
    case 13u: goto L_0892420C;
    case 14u: goto L_08924218;
    case 15u: goto L_08924280;
    case 16u: goto L_0892428C;
    case 17u: goto L_089242F4;
    case 18u: goto L_08924300;
    case 19u: goto L_08924368;
    case 20u: goto L_08924374;
    case 21u: goto L_08924398;
    case 22u: goto L_089243A8;
    case 23u: goto L_089243BC;
    case 24u: goto L_089243C8;
    case 25u: goto L_089243DC;
    case 26u: goto L_089243E8;
    case 27u: goto L_08924450;
    case 28u: goto L_0892445C;
    case 29u: goto L_08924538;
    case 30u: goto L_08924548;
    case 31u: goto L_08924568;
    case 32u: goto L_0892456C;
    case 33u: goto L_08924578;
    case 34u: goto L_089245E0;
    case 35u: goto L_089245F0;
    case 36u: goto L_08924604;
    case 37u: goto L_08924610;
    case 38u: goto L_0892465C;
    case 39u: goto L_08924684;
    case 40u: goto L_08924694;
    case 41u: goto L_089246A8;
    case 42u: goto L_089246B8;
    case 43u: goto L_08924734;
    case 44u: goto L_0892475C;
    case 45u: goto L_089247EC;
    case 46u: goto L_089247F0;
    case 47u: goto L_08924808;
    case 48u: goto L_08924810;
    case 49u: goto L_08924828;
    case 50u: goto L_08924844;
    case 51u: goto L_08924848;
    case 52u: goto L_0892484C;
    case 53u: goto L_08924854;
    case 54u: goto L_0892485C;
    case 55u: goto L_08924864;
    case 56u: goto L_08924880;
    case 57u: goto L_0892489C;
    case 58u: goto L_089248A0;
    case 59u: goto L_089248A4;
    case 60u: goto L_089248AC;
    case 61u: goto L_089248B4;
    case 62u: goto L_089248BC;
    case 63u: goto L_089248D8;
    case 64u: goto L_089248F4;
    case 65u: goto L_089248F8;
    case 66u: goto L_089248FC;
    case 67u: goto L_08924904;
    case 68u: goto L_0892490C;
    case 69u: goto L_08924914;
    case 70u: goto L_08924930;
    case 71u: goto L_0892494C;
    case 72u: goto L_08924950;
    case 73u: goto L_08924954;
    case 74u: goto L_0892495C;
    case 75u: goto L_08924964;
    case 76u: goto L_0892496C;
    case 77u: goto L_08924978;
    case 78u: goto L_08924980;
    case 79u: goto L_0892498C;
    case 80u: goto L_08924994;
    case 81u: goto L_089249C4;
    case 82u: goto L_089249C8;
    case 83u: goto L_08924A08;
    case 84u: goto L_08924A24;
    case 85u: goto L_08924A28;
    case 86u: goto L_08924A2C;
    case 87u: goto L_08924A34;
    case 88u: goto L_08924A3C;
    case 89u: goto L_08924A44;
    case 90u: goto L_08924A60;
    case 91u: goto L_08924A7C;
    case 92u: goto L_08924A80;
    case 93u: goto L_08924A84;
    case 94u: goto L_08924A8C;
    case 95u: goto L_08924A94;
    case 96u: goto L_08924A9C;
    case 97u: goto L_08924AB8;
    case 98u: goto L_08924AD4;
    case 99u: goto L_08924AD8;
    case 100u: goto L_08924ADC;
    case 101u: goto L_08924AE4;
    case 102u: goto L_08924AEC;
    case 103u: goto L_08924AF4;
    case 104u: goto L_08924B5C;
    case 105u: goto L_08924B78;
    case 106u: goto L_08924B7C;
    case 107u: goto L_08924B80;
    case 108u: goto L_08924B88;
    case 109u: goto L_08924B90;
    case 110u: goto L_08924B98;
    case 111u: goto L_08924BB4;
    case 112u: goto L_08924BD0;
    case 113u: goto L_08924BD4;
    case 114u: goto L_08924BD8;
    case 115u: goto L_08924BE0;
    case 116u: goto L_08924BE8;
    case 117u: goto L_08924BF0;
    case 118u: goto L_08924C0C;
    case 119u: goto L_08924C28;
    case 120u: goto L_08924C2C;
    case 121u: goto L_08924C30;
    case 122u: goto L_08924C38;
    case 123u: goto L_08924C40;
    case 124u: goto L_08924C48;
    case 125u: goto L_08924C8C;
    case 126u: goto L_08924CA8;
    case 127u: goto L_08924CAC;
    case 128u: goto L_08924CB0;
    case 129u: goto L_08924CB8;
    case 130u: goto L_08924CC0;
    case 131u: goto L_08924CC8;
    case 132u: goto L_08924CD8;
    case 133u: goto L_08924CE0;
    case 134u: goto L_08924CE8;
    case 135u: goto L_08924CF8;
    case 136u: goto L_08924D00;
    case 137u: goto L_08924D08;
    case 138u: goto L_08924D18;
    case 139u: goto L_08924D24;
    case 140u: goto L_08924D2C;
    case 141u: goto L_08924D3C;
    case 142u: goto L_08924D48;
    case 143u: goto L_08924D50;
    case 144u: goto L_08924D80;
    case 145u: goto L_08924DA8;
    case 146u: goto L_08924DB8;
    case 147u: goto L_08924DC8;
    case 148u: goto L_08924DDC;
    case 149u: goto L_08924DF4;
    case 150u: goto L_08924DFC;
    case 151u: goto L_08924E60;
    case 152u: goto L_08924E7C;
    case 153u: goto L_08924EA4;
    case 154u: goto L_08924EE0;
    case 155u: goto L_08924EF0;
    case 156u: goto L_08924EF8;
    case 157u: goto L_08924F58;
    case 158u: goto L_08924F74;
    case 159u: goto L_08924F9C;
    case 160u: goto L_08924FD8;
    case 161u: goto L_08924FE8;
    case 162u: goto L_08924FF0;
    case 163u: goto L_08925058;
    case 164u: goto L_08925074;
    case 165u: goto L_08925090;
    case 166u: goto L_089250CC;
    case 167u: goto L_089250DC;
    case 168u: goto L_089250E4;
    case 169u: goto L_089250F8;
    case 170u: goto L_08925114;
    case 171u: goto L_08925128;
    case 172u: goto L_0892514C;
    case 173u: goto L_08925154;
    case 174u: goto L_08925158;
    case 175u: goto L_089251B8;
    case 176u: goto L_089251F8;
    case 177u: goto L_08925234;
    case 178u: goto L_08925244;
    case 179u: goto L_0892524C;
    case 180u: goto L_08925270;
    case 181u: goto L_089252C4;
    case 182u: goto L_08925304;
    case 183u: goto L_08925338;
    case 184u: goto L_0892536C;
    case 185u: goto L_08925374;
    case 186u: goto L_08925378;
    case 187u: goto L_08925398;
    case 188u: goto L_08925464;
    case 189u: goto L_08925484;
    case 190u: goto L_089254AC;
    case 191u: goto L_089254B4;
    case 192u: goto L_089254FC;
    case 193u: goto L_08925518;
    case 194u: goto L_08925524;
    case 195u: goto L_089256FC;
    case 196u: goto L_08925734;
    case 197u: goto L_08925740;
    case 198u: goto L_0892576C;
    case 199u: goto L_089257E4;
    case 200u: goto L_089257FC;
    case 201u: goto L_08925808;
    case 202u: goto L_08925840;
    case 203u: goto L_08925850;
    case 204u: goto L_08925868;
    case 205u: goto L_08925870;
    case 206u: goto L_08925878;
    case 207u: goto L_08925880;
    case 208u: goto L_08925888;
    case 209u: goto L_08925890;
    case 210u: goto L_08925898;
    case 211u: goto L_0892589C;
    case 212u: goto L_089258A4;
    case 213u: goto L_089258B8;
    case 214u: goto L_089258D0;
    case 215u: goto L_089258F0;
    case 216u: goto L_08925910;
    case 217u: goto L_0892592C;
    case 218u: goto L_08925934;
    case 219u: goto L_08925944;
    case 220u: goto L_0892594C;
    case 221u: goto L_08925954;
    case 222u: goto L_0892595C;
    case 223u: goto L_08925960;
    case 224u: goto L_08925968;
    case 225u: goto L_08925998;
    case 226u: goto L_089259A0;
    case 227u: goto L_089259AC;
    case 228u: goto L_089259B8;
    case 229u: goto L_089259D4;
    case 230u: goto L_089259E4;
    case 231u: goto L_08925A08;
    case 232u: goto L_08925A14;
    case 233u: goto L_08925A1C;
    case 234u: goto L_08925A24;
    case 235u: goto L_08925A48;
    case 236u: goto L_08925A50;
    case 237u: goto L_08925A80;
    case 238u: goto L_08925A8C;
    case 239u: goto L_08925A94;
    case 240u: goto L_08925A98;
    case 241u: goto L_08925AA4;
    case 242u: goto L_08925AD8;
    case 243u: goto L_08925B08;
    case 244u: goto L_08925B38;
    case 245u: goto L_08925B68;
    case 246u: goto L_08925B90;
    case 247u: goto L_08925BBC;
    case 248u: goto L_08925BD0;
    case 249u: goto L_08925BDC;
    case 250u: goto L_08925BE8;
    case 251u: goto L_08925BF4;
    case 252u: goto L_08925C00;
    case 253u: goto L_08925C0C;
    case 254u: goto L_08925C18;
    case 255u: goto L_08925C24;
    case 256u: goto L_08925C30;
    case 257u: goto L_08925C3C;
    case 258u: goto L_08925C48;
    case 259u: goto L_08925C54;
    case 260u: goto L_08925C60;
    case 261u: goto L_08925C6C;
    case 262u: goto L_08925C78;
    case 263u: goto L_08925C84;
    case 264u: goto L_08925C90;
    case 265u: goto L_08925C9C;
    case 266u: goto L_08925CA8;
    case 267u: goto L_08925CC0;
    case 268u: goto L_08925CD4;
    case 269u: goto L_08925CE0;
    case 270u: goto L_08925CF4;
    case 271u: goto L_08925D00;
    case 272u: goto L_08925D24;
    case 273u: goto L_08925D2C;
    case 274u: goto L_08925D38;
    case 275u: goto L_08925D4C;
    case 276u: goto L_08925D60;
    case 277u: goto L_08925D6C;
    case 278u: goto L_08925D9C;
    case 279u: goto L_08925DA8;
    case 280u: goto L_08925DB8;
    case 281u: goto L_08925DCC;
    case 282u: goto L_08925DDC;
    case 283u: goto L_08925DE8;
    case 284u: goto L_08925DF8;
    case 285u: goto L_08925E04;
    case 286u: goto L_08925E0C;
    case 287u: goto L_08925E18;
    case 288u: goto L_08925E28;
    case 289u: goto L_08925E34;
    case 290u: goto L_08925E40;
    case 291u: goto L_08925E68;
    case 292u: goto L_08925E88;
    case 293u: goto L_08925E98;
    case 294u: goto L_08925EB8;
    case 295u: goto L_08925EC8;
    case 296u: goto L_08925ED0;
    case 297u: goto L_08925EE4;
    case 298u: goto L_08925EF4;
    case 299u: goto L_08925EFC;
    case 300u: goto L_08925F0C;
    case 301u: goto L_08925F18;
    case 302u: goto L_08925F1C;
    case 303u: goto L_08925F24;
    case 304u: goto L_08925F34;
    case 305u: goto L_08925F48;
    case 306u: goto L_08925F50;
    case 307u: goto L_08925F58;
    case 308u: goto L_08925F6C;
    case 309u: goto L_08925F74;
    case 310u: goto L_08925F84;
    case 311u: goto L_08925F98;
    case 312u: goto L_08925FA0;
    case 313u: goto L_08925FB4;
    case 314u: goto L_08925FC8;
    case 315u: goto L_08925FDC;
    case 316u: goto L_08925FF8;
    case 317u: goto L_08926004;
    case 318u: goto L_08926068;
    case 319u: goto L_08926070;
    case 320u: goto L_08926078;
    case 321u: goto L_08926088;
    case 322u: goto L_08926090;
    case 323u: goto L_08926098;
    case 324u: goto L_089260A0;
    case 325u: goto L_089260B0;
    case 326u: goto L_089260E0;
    case 327u: goto L_089260E8;
    case 328u: goto L_089260F4;
    case 329u: goto L_08926108;
    case 330u: goto L_08926144;
    case 331u: goto L_08926154;
    case 332u: goto L_08926170;
    case 333u: goto L_0892617C;
    case 334u: goto L_0892619C;
    case 335u: goto L_089261A8;
    case 336u: goto L_089261B4;
    case 337u: goto L_089261C4;
    case 338u: goto L_089261DC;
    case 339u: goto L_089261E4;
    case 340u: goto L_08926208;
    case 341u: goto L_08926210;
    case 342u: goto L_08926218;
    case 343u: goto L_0892621C;
    case 344u: goto L_0892623C;
    case 345u: goto L_08926278;
    case 346u: goto L_08926290;
    case 347u: goto L_0892629C;
    case 348u: goto L_089262A8;
    case 349u: goto L_089262B8;
    case 350u: goto L_089262D4;
    case 351u: goto L_089262E0;
    case 352u: goto L_08926300;
    case 353u: goto L_08926314;
    case 354u: goto L_0892631C;
    case 355u: goto L_0892633C;
    case 356u: goto L_08926348;
    case 357u: goto L_08926350;
    case 358u: goto L_08926358;
    case 359u: goto L_08926370;
    case 360u: goto L_08926378;
    case 361u: goto L_08926380;
    case 362u: goto L_08926388;
    case 363u: goto L_08926394;
    case 364u: goto L_0892639C;
    case 365u: goto L_089263A4;
    case 366u: goto L_089263A8;
    case 367u: goto L_089263C8;
    case 368u: goto L_08926404;
    case 369u: goto L_08926414;
    case 370u: goto L_08926430;
    case 371u: goto L_0892643C;
    case 372u: goto L_0892645C;
    case 373u: goto L_08926468;
    case 374u: goto L_08926474;
    case 375u: goto L_08926484;
    case 376u: goto L_0892649C;
    case 377u: goto L_089264A4;
    case 378u: goto L_089264C8;
    case 379u: goto L_089264D0;
    case 380u: goto L_089264D8;
    case 381u: goto L_089264DC;
    case 382u: goto L_089264FC;
    case 383u: goto L_08926538;
    case 384u: goto L_08926550;
    case 385u: goto L_0892655C;
    case 386u: goto L_08926568;
    case 387u: goto L_08926578;
    case 388u: goto L_08926594;
    case 389u: goto L_089265A0;
    case 390u: goto L_089265C0;
    case 391u: goto L_089265D4;
    case 392u: goto L_089265DC;
    case 393u: goto L_089265FC;
    case 394u: goto L_08926608;
    case 395u: goto L_08926610;
    case 396u: goto L_08926618;
    case 397u: goto L_08926624;
    case 398u: goto L_0892662C;
    case 399u: goto L_08926634;
    case 400u: goto L_0892663C;
    case 401u: goto L_08926648;
    case 402u: goto L_08926650;
    case 403u: goto L_08926658;
    case 404u: goto L_0892665C;
    case 405u: goto L_0892667C;
    case 406u: goto L_08926690;
    case 407u: goto L_089266A4;
    case 408u: goto L_089266B0;
    case 409u: goto L_089266C0;
    case 410u: goto L_089266D0;
    case 411u: goto L_089266D8;
    case 412u: goto L_089266EC;
    case 413u: goto L_08926724;
    case 414u: goto L_08926738;
    case 415u: goto L_08926744;
    case 416u: goto L_089267B0;
    case 417u: goto L_089267B8;
    case 418u: goto L_089267C0;
    case 419u: goto L_089267E0;
    case 420u: goto L_08926818;
    case 421u: goto L_0892682C;
    case 422u: goto L_08926838;
    case 423u: goto L_089268A8;
    case 424u: goto L_089268B0;
    case 425u: goto L_089268B8;
    case 426u: goto L_089268D8;
    case 427u: goto L_08926908;
    case 428u: goto L_08926910;
    case 429u: goto L_08926924;
    case 430u: goto L_08926958;
    case 431u: goto L_0892696C;
    case 432u: goto L_08926988;
    case 433u: goto L_08926990;
    case 434u: goto L_0892699C;
    case 435u: goto L_089269BC;
    case 436u: goto L_089269C8;
    case 437u: goto L_089269D4;
    case 438u: goto L_089269E0;
    case 439u: goto L_089269F0;
    case 440u: goto L_08926A04;
    case 441u: goto L_08926A0C;
    case 442u: goto L_08926A14;
    case 443u: goto L_08926A18;
    case 444u: goto L_08926A30;
    case 445u: goto L_08926A64;
    case 446u: goto L_08926A80;
    case 447u: goto L_08926A88;
    case 448u: goto L_08926A94;
    case 449u: goto L_08926AB4;
    case 450u: goto L_08926AC0;
    case 451u: goto L_08926ACC;
    case 452u: goto L_08926AD8;
    case 453u: goto L_08926AE8;
    case 454u: goto L_08926AFC;
    case 455u: goto L_08926B04;
    case 456u: goto L_08926B0C;
    case 457u: goto L_08926B10;
    case 458u: goto L_08926B28;
    case 459u: goto L_08926B64;
    case 460u: goto L_08926B78;
    case 461u: goto L_08926B90;
    case 462u: goto L_08926B9C;
    case 463u: goto L_08926BA8;
    case 464u: goto L_08926BB8;
    case 465u: goto L_08926BD0;
    case 466u: goto L_08926BE8;
    case 467u: goto L_08926BF0;
    case 468u: goto L_08926C10;
    case 469u: goto L_08926C1C;
    case 470u: goto L_08926C24;
    case 471u: goto L_08926C2C;
    case 472u: goto L_08926C34;
    case 473u: goto L_08926C3C;
    case 474u: goto L_08926C40;
    case 475u: goto L_08926C60;
    case 476u: goto L_08926C9C;
    case 477u: goto L_08926CB4;
    case 478u: goto L_08926CC0;
    case 479u: goto L_08926CCC;
    case 480u: goto L_08926CDC;
    case 481u: goto L_08926CF8;
    case 482u: goto L_08926D04;
    case 483u: goto L_08926D24;
    case 484u: goto L_08926D38;
    case 485u: goto L_08926D40;
    case 486u: goto L_08926D60;
    case 487u: goto L_08926D6C;
    case 488u: goto L_08926D74;
    case 489u: goto L_08926D7C;
    case 490u: goto L_08926D84;
    case 491u: goto L_08926D8C;
    case 492u: goto L_08926D90;
    case 493u: goto L_08926DB0;
    case 494u: goto L_08926DE0;
    case 495u: goto L_08926DE8;
    case 496u: goto L_08926DFC;
    case 497u: goto L_08926E2C;
    case 498u: goto L_08926E34;
    case 499u: goto L_08926E40;
    case 500u: goto L_08926E54;
    case 501u: goto L_08926E84;
    case 502u: goto L_08926E8C;
    case 503u: goto L_08926EA0;
    case 504u: goto L_08926ED0;
    case 505u: goto L_08926ED8;
    case 506u: goto L_08926EE4;
    case 507u: goto L_08926EF8;
    case 508u: goto L_08926F18;
    case 509u: goto L_08926F30;
    case 510u: goto L_08926F38;
    case 511u: goto L_08926F44;
    case 512u: goto L_08926F5C;
    case 513u: goto L_08926F64;
    case 514u: goto L_08926F6C;
    case 515u: goto L_08926F74;
    case 516u: goto L_08926F7C;
    case 517u: goto L_08926F84;
    case 518u: goto L_08926F98;
    case 519u: goto L_08926FE4;
    case 520u: goto L_08926FF0;
    case 521u: goto L_08927004;
    case 522u: goto L_08927014;
    case 523u: goto L_089270A4;
    case 524u: goto L_089270E8;
    case 525u: goto L_089270FC;
    case 526u: goto L_08927114;
    case 527u: goto L_0892711C;
    case 528u: goto L_0892714C;
    case 529u: goto L_0892716C;
    case 530u: goto L_08927174;
    case 531u: goto L_0892718C;
    case 532u: goto L_089271AC;
    case 533u: goto L_089271B4;
    case 534u: goto L_089271E4;
    case 535u: goto L_08927210;
    case 536u: goto L_08927218;
    case 537u: goto L_0892722C;
    case 538u: goto L_08927284;
    case 539u: goto L_089272C8;
    case 540u: goto L_089272F8;
    case 541u: goto L_08927304;
    case 542u: goto L_08927334;
    case 543u: goto L_08927338;
    case 544u: goto L_08927344;
    case 545u: goto L_08927348;
    case 546u: goto L_08927354;
    case 547u: goto L_08927360;
    case 548u: goto L_08927394;
    case 549u: goto L_089273A0;
    case 550u: goto L_089273CC;
    case 551u: goto L_089273DC;
    case 552u: goto L_089273EC;
    case 553u: goto L_089273F0;
    case 554u: goto L_08927400;
    case 555u: goto L_08927410;
    case 556u: goto L_08927414;
    case 557u: goto L_0892741C;
    case 558u: goto L_089274C8;
    case 559u: goto L_089274E0;
    case 560u: goto L_089274F8;
    case 561u: goto L_08927510;
    case 562u: goto L_08927514;
    case 563u: goto L_0892751C;
    case 564u: goto L_0892752C;
    case 565u: goto L_0892753C;
    case 566u: goto L_08927554;
    case 567u: goto L_0892756C;
    case 568u: goto L_0892759C;
    case 569u: goto L_089275E0;
    case 570u: goto L_08927600;
    case 571u: goto L_08927618;
    case 572u: goto L_08927624;
    case 573u: goto L_08927640;
    case 574u: goto L_0892764C;
    case 575u: goto L_08927668;
    case 576u: goto L_08927688;
    case 577u: goto L_08927694;
    case 578u: goto L_0892769C;
    case 579u: goto L_089276BC;
    case 580u: goto L_089276DC;
    case 581u: goto L_089276E8;
    case 582u: goto L_089276F8;
    case 583u: goto L_0892771C;
    case 584u: goto L_08927724;
    case 585u: goto L_08927730;
    case 586u: goto L_08927738;
    case 587u: goto L_0892773C;
    case 588u: goto L_08927744;
    case 589u: goto L_0892776C;
    case 590u: goto L_08927774;
    case 591u: goto L_08927780;
    case 592u: goto L_08927788;
    case 593u: goto L_08927790;
    case 594u: goto L_0892779C;
    case 595u: goto L_089277A4;
    case 596u: goto L_089277B0;
    case 597u: goto L_089277C4;
    case 598u: goto L_089277D4;
    case 599u: goto L_089277D8;
    case 600u: goto L_089277F8;
    case 601u: goto L_08927810;
    case 602u: goto L_0892782C;
    case 603u: goto L_08927844;
    case 604u: goto L_08927850;
    case 605u: goto L_0892785C;
    case 606u: goto L_08927874;
    case 607u: goto L_0892787C;
    case 608u: goto L_089278BC;
    case 609u: goto L_089278D4;
    case 610u: goto L_089278E8;
    case 611u: goto L_089278F4;
    case 612u: goto L_08927908;
    case 613u: goto L_08927910;
    case 614u: goto L_08927958;
    case 615u: goto L_0892796C;
    case 616u: goto L_0892798C;
    case 617u: goto L_0892799C;
    case 618u: goto L_089279A4;
    case 619u: goto L_089279B4;
    case 620u: goto L_089279C0;
    case 621u: goto L_089279D0;
    case 622u: goto L_089279D8;
    case 623u: goto L_089279E4;
    case 624u: goto L_089279FC;
    case 625u: goto L_08927A04;
    case 626u: goto L_08927A54;
    case 627u: goto L_08927A64;
    case 628u: goto L_08927A74;
    case 629u: goto L_08927A7C;
    case 630u: goto L_08927A88;
    case 631u: goto L_08927A90;
    case 632u: goto L_08927A9C;
    case 633u: goto L_08927AAC;
    case 634u: goto L_08927ABC;
    case 635u: goto L_08927ACC;
    case 636u: goto L_08927AD4;
    case 637u: goto L_08927AE8;
    case 638u: goto L_08927B00;
    case 639u: goto L_08927B0C;
    case 640u: goto L_08927B20;
    case 641u: goto L_08927B28;
    case 642u: goto L_08927B34;
    case 643u: goto L_08927B3C;
    case 644u: goto L_08927B60;
    case 645u: goto L_08927B64;
    case 646u: goto L_08927B78;
    case 647u: goto L_08927B8C;
    case 648u: goto L_08927BB4;
    case 649u: goto L_08927BDC;
    case 650u: goto L_08927BF8;
    case 651u: goto L_08927C14;
    case 652u: goto L_08927C24;
    case 653u: goto L_08927C3C;
    case 654u: goto L_08927C58;
    case 655u: goto L_08927C68;
    case 656u: goto L_08927C70;
    case 657u: goto L_08927C80;
    case 658u: goto L_08927CA4;
    case 659u: goto L_08927CC4;
    case 660u: goto L_08927CC8;
    case 661u: goto L_08927CFC;
    case 662u: goto L_08927D24;
    case 663u: goto L_08927D78;
    case 664u: goto L_08927D80;
    case 665u: goto L_08927DC8;
    case 666u: goto L_08927DD4;
    case 667u: goto L_08927DE4;
    case 668u: goto L_08927DF4;
    case 669u: goto L_08927E00;
    case 670u: goto L_08927E14;
    case 671u: goto L_08927E18;
    case 672u: goto L_08927E28;
    case 673u: goto L_08927E40;
    case 674u: goto L_08927E64;
    case 675u: goto L_08927E70;
    case 676u: goto L_08927E84;
    case 677u: goto L_08927E88;
    case 678u: goto L_08927E94;
    case 679u: goto L_08927EA0;
    case 680u: goto L_08927EB0;
    case 681u: goto L_08927EC4;
    case 682u: goto L_08927EE0;
    case 683u: goto L_08927EEC;
    case 684u: goto L_08927EF4;
    case 685u: goto L_08927F10;
    case 686u: goto L_08927F40;
    case 687u: goto L_08927F6C;
    case 688u: goto L_08927F78;
    case 689u: goto L_08927F8C;
    case 690u: goto L_08927FA4;
    case 691u: goto L_08927FD8;
    case 692u: goto L_08927FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08924000:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] >> 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(464))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089240C0;
L_089240C0:
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
L_089240E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[6] = (ctx.gpr[9] | ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[17] & 8192u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08924194;
      }
      goto L_08924184;
    }
L_08924184:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08924194u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 297u, 0x08A4A880u>(ctx, &aot_mem) && ctx.pc == 0x08924194u) goto L_08924194;
    return;
L_08924194:
    ctx.gpr[4] = (ctx.gpr[17] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089241B0;
      }
      goto L_089241A0;
    }
L_089241A0:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(468));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089241B0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 224u, 0x08922538u>(ctx, &aot_mem) && ctx.pc == 0x089241B0u) goto L_089241B0;
    return;
L_089241B0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 128u);
    goto L_089241B8;
L_089241B8:
    ctx.gpr[4] = (ctx.gpr[21] << (ctx.gpr[22] & 31u));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089241DC;
      }
      goto L_089241C8;
    }
L_089241C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089241DCu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 150u, 0x08921688u>(ctx, &aot_mem) && ctx.pc == 0x089241DCu) goto L_089241DC;
    return;
L_089241DC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089241B8;
      }
      goto L_089241EC;
    }
L_089241EC:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892420C;
      }
      goto L_089241F8;
    }
L_089241F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0892420C;
L_0892420C:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924280;
      }
      goto L_08924218;
    }
L_08924218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924280;
L_08924280:
    ctx.gpr[4] = (ctx.gpr[17] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089242F4;
      }
      goto L_0892428C;
    }
L_0892428C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089242F4;
L_089242F4:
    ctx.gpr[4] = (ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924368;
      }
      goto L_08924300;
    }
L_08924300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924368;
L_08924368:
    ctx.gpr[4] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924398;
      }
      goto L_08924374;
    }
L_08924374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924398;
L_08924398:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089243BC;
      }
      goto L_089243A8;
    }
L_089243A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089243BC;
L_089243BC:
    ctx.gpr[4] = (ctx.gpr[17] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089243DC;
      }
      goto L_089243C8;
    }
L_089243C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089243DC;
L_089243DC:
    ctx.gpr[4] = (ctx.gpr[17] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924450;
      }
      goto L_089243E8;
    }
L_089243E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924450;
L_08924450:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924538;
      }
      goto L_0892445C;
    }
L_0892445C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] & 64u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] & 128u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (ctx.gpr[4] & 63u);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[6] = (ctx.gpr[4] & 512u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] & 256u);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924538;
L_08924538:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892456C;
      }
      goto L_08924548;
    }
L_08924548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892456C;
      }
      goto L_08924568;
    }
L_08924568:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0892456C;
L_0892456C:
    ctx.gpr[4] = (ctx.gpr[17] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245E0;
      }
      goto L_08924578;
    }
L_08924578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089245E0;
L_089245E0:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924604;
      }
      goto L_089245F0;
    }
L_089245F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924604;
L_08924604:
    ctx.gpr[4] = (ctx.gpr[17] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924684;
      }
      goto L_08924610;
    }
L_08924610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892465Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892465Cu) goto L_0892465C;
    return;
L_0892465C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924684;
L_08924684:
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089246A8;
      }
      goto L_08924694;
    }
L_08924694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089246A8;
L_089246A8:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924734;
      }
      goto L_089246B8;
    }
L_089246B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924734;
L_08924734:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892475C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(209));
    ctx.gpr[11] = (46470u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[11] = (ctx.gpr[11] | 14269u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(209)));
    ctx.gpr[11] = (47747u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(232));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(248));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
    ctx.gpr[11] = (ctx.gpr[11] | 4719u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[17] + static_cast<std::uint32_t>(280));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089247F0;
      }
      goto L_089247EC;
    }
L_089247EC:
    ctx.gpr[19] = (0u | 1u);
    goto L_089247F0;
L_089247F0:
    ctx.gpr[9] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[20]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    if (ctx.gpr[9] == ctx.gpr[10]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08924810;
    }
    goto L_08924808;
L_08924808:
    ctx.gpr[19] = (ctx.gpr[19] | 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08924810;
L_08924810:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08924848;
      }
      goto L_08924828;
    }
L_08924828:
    ctx.gpr[10] = (13702u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 14269u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_0892484C;
      }
      goto L_08924844;
    }
L_08924844:
    ctx.gpr[9] = (0u | 1u);
    goto L_08924848;
L_08924848:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_0892484C;
L_0892484C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892485C;
      }
      goto L_08924854;
    }
L_08924854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 4u);
      if (branch_taken) {
          goto L_08924864;
      }
      goto L_0892485C;
    }
L_0892485C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924864;
L_08924864:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089248A0;
      }
      goto L_08924880;
    }
L_08924880:
    ctx.gpr[9] = (14979u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089248A4;
      }
      goto L_0892489C;
    }
L_0892489C:
    ctx.gpr[5] = (0u | 1u);
    goto L_089248A0;
L_089248A0:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089248A4;
L_089248A4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_089248AC;
    }
L_089248AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 8u);
      if (branch_taken) {
          goto L_089248BC;
      }
      goto L_089248B4;
    }
L_089248B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089248BC;
L_089248BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(264)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089248F8;
      }
      goto L_089248D8;
    }
L_089248D8:
    ctx.gpr[6] = (13702u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089248FC;
      }
      goto L_089248F4;
    }
L_089248F4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089248F8;
L_089248F8:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089248FC;
L_089248FC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892490C;
      }
      goto L_08924904;
    }
L_08924904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 16u);
      if (branch_taken) {
          goto L_08924914;
      }
      goto L_0892490C;
    }
L_0892490C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924914;
L_08924914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08924950;
      }
      goto L_08924930;
    }
L_08924930:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08924954;
      }
      goto L_0892494C;
    }
L_0892494C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08924950;
L_08924950:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08924954;
L_08924954:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924964;
      }
      goto L_0892495C;
    }
L_0892495C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 32u);
      if (branch_taken) {
          goto L_0892496C;
      }
      goto L_08924964;
    }
L_08924964:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892496C;
L_0892496C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924D50;
      }
      goto L_08924978;
    }
L_08924978:
    ctx.gpr[31] = (0x08924980u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08924980u) goto L_08924980;
    return;
L_08924980:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0892498Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 787u, 0x0889FB40u>(ctx, &aot_mem) && ctx.pc == 0x0892498Cu) goto L_0892498C;
    return;
L_0892498C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924D50;
      }
      goto L_08924994;
    }
L_08924994:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089249C8;
      }
      goto L_089249C4;
    }
L_089249C4:
    ctx.gpr[19] = (ctx.gpr[19] | 64u);
    goto L_089249C8;
L_089249C8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08924A28;
      }
      goto L_08924A08;
    }
L_08924A08:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08924A2C;
      }
      goto L_08924A24;
    }
L_08924A24:
    ctx.gpr[6] = (0u | 1u);
    goto L_08924A28;
L_08924A28:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08924A2C;
L_08924A2C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924A3C;
      }
      goto L_08924A34;
    }
L_08924A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 128u);
      if (branch_taken) {
          goto L_08924A44;
      }
      goto L_08924A3C;
    }
L_08924A3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924A44;
L_08924A44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08924A80;
      }
      goto L_08924A60;
    }
L_08924A60:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08924A84;
      }
      goto L_08924A7C;
    }
L_08924A7C:
    ctx.gpr[6] = (0u | 1u);
    goto L_08924A80;
L_08924A80:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08924A84;
L_08924A84:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924A94;
      }
      goto L_08924A8C;
    }
L_08924A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 256u);
      if (branch_taken) {
          goto L_08924A9C;
      }
      goto L_08924A94;
    }
L_08924A94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924A9C;
L_08924A9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08924AD8;
      }
      goto L_08924AB8;
    }
L_08924AB8:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08924ADC;
      }
      goto L_08924AD4;
    }
L_08924AD4:
    ctx.gpr[6] = (0u | 1u);
    goto L_08924AD8;
L_08924AD8:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08924ADC;
L_08924ADC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924AEC;
      }
      goto L_08924AE4;
    }
L_08924AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 512u);
      if (branch_taken) {
          goto L_08924AF4;
      }
      goto L_08924AEC;
    }
L_08924AEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924AF4;
L_08924AF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08924B7C;
      }
      goto L_08924B5C;
    }
L_08924B5C:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08924B80;
      }
      goto L_08924B78;
    }
L_08924B78:
    ctx.gpr[4] = (0u | 1u);
    goto L_08924B7C;
L_08924B7C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08924B80;
L_08924B80:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924B90;
      }
      goto L_08924B88;
    }
L_08924B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 1024u);
      if (branch_taken) {
          goto L_08924B98;
      }
      goto L_08924B90;
    }
L_08924B90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924B98;
L_08924B98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08924BD4;
      }
      goto L_08924BB4;
    }
L_08924BB4:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08924BD8;
      }
      goto L_08924BD0;
    }
L_08924BD0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08924BD4;
L_08924BD4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08924BD8;
L_08924BD8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924BE8;
      }
      goto L_08924BE0;
    }
L_08924BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 2048u);
      if (branch_taken) {
          goto L_08924BF0;
      }
      goto L_08924BE8;
    }
L_08924BE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924BF0;
L_08924BF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08924C2C;
      }
      goto L_08924C0C;
    }
L_08924C0C:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08924C30;
      }
      goto L_08924C28;
    }
L_08924C28:
    ctx.gpr[4] = (0u | 1u);
    goto L_08924C2C;
L_08924C2C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08924C30;
L_08924C30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924C40;
      }
      goto L_08924C38;
    }
L_08924C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 4096u);
      if (branch_taken) {
          goto L_08924C48;
      }
      goto L_08924C40;
    }
L_08924C40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924C48;
L_08924C48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08924CAC;
      }
      goto L_08924C8C;
    }
L_08924C8C:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08924CB0;
      }
      goto L_08924CA8;
    }
L_08924CA8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08924CAC;
L_08924CAC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08924CB0;
L_08924CB0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924CC0;
      }
      goto L_08924CB8;
    }
L_08924CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 8192u);
      if (branch_taken) {
          goto L_08924CC8;
      }
      goto L_08924CC0;
    }
L_08924CC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924CC8;
L_08924CC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924CE0;
      }
      goto L_08924CD8;
    }
L_08924CD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 16384u);
      if (branch_taken) {
          goto L_08924CE8;
      }
      goto L_08924CE0;
    }
L_08924CE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924CE8;
L_08924CE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924D00;
      }
      goto L_08924CF8;
    }
L_08924CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 32768u);
      if (branch_taken) {
          goto L_08924D08;
      }
      goto L_08924D00;
    }
L_08924D00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924D08;
L_08924D08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924D24;
      }
      goto L_08924D18;
    }
L_08924D18:
    ctx.gpr[4] = (1u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08924D2C;
      }
      goto L_08924D24;
    }
L_08924D24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924D2C;
L_08924D2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(31)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924D48;
      }
      goto L_08924D3C;
    }
L_08924D3C:
    ctx.gpr[4] = (2u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08924D50;
      }
      goto L_08924D48;
    }
L_08924D48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924D50;
L_08924D50:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924D80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08924DC8;
      }
      goto L_08924DA8;
    }
L_08924DA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924DC8;
      }
      goto L_08924DB8;
    }
L_08924DB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924DF4;
      }
      goto L_08924DC8;
    }
L_08924DC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0892524C;
      }
      goto L_08924DDC;
    }
L_08924DDC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20248)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925378;
      }
      goto L_08924DFC;
    }
L_08924DFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (48460u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08924EF0;
      }
      goto L_08924E60;
    }
L_08924E60:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08924E7Cu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08924E7Cu) goto L_08924E7C;
    return;
L_08924E7C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[5] = (15733u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 49807u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08924EA4u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08924EA4u) goto L_08924EA4;
    return;
L_08924EA4:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08924EE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08924EE0u) goto L_08924EE0;
    return;
L_08924EE0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924E60;
      }
      goto L_08924EF0;
    }
L_08924EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925378;
      }
      goto L_08924EF8;
    }
L_08924EF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (48460u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08924FE8;
      }
      goto L_08924F58;
    }
L_08924F58:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.gpr[31] = (0x08924F74u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08924F74u) goto L_08924F74;
    return;
L_08924F74:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[5] = (15733u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 49807u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08924F9Cu);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08924F9Cu) goto L_08924F9C;
    return;
L_08924F9C:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08924FD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08924FD8u) goto L_08924FD8;
    return;
L_08924FD8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924F58;
      }
      goto L_08924FE8;
    }
L_08924FE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08925378;
      }
      goto L_08924FF0;
    }
L_08924FF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (48460u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089250DC;
      }
      goto L_08925058;
    }
L_08925058:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x08925074u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08925074u) goto L_08925074;
    return;
L_08925074:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08925090u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08925090u) goto L_08925090;
    return;
L_08925090:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089250CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089250CCu) goto L_089250CC;
    return;
L_089250CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925058;
      }
      goto L_089250DC;
    }
L_089250DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925378;
      }
      goto L_089250E4;
    }
L_089250E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925244;
      }
      goto L_089250F8;
    }
L_089250F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16257u << 16u);
      if (branch_taken) {
          goto L_08925154;
      }
      goto L_08925114;
    }
L_08925114:
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08925128u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08925128u) goto L_08925128;
    return;
L_08925128:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08925158;
    }
    goto L_0892514C;
L_0892514C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925378;
      }
      goto L_08925154;
    }
L_08925154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08925158;
L_08925158:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 170u);
    ctx.gpr[5] = (0u | 165u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 140u);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08925244;
      }
      goto L_089251B8;
    }
L_089251B8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15713u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x089251F8u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089251F8u) goto L_089251F8;
    return;
L_089251F8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08925234u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08925234u) goto L_08925234;
    return;
L_08925234:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089251B8;
      }
      goto L_08925244;
    }
L_08925244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925378;
      }
      goto L_0892524C;
    }
L_0892524C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08925374;
      }
      goto L_08925270;
    }
L_08925270:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16000u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 48u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(258), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(259), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892536C;
      }
      goto L_089252C4;
    }
L_089252C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.gpr[31] = (0x08925304u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08925304u) goto L_08925304;
    return;
L_08925304:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x08925338u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08925338u) goto L_08925338;
    return;
L_08925338:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (0u | 39u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0892536Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x0892536Cu) goto L_0892536C;
    return;
L_0892536C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925378;
      }
      goto L_08925374;
    }
L_08925374:
    ctx.gpr[2] = (0u | 1u);
    goto L_08925378;
L_08925378:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925398:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27444)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27440)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27468)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[3] = (2225u << 16u);
    ctx.gpr[13] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27448), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[11] = (ctx.gpr[3] + static_cast<std::uint32_t>(20220));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-7201), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-7201)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(6008));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[8] = (16672u << 16u);
    ctx.gpr[9] = (15744u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(27456), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27452), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(27460), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(27472), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925464:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089254AC;
      }
      goto L_08925484;
    }
L_08925484:
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(96), ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925484;
      }
      goto L_089254AC;
    }
L_089254AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089254B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (15395u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_089254FC;
    }
    goto L_089254FC;
L_089254FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08925524;
      }
      goto L_08925518;
    }
L_08925518:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[15];
    goto L_08925524;
L_08925524:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7))))));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[11] = (15872u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7))))));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[7] = (16544u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[5])));
    ctx.fpr[6] = std::bit_cast<float>(0u);
    ctx.fpr[15] = ctx.fpr[18] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[1])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[5] - ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[3])));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[0];
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6))))));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(7))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x089256FCu);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 154u, 0x0891CB50u>(ctx, &aot_mem) && ctx.pc == 0x089256FCu) goto L_089256FC;
    return;
L_089256FC:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_08925740;
      }
      goto L_08925734;
    }
L_08925734:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    goto L_08925740;
L_08925740:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892576C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27484)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27480)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27488), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(27492), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27500), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089257E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089257FCu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08925840;
L_089257FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[31] = (0x08925808u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08925840;
L_08925808:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7352)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925840:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925898;
      }
      goto L_08925850;
    }
L_08925850:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20432)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925870;
    }
L_08925870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925878;
    }
L_08925878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925880;
    }
L_08925880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925888;
    }
L_08925888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925890;
    }
L_08925890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925898;
    }
L_08925898:
    ctx.gpr[2] = (0u | 2u);
    goto L_0892589C;
L_0892589C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089258A4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0892592C;
      }
      goto L_089258B8;
    }
L_089258B8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20576)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089258D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0892592C;
      }
      goto L_089258F0;
    }
L_089258F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0892592C;
      }
      goto L_08925910;
    }
L_08925910:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0892592C;
      }
      goto L_0892592C;
    }
L_0892592C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925934:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_08925954;
      }
      goto L_08925944;
    }
L_08925944:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08925954;
      }
      goto L_0892594C;
    }
L_0892594C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892595C;
      }
      goto L_08925954;
    }
L_08925954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08925960;
      }
      goto L_0892595C;
    }
L_0892595C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08925960;
L_08925960:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27512)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089259B8;
      }
      goto L_08925998;
    }
L_08925998:
    ctx.gpr[31] = (0x089259A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 321u, 0x08865778u>(ctx, &aot_mem) && ctx.pc == 0x089259A0u) goto L_089259A0;
    return;
L_089259A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089259ACu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 605u, 0x08942C48u>(ctx, &aot_mem) && ctx.pc == 0x089259ACu) goto L_089259AC;
    return;
L_089259AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27512)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_089259B8;
L_089259B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089259D4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089259E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925A08u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08925A08u) goto L_08925A08;
    return;
L_08925A08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08925A24;
      }
      goto L_08925A14;
    }
L_08925A14:
    ctx.gpr[31] = (0x08925A1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 604u, 0x08942C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08925A1Cu) goto L_08925A1C;
    return;
L_08925A1C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08925A24;
L_08925A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27512)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
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
L_08925A48:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925A50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (596u << 16u);
    ctx.gpr[6] = (2194u << 16u);
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[8] = (2194u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3331));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22996));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22888));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925A80u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(23112));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 220u, 0x08AA5110u>(ctx, &aot_mem) && ctx.pc == 0x08925A80u) goto L_08925A80;
    return;
L_08925A80:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27512), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08925A94;
      }
      goto L_08925A8C;
    }
L_08925A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925A98;
      }
      goto L_08925A94;
    }
L_08925A94:
    ctx.gpr[2] = (0u | 1u);
    goto L_08925A98;
L_08925A98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (37u << 16u);
    ctx.gpr[6] = (2194u << 16u);
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[8] = (2194u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16160));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28904));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28948));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925AD8u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(28924));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 202u, 0x08AC9030u>(ctx, &aot_mem) && ctx.pc == 0x08925AD8u) goto L_08925AD8;
    return;
L_08925AD8:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (37u << 16u);
    ctx.gpr[6] = (2194u << 16u);
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[8] = (2194u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27560), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16162));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29044));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29100));
    ctx.gpr[31] = (0x08925B08u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(29068));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 180u, 0x08A5D468u>(ctx, &aot_mem) && ctx.pc == 0x08925B08u) goto L_08925B08;
    return;
L_08925B08:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27564), ctx.gpr[2]);
    ctx.gpr[5] = (37u << 16u);
    ctx.gpr[6] = (2194u << 16u);
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[8] = (2194u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16161));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28956));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29036));
    ctx.gpr[31] = (0x08925B38u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(29004));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 220u, 0x08AA5110u>(ctx, &aot_mem) && ctx.pc == 0x08925B38u) goto L_08925B38;
    return;
L_08925B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27560)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27568), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(18768));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925B90u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 303u, 0x08B01354u>(ctx, &aot_mem) && ctx.pc == 0x08925B90u) goto L_08925B90;
    return;
L_08925B90:
    ctx.gpr[4] = (19646u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22480));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08925BBCu);
    ctx.gpr[5] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 303u, 0x08B01354u>(ctx, &aot_mem) && ctx.pc == 0x08925BBCu) goto L_08925BBC;
    return;
L_08925BBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08925BD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28152));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925BD0u) goto L_08925BD0;
    return;
L_08925BD0:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24752));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925BDCu) goto L_08925BDC;
    return;
L_08925BDC:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24840));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925BE8u) goto L_08925BE8;
    return;
L_08925BE8:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25148));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925BF4u) goto L_08925BF4;
    return;
L_08925BF4:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25544));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C00u) goto L_08925C00;
    return;
L_08925C00:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25852));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C0Cu) goto L_08925C0C;
    return;
L_08925C0C:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26236));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C18u) goto L_08925C18;
    return;
L_08925C18:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26348));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C24u) goto L_08925C24;
    return;
L_08925C24:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26592));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C30u) goto L_08925C30;
    return;
L_08925C30:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26840));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C3Cu) goto L_08925C3C;
    return;
L_08925C3C:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26916));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C48u) goto L_08925C48;
    return;
L_08925C48:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27184));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C54u) goto L_08925C54;
    return;
L_08925C54:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27432));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C60u) goto L_08925C60;
    return;
L_08925C60:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27744));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C6Cu) goto L_08925C6C;
    return;
L_08925C6C:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28080));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C78u) goto L_08925C78;
    return;
L_08925C78:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28156));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C84u) goto L_08925C84;
    return;
L_08925C84:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28244));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C90u) goto L_08925C90;
    return;
L_08925C90:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28320));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925C9Cu) goto L_08925C9C;
    return;
L_08925C9C:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925CA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28408));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B184u>(ctx, &aot_mem) && ctx.pc == 0x08925CA8u) goto L_08925CA8;
    return;
L_08925CA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925CD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18768));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 309u, 0x08B013F4u>(ctx, &aot_mem) && ctx.pc == 0x08925CD4u) goto L_08925CD4;
    return;
L_08925CD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925CE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925CF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22480));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 309u, 0x08B013F4u>(ctx, &aot_mem) && ctx.pc == 0x08925CF4u) goto L_08925CF4;
    return;
L_08925CF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925D00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(18768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08925D38;
      }
      goto L_08925D24;
    }
L_08925D24:
    ctx.gpr[31] = (0x08925D2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08925D2Cu) goto L_08925D2C;
    return;
L_08925D2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08925D24;
      }
      goto L_08925D38;
    }
L_08925D38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925D60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22480));
    goto L_08925D6C;
L_08925D60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925D6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08925E40;
      }
      goto L_08925D9C;
    }
L_08925D9C:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_08925DA8;
L_08925DA8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925E34;
      }
      goto L_08925DB8;
    }
L_08925DB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08925DDC;
      }
      goto L_08925DCC;
    }
L_08925DCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08925DDC;
L_08925DDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08925E04;
      }
      goto L_08925DE8;
    }
L_08925DE8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925E04;
      }
      goto L_08925DF8;
    }
L_08925DF8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08925E04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08925E04u) goto L_08925E04;
    return;
L_08925E04:
    ctx.gpr[31] = (0x08925E0Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 321u, 0x08AAA164u>(ctx, &aot_mem) && ctx.pc == 0x08925E0Cu) goto L_08925E0C;
    return;
L_08925E0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08925E34;
      }
      goto L_08925E18;
    }
L_08925E18:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925E34;
      }
      goto L_08925E28;
    }
L_08925E28:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08925E34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08925E34u) goto L_08925E34;
    return;
L_08925E34:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08925DA8;
      }
      goto L_08925E40;
    }
L_08925E40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925E88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18768));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 313u, 0x08B01444u>(ctx, &aot_mem) && ctx.pc == 0x08925E88u) goto L_08925E88;
    return;
L_08925E88:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925E98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925EB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22480));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 313u, 0x08B01444u>(ctx, &aot_mem) && ctx.pc == 0x08925EB8u) goto L_08925EB8;
    return;
L_08925EB8:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925EC8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925F0C;
      }
      goto L_08925ED0;
    }
L_08925ED0:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8152)));
    goto L_08925EE4;
L_08925EE4:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08925EF4;
    }
    goto L_08925EF4;
L_08925EF4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08925F18;
      }
      goto L_08925EFC;
    }
L_08925EFC:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08925EE4;
      }
      goto L_08925F0C;
    }
L_08925F0C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08925F1C;
      }
      goto L_08925F18;
    }
L_08925F18:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08925F1C;
L_08925F1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925F50;
      }
      goto L_08925F34;
    }
L_08925F34:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925F58;
      }
      goto L_08925F48;
    }
L_08925F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925F6C;
      }
      goto L_08925F50;
    }
L_08925F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925F6C;
      }
      goto L_08925F58;
    }
L_08925F58:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08925F6C;
L_08925F6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F74:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F84:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F98:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925FA0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27564)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925FB4:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27568)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925FC8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27568)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08926070;
      }
      goto L_08925FF8;
    }
L_08925FF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926004u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08927218;
L_08926004:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31852), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926078;
      }
      goto L_08926068;
    }
L_08926068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926088;
      }
      goto L_08926070;
    }
L_08926070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089260A0;
      }
      goto L_08926078;
    }
L_08926078:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926098;
      }
      goto L_08926088;
    }
L_08926088:
    ctx.gpr[31] = (0x08926090u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08926090u) goto L_08926090;
    return;
L_08926090:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08926098;
      }
      goto L_08926098;
    }
L_08926098:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089260A0;
L_089260A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089260B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089260F4;
      }
      goto L_089260E0;
    }
L_089260E0:
    ctx.gpr[31] = (0x089260E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08925FC8;
L_089260E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089260F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089271B4;
L_089260F4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    ctx.gpr[19] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926218;
      }
      goto L_08926144;
    }
L_08926144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926154u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08925F98;
L_08926154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6968)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08926210;
      }
      goto L_08926170;
    }
L_08926170:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926210;
      }
      goto L_0892617C;
    }
L_0892617C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926210;
      }
      goto L_0892619C;
    }
L_0892619C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089261A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x089261A8u) goto L_089261A8;
    return;
L_089261A8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089261B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x089261B4u) goto L_089261B4;
    return;
L_089261B4:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089261C4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08927284;
L_089261C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08926210;
      }
      goto L_089261DC;
    }
L_089261DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08926208;
      }
      goto L_089261E4;
    }
L_089261E4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31852)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926210;
      }
      goto L_08926208;
    }
L_08926208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892621C;
      }
      goto L_08926210;
    }
L_08926210:
    ctx.gpr[31] = (0x08926218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926218u) goto L_08926218;
    return;
L_08926218:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0892621C;
L_0892621C:
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
L_0892623C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089263A4;
      }
      goto L_08926278;
    }
L_08926278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926290u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926290u) goto L_08926290;
    return;
L_08926290:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x0892629Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F98;
L_0892629C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089262A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x089262A8u) goto L_089262A8;
    return;
L_089262A8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089262B8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08927284;
L_089262B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6968)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0892633C;
      }
      goto L_089262D4;
    }
L_089262D4:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_0892633C;
      }
      goto L_089262E0;
    }
L_089262E0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892633C;
      }
      goto L_08926300;
    }
L_08926300:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_0892633C;
      }
      goto L_08926314;
    }
L_08926314:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08926350;
      }
      goto L_0892631C;
    }
L_0892631C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926350;
      }
      goto L_0892633C;
    }
L_0892633C:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926358;
      }
      goto L_08926348;
    }
L_08926348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926388;
      }
      goto L_08926350;
    }
L_08926350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089263A8;
      }
      goto L_08926358;
    }
L_08926358:
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926370u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    goto L_08925E68;
L_08926370:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926380;
      }
      goto L_08926378;
    }
L_08926378:
    ctx.gpr[31] = (0x08926380u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926380u) goto L_08926380;
    return;
L_08926380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089263A8;
      }
      goto L_08926388;
    }
L_08926388:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08926394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925E68;
L_08926394:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089263A4;
      }
      goto L_0892639C;
    }
L_0892639C:
    ctx.gpr[31] = (0x089263A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089263A4u) goto L_089263A4;
    return;
L_089263A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089263A8;
L_089263A8:
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
L_089263C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[19] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089264D8;
      }
      goto L_08926404;
    }
L_08926404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926414u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08925F98;
L_08926414:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6968)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089264D0;
      }
      goto L_08926430;
    }
L_08926430:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089264D0;
      }
      goto L_0892643C;
    }
L_0892643C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089264D0;
      }
      goto L_0892645C;
    }
L_0892645C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926468u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926468u) goto L_08926468;
    return;
L_08926468:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926474u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926474u) goto L_08926474;
    return;
L_08926474:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08926484u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08927284;
L_08926484:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_089264D0;
      }
      goto L_0892649C;
    }
L_0892649C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089264C8;
      }
      goto L_089264A4;
    }
L_089264A4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31852)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089264D0;
      }
      goto L_089264C8;
    }
L_089264C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089264DC;
      }
      goto L_089264D0;
    }
L_089264D0:
    ctx.gpr[31] = (0x089264D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089264D8u) goto L_089264D8;
    return;
L_089264D8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089264DC;
L_089264DC:
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
L_089264FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926658;
      }
      goto L_08926538;
    }
L_08926538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926550u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926550u) goto L_08926550;
    return;
L_08926550:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x0892655Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F98;
L_0892655C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08926568u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926568u) goto L_08926568;
    return;
L_08926568:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08926578u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08927284;
L_08926578:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6968)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089265FC;
      }
      goto L_08926594;
    }
L_08926594:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089265FC;
      }
      goto L_089265A0;
    }
L_089265A0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089265FC;
      }
      goto L_089265C0;
    }
L_089265C0:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_089265FC;
      }
      goto L_089265D4;
    }
L_089265D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08926610;
      }
      goto L_089265DC;
    }
L_089265DC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926610;
      }
      goto L_089265FC;
    }
L_089265FC:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926618;
      }
      goto L_08926608;
    }
L_08926608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892663C;
      }
      goto L_08926610;
    }
L_08926610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892665C;
      }
      goto L_08926618;
    }
L_08926618:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926624u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08925E68;
L_08926624:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926634;
      }
      goto L_0892662C;
    }
L_0892662C:
    ctx.gpr[31] = (0x08926634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926634u) goto L_08926634;
    return;
L_08926634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892665C;
      }
      goto L_0892663C;
    }
L_0892663C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08926648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925E68;
L_08926648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926658;
      }
      goto L_08926650;
    }
L_08926650:
    ctx.gpr[31] = (0x08926658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926658u) goto L_08926658;
    return;
L_08926658:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0892665C;
L_0892665C:
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
L_0892667C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08926690u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08925F24;
L_08926690:
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x089266A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 22u, 0x08A8C144u>(ctx, &aot_mem) && ctx.pc == 0x089266A4u) goto L_089266A4;
    return;
L_089266A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089266D8;
      }
      goto L_089266B0;
    }
L_089266B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089266D0;
      }
      goto L_089266C0;
    }
L_089266C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089266D0u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 175u, 0x08AC8E50u>(ctx, &aot_mem) && ctx.pc == 0x089266D0u) goto L_089266D0;
    return;
L_089266D0:
    ctx.gpr[31] = (0x089266D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089266D8u) goto L_089266D8;
    return;
L_089266D8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089266EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089267C0;
      }
      goto L_08926724;
    }
L_08926724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926738u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926738u) goto L_08926738;
    return;
L_08926738:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926744u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926744u) goto L_08926744;
    return;
L_08926744:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31852)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x089267B0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    goto L_08925E68;
L_089267B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089267C0;
      }
      goto L_089267B8;
    }
L_089267B8:
    ctx.gpr[31] = (0x089267C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089267C0u) goto L_089267C0;
    return;
L_089267C0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089267E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089268B8;
      }
      goto L_08926818;
    }
L_08926818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0892682Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x0892682Cu) goto L_0892682C;
    return;
L_0892682C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926838u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926838u) goto L_08926838;
    return;
L_08926838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31852)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089268A8u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08925E68;
L_089268A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089268B8;
      }
      goto L_089268B0;
    }
L_089268B0:
    ctx.gpr[31] = (0x089268B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089268B8u) goto L_089268B8;
    return;
L_089268B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089268D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926910;
      }
      goto L_08926908;
    }
L_08926908:
    ctx.gpr[31] = (0x08926910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926910u) goto L_08926910;
    return;
L_08926910:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6984)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08926A14;
      }
      goto L_08926958;
    }
L_08926958:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6980)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926A14;
      }
      goto L_0892696C;
    }
L_0892696C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6968)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08926A0C;
      }
      goto L_08926988;
    }
L_08926988:
    ctx.gpr[31] = (0x08926990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F98;
L_08926990:
    ctx.gpr[4] = (ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926A0C;
      }
      goto L_0892699C;
    }
L_0892699C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926A0C;
      }
      goto L_089269BC;
    }
L_089269BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089269C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x089269C8u) goto L_089269C8;
    return;
L_089269C8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089269D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x089269D4u) goto L_089269D4;
    return;
L_089269D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089269E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F98;
L_089269E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089269F0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08927284;
L_089269F0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926A0C;
      }
      goto L_08926A04;
    }
L_08926A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926A18;
      }
      goto L_08926A0C;
    }
L_08926A0C:
    ctx.gpr[31] = (0x08926A14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926A14u) goto L_08926A14;
    return;
L_08926A14:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926A18;
L_08926A18:
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
L_08926A30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6984)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926B0C;
      }
      goto L_08926A64;
    }
L_08926A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6968)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08926B04;
      }
      goto L_08926A80;
    }
L_08926A80:
    ctx.gpr[31] = (0x08926A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F98;
L_08926A88:
    ctx.gpr[4] = (ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926B04;
      }
      goto L_08926A94;
    }
L_08926A94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926B04;
      }
      goto L_08926AB4;
    }
L_08926AB4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926AC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926AC0u) goto L_08926AC0;
    return;
L_08926AC0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926ACCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926ACCu) goto L_08926ACC;
    return;
L_08926ACC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926AD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F98;
L_08926AD8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926AE8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08927284;
L_08926AE8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926B04;
      }
      goto L_08926AFC;
    }
L_08926AFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926B10;
      }
      goto L_08926B04;
    }
L_08926B04:
    ctx.gpr[31] = (0x08926B0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926B0Cu) goto L_08926B0C;
    return;
L_08926B0C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926B10;
L_08926B10:
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
L_08926B28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6984)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08926C3C;
      }
      goto L_08926B64;
    }
L_08926B64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6980)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926C3C;
      }
      goto L_08926B78;
    }
L_08926B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926B90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926B90u) goto L_08926B90;
    return;
L_08926B90:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F98;
L_08926B9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08926BA8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926BA8u) goto L_08926BA8;
    return;
L_08926BA8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08926BB8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08927284;
L_08926BB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31852)));
      if (branch_taken) {
          goto L_08926C10;
      }
      goto L_08926BD0;
    }
L_08926BD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6968)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
      if (branch_taken) {
          goto L_08926C10;
      }
      goto L_08926BE8;
    }
L_08926BE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926C10;
      }
      goto L_08926BF0;
    }
L_08926BF0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926C2C;
      }
      goto L_08926C10;
    }
L_08926C10:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08926C1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925E68;
L_08926C1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926C34;
      }
      goto L_08926C24;
    }
L_08926C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926C3C;
      }
      goto L_08926C2C;
    }
L_08926C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926C40;
      }
      goto L_08926C34;
    }
L_08926C34:
    ctx.gpr[31] = (0x08926C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926C3Cu) goto L_08926C3C;
    return;
L_08926C3C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926C40;
L_08926C40:
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
L_08926C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6984)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926D8C;
      }
      goto L_08926C9C;
    }
L_08926C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926CB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926CB4u) goto L_08926CB4;
    return;
L_08926CB4:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F98;
L_08926CC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08926CCCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08926CCCu) goto L_08926CCC;
    return;
L_08926CCC:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08926CDCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08927284;
L_08926CDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6968)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08926D60;
      }
      goto L_08926CF8;
    }
L_08926CF8:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926D60;
      }
      goto L_08926D04;
    }
L_08926D04:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31848)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926D60;
      }
      goto L_08926D24;
    }
L_08926D24:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08926D60;
      }
      goto L_08926D38;
    }
L_08926D38:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08926D7C;
      }
      goto L_08926D40;
    }
L_08926D40:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926D7C;
      }
      goto L_08926D60;
    }
L_08926D60:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08926D6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925E68;
L_08926D6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926D84;
      }
      goto L_08926D74;
    }
L_08926D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926D8C;
      }
      goto L_08926D7C;
    }
L_08926D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926D90;
      }
      goto L_08926D84;
    }
L_08926D84:
    ctx.gpr[31] = (0x08926D8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926D8Cu) goto L_08926D8C;
    return;
L_08926D8C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926D90;
L_08926D90:
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
L_08926DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926DE8;
      }
      goto L_08926DE0;
    }
L_08926DE0:
    ctx.gpr[31] = (0x08926DE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926DE8u) goto L_08926DE8;
    return;
L_08926DE8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926E40;
      }
      goto L_08926E2C;
    }
L_08926E2C:
    ctx.gpr[31] = (0x08926E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08925FC8;
L_08926E34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926E40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089271B4;
L_08926E40:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926E8C;
      }
      goto L_08926E84;
    }
L_08926E84:
    ctx.gpr[31] = (0x08926E8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08926E8Cu) goto L_08926E8C;
    return;
L_08926E8C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926EE4;
      }
      goto L_08926ED0;
    }
L_08926ED0:
    ctx.gpr[31] = (0x08926ED8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08925FC8;
L_08926ED8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926EE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089271B4;
L_08926EE4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08926F18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08927218;
L_08926F18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6976)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926F44;
      }
      goto L_08926F30;
    }
L_08926F30:
    ctx.gpr[31] = (0x08926F38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08925FC8;
L_08926F38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926F44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089271B4;
L_08926F44:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926F5C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926F6C;
      }
      goto L_08926F64;
    }
L_08926F64:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28152));
    goto L_08926F6C;
L_08926F6C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926F7C;
      }
      goto L_08926F74;
    }
L_08926F74:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28152));
    goto L_08926F7C;
L_08926F7C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926F84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08926F98u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27576), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x088735E0u>(ctx, &aot_mem) && ctx.pc == 0x08926F98u) goto L_08926F98;
    return;
L_08926F98:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27580), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[7] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08926FF0;
      }
      goto L_08926FE4;
    }
L_08926FE4:
    ctx.gpr[7] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[5] = (16800u << 16u);
      if (branch_taken) {
          goto L_08927004;
      }
      goto L_08926FF0;
    }
L_08926FF0:
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6968), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08927014;
      }
      goto L_08927004;
    }
L_08927004:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6968), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08927014;
L_08927014:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(228)));
    // Car model range only. Spawn and removal stay unchanged.
    ctx.fpr[13] = ctx.fpr[13] * lcs::view_distance_scale();
    ctx.gpr[4] = (17036u << 16u);
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[10] = (17116u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (2230u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (2230u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (2230u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6996), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6992), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6984), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6988), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[9] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-6980), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-6976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-6972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089270A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27580)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089270E8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089270FC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42))))));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927114:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892711C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27568)));
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29200));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27568)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892714C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27568)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892716C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927174:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27564)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892718C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27564)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089271AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089271B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (23808u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089271E4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089271E4u) goto L_089271E4;
    return;
L_089271E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (23808u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927210:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892722Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x0892722Cu) goto L_0892722C;
    return;
L_0892722C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27580)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27580)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[6] & 48u);
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_089272F8;
      }
      goto L_089272C8;
    }
L_089272C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08927338;
      }
      goto L_089272F8;
    }
L_089272F8:
    ctx.gpr[4] = (ctx.gpr[6] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927334;
      }
      goto L_08927304;
    }
L_08927304:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08927338;
      }
      goto L_08927334;
    }
L_08927334:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08927338;
L_08927338:
    ctx.gpr[4] = (ctx.gpr[6] & 36u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927348;
      }
      goto L_08927344;
    }
L_08927344:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    goto L_08927348;
L_08927348:
    ctx.gpr[4] = (ctx.gpr[6] & 1536u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927414;
      }
      goto L_08927354;
    }
L_08927354:
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08927394;
      }
      goto L_08927360;
    }
L_08927360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089273CC;
      }
      goto L_08927394;
    }
L_08927394:
    ctx.gpr[4] = (ctx.gpr[6] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089273CC;
      }
      goto L_089273A0;
    }
L_089273A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    goto L_089273CC;
L_089273CC:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089273F0;
      }
      goto L_089273DC;
    }
L_089273DC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089273F0;
      }
      goto L_089273EC;
    }
L_089273EC:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089273F0;
L_089273F0:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927414;
      }
      goto L_08927400;
    }
L_08927400:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927414;
      }
      goto L_08927410;
    }
L_08927410:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08927414;
L_08927414:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892741C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27524)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27520)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27548)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27528), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18768));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22480));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27536), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27532), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27540), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27552), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089274C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08927514;
      }
      goto L_089274E0;
    }
L_089274E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927514;
      }
      goto L_089274F8;
    }
L_089274F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927514;
      }
      goto L_08927510;
    }
L_08927510:
    ctx.gpr[6] = (0u | 1u);
    goto L_08927514;
L_08927514:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892751C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892752Cu);
    // nop
    goto L_089274C8;
L_0892752C:
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892753C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927554:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892756C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892759Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0892759Cu) goto L_0892759C;
    return;
L_0892759C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089275E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08927640;
      }
      goto L_08927600;
    }
L_08927600:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[8] & 31u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089276BC;
      }
      goto L_08927618;
    }
L_08927618:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0892769C;
    }
    goto L_08927624;
L_08927624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089276DC;
      }
      goto L_08927640;
    }
L_08927640:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927688;
      }
      goto L_0892764C;
    }
L_0892764C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[8] & 31u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089276BC;
      }
      goto L_08927668;
    }
L_08927668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089276DC;
      }
      goto L_08927688;
    }
L_08927688:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08927694u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0892756C;
L_08927694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089276DC;
      }
      goto L_0892769C;
    }
L_0892769C:
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089276DC;
      }
      goto L_089276BC;
    }
L_089276BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
    goto L_089276DC;
L_089276DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089276E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08927738;
      }
      goto L_089276F8;
    }
L_089276F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927738;
      }
      goto L_0892771C;
    }
L_0892771C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08927738;
      }
      goto L_08927724;
    }
L_08927724:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927738;
      }
      goto L_08927730;
    }
L_08927730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892773C;
      }
      goto L_08927738;
    }
L_08927738:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0892773C;
L_0892773C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08927788;
      }
      goto L_0892776C;
    }
L_0892776C:
    ctx.gpr[31] = (0x08927774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089276E8;
L_08927774:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
        goto L_08927790;
    }
    goto L_08927780;
L_08927780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089277A4;
      }
      goto L_08927788;
    }
L_08927788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089277F8;
      }
      goto L_08927790;
    }
L_08927790:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089277A4;
      }
      goto L_0892779C;
    }
L_0892779C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089277F8;
      }
      goto L_089277A4;
    }
L_089277A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089277B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 58u, 0x089283CCu>(ctx, &aot_mem) && ctx.pc == 0x089277B0u) goto L_089277B0;
    return;
L_089277B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7328));
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089277D8;
    }
    goto L_089277C4;
L_089277C4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089277D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20720));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x089277D4u) goto L_089277D4;
    return;
L_089277D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089277D8;
L_089277D8:
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089277F8;
      }
      goto L_089277F8;
    }
L_089277F8:
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
L_08927810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892782Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08927744;
L_0892782C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089278BC;
      }
      goto L_08927844;
    }
L_08927844:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    goto L_08927850;
L_08927850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892787C;
      }
      goto L_0892785C;
    }
L_0892785C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08927850;
      }
      goto L_08927874;
    }
L_08927874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089278BC;
      }
      goto L_0892787C;
    }
L_0892787C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08927958;
      }
      goto L_089278BC;
    }
L_089278BC:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (ctx.gpr[2] << (ctx.gpr[5] & 31u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927908;
      }
      goto L_089278D4;
    }
L_089278D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_089278E8;
L_089278E8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
        goto L_08927910;
    }
    goto L_089278F4;
L_089278F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089278E8;
      }
      goto L_08927908;
    }
L_08927908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08927958;
      }
      goto L_08927910;
    }
L_08927910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08927958;
L_08927958:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892796C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.gpr[8] = (0u | 1u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
        goto L_0892798C;
    }
    goto L_0892798C;
L_0892798C:
    ctx.gpr[13] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    goto L_0892799C;
L_0892799C:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[14] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089279E4;
      }
      goto L_089279A4;
    }
L_089279A4:
    ctx.gpr[14] = (ctx.gpr[8] << (ctx.gpr[14] & 31u));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_089279E4;
      }
      goto L_089279B4;
    }
L_089279B4:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089279D8;
      }
      goto L_089279C0;
    }
L_089279C0:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089279D8;
      }
      goto L_089279D0;
    }
L_089279D0:
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    goto L_089279D8;
L_089279D8:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892799C;
      }
      goto L_089279E4;
    }
L_089279E4:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[9] = (ctx.gpr[8] << (ctx.gpr[4] & 31u));
        goto L_089279FC;
    }
    goto L_089279FC;
L_089279FC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927A04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    goto L_08927A54;
L_08927A54:
    ctx.gpr[10] = (ctx.gpr[20] << (ctx.gpr[4] & 31u));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927A7C;
      }
      goto L_08927A64;
    }
L_08927A64:
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927A7C;
      }
      goto L_08927A74;
    }
L_08927A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927ACC;
      }
      goto L_08927A7C;
    }
L_08927A7C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08927ABC;
      }
      goto L_08927A88;
    }
L_08927A88:
    ctx.gpr[5] = (ctx.gpr[9] << 3u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08927A90;
L_08927A90:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927AAC;
      }
      goto L_08927A9C;
    }
L_08927A9C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    goto L_08927AAC;
L_08927AAC:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08927A90;
      }
      goto L_08927ABC;
    }
L_08927ABC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08927A54;
      }
      goto L_08927ACC;
    }
L_08927ACC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927AE8;
      }
      goto L_08927AD4;
    }
L_08927AD4:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08927AD4;
      }
      goto L_08927AE8;
    }
L_08927AE8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[20] << (ctx.gpr[4] & 31u));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08927B78;
      }
      goto L_08927B00;
    }
L_08927B00:
    ctx.gpr[22] = (ctx.gpr[21] << 4u);
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    goto L_08927B0C;
L_08927B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B64;
      }
      goto L_08927B20;
    }
L_08927B20:
    ctx.gpr[31] = (0x08927B28u);
    // nop
    goto L_089276E8;
L_08927B28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08927B60;
      }
      goto L_08927B34;
    }
L_08927B34:
    ctx.gpr[31] = (0x08927B3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 178u, 0x08A5919Cu>(ctx, &aot_mem) && ctx.pc == 0x08927B3Cu) goto L_08927B3C;
    return;
L_08927B3C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08927B60;
L_08927B60:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08927B64;
L_08927B64:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08927B0C;
      }
      goto L_08927B78;
    }
L_08927B78:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927B8Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_0892796C;
L_08927B8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927BB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08927BDCu);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08927BDCu) goto L_08927BDC;
    return;
L_08927BDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
      if (branch_taken) {
          goto L_08927C14;
      }
      goto L_08927BF8;
    }
L_08927BF8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08927BF8;
      }
      goto L_08927C14;
    }
L_08927C14:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927C24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 25 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] << (ctx.gpr[6] & 31u));
      if (branch_taken) {
          goto L_08927C68;
      }
      goto L_08927C3C;
    }
L_08927C3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08927C58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20744));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x08927C58u) goto L_08927C58;
    return;
L_08927C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08927C68;
L_08927C68:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927C80;
      }
      goto L_08927C70;
    }
L_08927C70:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08927CFC;
      }
      goto L_08927C80;
    }
L_08927C80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08927CA4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08927CA4u) goto L_08927CA4;
    return;
L_08927CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08927CFC;
      }
      goto L_08927CC4;
    }
L_08927CC4:
    ctx.gpr[9] = (0u | 0u);
    goto L_08927CC8;
L_08927CC8:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08927CC8;
      }
      goto L_08927CFC;
    }
L_08927CFC:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[30] = (ctx.gpr[30] << (ctx.gpr[20] & 31u));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[22] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08927D80;
      }
      goto L_08927D78;
    }
L_08927D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC8;
      }
      goto L_08927D80;
    }
L_08927D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08927DC8;
L_08927DC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DE4;
      }
      goto L_08927DD4;
    }
L_08927DD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927DE4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08927BB4;
L_08927DE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927DF4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08927C24;
L_08927DF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E88;
      }
      goto L_08927E00;
    }
L_08927E00:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08927E70;
      }
      goto L_08927E14;
    }
L_08927E14:
    ctx.gpr[22] = (ctx.gpr[23] << 3u);
    goto L_08927E18;
L_08927E18:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08927E64;
      }
      goto L_08927E28;
    }
L_08927E28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927E40u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 80u, 0x08928534u>(ctx, &aot_mem) && ctx.pc == 0x08927E40u) goto L_08927E40;
    return;
L_08927E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08927E64;
L_08927E64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08927E18;
      }
      goto L_08927E70;
    }
L_08927E70:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] << 3u);
    ctx.gpr[7] = (ctx.gpr[18] << 3u);
    ctx.gpr[31] = (0x08927E84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08927E84u) goto L_08927E84;
    return;
L_08927E84:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08927E88;
L_08927E88:
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_08927EEC;
      }
      goto L_08927E94;
    }
L_08927E94:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[21] + ctx.gpr[19]);
    goto L_08927EA0;
L_08927EA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927EE0;
      }
      goto L_08927EB0;
    }
L_08927EB0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08927EC4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 69u, 0x08928474u>(ctx, &aot_mem) && ctx.pc == 0x08927EC4u) goto L_08927EC4;
    return;
L_08927EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08927EE0;
L_08927EE0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08927EA0;
      }
      goto L_08927EEC;
    }
L_08927EEC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927F10;
      }
      goto L_08927EF4;
    }
L_08927EF4:
    ctx.gpr[6] = (ctx.gpr[30] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927F10u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08927F10u) goto L_08927F10;
    return;
L_08927F10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08927F6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08927A04;
L_08927F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08927F78u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 178u, 0x08A5919Cu>(ctx, &aot_mem) && ctx.pc == 0x08927F78u) goto L_08927F78;
    return;
L_08927F78:
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08927F8Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08927D24;
L_08927F8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927FA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08927FD8u);
    ctx.gpr[7] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08927FD8u) goto L_08927FD8;
    return;
L_08927FD8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08927FECu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 116u, 0x0891C8C8u>(ctx, &aot_mem) && ctx.pc == 0x08927FECu) goto L_08927FEC;
    return;
L_08927FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.pc = 0x08928000u; return;
}

void recomp_unit_0072(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0072_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_72(Runtime &runtime) {
    runtime.register_generated_unit(72u, 0x08924000u, 16384u, &recomp_unit_0072, &recomp_unit_0072_entry);
    runtime.register_function(0x08924000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924184u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924194u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892420Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924218u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924280u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892428Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924300u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924368u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924374u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924398u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924450u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892445Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924548u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924568u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892456Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924578u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924604u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924610u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892465Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924684u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924694u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924734u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892475Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924808u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924810u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924844u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892484Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924854u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892485Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924864u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924880u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892489Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924904u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892490Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924914u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924930u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892494Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924950u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924954u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892495Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924964u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892496Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924978u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924980u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892498Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924994u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924ADCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925058u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925074u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925090u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925114u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925128u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892514Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925158u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925234u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925244u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892524Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925270u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925304u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925338u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892536Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925374u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925378u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925398u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925464u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925484u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925518u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925524u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925734u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925740u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892576Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925808u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925840u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925850u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925868u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925870u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925878u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925880u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925890u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925898u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892589Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892592Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925934u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925944u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892594Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925954u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892595Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925960u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925968u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925998u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ED0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926004u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926068u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926070u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926078u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926088u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926090u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926098u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926108u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926144u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926170u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892617Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892619Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926208u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926210u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926218u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892621Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892623Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926278u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926290u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892629Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926300u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926314u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892631Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892633Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926348u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926350u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926358u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926370u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926378u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926380u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926388u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926394u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892639Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926404u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926414u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926430u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892643Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892645Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926468u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926474u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926484u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892649Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926550u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892655Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926568u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926578u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926594u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926608u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926610u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926618u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892662Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926634u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892663Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926648u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926650u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926658u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892665Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892667Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926690u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926724u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926738u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926744u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926818u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892682Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926838u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926908u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926924u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926958u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892696Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926988u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926990u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892699Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926ACCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926ED0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926ED8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927004u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927014u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927114u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892711Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892714Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892716Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927174u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892718Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927210u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927218u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892722Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927284u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927304u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927338u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927344u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927348u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927354u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927360u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927394u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927400u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927410u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927414u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892741Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927514u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892751Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892752Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892753Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927554u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892756Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892759Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927600u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927618u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927640u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892764Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927668u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927688u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927694u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892769Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892771Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927724u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927730u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927738u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892773Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927744u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892776Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927774u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927780u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927788u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927790u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892779Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927810u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892782Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927844u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927850u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892785Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927874u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892787Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927908u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927958u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892796Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892798Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892799Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927ABCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927ACCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FECu, &recomp_unit_0072, "recomp_unit_0072");
}
} // namespace psprecomp
