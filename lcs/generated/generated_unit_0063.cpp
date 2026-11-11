#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_free_aim.hpp"
#include "lcs_render_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0063[4091] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0,
    16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0,
    0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0,
    0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0,
    63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71,
    0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0,
    78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104,
    0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 0, 113, 0,
    114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139,
    0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 166,
    0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 191,
    0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198,
    0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0,
    219, 0, 0, 220, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258,
    0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 264, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0,
    281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0,
    0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 389, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0,
    395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 407, 0, 408, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443,
    0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449,
    0, 450, 0, 0, 0, 451, 0, 0, 452, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 0, 459, 460, 0, 0, 0, 461,
    0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0,
    0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 471, 0, 472, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 483, 0, 484, 0, 485, 0, 486, 0, 0,
    0, 487, 0, 0, 0, 488, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 495, 0,
    0, 0, 496, 0, 0, 0, 497, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0,
    0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509,
    0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 513, 0, 514, 0, 515, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 520, 521,
    0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 527, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534,
    0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 550, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558,
    0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0,
    0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567,
    0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581,
    0, 0, 0, 582, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0,
    0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0,
    0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0,
    597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605,
    0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 614, 0,
    0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621,
    0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0,
    0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0,
    0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646,
};
void recomp_unit_0063_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08900000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0063[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08900000;
    case 2u: goto L_08900014;
    case 3u: goto L_0890001C;
    case 4u: goto L_08900024;
    case 5u: goto L_0890002C;
    case 6u: goto L_08900058;
    case 7u: goto L_08900088;
    case 8u: goto L_08900090;
    case 9u: goto L_08900098;
    case 10u: goto L_089000C0;
    case 11u: goto L_089000C8;
    case 12u: goto L_089000E0;
    case 13u: goto L_089000E8;
    case 14u: goto L_089000F0;
    case 15u: goto L_089000F8;
    case 16u: goto L_08900100;
    case 17u: goto L_0890010C;
    case 18u: goto L_08900120;
    case 19u: goto L_0890013C;
    case 20u: goto L_08900148;
    case 21u: goto L_0890015C;
    case 22u: goto L_08900170;
    case 23u: goto L_08900188;
    case 24u: goto L_08900194;
    case 25u: goto L_089001B4;
    case 26u: goto L_089001BC;
    case 27u: goto L_089001D0;
    case 28u: goto L_089001DC;
    case 29u: goto L_089001E4;
    case 30u: goto L_0890020C;
    case 31u: goto L_08900220;
    case 32u: goto L_08900238;
    case 33u: goto L_0890024C;
    case 34u: goto L_08900254;
    case 35u: goto L_08900264;
    case 36u: goto L_0890026C;
    case 37u: goto L_08900274;
    case 38u: goto L_08900284;
    case 39u: goto L_0890028C;
    case 40u: goto L_089002A8;
    case 41u: goto L_089002B4;
    case 42u: goto L_089002C0;
    case 43u: goto L_089002EC;
    case 44u: goto L_089002F4;
    case 45u: goto L_08900304;
    case 46u: goto L_08900314;
    case 47u: goto L_0890031C;
    case 48u: goto L_08900334;
    case 49u: goto L_0890033C;
    case 50u: goto L_08900354;
    case 51u: goto L_0890035C;
    case 52u: goto L_08900364;
    case 53u: goto L_0890036C;
    case 54u: goto L_08900394;
    case 55u: goto L_0890039C;
    case 56u: goto L_089003B4;
    case 57u: goto L_089003BC;
    case 58u: goto L_089003C4;
    case 59u: goto L_089003CC;
    case 60u: goto L_089003D4;
    case 61u: goto L_089003E0;
    case 62u: goto L_089003F4;
    case 63u: goto L_08900400;
    case 64u: goto L_08900410;
    case 65u: goto L_0890041C;
    case 66u: goto L_08900434;
    case 67u: goto L_08900440;
    case 68u: goto L_08900454;
    case 69u: goto L_08900460;
    case 70u: goto L_08900468;
    case 71u: goto L_0890047C;
    case 72u: goto L_08900488;
    case 73u: goto L_08900490;
    case 74u: goto L_089004B8;
    case 75u: goto L_089004CC;
    case 76u: goto L_089004E4;
    case 77u: goto L_089004F8;
    case 78u: goto L_08900500;
    case 79u: goto L_08900510;
    case 80u: goto L_08900518;
    case 81u: goto L_08900520;
    case 82u: goto L_08900528;
    case 83u: goto L_08900534;
    case 84u: goto L_0890053C;
    case 85u: goto L_08900558;
    case 86u: goto L_08900564;
    case 87u: goto L_08900570;
    case 88u: goto L_0890059C;
    case 89u: goto L_089005A4;
    case 90u: goto L_089005B4;
    case 91u: goto L_089005C8;
    case 92u: goto L_089005D8;
    case 93u: goto L_089005E8;
    case 94u: goto L_089005F4;
    case 95u: goto L_08900604;
    case 96u: goto L_0890061C;
    case 97u: goto L_08900624;
    case 98u: goto L_0890062C;
    case 99u: goto L_08900634;
    case 100u: goto L_08900640;
    case 101u: goto L_08900654;
    case 102u: goto L_0890065C;
    case 103u: goto L_08900674;
    case 104u: goto L_0890067C;
    case 105u: goto L_08900684;
    case 106u: goto L_089006A0;
    case 107u: goto L_089006B0;
    case 108u: goto L_089006B8;
    case 109u: goto L_089006D0;
    case 110u: goto L_089006D8;
    case 111u: goto L_089006E0;
    case 112u: goto L_089006EC;
    case 113u: goto L_089006F8;
    case 114u: goto L_08900700;
    case 115u: goto L_08900708;
    case 116u: goto L_08900710;
    case 117u: goto L_08900718;
    case 118u: goto L_08900724;
    case 119u: goto L_0890073C;
    case 120u: goto L_08900750;
    case 121u: goto L_08900758;
    case 122u: goto L_08900764;
    case 123u: goto L_08900770;
    case 124u: goto L_0890078C;
    case 125u: goto L_08900798;
    case 126u: goto L_089007B0;
    case 127u: goto L_089007BC;
    case 128u: goto L_089007C8;
    case 129u: goto L_089007DC;
    case 130u: goto L_089007E8;
    case 131u: goto L_08900800;
    case 132u: goto L_08900810;
    case 133u: goto L_08900828;
    case 134u: goto L_08900840;
    case 135u: goto L_08900854;
    case 136u: goto L_0890085C;
    case 137u: goto L_0890086C;
    case 138u: goto L_08900874;
    case 139u: goto L_0890087C;
    case 140u: goto L_08900884;
    case 141u: goto L_08900890;
    case 142u: goto L_08900898;
    case 143u: goto L_089008B4;
    case 144u: goto L_089008C0;
    case 145u: goto L_089008CC;
    case 146u: goto L_089008F8;
    case 147u: goto L_08900900;
    case 148u: goto L_08900910;
    case 149u: goto L_08900920;
    case 150u: goto L_08900928;
    case 151u: goto L_08900940;
    case 152u: goto L_08900948;
    case 153u: goto L_08900960;
    case 154u: goto L_08900968;
    case 155u: goto L_08900970;
    case 156u: goto L_08900978;
    case 157u: goto L_08900994;
    case 158u: goto L_089009A4;
    case 159u: goto L_089009AC;
    case 160u: goto L_089009C4;
    case 161u: goto L_089009CC;
    case 162u: goto L_089009D8;
    case 163u: goto L_089009E4;
    case 164u: goto L_089009EC;
    case 165u: goto L_089009F4;
    case 166u: goto L_089009FC;
    case 167u: goto L_08900A04;
    case 168u: goto L_08900A10;
    case 169u: goto L_08900A28;
    case 170u: goto L_08900A3C;
    case 171u: goto L_08900A44;
    case 172u: goto L_08900A50;
    case 173u: goto L_08900A5C;
    case 174u: goto L_08900A78;
    case 175u: goto L_08900A84;
    case 176u: goto L_08900A9C;
    case 177u: goto L_08900AA8;
    case 178u: goto L_08900AB4;
    case 179u: goto L_08900AC8;
    case 180u: goto L_08900AD4;
    case 181u: goto L_08900AEC;
    case 182u: goto L_08900AFC;
    case 183u: goto L_08900B14;
    case 184u: goto L_08900B2C;
    case 185u: goto L_08900B40;
    case 186u: goto L_08900B48;
    case 187u: goto L_08900B58;
    case 188u: goto L_08900B60;
    case 189u: goto L_08900B68;
    case 190u: goto L_08900B70;
    case 191u: goto L_08900B7C;
    case 192u: goto L_08900B84;
    case 193u: goto L_08900BA0;
    case 194u: goto L_08900BAC;
    case 195u: goto L_08900BB8;
    case 196u: goto L_08900BE4;
    case 197u: goto L_08900BEC;
    case 198u: goto L_08900BFC;
    case 199u: goto L_08900C0C;
    case 200u: goto L_08900C14;
    case 201u: goto L_08900C2C;
    case 202u: goto L_08900C34;
    case 203u: goto L_08900C4C;
    case 204u: goto L_08900C54;
    case 205u: goto L_08900C5C;
    case 206u: goto L_08900C64;
    case 207u: goto L_08900C80;
    case 208u: goto L_08900C90;
    case 209u: goto L_08900C98;
    case 210u: goto L_08900CB0;
    case 211u: goto L_08900CB8;
    case 212u: goto L_08900CC4;
    case 213u: goto L_08900CDC;
    case 214u: goto L_08900CE4;
    case 215u: goto L_08900D14;
    case 216u: goto L_08900DDC;
    case 217u: goto L_08900DE8;
    case 218u: goto L_08900DF8;
    case 219u: goto L_08900E00;
    case 220u: goto L_08900E0C;
    case 221u: goto L_08900E14;
    case 222u: goto L_08900E18;
    case 223u: goto L_08900E44;
    case 224u: goto L_08900E6C;
    case 225u: goto L_08900E7C;
    case 226u: goto L_08900EA4;
    case 227u: goto L_08900EC0;
    case 228u: goto L_08900ECC;
    case 229u: goto L_08900EDC;
    case 230u: goto L_08900F04;
    case 231u: goto L_08900F24;
    case 232u: goto L_08900F28;
    case 233u: goto L_08900F30;
    case 234u: goto L_08900F38;
    case 235u: goto L_08900F44;
    case 236u: goto L_08900F4C;
    case 237u: goto L_08900F58;
    case 238u: goto L_08900F60;
    case 239u: goto L_08900F6C;
    case 240u: goto L_08900FA0;
    case 241u: goto L_08900FD4;
    case 242u: goto L_08900FDC;
    case 243u: goto L_08901008;
    case 244u: goto L_0890101C;
    case 245u: goto L_08901028;
    case 246u: goto L_08901050;
    case 247u: goto L_08901078;
    case 248u: goto L_089010AC;
    case 249u: goto L_089010E0;
    case 250u: goto L_089010E8;
    case 251u: goto L_08901114;
    case 252u: goto L_08901128;
    case 253u: goto L_08901134;
    case 254u: goto L_08901138;
    case 255u: goto L_08901144;
    case 256u: goto L_08901160;
    case 257u: goto L_08901170;
    case 258u: goto L_0890117C;
    case 259u: goto L_0890118C;
    case 260u: goto L_08901194;
    case 261u: goto L_089011B8;
    case 262u: goto L_089011C0;
    case 263u: goto L_089011EC;
    case 264u: goto L_0890120C;
    case 265u: goto L_08901210;
    case 266u: goto L_0890121C;
    case 267u: goto L_08901224;
    case 268u: goto L_08901288;
    case 269u: goto L_08901294;
    case 270u: goto L_08901368;
    case 271u: goto L_089013C0;
    case 272u: goto L_089013F4;
    case 273u: goto L_08901414;
    case 274u: goto L_08901420;
    case 275u: goto L_0890142C;
    case 276u: goto L_0890143C;
    case 277u: goto L_08901448;
    case 278u: goto L_08901458;
    case 279u: goto L_08901464;
    case 280u: goto L_08901474;
    case 281u: goto L_08901480;
    case 282u: goto L_08901494;
    case 283u: goto L_0890149C;
    case 284u: goto L_089014B4;
    case 285u: goto L_089014B8;
    case 286u: goto L_089014CC;
    case 287u: goto L_089014E0;
    case 288u: goto L_089014E8;
    case 289u: goto L_089014F8;
    case 290u: goto L_08901570;
    case 291u: goto L_08901584;
    case 292u: goto L_08901598;
    case 293u: goto L_089015A8;
    case 294u: goto L_089015BC;
    case 295u: goto L_08901654;
    case 296u: goto L_08901668;
    case 297u: goto L_08901694;
    case 298u: goto L_0890169C;
    case 299u: goto L_089016AC;
    case 300u: goto L_08901718;
    case 301u: goto L_08901758;
    case 302u: goto L_08901764;
    case 303u: goto L_08901778;
    case 304u: goto L_08901784;
    case 305u: goto L_089017E8;
    case 306u: goto L_0890186C;
    case 307u: goto L_0890189C;
    case 308u: goto L_089018C4;
    case 309u: goto L_089018D0;
    case 310u: goto L_08901920;
    case 311u: goto L_08901950;
    case 312u: goto L_08901A0C;
    case 313u: goto L_08901A84;
    case 314u: goto L_08901A94;
    case 315u: goto L_08901AA8;
    case 316u: goto L_08901ABC;
    case 317u: goto L_08901ADC;
    case 318u: goto L_08901AE4;
    case 319u: goto L_08901AF8;
    case 320u: goto L_08901B3C;
    case 321u: goto L_08901B44;
    case 322u: goto L_08901BB8;
    case 323u: goto L_08901BE4;
    case 324u: goto L_08901BF0;
    case 325u: goto L_08901C34;
    case 326u: goto L_08901C40;
    case 327u: goto L_08901C54;
    case 328u: goto L_08901C60;
    case 329u: goto L_08901CBC;
    case 330u: goto L_08901CD0;
    case 331u: goto L_08901D0C;
    case 332u: goto L_08901D34;
    case 333u: goto L_08901D4C;
    case 334u: goto L_08901D54;
    case 335u: goto L_08901DC8;
    case 336u: goto L_08901DF4;
    case 337u: goto L_08901E2C;
    case 338u: goto L_08901E5C;
    case 339u: goto L_08901E88;
    case 340u: goto L_08901EA0;
    case 341u: goto L_08901ECC;
    case 342u: goto L_08901EFC;
    case 343u: goto L_08901FB8;
    case 344u: goto L_08902030;
    case 345u: goto L_08902044;
    case 346u: goto L_08902050;
    case 347u: goto L_08902078;
    case 348u: goto L_089020AC;
    case 349u: goto L_089020C0;
    case 350u: goto L_089020CC;
    case 351u: goto L_089020DC;
    case 352u: goto L_089020F0;
    case 353u: goto L_08902100;
    case 354u: goto L_08902144;
    case 355u: goto L_08902150;
    case 356u: goto L_0890215C;
    case 357u: goto L_08902168;
    case 358u: goto L_08902170;
    case 359u: goto L_08902178;
    case 360u: goto L_08902184;
    case 361u: goto L_08902190;
    case 362u: goto L_089021CC;
    case 363u: goto L_089021D4;
    case 364u: goto L_08902210;
    case 365u: goto L_08902224;
    case 366u: goto L_089023A8;
    case 367u: goto L_089023BC;
    case 368u: goto L_089023C8;
    case 369u: goto L_08902448;
    case 370u: goto L_08902454;
    case 371u: goto L_0890247C;
    case 372u: goto L_08902490;
    case 373u: goto L_08902498;
    case 374u: goto L_08902524;
    case 375u: goto L_08902534;
    case 376u: goto L_08902558;
    case 377u: goto L_0890255C;
    case 378u: goto L_08902588;
    case 379u: goto L_08902598;
    case 380u: goto L_089025BC;
    case 381u: goto L_089025C4;
    case 382u: goto L_089025CC;
    case 383u: goto L_089025D4;
    case 384u: goto L_089025DC;
    case 385u: goto L_08902658;
    case 386u: goto L_08902660;
    case 387u: goto L_08902668;
    case 388u: goto L_08902680;
    case 389u: goto L_08902690;
    case 390u: goto L_08902694;
    case 391u: goto L_089026A4;
    case 392u: goto L_089026B0;
    case 393u: goto L_089026C0;
    case 394u: goto L_089026F8;
    case 395u: goto L_08902700;
    case 396u: goto L_08902708;
    case 397u: goto L_08902710;
    case 398u: goto L_08902728;
    case 399u: goto L_08902730;
    case 400u: goto L_0890273C;
    case 401u: goto L_0890276C;
    case 402u: goto L_08902794;
    case 403u: goto L_089027A4;
    case 404u: goto L_089027B4;
    case 405u: goto L_089027C0;
    case 406u: goto L_089027D4;
    case 407u: goto L_089027D8;
    case 408u: goto L_089027E0;
    case 409u: goto L_089027F0;
    case 410u: goto L_08902820;
    case 411u: goto L_08902828;
    case 412u: goto L_08902830;
    case 413u: goto L_0890283C;
    case 414u: goto L_08902848;
    case 415u: goto L_08902854;
    case 416u: goto L_08902870;
    case 417u: goto L_089028DC;
    case 418u: goto L_089028FC;
    case 419u: goto L_08902948;
    case 420u: goto L_08902978;
    case 421u: goto L_089029AC;
    case 422u: goto L_089029B8;
    case 423u: goto L_089029C8;
    case 424u: goto L_089029F0;
    case 425u: goto L_08902A0C;
    case 426u: goto L_08902A18;
    case 427u: goto L_08902A24;
    case 428u: goto L_08902A44;
    case 429u: goto L_08902A54;
    case 430u: goto L_08902A7C;
    case 431u: goto L_08902A98;
    case 432u: goto L_08902AB8;
    case 433u: goto L_08902AE8;
    case 434u: goto L_08902AF8;
    case 435u: goto L_08902B20;
    case 436u: goto L_08902B3C;
    case 437u: goto L_08902B48;
    case 438u: goto L_08902B58;
    case 439u: goto L_08902B84;
    case 440u: goto L_08902BA4;
    case 441u: goto L_08902BB0;
    case 442u: goto L_08902BDC;
    case 443u: goto L_08902BFC;
    case 444u: goto L_08902C08;
    case 445u: goto L_08902C58;
    case 446u: goto L_08902D24;
    case 447u: goto L_08902D30;
    case 448u: goto L_08902D60;
    case 449u: goto L_08902D7C;
    case 450u: goto L_08902D84;
    case 451u: goto L_08902D94;
    case 452u: goto L_08902DA0;
    case 453u: goto L_08902DA4;
    case 454u: goto L_08902DB0;
    case 455u: goto L_08902DC0;
    case 456u: goto L_08902DCC;
    case 457u: goto L_08902DD4;
    case 458u: goto L_08902DDC;
    case 459u: goto L_08902DE8;
    case 460u: goto L_08902DEC;
    case 461u: goto L_08902DFC;
    case 462u: goto L_08902E04;
    case 463u: goto L_08902E1C;
    case 464u: goto L_08902E30;
    case 465u: goto L_08902E4C;
    case 466u: goto L_08902E58;
    case 467u: goto L_08902E70;
    case 468u: goto L_08902E94;
    case 469u: goto L_08902E9C;
    case 470u: goto L_08902EB0;
    case 471u: goto L_08902EB4;
    case 472u: goto L_08902EBC;
    case 473u: goto L_08902EC4;
    case 474u: goto L_08902ED8;
    case 475u: goto L_08902EF8;
    case 476u: goto L_08902F0C;
    case 477u: goto L_08902F18;
    case 478u: goto L_08902F20;
    case 479u: goto L_08902F28;
    case 480u: goto L_08902F30;
    case 481u: goto L_08902F44;
    case 482u: goto L_08902F58;
    case 483u: goto L_08902F5C;
    case 484u: goto L_08902F64;
    case 485u: goto L_08902F6C;
    case 486u: goto L_08902F74;
    case 487u: goto L_08902F84;
    case 488u: goto L_08902F94;
    case 489u: goto L_08902F98;
    case 490u: goto L_08902FA0;
    case 491u: goto L_08902FCC;
    case 492u: goto L_08902FE0;
    case 493u: goto L_08902FE8;
    case 494u: goto L_08902FF0;
    case 495u: goto L_08902FF8;
    case 496u: goto L_08903008;
    case 497u: goto L_08903018;
    case 498u: goto L_0890301C;
    case 499u: goto L_08903024;
    case 500u: goto L_08903050;
    case 501u: goto L_08903064;
    case 502u: goto L_08903070;
    case 503u: goto L_0890308C;
    case 504u: goto L_08903098;
    case 505u: goto L_089030B0;
    case 506u: goto L_089030BC;
    case 507u: goto L_089030C8;
    case 508u: goto L_089030E4;
    case 509u: goto L_089030FC;
    case 510u: goto L_08903108;
    case 511u: goto L_0890311C;
    case 512u: goto L_08903130;
    case 513u: goto L_08903134;
    case 514u: goto L_0890313C;
    case 515u: goto L_08903144;
    case 516u: goto L_08903154;
    case 517u: goto L_0890315C;
    case 518u: goto L_08903164;
    case 519u: goto L_0890316C;
    case 520u: goto L_08903178;
    case 521u: goto L_0890317C;
    case 522u: goto L_08903184;
    case 523u: goto L_08903198;
    case 524u: goto L_089031A4;
    case 525u: goto L_089031B0;
    case 526u: goto L_089031C0;
    case 527u: goto L_089031C4;
    case 528u: goto L_089031D0;
    case 529u: goto L_089031E0;
    case 530u: goto L_089031E8;
    case 531u: goto L_08903200;
    case 532u: goto L_08903210;
    case 533u: goto L_0890326C;
    case 534u: goto L_0890327C;
    case 535u: goto L_08903284;
    case 536u: goto L_08903290;
    case 537u: goto L_089032A0;
    case 538u: goto L_089032B4;
    case 539u: goto L_0890338C;
    case 540u: goto L_089033A0;
    case 541u: goto L_08903404;
    case 542u: goto L_08903420;
    case 543u: goto L_08903464;
    case 544u: goto L_08903494;
    case 545u: goto L_0890349C;
    case 546u: goto L_089034B0;
    case 547u: goto L_08903500;
    case 548u: goto L_08903530;
    case 549u: goto L_08903538;
    case 550u: goto L_0890353C;
    case 551u: goto L_08903544;
    case 552u: goto L_08903554;
    case 553u: goto L_08903560;
    case 554u: goto L_089035B4;
    case 555u: goto L_089035C4;
    case 556u: goto L_089035CC;
    case 557u: goto L_089035D8;
    case 558u: goto L_089035FC;
    case 559u: goto L_08903608;
    case 560u: goto L_08903638;
    case 561u: goto L_08903660;
    case 562u: goto L_08903674;
    case 563u: goto L_08903694;
    case 564u: goto L_089036A4;
    case 565u: goto L_089036B8;
    case 566u: goto L_089036F0;
    case 567u: goto L_089036FC;
    case 568u: goto L_08903704;
    case 569u: goto L_08903728;
    case 570u: goto L_08903794;
    case 571u: goto L_089037DC;
    case 572u: goto L_0890381C;
    case 573u: goto L_08903830;
    case 574u: goto L_08903844;
    case 575u: goto L_08903A2C;
    case 576u: goto L_08903AA0;
    case 577u: goto L_08903AA8;
    case 578u: goto L_08903ACC;
    case 579u: goto L_08903AD4;
    case 580u: goto L_08903AF4;
    case 581u: goto L_08903AFC;
    case 582u: goto L_08903B0C;
    case 583u: goto L_08903B10;
    case 584u: goto L_08903B20;
    case 585u: goto L_08903B44;
    case 586u: goto L_08903B4C;
    case 587u: goto L_08903B64;
    case 588u: goto L_08903B78;
    case 589u: goto L_08903B98;
    case 590u: goto L_08903BB0;
    case 591u: goto L_08903BC4;
    case 592u: goto L_08903BD0;
    case 593u: goto L_08903BE4;
    case 594u: goto L_08903BF4;
    case 595u: goto L_08903C08;
    case 596u: goto L_08903C60;
    case 597u: goto L_08903C80;
    case 598u: goto L_08903CA0;
    case 599u: goto L_08903CA8;
    case 600u: goto L_08903CB0;
    case 601u: goto L_08903CBC;
    case 602u: goto L_08903CCC;
    case 603u: goto L_08903CDC;
    case 604u: goto L_08903CEC;
    case 605u: goto L_08903CFC;
    case 606u: goto L_08903D14;
    case 607u: goto L_08903D20;
    case 608u: goto L_08903D2C;
    case 609u: goto L_08903D3C;
    case 610u: goto L_08903D48;
    case 611u: goto L_08903D54;
    case 612u: goto L_08903D64;
    case 613u: goto L_08903D6C;
    case 614u: goto L_08903D78;
    case 615u: goto L_08903D84;
    case 616u: goto L_08903D8C;
    case 617u: goto L_08903DA4;
    case 618u: goto L_08903DBC;
    case 619u: goto L_08903DC8;
    case 620u: goto L_08903DE0;
    case 621u: goto L_08903DFC;
    case 622u: goto L_08903E1C;
    case 623u: goto L_08903E38;
    case 624u: goto L_08903E58;
    case 625u: goto L_08903E74;
    case 626u: goto L_08903E90;
    case 627u: goto L_08903EAC;
    case 628u: goto L_08903EB8;
    case 629u: goto L_08903ED0;
    case 630u: goto L_08903ED8;
    case 631u: goto L_08903EE4;
    case 632u: goto L_08903F30;
    case 633u: goto L_08903F38;
    case 634u: goto L_08903F50;
    case 635u: goto L_08903F5C;
    case 636u: goto L_08903F70;
    case 637u: goto L_08903F84;
    case 638u: goto L_08903F8C;
    case 639u: goto L_08903F94;
    case 640u: goto L_08903F9C;
    case 641u: goto L_08903FA4;
    case 642u: goto L_08903FAC;
    case 643u: goto L_08903FB4;
    case 644u: goto L_08903FC0;
    case 645u: goto L_08903FD0;
    case 646u: goto L_08903FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08900000:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900024;
      }
      goto L_08900014;
    }
L_08900014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900058;
      }
      goto L_0890001C;
    }
L_0890001C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900024;
    }
L_08900024:
    ctx.gpr[31] = (0x0890002Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x0890002Cu) goto L_0890002C;
    return;
L_0890002C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900090;
      }
      goto L_08900058;
    }
L_08900058:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900098;
      }
      goto L_08900088;
    }
L_08900088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900090;
    }
L_08900090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900098;
    }
L_08900098:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x089000C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x089000C0u) goto L_089000C0;
    return;
L_089000C0:
    ctx.gpr[31] = (0x089000C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 185u, 0x089D58C4u>(ctx, &aot_mem) && ctx.pc == 0x089000C8u) goto L_089000C8;
    return;
L_089000C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x089000E0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x089000E0u) goto L_089000E0;
    return;
L_089000E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_089000E8;
    }
L_089000E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_089000F0;
    }
L_089000F0:
    ctx.gpr[31] = (0x089000F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089000F8u) goto L_089000F8;
    return;
L_089000F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089003BC;
      }
      goto L_08900100;
    }
L_08900100:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x0890010Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0890010Cu) goto L_0890010C;
    return;
L_0890010C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08900120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x08900120u) goto L_08900120;
    return;
L_08900120:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0890013Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890013Cu) goto L_0890013C;
    return;
L_0890013C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08900148u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08900148u) goto L_08900148;
    return;
L_08900148:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16262u << 16u);
      if (branch_taken) {
          goto L_08900170;
      }
      goto L_0890015C;
    }
L_0890015C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16262u << 16u);
    goto L_08900170;
L_08900170:
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08900188u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x08900188u) goto L_08900188;
    return;
L_08900188:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08900194u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08900194u) goto L_08900194;
    return;
L_08900194:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089001B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089001B4u) goto L_089001B4;
    return;
L_089001B4:
    ctx.gpr[31] = (0x089001BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x089001BCu) goto L_089001BC;
    return;
L_089001BC:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089001D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 409u, 0x088EA4CCu>(ctx, &aot_mem) && ctx.pc == 0x089001D0u) goto L_089001D0;
    return;
L_089001D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089001DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089001DCu) goto L_089001DC;
    return;
L_089001DC:
    ctx.gpr[31] = (0x089001E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089001E4u) goto L_089001E4;
    return;
L_089001E4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (16560u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(480), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0890020Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 462u, 0x088C300Cu>(ctx, &aot_mem) && ctx.pc == 0x0890020Cu) goto L_0890020C;
    return;
L_0890020C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08900238;
      }
      goto L_08900220;
    }
L_08900220:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089002B4;
      }
      goto L_08900238;
    }
L_08900238:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0890024Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(484));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 302u, 0x0890DFD4u>(ctx, &aot_mem) && ctx.pc == 0x0890024Cu) goto L_0890024C;
    return;
L_0890024C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089002B4;
      }
      goto L_08900254;
    }
L_08900254:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23476)));
    ctx.gpr[31] = (0x08900264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08900264u) goto L_08900264;
    return;
L_08900264:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890028C;
      }
      goto L_0890026C;
    }
L_0890026C:
    ctx.gpr[31] = (0x08900274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08900274u) goto L_08900274;
    return;
L_08900274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890028C;
      }
      goto L_08900284;
    }
L_08900284:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23480)));
    goto L_0890028C;
L_0890028C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089002B4;
      }
      goto L_089002A8;
    }
L_089002A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089002B4;
L_089002B4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x089002C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089002C0u) goto L_089002C0;
    return;
L_089002C0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089002ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089002ECu) goto L_089002EC;
    return;
L_089002EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900364;
      }
      goto L_089002F4;
    }
L_089002F4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x08900304u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08900304u) goto L_08900304;
    return;
L_08900304:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08900314u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08900314u) goto L_08900314;
    return;
L_08900314:
    ctx.gpr[31] = (0x0890031Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x0890031Cu) goto L_0890031C;
    return;
L_0890031C:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890035C;
      }
      goto L_08900334;
    }
L_08900334:
    ctx.gpr[31] = (0x0890033Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x0890033Cu) goto L_0890033C;
    return;
L_0890033C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890036C;
      }
      goto L_08900354;
    }
L_08900354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_0890035C;
    }
L_0890035C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900364;
    }
L_08900364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_0890036C;
    }
L_0890036C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x08900394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x08900394u) goto L_08900394;
    return;
L_08900394:
    ctx.gpr[31] = (0x0890039Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 185u, 0x089D58C4u>(ctx, &aot_mem) && ctx.pc == 0x0890039Cu) goto L_0890039C;
    return;
L_0890039C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x089003B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x089003B4u) goto L_089003B4;
    return;
L_089003B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_089003BC;
    }
L_089003BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089000E8;
      }
      goto L_089003C4;
    }
L_089003C4:
    ctx.gpr[31] = (0x089003CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089003CCu) goto L_089003CC;
    return;
L_089003CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089006D8;
      }
      goto L_089003D4;
    }
L_089003D4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x089003E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089003E0u) goto L_089003E0;
    return;
L_089003E0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089003F4u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x089003F4u) goto L_089003F4;
    return;
L_089003F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08900400u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08900400u) goto L_08900400;
    return;
L_08900400:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08900410u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08900410u) goto L_08900410;
    return;
L_08900410:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0890041Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 504u, 0x088EAC4Cu>(ctx, &aot_mem) && ctx.pc == 0x0890041Cu) goto L_0890041C;
    return;
L_0890041C:
    ctx.gpr[4] = (16468u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15208u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[31] = (0x08900434u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x08900434u) goto L_08900434;
    return;
L_08900434:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08900440u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08900440u) goto L_08900440;
    return;
L_08900440:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08900454u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08900454u) goto L_08900454;
    return;
L_08900454:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08900460u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08900460u) goto L_08900460;
    return;
L_08900460:
    ctx.gpr[31] = (0x08900468u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08900468u) goto L_08900468;
    return;
L_08900468:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890047Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 409u, 0x088EA4CCu>(ctx, &aot_mem) && ctx.pc == 0x0890047Cu) goto L_0890047C;
    return;
L_0890047C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08900488u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08900488u) goto L_08900488;
    return;
L_08900488:
    ctx.gpr[31] = (0x08900490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08900490u) goto L_08900490;
    return;
L_08900490:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(560), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089004B8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 462u, 0x088C300Cu>(ctx, &aot_mem) && ctx.pc == 0x089004B8u) goto L_089004B8;
    return;
L_089004B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089004E4;
      }
      goto L_089004CC;
    }
L_089004CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08900564;
      }
      goto L_089004E4;
    }
L_089004E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x089004F8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(564));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 302u, 0x0890DFD4u>(ctx, &aot_mem) && ctx.pc == 0x089004F8u) goto L_089004F8;
    return;
L_089004F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900564;
      }
      goto L_08900500;
    }
L_08900500:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23476)));
    ctx.gpr[31] = (0x08900510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08900510u) goto L_08900510;
    return;
L_08900510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890053C;
      }
      goto L_08900518;
    }
L_08900518:
    ctx.gpr[31] = (0x08900520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08900520u) goto L_08900520;
    return;
L_08900520:
    ctx.gpr[31] = (0x08900528u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x08900528u) goto L_08900528;
    return;
L_08900528:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890053C;
      }
      goto L_08900534;
    }
L_08900534:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23480)));
    goto L_0890053C;
L_0890053C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900564;
      }
      goto L_08900558;
    }
L_08900558:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08900564;
L_08900564:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x08900570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08900570u) goto L_08900570;
    return;
L_08900570:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0890059Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890059Cu) goto L_0890059C;
    return;
L_0890059C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900624;
      }
      goto L_089005A4;
    }
L_089005A4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x089005B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089005B4u) goto L_089005B4;
    return;
L_089005B4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089005C8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x089005C8u) goto L_089005C8;
    return;
L_089005C8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[31] = (0x089005D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089005D8u) goto L_089005D8;
    return;
L_089005D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089005E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x089005E8u) goto L_089005E8;
    return;
L_089005E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x089005F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x089005F4u) goto L_089005F4;
    return;
L_089005F4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08900604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x08900604u) goto L_08900604;
    return;
L_08900604:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890062C;
      }
      goto L_0890061C;
    }
L_0890061C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900654;
      }
      goto L_08900624;
    }
L_08900624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_0890062C;
    }
L_0890062C:
    ctx.gpr[31] = (0x08900634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x08900634u) goto L_08900634;
    return;
L_08900634:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08900640u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 405u, 0x088EA464u>(ctx, &aot_mem) && ctx.pc == 0x08900640u) goto L_08900640;
    return;
L_08900640:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890067C;
      }
      goto L_08900654;
    }
L_08900654:
    ctx.gpr[31] = (0x0890065Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x0890065Cu) goto L_0890065C;
    return;
L_0890065C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900684;
      }
      goto L_08900674;
    }
L_08900674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_0890067C;
    }
L_0890067C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900684;
    }
L_08900684:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089006A0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x089006A0u) goto L_089006A0;
    return;
L_089006A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089006B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x089006B0u) goto L_089006B0;
    return;
L_089006B0:
    ctx.gpr[31] = (0x089006B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 185u, 0x089D58C4u>(ctx, &aot_mem) && ctx.pc == 0x089006B8u) goto L_089006B8;
    return;
L_089006B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x089006D0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x089006D0u) goto L_089006D0;
    return;
L_089006D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_089006D8;
    }
L_089006D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089000E8;
      }
      goto L_089006E0;
    }
L_089006E0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x089006ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089006ECu) goto L_089006EC;
    return;
L_089006EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089006F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x089006F8u) goto L_089006F8;
    return;
L_089006F8:
    ctx.gpr[31] = (0x08900700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08900700u) goto L_08900700;
    return;
L_08900700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890073C;
      }
      goto L_08900708;
    }
L_08900708:
    ctx.gpr[31] = (0x08900710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08900710u) goto L_08900710;
    return;
L_08900710:
    ctx.gpr[31] = (0x08900718u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x08900718u) goto L_08900718;
    return;
L_08900718:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890073C;
      }
      goto L_08900724;
    }
L_08900724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16824u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08900750;
      }
      goto L_0890073C;
    }
L_0890073C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16824u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08900750;
L_08900750:
    ctx.gpr[31] = (0x08900758u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x08900758u) goto L_08900758;
    return;
L_08900758:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08900764u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08900764u) goto L_08900764;
    return;
L_08900764:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08900770u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 504u, 0x088EAC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08900770u) goto L_08900770;
    return;
L_08900770:
    ctx.gpr[4] = (16417u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x0890078Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x0890078Cu) goto L_0890078C;
    return;
L_0890078C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08900798u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08900798u) goto L_08900798;
    return;
L_08900798:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089007B0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x089007B0u) goto L_089007B0;
    return;
L_089007B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089007BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089007BCu) goto L_089007BC;
    return;
L_089007BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089007C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x089007C8u) goto L_089007C8;
    return;
L_089007C8:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089007DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 409u, 0x088EA4CCu>(ctx, &aot_mem) && ctx.pc == 0x089007DCu) goto L_089007DC;
    return;
L_089007DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089007E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089007E8u) goto L_089007E8;
    return;
L_089007E8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08900800u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08900800u) goto L_08900800;
    return;
L_08900800:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900840;
      }
      goto L_08900810;
    }
L_08900810:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089008C0;
      }
      goto L_08900828;
    }
L_08900828:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089008C0;
      }
      goto L_08900840;
    }
L_08900840:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08900854u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(612));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 302u, 0x0890DFD4u>(ctx, &aot_mem) && ctx.pc == 0x08900854u) goto L_08900854;
    return;
L_08900854:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089008C0;
      }
      goto L_0890085C;
    }
L_0890085C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23476)));
    ctx.gpr[31] = (0x0890086Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0890086Cu) goto L_0890086C;
    return;
L_0890086C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900898;
      }
      goto L_08900874;
    }
L_08900874:
    ctx.gpr[31] = (0x0890087Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0890087Cu) goto L_0890087C;
    return;
L_0890087C:
    ctx.gpr[31] = (0x08900884u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x08900884u) goto L_08900884;
    return;
L_08900884:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08900898;
      }
      goto L_08900890;
    }
L_08900890:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23480)));
    goto L_08900898;
L_08900898:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089008C0;
      }
      goto L_089008B4;
    }
L_089008B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089008C0;
L_089008C0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x089008CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089008CCu) goto L_089008CC;
    return;
L_089008CC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089008F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089008F8u) goto L_089008F8;
    return;
L_089008F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900970;
      }
      goto L_08900900;
    }
L_08900900:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08900910u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08900910u) goto L_08900910;
    return;
L_08900910:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08900920u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08900920u) goto L_08900920;
    return;
L_08900920:
    ctx.gpr[31] = (0x08900928u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x08900928u) goto L_08900928;
    return;
L_08900928:
    ctx.gpr[4] = (16996u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900968;
      }
      goto L_08900940;
    }
L_08900940:
    ctx.gpr[31] = (0x08900948u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x08900948u) goto L_08900948;
    return;
L_08900948:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900978;
      }
      goto L_08900960;
    }
L_08900960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900968;
    }
L_08900968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900970;
    }
L_08900970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900978;
    }
L_08900978:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08900994u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08900994u) goto L_08900994;
    return;
L_08900994:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089009A4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x089009A4u) goto L_089009A4;
    return;
L_089009A4:
    ctx.gpr[31] = (0x089009ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 185u, 0x089D58C4u>(ctx, &aot_mem) && ctx.pc == 0x089009ACu) goto L_089009AC;
    return;
L_089009AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x089009C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x089009C4u) goto L_089009C4;
    return;
L_089009C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_089009CC;
    }
L_089009CC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x089009D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089009D8u) goto L_089009D8;
    return;
L_089009D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089009E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x089009E4u) goto L_089009E4;
    return;
L_089009E4:
    ctx.gpr[31] = (0x089009ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089009ECu) goto L_089009EC;
    return;
L_089009EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900A28;
      }
      goto L_089009F4;
    }
L_089009F4:
    ctx.gpr[31] = (0x089009FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089009FCu) goto L_089009FC;
    return;
L_089009FC:
    ctx.gpr[31] = (0x08900A04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x08900A04u) goto L_08900A04;
    return;
L_08900A04:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08900A28;
      }
      goto L_08900A10;
    }
L_08900A10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08900A3C;
      }
      goto L_08900A28;
    }
L_08900A28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08900A3C;
L_08900A3C:
    ctx.gpr[31] = (0x08900A44u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x08900A44u) goto L_08900A44;
    return;
L_08900A44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08900A50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08900A50u) goto L_08900A50;
    return;
L_08900A50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08900A5Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 504u, 0x088EAC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08900A5Cu) goto L_08900A5C;
    return;
L_08900A5C:
    ctx.gpr[4] = (16122u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13790u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x08900A78u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x08900A78u) goto L_08900A78;
    return;
L_08900A78:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08900A84u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08900A84u) goto L_08900A84;
    return;
L_08900A84:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08900A9Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08900A9Cu) goto L_08900A9C;
    return;
L_08900A9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08900AA8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08900AA8u) goto L_08900AA8;
    return;
L_08900AA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08900AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08900AB4u) goto L_08900AB4;
    return;
L_08900AB4:
    ctx.gpr[4] = (16712u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08900AC8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 409u, 0x088EA4CCu>(ctx, &aot_mem) && ctx.pc == 0x08900AC8u) goto L_08900AC8;
    return;
L_08900AC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08900AD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08900AD4u) goto L_08900AD4;
    return;
L_08900AD4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08900AECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08900AECu) goto L_08900AEC;
    return;
L_08900AEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900B2C;
      }
      goto L_08900AFC;
    }
L_08900AFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900BAC;
      }
      goto L_08900B14;
    }
L_08900B14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08900BAC;
      }
      goto L_08900B2C;
    }
L_08900B2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08900B40u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(660));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 302u, 0x0890DFD4u>(ctx, &aot_mem) && ctx.pc == 0x08900B40u) goto L_08900B40;
    return;
L_08900B40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900BAC;
      }
      goto L_08900B48;
    }
L_08900B48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23476)));
    ctx.gpr[31] = (0x08900B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08900B58u) goto L_08900B58;
    return;
L_08900B58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900B84;
      }
      goto L_08900B60;
    }
L_08900B60:
    ctx.gpr[31] = (0x08900B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08900B68u) goto L_08900B68;
    return;
L_08900B68:
    ctx.gpr[31] = (0x08900B70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x08900B70u) goto L_08900B70;
    return;
L_08900B70:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08900B84;
      }
      goto L_08900B7C;
    }
L_08900B7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23480)));
    goto L_08900B84;
L_08900B84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900BAC;
      }
      goto L_08900BA0;
    }
L_08900BA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08900BAC;
L_08900BAC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x08900BB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08900BB8u) goto L_08900BB8;
    return;
L_08900BB8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08900BE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08900BE4u) goto L_08900BE4;
    return;
L_08900BE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900C5C;
      }
      goto L_08900BEC;
    }
L_08900BEC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x08900BFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08900BFCu) goto L_08900BFC;
    return;
L_08900BFC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08900C0Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08900C0Cu) goto L_08900C0C;
    return;
L_08900C0C:
    ctx.gpr[31] = (0x08900C14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x08900C14u) goto L_08900C14;
    return;
L_08900C14:
    ctx.gpr[4] = (16912u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900C54;
      }
      goto L_08900C2C;
    }
L_08900C2C:
    ctx.gpr[31] = (0x08900C34u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x08900C34u) goto L_08900C34;
    return;
L_08900C34:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900C64;
      }
      goto L_08900C4C;
    }
L_08900C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900C54;
    }
L_08900C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900C5C;
    }
L_08900C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900C64;
    }
L_08900C64:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08900C80u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08900C80u) goto L_08900C80;
    return;
L_08900C80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08900C90u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x08900C90u) goto L_08900C90;
    return;
L_08900C90:
    ctx.gpr[31] = (0x08900C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 185u, 0x089D58C4u>(ctx, &aot_mem) && ctx.pc == 0x08900C98u) goto L_08900C98;
    return;
L_08900C98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08900CB0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x08900CB0u) goto L_08900CB0;
    return;
L_08900CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900CB8;
    }
L_08900CB8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08900CC4u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 185u, 0x089D58C4u>(ctx, &aot_mem) && ctx.pc == 0x08900CC4u) goto L_08900CC4;
    return;
L_08900CC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08900CDCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x08900CDCu) goto L_08900CDC;
    return;
L_08900CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08900CE4;
      }
      goto L_08900CE4;
    }
L_08900CE4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1004)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1020)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1344));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1308), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1316), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1324), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1340), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1276), ctx.gpr[5]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(99)));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[6] = (16230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08900DF8;
      }
      goto L_08900DDC;
    }
L_08900DDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08900DF8;
      }
      goto L_08900DE8;
    }
L_08900DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08900E00;
      }
      goto L_08900DF8;
    }
L_08900DF8:
    ctx.gpr[31] = (0x08900E00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x0890A41Cu>(ctx, &aot_mem) && ctx.pc == 0x08900E00u) goto L_08900E00;
    return;
L_08900E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08900E18;
      }
      goto L_08900E0C;
    }
L_08900E0C:
    ctx.gpr[31] = (0x08900E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08900E14u) goto L_08900E14;
    return;
L_08900E14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    goto L_08900E18;
L_08900E18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08900E6C;
      }
      goto L_08900E44;
    }
L_08900E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    goto L_08900E6C;
L_08900E6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_08900EA4;
    }
    goto L_08900E7C;
L_08900E7C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08900EC0;
      }
      goto L_08900EA4;
    }
L_08900EA4:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08900EC0;
L_08900EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08900F28;
      }
      goto L_08900ECC;
    }
L_08900ECC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
      if (branch_taken) {
          goto L_08900F04;
      }
      goto L_08900EDC;
    }
L_08900EDC:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08900F24;
      }
      goto L_08900F04;
    }
L_08900F04:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    goto L_08900F24;
L_08900F24:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    goto L_08900F28;
L_08900F28:
    ctx.gpr[31] = (0x08900F30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08902C58;
L_08900F30:
    ctx.gpr[31] = (0x08900F38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 438u, 0x088EED08u>(ctx, &aot_mem) && ctx.pc == 0x08900F38u) goto L_08900F38;
    return;
L_08900F38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6859)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900F4C;
      }
      goto L_08900F44;
    }
L_08900F44:
    ctx.gpr[31] = (0x08900F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 455u, 0x088EEE24u>(ctx, &aot_mem) && ctx.pc == 0x08900F4Cu) goto L_08900F4C;
    return;
L_08900F4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900F60;
      }
      goto L_08900F58;
    }
L_08900F58:
    ctx.gpr[31] = (0x08900F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 286u, 0x088EE024u>(ctx, &aot_mem) && ctx.pc == 0x08900F60u) goto L_08900F60;
    return;
L_08900F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08900F6Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x08900F6Cu) goto L_08900F6C;
    return;
L_08900F6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900FDC;
      }
      goto L_08900FA0;
    }
L_08900FA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08900FDC;
      }
      goto L_08900FD4;
    }
L_08900FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901028;
      }
      goto L_08900FDC;
    }
L_08900FDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08901008u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08901008u) goto L_08901008;
    return;
L_08901008:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08901028;
      }
      goto L_0890101C;
    }
L_0890101C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08901028;
L_08901028:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08901050u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 618u, 0x088EFCE0u>(ctx, &aot_mem) && ctx.pc == 0x08901050u) goto L_08901050;
    return;
L_08901050:
    { // Free aim: the follow camera (mode 4) over the right shoulder while aiming (lcs_free_aim_shoulder).
        const std::uint32_t cam = ctx.gpr[16] + 400u + aot_mem.aot_load8(ctx.gpr[16] + 127u) * 656u;
        const std::uint32_t target = aot_mem.aot_load32(cam + 596u);
        if (static_cast<std::int16_t>(aot_mem.aot_load16(cam + 28u)) == 4 && target != 0u) {
            const auto f = [&](std::uint32_t a) { return std::bit_cast<float>(aot_mem.aot_load32(a)); };
            float source[3] = {f(cam + 432u), f(cam + 436u), f(cam + 440u)};
            const float front[3] = {f(cam + 416u), f(cam + 420u), f(cam + 424u)};
            const float player[3] = {f(target + 48u), f(target + 52u), f(target + 56u)};
            float fov = f(cam + 196u);
            if (lcs::lcs_free_aim_shoulder(source, front, player, fov)) {
                for (std::uint32_t i = 0u; i < 3u; ++i) {
                    aot_mem.aot_store32(cam + 432u + i * 4u, std::bit_cast<std::uint32_t>(source[i]));
                    aot_mem.aot_store32(cam + 448u + i * 4u, std::bit_cast<std::uint32_t>(source[i]));
                }
                aot_mem.aot_store32(cam + 196u, std::bit_cast<std::uint32_t>(fov));
            }
        }
    }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08901078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 93u, 0x088F9194u>(ctx, &aot_mem) && ctx.pc == 0x08901078u) goto L_08901078;
    return;
L_08901078:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089010E8;
      }
      goto L_089010AC;
    }
L_089010AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089010E8;
      }
      goto L_089010E0;
    }
L_089010E0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[22];
      if (branch_taken) {
          goto L_08901138;
      }
      goto L_089010E8;
    }
L_089010E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08901114u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08901114u) goto L_08901114;
    return;
L_08901114:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08901134;
      }
      goto L_08901128;
    }
L_08901128:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08901134;
L_08901134:
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    goto L_08901138;
L_08901138:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(145)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), ctx.gpr[18]);
        goto L_08901170;
    }
    goto L_08901144;
L_08901144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), ctx.gpr[18]);
        goto L_08901170;
    }
    goto L_08901160;
L_08901160:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), ctx.gpr[18]);
    goto L_08901170;
L_08901170:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(105)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890118C;
      }
      goto L_0890117C;
    }
L_0890117C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0890118Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x0890118Cu) goto L_0890118C;
    return;
L_0890118C:
    ctx.gpr[31] = (0x08901194u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08901194u) goto L_08901194;
    return;
L_08901194:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089011C0;
      }
      goto L_089011B8;
    }
L_089011B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089011C0;
L_089011C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08901210;
      }
      goto L_089011EC;
    }
L_089011EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901210;
      }
      goto L_0890120C;
    }
L_0890120C:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    goto L_08901210;
L_08901210:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901224;
      }
      goto L_0890121C;
    }
L_0890121C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089013F4;
      }
      goto L_08901224;
    }
L_08901224:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(101)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901368;
      }
      goto L_08901288;
    }
L_08901288:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2656));
    ctx.gpr[31] = (0x08901294u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08901294u) goto L_08901294;
    return;
L_08901294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089013C0;
      }
      goto L_08901368;
    }
L_08901368:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(816));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
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
    goto L_089013C0;
L_089013C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23888), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08902144;
      }
      goto L_089013F4;
    }
L_089013F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
        goto L_08901414;
    }
    goto L_08901414;
L_08901414:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0890142C;
      }
      goto L_08901420;
    }
L_08901420:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0890142C;
L_0890142C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08901448;
      }
      goto L_0890143C;
    }
L_0890143C:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08901448;
L_08901448:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08901464;
      }
      goto L_08901458;
    }
L_08901458:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08901464;
L_08901464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_08901480;
      }
      goto L_08901474;
    }
L_08901474:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_08901480;
L_08901480:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890149C;
      }
      goto L_08901494;
    }
L_08901494:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089014B8;
      }
      goto L_0890149C;
    }
L_0890149C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089014B8;
      }
      goto L_089014B4;
    }
L_089014B4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089014B8;
L_089014B8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7080)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08901570;
      }
      goto L_089014CC;
    }
L_089014CC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7080)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2624));
      if (branch_taken) {
          goto L_089014E8;
      }
      goto L_089014E0;
    }
L_089014E0:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_089014F8;
      }
      goto L_089014E8;
    }
L_089014E8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7080)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_089014F8;
L_089014F8:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2576));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(2528));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901654;
      }
      goto L_08901570;
    }
L_08901570:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7080)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08901654;
      }
      goto L_08901584;
    }
L_08901584:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7076)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2624));
      if (branch_taken) {
          goto L_089015A8;
      }
      goto L_08901598;
    }
L_08901598:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_089015BC;
      }
      goto L_089015A8;
    }
L_089015A8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7080)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7084)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_089015BC;
L_089015BC:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(720));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
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
    goto L_08901654;
L_08901654:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7072)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08901A94;
      }
      goto L_08901668;
    }
L_08901668:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7072)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2624));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(2608));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(2640));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0890169C;
      }
      goto L_08901694;
    }
L_08901694:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_089016AC;
      }
      goto L_0890169C;
    }
L_0890169C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7072)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_089016AC;
L_089016AC:
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2560));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2512));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089017E8;
      }
      goto L_08901718;
    }
L_08901718:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23884)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089017E8;
      }
      goto L_08901758;
    }
L_08901758:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[31] = (0x08901764u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08901764u) goto L_08901764;
    return;
L_08901764:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08901784;
      }
      goto L_08901778;
    }
L_08901778:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08901784;
L_08901784:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23884)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2608), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23884)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    goto L_089017E8;
L_089017E8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2592));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2544));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890186Cu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 274u, 0x088EDEE8u>(ctx, &aot_mem) && ctx.pc == 0x0890186Cu) goto L_0890186C;
    return;
L_0890186C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089018C4;
      }
      goto L_0890189C;
    }
L_0890189C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089018D0;
      }
      goto L_089018C4;
    }
L_089018C4:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_089018D0;
L_089018D0:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08901A0C;
      }
      goto L_08901920;
    }
L_08901920:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08901A0C;
      }
      goto L_08901950;
    }
L_08901950:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901A84;
      }
      goto L_08901A0C;
    }
L_08901A0C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08901A84;
L_08901A84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902078;
      }
      goto L_08901A94;
    }
L_08901A94:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7072)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08902078;
      }
      goto L_08901AA8;
    }
L_08901AA8:
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08902078;
      }
      goto L_08901ABC;
    }
L_08901ABC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7076)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(2608));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(2640));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_08901AE4;
      }
      goto L_08901ADC;
    }
L_08901ADC:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08901AF8;
      }
      goto L_08901AE4;
    }
L_08901AE4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7072)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7076)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08901AF8;
L_08901AF8:
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08901B3Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892751Cu>(ctx, &aot_mem) && ctx.pc == 0x08901B3Cu) goto L_08901B3C;
    return;
L_08901B3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901BB8;
      }
      goto L_08901B44;
    }
L_08901B44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901BE4;
      }
      goto L_08901BB8;
    }
L_08901BB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08901BE4;
L_08901BE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901CBC;
      }
      goto L_08901BF0;
    }
L_08901BF0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23884)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08901CBC;
      }
      goto L_08901C34;
    }
L_08901C34:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[31] = (0x08901C40u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08901C40u) goto L_08901C40;
    return;
L_08901C40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08901C60;
      }
      goto L_08901C54;
    }
L_08901C54:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08901C60;
L_08901C60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23884)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08901CBC;
L_08901CBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08901D0C;
      }
      goto L_08901CD0;
    }
L_08901CD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08901D34;
      }
      goto L_08901D0C;
    }
L_08901D0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08901D34;
L_08901D34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08901D4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892751Cu>(ctx, &aot_mem) && ctx.pc == 0x08901D4Cu) goto L_08901D4C;
    return;
L_08901D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901DC8;
      }
      goto L_08901D54;
    }
L_08901D54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901DF4;
      }
      goto L_08901DC8;
    }
L_08901DC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
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
    goto L_08901DF4;
L_08901DF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08901E2Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(268));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 472u, 0x088EA9B0u>(ctx, &aot_mem) && ctx.pc == 0x08901E2Cu) goto L_08901E2C;
    return;
L_08901E2C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08901E5Cu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 274u, 0x088EDEE8u>(ctx, &aot_mem) && ctx.pc == 0x08901E5Cu) goto L_08901E5C;
    return;
L_08901E5C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08901EA0;
      }
      goto L_08901E88;
    }
L_08901E88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
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
    goto L_08901EA0;
L_08901EA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08901FB8;
      }
      goto L_08901ECC;
    }
L_08901ECC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08901FB8;
      }
      goto L_08901EFC;
    }
L_08901EFC:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902030;
      }
      goto L_08901FB8;
    }
L_08901FB8:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08902030;
L_08902030:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08902050;
      }
      goto L_08902044;
    }
L_08902044:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08902078;
      }
      goto L_08902050;
    }
L_08902050:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08902078;
L_08902078:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[31] = (0x089020ACu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089020ACu) goto L_089020AC;
    return;
L_089020AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089020CC;
      }
      goto L_089020C0;
    }
L_089020C0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089020CC;
L_089020CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x089020DCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089020DCu) goto L_089020DC;
    return;
L_089020DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08902100;
      }
      goto L_089020F0;
    }
L_089020F0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08902100;
L_08902100:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08902144u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 552u, 0x088EB15Cu>(ctx, &aot_mem) && ctx.pc == 0x08902144u) goto L_08902144;
    return;
L_08902144:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902210;
      }
      goto L_08902150;
    }
L_08902150:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902210;
      }
      goto L_0890215C;
    }
L_0890215C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08902210;
      }
      goto L_08902168;
    }
L_08902168:
    ctx.gpr[31] = (0x08902170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 416u, 0x08ACA910u>(ctx, &aot_mem) && ctx.pc == 0x08902170u) goto L_08902170;
    return;
L_08902170:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902210;
      }
      goto L_08902178;
    }
L_08902178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902210;
      }
      goto L_08902184;
    }
L_08902184:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), 0u);
    ctx.gpr[31] = (0x08902190u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08902190u) goto L_08902190;
    return;
L_08902190:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x089021CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x089021CCu) goto L_089021CC;
    return;
L_089021CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902210;
      }
      goto L_089021D4;
    }
L_089021D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[31] = (0x08902210u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x08902210u) goto L_08902210;
    return;
L_08902210:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
      if (branch_taken) {
          goto L_089023A8;
      }
      goto L_08902224;
    }
L_08902224:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22296)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[5] = (17536u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[17];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2256));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6352));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (48588u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089023A8;
L_089023A8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089023BCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 403u, 0x088EA424u>(ctx, &aot_mem) && ctx.pc == 0x089023BCu) goto L_089023BC;
    return;
L_089023BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x089023C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x089023C8u) goto L_089023C8;
    return;
L_089023C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08902454;
      }
      goto L_08902448;
    }
L_08902448:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08902454;
L_08902454:
    ctx.gpr[4] = (14738u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52471u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0890247C;
    }
    goto L_0890247C;
L_0890247C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08902490;
    }
    goto L_08902490;
L_08902490:
    ctx.gpr[31] = (0x08902498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08902498u) goto L_08902498;
    return;
L_08902498:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] & 240u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] & 3840u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08902588;
      }
      goto L_08902524;
    }
L_08902524:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7172)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08902588;
      }
      goto L_08902534;
    }
L_08902534:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 151 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890255C;
      }
      goto L_08902558;
    }
L_08902558:
    ctx.gpr[4] = (0u | 150u);
    goto L_0890255C;
L_0890255C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7128)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7132)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7136)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7128), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7136), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7132), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7172), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089025BC;
      }
      goto L_08902588;
    }
L_08902588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7172)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
      if (branch_taken) {
          goto L_089025BC;
      }
      goto L_08902598;
    }
L_08902598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7136)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7132), ctx.gpr[5]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7172), 0u);
    goto L_089025BC;
L_089025BC:
    ctx.gpr[31] = (0x089025C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 568u, 0x088EF70Cu>(ctx, &aot_mem) && ctx.pc == 0x089025C4u) goto L_089025C4;
    return;
L_089025C4:
    ctx.gpr[31] = (0x089025CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 419u, 0x088EEA80u>(ctx, &aot_mem) && ctx.pc == 0x089025CCu) goto L_089025CC;
    return;
L_089025CC:
    ctx.gpr[31] = (0x089025D4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 162u, 0x0883CBECu>(ctx, &aot_mem) && ctx.pc == 0x089025D4u) goto L_089025D4;
    return;
L_089025D4:
    ctx.gpr[31] = (0x089025DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x088735E0u>(ctx, &aot_mem) && ctx.pc == 0x089025DCu) goto L_089025DC;
    return;
L_089025DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2676), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08902658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 265u, 0x08A1D594u>(ctx, &aot_mem) && ctx.pc == 0x08902658u) goto L_08902658;
    return;
L_08902658:
    ctx.gpr[31] = (0x08902660u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x08902660u) goto L_08902660;
    return;
L_08902660:
    ctx.gpr[31] = (0x08902668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 147u, 0x089093A0u>(ctx, &aot_mem) && ctx.pc == 0x08902668u) goto L_08902668;
    return;
L_08902668:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[20] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08902694;
      }
      goto L_08902680;
    }
L_08902680:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08902690u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 312u, 0x0890E208u>(ctx, &aot_mem) && ctx.pc == 0x08902690u) goto L_08902690;
    return;
L_08902690:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08902694;
L_08902694:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089026C0;
      }
      goto L_089026A4;
    }
L_089026A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(681)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089026C0;
      }
      goto L_089026B0;
    }
L_089026B0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089027D8;
      }
      goto L_089026C0;
    }
L_089026C0:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08902728;
      }
      goto L_089026F8;
    }
L_089026F8:
    ctx.gpr[31] = (0x08902700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08902700u) goto L_08902700;
    return;
L_08902700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902728;
      }
      goto L_08902708;
    }
L_08902708:
    ctx.gpr[31] = (0x08902710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08902710u) goto L_08902710;
    return;
L_08902710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890273C;
      }
      goto L_08902728;
    }
L_08902728:
    ctx.gpr[31] = (0x08902730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08902730u) goto L_08902730;
    return;
L_08902730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089027C0;
      }
      goto L_0890273C;
    }
L_0890273C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0890276C;
    }
    goto L_0890276C;
L_0890276C:
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08902794;
    }
    goto L_08902794;
L_08902794:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x089027A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 608u, 0x088735E8u>(ctx, &aot_mem) && ctx.pc == 0x089027A4u) goto L_089027A4;
    return;
L_089027A4:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089027C0;
      }
      goto L_089027B4;
    }
L_089027B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089027C0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x089027C0u) goto L_089027C0;
    return;
L_089027C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089027D8;
      }
      goto L_089027D4;
    }
L_089027D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_089027D8;
L_089027D8:
    ctx.gpr[31] = (0x089027E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 608u, 0x088735E8u>(ctx, &aot_mem) && ctx.pc == 0x089027E0u) goto L_089027E0;
    return;
L_089027E0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7896), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089027F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 602u, 0x08873598u>(ctx, &aot_mem) && ctx.pc == 0x089027F0u) goto L_089027F0;
    return;
L_089027F0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7892), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26512)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    // TheCamera+224, LOD distance multiplier. Recomputed each camera update.
    ctx.fpr[12] = ctx.fpr[12] * lcs::view_distance_scale();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890283C;
      }
      goto L_08902820;
    }
L_08902820:
    ctx.gpr[31] = (0x08902828u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 339u, 0x088EE418u>(ctx, &aot_mem) && ctx.pc == 0x08902828u) goto L_08902828;
    return;
L_08902828:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890283C;
      }
      goto L_08902830;
    }
L_08902830:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890283C;
L_0890283C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(97)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08902854;
      }
      goto L_08902848;
    }
L_08902848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08902870;
      }
      goto L_08902854;
    }
L_08902854:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    goto L_08902870;
L_08902870:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2400)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2404)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2408)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089028FC;
      }
      goto L_089028DC;
    }
L_089028DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), 0u);
    goto L_089028FC;
L_089028FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089029AC;
      }
      goto L_08902948;
    }
L_08902948:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089029AC;
      }
      goto L_08902978;
    }
L_08902978:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(848));
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_089029AC;
L_089029AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902C08;
      }
      goto L_089029B8;
    }
L_089029B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_089029F0;
    }
    goto L_089029C8;
L_089029C8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08902A0C;
      }
      goto L_089029F0;
    }
L_089029F0:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08902A0C;
L_08902A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902C08;
      }
      goto L_08902A18;
    }
L_08902A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902C08;
      }
      goto L_08902A24;
    }
L_08902A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902C08;
      }
      goto L_08902A44;
    }
L_08902A44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_08902A7C;
    }
    goto L_08902A54;
L_08902A54:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08902A98;
      }
      goto L_08902A7C;
    }
L_08902A7C:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08902A98;
L_08902A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902C08;
      }
      goto L_08902AB8;
    }
L_08902AB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902C08;
      }
      goto L_08902AE8;
    }
L_08902AE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_08902B20;
    }
    goto L_08902AF8;
L_08902AF8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08902B3C;
      }
      goto L_08902B20;
    }
L_08902B20:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08902B3C;
L_08902B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08902C08;
      }
      goto L_08902B48;
    }
L_08902B48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_08902B84;
    }
    goto L_08902B58;
L_08902B58:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
      if (branch_taken) {
          goto L_08902BA4;
      }
      goto L_08902B84;
    }
L_08902B84:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    goto L_08902BA4;
L_08902BA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
        goto L_08902BDC;
    }
    goto L_08902BB0;
L_08902BB0:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(848));
      if (branch_taken) {
          goto L_08902BFC;
      }
      goto L_08902BDC;
    }
L_08902BDC:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(848));
    goto L_08902BFC;
L_08902BFC:
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08902C08;
L_08902C08:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1288)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1292)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1296)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1320)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1324)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08902C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2048), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2052), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2056), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2060), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[31]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2020), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(22300), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08902D60;
      }
      goto L_08902D24;
    }
L_08902D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902D60;
      }
      goto L_08902D30;
    }
L_08902D30:
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
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2740), ctx.gpr[4]);
    goto L_08902D60;
L_08902D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902D84;
      }
      goto L_08902D7C;
    }
L_08902D7C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    goto L_08902D84;
L_08902D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902DA0;
      }
      goto L_08902D94;
    }
L_08902D94:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08902DA4;
      }
      goto L_08902DA0;
    }
L_08902DA0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    goto L_08902DA4;
L_08902DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902DB0;
      }
      goto L_08902DB0;
    }
L_08902DB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902DCC;
      }
      goto L_08902DC0;
    }
L_08902DC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902DEC;
      }
      goto L_08902DCC;
    }
L_08902DCC:
    ctx.gpr[31] = (0x08902DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 412u, 0x08ACA8E8u>(ctx, &aot_mem) && ctx.pc == 0x08902DD4u) goto L_08902DD4;
    return;
L_08902DD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902DE8;
      }
      goto L_08902DDC;
    }
L_08902DDC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08902DEC;
      }
      goto L_08902DE8;
    }
L_08902DE8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    goto L_08902DEC;
L_08902DEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902E30;
      }
      goto L_08902DFC;
    }
L_08902DFC:
    ctx.gpr[31] = (0x08902E04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08902E04u) goto L_08902E04;
    return;
L_08902E04:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08902E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08902E1Cu) goto L_08902E1C;
    return;
L_08902E1C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08902E30;
L_08902E30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 306u, 0x08905674u>(ctx, &aot_mem); return;
      }
      goto L_08902E4C;
    }
L_08902E4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(89)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 306u, 0x08905674u>(ctx, &aot_mem); return;
      }
      goto L_08902E58;
    }
L_08902E58:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902ED8;
      }
      goto L_08902E70;
    }
L_08902E70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902E9C;
      }
      goto L_08902E94;
    }
L_08902E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08902EB4;
      }
      goto L_08902E9C;
    }
L_08902E9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08902EB4;
      }
      goto L_08902EB0;
    }
L_08902EB0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08902EB4;
L_08902EB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902ED8;
      }
      goto L_08902EBC;
    }
L_08902EBC:
    ctx.gpr[31] = (0x08902EC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 373u, 0x088EE65Cu>(ctx, &aot_mem) && ctx.pc == 0x08902EC4u) goto L_08902EC4;
    return;
L_08902EC4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08902ED8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 282u, 0x088EDFE8u>(ctx, &aot_mem) && ctx.pc == 0x08902ED8u) goto L_08902ED8;
    return;
L_08902ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 30u, 0x089042F0u>(ctx, &aot_mem); return;
      }
      goto L_08902EF8;
    }
L_08902EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902F30;
      }
      goto L_08902F0C;
    }
L_08902F0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902F20;
      }
      goto L_08902F18;
    }
L_08902F18:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    goto L_08902F20;
L_08902F20:
    ctx.gpr[31] = (0x08902F28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 168u, 0x0890974Cu>(ctx, &aot_mem) && ctx.pc == 0x08902F28u) goto L_08902F28;
    return;
L_08902F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 306u, 0x08905674u>(ctx, &aot_mem); return;
      }
      goto L_08902F30;
    }
L_08902F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902F5C;
      }
      goto L_08902F44;
    }
L_08902F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902F5C;
      }
      goto L_08902F58;
    }
L_08902F58:
    ctx.gpr[30] = (0u | 1u);
    goto L_08902F5C;
L_08902F5C:
    ctx.gpr[31] = (0x08902F64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08902F64u) goto L_08902F64;
    return;
L_08902F64:
    ctx.gpr[31] = (0x08902F6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 31u, 0x08A980FCu>(ctx, &aot_mem) && ctx.pc == 0x08902F6Cu) goto L_08902F6C;
    return;
L_08902F6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902FE0;
      }
      goto L_08902F74;
    }
L_08902F74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
        goto L_08902F98;
    }
    goto L_08902F84;
L_08902F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08902FE0;
      }
      goto L_08902F94;
    }
L_08902F94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
    goto L_08902F98;
L_08902F98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902FE0;
      }
      goto L_08902FA0;
    }
L_08902FA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08902FE0;
      }
      goto L_08902FCC;
    }
L_08902FCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08902FE0;
L_08902FE0:
    ctx.gpr[31] = (0x08902FE8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08902FE8u) goto L_08902FE8;
    return;
L_08902FE8:
    ctx.gpr[31] = (0x08902FF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 48u, 0x08A9819Cu>(ctx, &aot_mem) && ctx.pc == 0x08902FF0u) goto L_08902FF0;
    return;
L_08902FF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903064;
      }
      goto L_08902FF8;
    }
L_08902FF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
        goto L_0890301C;
    }
    goto L_08903008;
L_08903008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08903064;
      }
      goto L_08903018;
    }
L_08903018:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
    goto L_0890301C;
L_0890301C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903064;
      }
      goto L_08903024;
    }
L_08903024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903064;
      }
      goto L_08903050;
    }
L_08903050:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08903064;
L_08903064:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089030BC;
      }
      goto L_08903070;
    }
L_08903070:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903098;
      }
      goto L_0890308C;
    }
L_0890308C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089030BC;
      }
      goto L_08903098;
    }
L_08903098:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089030BC;
      }
      goto L_089030B0;
    }
L_089030B0:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089030BC;
L_089030BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903108;
      }
      goto L_089030C8;
    }
L_089030C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903108;
      }
      goto L_089030E4;
    }
L_089030E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903108;
      }
      goto L_089030FC;
    }
L_089030FC:
    ctx.gpr[4] = (0u | 18u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08903108;
L_08903108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08903134;
      }
      goto L_0890311C;
    }
L_0890311C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08903134;
      }
      goto L_08903130;
    }
L_08903130:
    ctx.gpr[21] = (0u | 0u);
    goto L_08903134;
L_08903134:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08903144;
      }
      goto L_0890313C;
    }
L_0890313C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08903D6C;
      }
      goto L_08903144;
    }
L_08903144:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890317C;
      }
      goto L_08903154;
    }
L_08903154:
    ctx.gpr[31] = (0x0890315Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 416u, 0x08ACA910u>(ctx, &aot_mem) && ctx.pc == 0x0890315Cu) goto L_0890315C;
    return;
L_0890315C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890317C;
      }
      goto L_08903164;
    }
L_08903164:
    ctx.gpr[31] = (0x0890316Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 369u, 0x08ACA5D8u>(ctx, &aot_mem) && ctx.pc == 0x0890316Cu) goto L_0890316C;
    return;
L_0890316C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890317C;
      }
      goto L_08903178;
    }
L_08903178:
    ctx.gpr[23] = (0u | 1u);
    goto L_0890317C;
L_0890317C:
    ctx.gpr[31] = (0x08903184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08903184u) goto L_08903184;
    return;
L_08903184:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08903198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 41u, 0x0893C2ECu>(ctx, &aot_mem) && ctx.pc == 0x08903198u) goto L_08903198;
    return;
L_08903198:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903D3C;
      }
      goto L_089031A4;
    }
L_089031A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6856)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
        goto L_089031C4;
    }
    goto L_089031B0;
L_089031B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089031D0;
      }
      goto L_089031C0;
    }
L_089031C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    goto L_089031C4;
L_089031C4:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08903CA8;
      }
      goto L_089031D0;
    }
L_089031D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903CA8;
      }
      goto L_089031E0;
    }
L_089031E0:
    ctx.gpr[31] = (0x089031E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089031E8u) goto L_089031E8;
    return;
L_089031E8:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089032B4;
      }
      goto L_08903200;
    }
L_08903200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890326C;
      }
      goto L_08903210;
    }
L_08903210:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903554;
      }
      goto L_0890326C;
    }
L_0890326C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903284;
      }
      goto L_0890327C;
    }
L_0890327C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08903554;
      }
      goto L_08903284;
    }
L_08903284:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08903290u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08903290u) goto L_08903290;
    return;
L_08903290:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089032A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089032A0u) goto L_089032A0;
    return;
L_089032A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08903554;
      }
      goto L_089032B4;
    }
L_089032B4:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903554;
      }
      goto L_0890338C;
    }
L_0890338C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x089033A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089033A0u) goto L_089033A0;
    return;
L_089033A0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08903404;
    }
    goto L_08903404;
L_08903404:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2024), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08903420u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08903420u) goto L_08903420;
    return;
L_08903420:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08903464u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08903464u) goto L_08903464;
    return;
L_08903464:
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[31] = (0x08903494u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08903494u) goto L_08903494;
    return;
L_08903494:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2024)));
      if (branch_taken) {
          goto L_0890353C;
      }
      goto L_0890349C;
    }
L_0890349C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2024), ctx.gpr[18]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x089034B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089034B0u) goto L_089034B0;
    return;
L_089034B0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08903500u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08903500u) goto L_08903500;
    return;
L_08903500:
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[31] = (0x08903530u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08903530u) goto L_08903530;
    return;
L_08903530:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2024)));
      if (branch_taken) {
          goto L_0890353C;
      }
      goto L_08903538;
    }
L_08903538:
    ctx.gpr[16] = (0u | 0u);
    goto L_0890353C;
L_0890353C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903554;
      }
      goto L_08903544;
    }
L_08903544:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08903554;
L_08903554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089035B4;
      }
      goto L_08903560;
    }
L_08903560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089035FC;
      }
      goto L_089035B4;
    }
L_089035B4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089035FC;
      }
      goto L_089035C4;
    }
L_089035C4:
    ctx.gpr[31] = (0x089035CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089035CCu) goto L_089035CC;
    return;
L_089035CC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089035D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089035D8u) goto L_089035D8;
    return;
L_089035D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089035FC;
L_089035FC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08903638;
      }
      goto L_08903608;
    }
L_08903608:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903660;
      }
      goto L_08903638;
    }
L_08903638:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08903660;
L_08903660:
    ctx.gpr[4] = (16454u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08903674u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08903674u) goto L_08903674;
    return;
L_08903674:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08903694u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08903694u) goto L_08903694;
    return;
L_08903694:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089036B8;
      }
      goto L_089036A4;
    }
L_089036A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089036B8;
L_089036B8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089037DC;
      }
      goto L_089036F0;
    }
L_089036F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903794;
      }
      goto L_089036FC;
    }
L_089036FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903794;
      }
      goto L_08903704;
    }
L_08903704:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08903728;
    }
    goto L_08903728;
L_08903728:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16496u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890381C;
      }
      goto L_08903794;
    }
L_08903794:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890381C;
      }
      goto L_089037DC;
    }
L_089037DC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0890381C;
L_0890381C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903C80;
      }
      goto L_08903830;
    }
L_08903830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08903C80;
      }
      goto L_08903844;
    }
L_08903844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 1u);
    goto L_08903A2C;
L_08903A2C:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(656));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(656));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2032), ctx.gpr[19]);
        goto L_08903AA8;
    }
    goto L_08903AA0;
L_08903AA0:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2032), ctx.gpr[19]);
    goto L_08903AA8;
L_08903AA8:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2028), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(720));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08903ACCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08903ACCu) goto L_08903ACC;
    return;
L_08903ACC:
    ctx.gpr[31] = (0x08903AD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 487u, 0x088EAAFCu>(ctx, &aot_mem) && ctx.pc == 0x08903AD4u) goto L_08903AD4;
    return;
L_08903AD4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08903AF4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08903AF4u) goto L_08903AF4;
    return;
L_08903AF4:
    ctx.gpr[31] = (0x08903AFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 487u, 0x088EAAFCu>(ctx, &aot_mem) && ctx.pc == 0x08903AFCu) goto L_08903AFC;
    return;
L_08903AFC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2028)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2032)));
      if (branch_taken) {
          goto L_08903B10;
      }
      goto L_08903B0C;
    }
L_08903B0C:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08903B10;
L_08903B10:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903A2C;
      }
      goto L_08903B20;
    }
L_08903B20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2036), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08903B44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08903B44u) goto L_08903B44;
    return;
L_08903B44:
    ctx.gpr[31] = (0x08903B4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08903B4Cu) goto L_08903B4C;
    return;
L_08903B4C:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08903B64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 409u, 0x088EA4CCu>(ctx, &aot_mem) && ctx.pc == 0x08903B64u) goto L_08903B64;
    return;
L_08903B64:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08903B78u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 406u, 0x088EA480u>(ctx, &aot_mem) && ctx.pc == 0x08903B78u) goto L_08903B78;
    return;
L_08903B78:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(656));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08903B98u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08903B98u) goto L_08903B98;
    return;
L_08903B98:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08903BB0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 409u, 0x088EA4CCu>(ctx, &aot_mem) && ctx.pc == 0x08903BB0u) goto L_08903BB0;
    return;
L_08903BB0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08903BC4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 406u, 0x088EA480u>(ctx, &aot_mem) && ctx.pc == 0x08903BC4u) goto L_08903BC4;
    return;
L_08903BC4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08903BD0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08903BD0u) goto L_08903BD0;
    return;
L_08903BD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08903BE4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08903BE4u) goto L_08903BE4;
    return;
L_08903BE4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2036)));
      if (branch_taken) {
          goto L_08903C08;
      }
      goto L_08903BF4;
    }
L_08903BF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_08903C08;
L_08903C08:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08903C60u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA660u>(ctx, &aot_mem) && ctx.pc == 0x08903C60u) goto L_08903C60;
    return;
L_08903C60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08903C80;
L_08903C80:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[31] = (0x08903CA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x08903CA0u) goto L_08903CA0;
    return;
L_08903CA0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6856), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08903CA8;
L_08903CA8:
    ctx.gpr[31] = (0x08903CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 57u, 0x0893C410u>(ctx, &aot_mem) && ctx.pc == 0x08903CB0u) goto L_08903CB0;
    return;
L_08903CB0:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903D14;
      }
      goto L_08903CBC;
    }
L_08903CBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6856)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08903D14;
      }
      goto L_08903CCC;
    }
L_08903CCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08903CEC;
      }
      goto L_08903CDC;
    }
L_08903CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08903D14;
      }
      goto L_08903CEC;
    }
L_08903CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903D64;
      }
      goto L_08903CFC;
    }
L_08903CFC:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08903D64;
      }
      goto L_08903D14;
    }
L_08903D14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903D2C;
      }
      goto L_08903D20;
    }
L_08903D20:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    goto L_08903D2C;
L_08903D2C:
    ctx.gpr[4] = (0u | 18u);
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08903D64;
      }
      goto L_08903D3C;
    }
L_08903D3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903D54;
      }
      goto L_08903D48;
    }
L_08903D48:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    goto L_08903D54;
L_08903D54:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6856), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 18u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08903D64;
L_08903D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903D84;
      }
      goto L_08903D6C;
    }
L_08903D6C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08903D84;
      }
      goto L_08903D78;
    }
L_08903D78:
    ctx.gpr[4] = (0u | 22u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08903D84;
L_08903D84:
    ctx.gpr[31] = (0x08903D8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08903D8Cu) goto L_08903D8C;
    return;
L_08903D8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08903DA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 150u, 0x088ED218u>(ctx, &aot_mem) && ctx.pc == 0x08903DA4u) goto L_08903DA4;
    return;
L_08903DA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903DE0;
      }
      goto L_08903DBC;
    }
L_08903DBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903DE0;
      }
      goto L_08903DC8;
    }
L_08903DC8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08903E90;
      }
      goto L_08903DE0;
    }
L_08903DE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903E1C;
      }
      goto L_08903DFC;
    }
L_08903DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22136));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08903E90;
      }
      goto L_08903E1C;
    }
L_08903E1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903E58;
      }
      goto L_08903E38;
    }
L_08903E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22156));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08903E90;
      }
      goto L_08903E58;
    }
L_08903E58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903E90;
      }
      goto L_08903E74;
    }
L_08903E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22176));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08903E90;
L_08903E90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903ED0;
      }
      goto L_08903EAC;
    }
L_08903EAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903ED0;
      }
      goto L_08903EB8;
    }
L_08903EB8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08903ED0;
L_08903ED0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903F70;
      }
      goto L_08903ED8;
    }
L_08903ED8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903F70;
      }
      goto L_08903EE4;
    }
L_08903EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x08903F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 420u, 0x08ACA938u>(ctx, &aot_mem) && ctx.pc == 0x08903F30u) goto L_08903F30;
    return;
L_08903F30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16449u << 16u);
      if (branch_taken) {
          goto L_08903F70;
      }
      goto L_08903F38;
    }
L_08903F38:
    ctx.gpr[4] = (ctx.gpr[4] | 43516u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08903F70;
      }
      goto L_08903F50;
    }
L_08903F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2372)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903F70;
      }
      goto L_08903F5C;
    }
L_08903F5C:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08903F70;
L_08903F70:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08903FC0;
      }
      goto L_08903F84;
    }
L_08903F84:
    ctx.gpr[31] = (0x08903F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 420u, 0x08ACA938u>(ctx, &aot_mem) && ctx.pc == 0x08903F8Cu) goto L_08903F8C;
    return;
L_08903F8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903FB4;
      }
      goto L_08903F94;
    }
L_08903F94:
    ctx.gpr[31] = (0x08903F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x08903F9Cu) goto L_08903F9C;
    return;
L_08903F9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903FB4;
      }
      goto L_08903FA4;
    }
L_08903FA4:
    ctx.gpr[31] = (0x08903FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x08903FACu) goto L_08903FAC;
    return;
L_08903FAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903FC0;
      }
      goto L_08903FB4;
    }
L_08903FB4:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08903FC0;
L_08903FC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(113)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 5u, 0x08904068u>(ctx, &aot_mem); return;
      }
      goto L_08903FD0;
    }
L_08903FD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 3u, 0x08904028u>(ctx, &aot_mem); return;
      }
      goto L_08903FE8;
    }
L_08903FE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.pc = 0x08904000u; return;
}

void recomp_unit_0063(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0063_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_63(Runtime &runtime) {
    runtime.register_generated_unit(63u, 0x08900000u, 16384u, &recomp_unit_0063, &recomp_unit_0063_entry);
    runtime.register_function(0x08900000u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900014u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890001Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900024u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890002Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900058u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900088u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900090u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900098u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900100u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890010Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900120u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890013Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900148u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890015Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900170u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900188u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900194u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089001B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089001BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089001D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089001DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089001E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890020Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900220u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900238u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890024Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900254u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900264u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890026Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900274u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900284u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890028Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089002A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089002B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089002C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089002ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089002F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900304u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900314u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890031Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900334u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890033Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900354u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890035Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900364u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890036Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900394u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890039Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003D4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900400u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900410u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890041Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900434u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900440u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900454u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900460u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900468u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890047Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900488u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900490u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900500u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900510u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900518u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900520u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900528u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900534u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890053Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900558u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900564u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900570u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890059Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900604u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890061Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900624u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890062Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900634u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900640u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900654u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890065Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900674u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890067Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900684u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900700u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900708u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900710u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900718u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900724u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890073Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900750u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900758u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900764u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900770u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890078Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900798u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089007B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089007BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089007C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089007DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089007E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900800u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900810u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900828u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900840u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900854u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890085Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890086Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900874u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890087Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900884u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900890u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900898u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900900u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900910u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900920u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900928u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900940u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900948u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900960u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900968u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900970u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900978u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900994u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A10u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A28u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A3Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A50u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A78u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A9Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AC8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B48u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B68u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900BA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900BACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900BB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900BE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900BECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900BFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C34u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CC4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900D14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900DDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900DE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900DF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E00u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E6Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900EA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900EC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900ECCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900EDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F28u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F38u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F6Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900FA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900FD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900FDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901008u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890101Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901028u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901050u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901078u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089010ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089010E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089010E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901114u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901128u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901134u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901138u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901144u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901160u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901170u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890117Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890118Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901194u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890120Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901210u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890121Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901224u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901288u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901294u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901368u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089013C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089013F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901414u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901420u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890142Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890143Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901448u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901458u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901464u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901474u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901480u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901494u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890149Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901570u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901584u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901598u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901654u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901668u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901694u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890169Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089016ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901718u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901758u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901764u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901778u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901784u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089017E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890186Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890189Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089018C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089018D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901920u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901950u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901AA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901ABCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901ADCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901AE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901AF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901B3Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901B44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C34u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901CBCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901CD0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D34u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901DC8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901DF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E88u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901EA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901ECCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901EFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901FB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902030u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902044u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902050u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902078u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902100u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902144u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902150u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890215Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902168u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902170u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902178u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902184u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902190u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089021CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089021D4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902210u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902224u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089023A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089023BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089023C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902448u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902454u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890247Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902490u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902498u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902524u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902534u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902558u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890255Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902588u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902598u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089025BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089025C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089025CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089025D4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089025DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902658u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902660u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902668u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902680u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902690u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902694u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089026A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089026B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089026C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089026F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902700u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902708u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902710u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902728u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902730u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890273Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890276Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902794u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027D4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902820u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902828u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902830u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890283Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902848u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902854u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902870u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089028DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089028FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902948u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902978u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B3Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B48u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902BA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902BB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902BDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902BFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DCCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E1Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E9Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EBCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EC4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902ED8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F28u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F6Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FCCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FE0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903008u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903018u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890301Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903024u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903050u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903064u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903070u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890308Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903098u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903108u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890311Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903130u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903134u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890313Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903144u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903154u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890315Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903164u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890316Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903178u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890317Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903184u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903198u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903200u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903210u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890326Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890327Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903284u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903290u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890338Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089033A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903404u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903420u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903464u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903494u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890349Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089034B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903500u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903530u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903538u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890353Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903544u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903554u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903560u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903608u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903638u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903660u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903674u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903694u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903704u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903728u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903794u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089037DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890381Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903830u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903844u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903AA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903AA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903ACCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903AD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903AF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903AFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B10u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B78u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903BB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903BC4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903BD0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903BE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903BF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CBCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CCCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D3Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D48u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D6Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D78u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D8Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DBCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DC8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DE0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E1Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E38u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903ED0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903ED8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F38u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F50u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F8Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F9Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903FA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903FACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903FB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903FC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903FD0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903FE8u, &recomp_unit_0063, "recomp_unit_0063");
}
} // namespace psprecomp
