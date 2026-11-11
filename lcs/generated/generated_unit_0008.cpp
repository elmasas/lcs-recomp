#include "lcs_free_aim_trace.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0008[3990] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0,
    0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0,
    0, 72, 73, 74, 0, 75, 0, 76, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0,
    0, 83, 0, 84, 85, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0,
    93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112,
    0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 137, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0,
    0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156,
    0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 164, 0, 165,
    0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180,
    0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186,
    0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0,
    219, 220, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0,
    0, 235, 0, 236, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 254,
    0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 263,
    0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0,
    272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 278, 279, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 283, 0,
    284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    289, 290, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 318, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 323, 324,
    0, 0, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 343,
    0, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 348, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352,
    0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0,
    357, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 361, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0,
    366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0,
    0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 374, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 401, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0,
    406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428,
    0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0,
    0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 441, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0,
    0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454,
    0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499,
};
void recomp_unit_0008_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08824000u;
        entry_id = (entry_delta < 15960u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0008[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08824000;
    case 2u: goto L_08824014;
    case 3u: goto L_08824038;
    case 4u: goto L_08824058;
    case 5u: goto L_08824084;
    case 6u: goto L_088240CC;
    case 7u: goto L_088240D4;
    case 8u: goto L_088240DC;
    case 9u: goto L_088240E4;
    case 10u: goto L_088240F4;
    case 11u: goto L_08824104;
    case 12u: goto L_0882410C;
    case 13u: goto L_08824114;
    case 14u: goto L_08824124;
    case 15u: goto L_08824134;
    case 16u: goto L_08824158;
    case 17u: goto L_08824164;
    case 18u: goto L_0882416C;
    case 19u: goto L_088241C8;
    case 20u: goto L_088241D0;
    case 21u: goto L_08824224;
    case 22u: goto L_08824238;
    case 23u: goto L_08824268;
    case 24u: goto L_08824280;
    case 25u: goto L_088242BC;
    case 26u: goto L_088242CC;
    case 27u: goto L_088242F0;
    case 28u: goto L_0882430C;
    case 29u: goto L_0882432C;
    case 30u: goto L_08824368;
    case 31u: goto L_08824370;
    case 32u: goto L_08824378;
    case 33u: goto L_08824380;
    case 34u: goto L_08824390;
    case 35u: goto L_088243A0;
    case 36u: goto L_088243A8;
    case 37u: goto L_088243D4;
    case 38u: goto L_08824560;
    case 39u: goto L_088245A4;
    case 40u: goto L_088245B4;
    case 41u: goto L_088245C0;
    case 42u: goto L_088245D0;
    case 43u: goto L_088245E0;
    case 44u: goto L_088245E8;
    case 45u: goto L_088245F4;
    case 46u: goto L_08824630;
    case 47u: goto L_08824638;
    case 48u: goto L_08824640;
    case 49u: goto L_08824654;
    case 50u: goto L_0882466C;
    case 51u: goto L_08824674;
    case 52u: goto L_0882469C;
    case 53u: goto L_088246A4;
    case 54u: goto L_088246AC;
    case 55u: goto L_088246B8;
    case 56u: goto L_088246C0;
    case 57u: goto L_088246CC;
    case 58u: goto L_088246D4;
    case 59u: goto L_088246E0;
    case 60u: goto L_088246E8;
    case 61u: goto L_088246FC;
    case 62u: goto L_08824714;
    case 63u: goto L_08824748;
    case 64u: goto L_08824760;
    case 65u: goto L_08824768;
    case 66u: goto L_08824770;
    case 67u: goto L_0882477C;
    case 68u: goto L_088247AC;
    case 69u: goto L_088247D8;
    case 70u: goto L_088247E8;
    case 71u: goto L_088247F8;
    case 72u: goto L_08824804;
    case 73u: goto L_08824808;
    case 74u: goto L_0882480C;
    case 75u: goto L_08824814;
    case 76u: goto L_0882481C;
    case 77u: goto L_08824820;
    case 78u: goto L_0882482C;
    case 79u: goto L_088248C0;
    case 80u: goto L_088248CC;
    case 81u: goto L_088248E8;
    case 82u: goto L_088248F8;
    case 83u: goto L_08824904;
    case 84u: goto L_0882490C;
    case 85u: goto L_08824910;
    case 86u: goto L_08824918;
    case 87u: goto L_08824920;
    case 88u: goto L_08824934;
    case 89u: goto L_08824954;
    case 90u: goto L_08824958;
    case 91u: goto L_08824960;
    case 92u: goto L_0882496C;
    case 93u: goto L_08824980;
    case 94u: goto L_08824988;
    case 95u: goto L_088249B4;
    case 96u: goto L_088249BC;
    case 97u: goto L_088249C4;
    case 98u: goto L_088249CC;
    case 99u: goto L_088249D4;
    case 100u: goto L_088249DC;
    case 101u: goto L_088249E0;
    case 102u: goto L_08824A14;
    case 103u: goto L_08824A44;
    case 104u: goto L_08824A74;
    case 105u: goto L_08824AA4;
    case 106u: goto L_08824AD4;
    case 107u: goto L_08824B04;
    case 108u: goto L_08824B34;
    case 109u: goto L_08824B64;
    case 110u: goto L_08824B6C;
    case 111u: goto L_08824B74;
    case 112u: goto L_08824B7C;
    case 113u: goto L_08824B90;
    case 114u: goto L_08824B98;
    case 115u: goto L_08824BA4;
    case 116u: goto L_08824BD4;
    case 117u: goto L_08824BDC;
    case 118u: goto L_08824BEC;
    case 119u: goto L_08824C04;
    case 120u: goto L_08824C24;
    case 121u: goto L_08824C2C;
    case 122u: goto L_08824C4C;
    case 123u: goto L_08824C54;
    case 124u: goto L_08824C70;
    case 125u: goto L_08824C8C;
    case 126u: goto L_08824CA8;
    case 127u: goto L_08824CB4;
    case 128u: goto L_08824CBC;
    case 129u: goto L_08824CCC;
    case 130u: goto L_08824CE0;
    case 131u: goto L_08824D00;
    case 132u: goto L_08824D28;
    case 133u: goto L_08824D34;
    case 134u: goto L_08824D38;
    case 135u: goto L_08824D54;
    case 136u: goto L_08824D5C;
    case 137u: goto L_08824D60;
    case 138u: goto L_08824D68;
    case 139u: goto L_08824D94;
    case 140u: goto L_08824DA0;
    case 141u: goto L_08824DB4;
    case 142u: goto L_08824DBC;
    case 143u: goto L_08824DF8;
    case 144u: goto L_08824E04;
    case 145u: goto L_08824E10;
    case 146u: goto L_08824E54;
    case 147u: goto L_08824E68;
    case 148u: goto L_08824E70;
    case 149u: goto L_08824E84;
    case 150u: goto L_08824E8C;
    case 151u: goto L_08824E98;
    case 152u: goto L_08824EAC;
    case 153u: goto L_08824EB4;
    case 154u: goto L_08824EE8;
    case 155u: goto L_08824EF4;
    case 156u: goto L_08824EFC;
    case 157u: goto L_08824F08;
    case 158u: goto L_08824F14;
    case 159u: goto L_08824F20;
    case 160u: goto L_08824F4C;
    case 161u: goto L_08824F58;
    case 162u: goto L_08824F64;
    case 163u: goto L_08824F70;
    case 164u: goto L_08824F74;
    case 165u: goto L_08824F7C;
    case 166u: goto L_08824F8C;
    case 167u: goto L_08824F94;
    case 168u: goto L_08824FA0;
    case 169u: goto L_08824FAC;
    case 170u: goto L_08824FB8;
    case 171u: goto L_08824FD8;
    case 172u: goto L_08824FF4;
    case 173u: goto L_08825000;
    case 174u: goto L_08825008;
    case 175u: goto L_08825018;
    case 176u: goto L_0882502C;
    case 177u: goto L_08825038;
    case 178u: goto L_08825058;
    case 179u: goto L_08825074;
    case 180u: goto L_0882507C;
    case 181u: goto L_08825090;
    case 182u: goto L_08825098;
    case 183u: goto L_088250A0;
    case 184u: goto L_088250B4;
    case 185u: goto L_088250F0;
    case 186u: goto L_088250FC;
    case 187u: goto L_08825110;
    case 188u: goto L_08825118;
    case 189u: goto L_08825120;
    case 190u: goto L_0882518C;
    case 191u: goto L_08825234;
    case 192u: goto L_0882523C;
    case 193u: goto L_08825248;
    case 194u: goto L_08825268;
    case 195u: goto L_08825284;
    case 196u: goto L_0882528C;
    case 197u: goto L_088252A0;
    case 198u: goto L_088252A8;
    case 199u: goto L_088252B0;
    case 200u: goto L_088252C4;
    case 201u: goto L_08825304;
    case 202u: goto L_08825310;
    case 203u: goto L_08825324;
    case 204u: goto L_0882532C;
    case 205u: goto L_08825334;
    case 206u: goto L_08825398;
    case 207u: goto L_08825478;
    case 208u: goto L_088254F8;
    case 209u: goto L_08825504;
    case 210u: goto L_0882550C;
    case 211u: goto L_08825578;
    case 212u: goto L_088255A0;
    case 213u: goto L_088255A8;
    case 214u: goto L_088255B0;
    case 215u: goto L_088255BC;
    case 216u: goto L_088255C8;
    case 217u: goto L_088255EC;
    case 218u: goto L_088255F8;
    case 219u: goto L_08825600;
    case 220u: goto L_08825604;
    case 221u: goto L_08825608;
    case 222u: goto L_08825620;
    case 223u: goto L_08825670;
    case 224u: goto L_08825678;
    case 225u: goto L_0882567C;
    case 226u: goto L_088256B4;
    case 227u: goto L_088256EC;
    case 228u: goto L_088256F4;
    case 229u: goto L_0882570C;
    case 230u: goto L_08825734;
    case 231u: goto L_08825740;
    case 232u: goto L_08825764;
    case 233u: goto L_0882576C;
    case 234u: goto L_08825774;
    case 235u: goto L_08825784;
    case 236u: goto L_0882578C;
    case 237u: goto L_08825790;
    case 238u: goto L_088257A4;
    case 239u: goto L_088257B8;
    case 240u: goto L_088257C0;
    case 241u: goto L_088257CC;
    case 242u: goto L_088257E4;
    case 243u: goto L_088257F0;
    case 244u: goto L_08825800;
    case 245u: goto L_0882580C;
    case 246u: goto L_0882581C;
    case 247u: goto L_0882582C;
    case 248u: goto L_08825834;
    case 249u: goto L_0882583C;
    case 250u: goto L_08825848;
    case 251u: goto L_08825858;
    case 252u: goto L_08825864;
    case 253u: goto L_0882586C;
    case 254u: goto L_0882587C;
    case 255u: goto L_08825888;
    case 256u: goto L_08825890;
    case 257u: goto L_088258B0;
    case 258u: goto L_088258E0;
    case 259u: goto L_08825938;
    case 260u: goto L_0882594C;
    case 261u: goto L_08825968;
    case 262u: goto L_08825974;
    case 263u: goto L_0882597C;
    case 264u: goto L_0882598C;
    case 265u: goto L_088259A0;
    case 266u: goto L_088259F4;
    case 267u: goto L_08825A30;
    case 268u: goto L_08825A40;
    case 269u: goto L_08825A58;
    case 270u: goto L_08825A6C;
    case 271u: goto L_08825A74;
    case 272u: goto L_08825A80;
    case 273u: goto L_08825A98;
    case 274u: goto L_08825AA0;
    case 275u: goto L_08825AA8;
    case 276u: goto L_08825AB0;
    case 277u: goto L_08825AB8;
    case 278u: goto L_08825AC8;
    case 279u: goto L_08825ACC;
    case 280u: goto L_08825AD8;
    case 281u: goto L_08825AE0;
    case 282u: goto L_08825AE8;
    case 283u: goto L_08825AF8;
    case 284u: goto L_08825B00;
    case 285u: goto L_08825B08;
    case 286u: goto L_08825B18;
    case 287u: goto L_08825B28;
    case 288u: goto L_08825B74;
    case 289u: goto L_08825B80;
    case 290u: goto L_08825B84;
    case 291u: goto L_08825B94;
    case 292u: goto L_08825BA0;
    case 293u: goto L_08825BA8;
    case 294u: goto L_08825BB8;
    case 295u: goto L_08825BFC;
    case 296u: goto L_08825C94;
    case 297u: goto L_08825CE8;
    case 298u: goto L_08825D38;
    case 299u: goto L_08825D78;
    case 300u: goto L_08825D9C;
    case 301u: goto L_08825DC0;
    case 302u: goto L_08825E3C;
    case 303u: goto L_08825E44;
    case 304u: goto L_08825E54;
    case 305u: goto L_08825E58;
    case 306u: goto L_08825E64;
    case 307u: goto L_08825E78;
    case 308u: goto L_08825F38;
    case 309u: goto L_08825F40;
    case 310u: goto L_08825F48;
    case 311u: goto L_08825F50;
    case 312u: goto L_08825F58;
    case 313u: goto L_08825F7C;
    case 314u: goto L_08825F88;
    case 315u: goto L_08825F90;
    case 316u: goto L_08825FA0;
    case 317u: goto L_08825FB0;
    case 318u: goto L_08825FB4;
    case 319u: goto L_08825FBC;
    case 320u: goto L_08825FCC;
    case 321u: goto L_08825FE0;
    case 322u: goto L_08825FF0;
    case 323u: goto L_08825FF8;
    case 324u: goto L_08825FFC;
    case 325u: goto L_0882600C;
    case 326u: goto L_0882601C;
    case 327u: goto L_08826024;
    case 328u: goto L_08826030;
    case 329u: goto L_08826040;
    case 330u: goto L_08826048;
    case 331u: goto L_08826050;
    case 332u: goto L_08826058;
    case 333u: goto L_08826060;
    case 334u: goto L_08826068;
    case 335u: goto L_08826070;
    case 336u: goto L_0882607C;
    case 337u: goto L_088260A4;
    case 338u: goto L_088260D0;
    case 339u: goto L_088260D8;
    case 340u: goto L_088260E0;
    case 341u: goto L_088260E8;
    case 342u: goto L_088260F4;
    case 343u: goto L_088260FC;
    case 344u: goto L_08826108;
    case 345u: goto L_0882611C;
    case 346u: goto L_08826124;
    case 347u: goto L_08826134;
    case 348u: goto L_0882613C;
    case 349u: goto L_08826140;
    case 350u: goto L_08826160;
    case 351u: goto L_0882616C;
    case 352u: goto L_0882617C;
    case 353u: goto L_08826188;
    case 354u: goto L_08826190;
    case 355u: goto L_0882626C;
    case 356u: goto L_08826274;
    case 357u: goto L_08826280;
    case 358u: goto L_08826294;
    case 359u: goto L_0882629C;
    case 360u: goto L_088262AC;
    case 361u: goto L_088262B4;
    case 362u: goto L_088262B8;
    case 363u: goto L_088262D8;
    case 364u: goto L_088262E4;
    case 365u: goto L_088262F4;
    case 366u: goto L_08826300;
    case 367u: goto L_08826308;
    case 368u: goto L_088263E4;
    case 369u: goto L_088263EC;
    case 370u: goto L_088263F8;
    case 371u: goto L_0882640C;
    case 372u: goto L_08826414;
    case 373u: goto L_08826424;
    case 374u: goto L_0882642C;
    case 375u: goto L_08826430;
    case 376u: goto L_08826450;
    case 377u: goto L_0882645C;
    case 378u: goto L_0882646C;
    case 379u: goto L_08826478;
    case 380u: goto L_08826480;
    case 381u: goto L_0882655C;
    case 382u: goto L_08826574;
    case 383u: goto L_088265A4;
    case 384u: goto L_088265B0;
    case 385u: goto L_088265BC;
    case 386u: goto L_08826614;
    case 387u: goto L_0882661C;
    case 388u: goto L_08826658;
    case 389u: goto L_08826660;
    case 390u: goto L_08826688;
    case 391u: goto L_088266A0;
    case 392u: goto L_088266B0;
    case 393u: goto L_088266B8;
    case 394u: goto L_088266CC;
    case 395u: goto L_088266D4;
    case 396u: goto L_0882670C;
    case 397u: goto L_08826714;
    case 398u: goto L_0882671C;
    case 399u: goto L_08826724;
    case 400u: goto L_08826738;
    case 401u: goto L_08826740;
    case 402u: goto L_08826744;
    case 403u: goto L_08826758;
    case 404u: goto L_08826764;
    case 405u: goto L_08826778;
    case 406u: goto L_08826780;
    case 407u: goto L_0882679C;
    case 408u: goto L_088267A8;
    case 409u: goto L_088267B0;
    case 410u: goto L_088267C0;
    case 411u: goto L_088267D4;
    case 412u: goto L_08826838;
    case 413u: goto L_08826844;
    case 414u: goto L_0882684C;
    case 415u: goto L_08826860;
    case 416u: goto L_08826868;
    case 417u: goto L_08826880;
    case 418u: goto L_088268A4;
    case 419u: goto L_088268D4;
    case 420u: goto L_08826900;
    case 421u: goto L_0882690C;
    case 422u: goto L_08826930;
    case 423u: goto L_0882693C;
    case 424u: goto L_08826940;
    case 425u: goto L_08826950;
    case 426u: goto L_0882695C;
    case 427u: goto L_08826970;
    case 428u: goto L_0882697C;
    case 429u: goto L_08826998;
    case 430u: goto L_088269A4;
    case 431u: goto L_088269B4;
    case 432u: goto L_088269BC;
    case 433u: goto L_088269C8;
    case 434u: goto L_088269DC;
    case 435u: goto L_088269E8;
    case 436u: goto L_08826A04;
    case 437u: goto L_08826A10;
    case 438u: goto L_08826A20;
    case 439u: goto L_08826A30;
    case 440u: goto L_08826A38;
    case 441u: goto L_08826A44;
    case 442u: goto L_08826A58;
    case 443u: goto L_08826A60;
    case 444u: goto L_08826AB0;
    case 445u: goto L_08826BD0;
    case 446u: goto L_08826BE4;
    case 447u: goto L_08826BF0;
    case 448u: goto L_08826C04;
    case 449u: goto L_08826C10;
    case 450u: goto L_08826C24;
    case 451u: goto L_08826C34;
    case 452u: goto L_08826C38;
    case 453u: goto L_08826CC0;
    case 454u: goto L_08826CFC;
    case 455u: goto L_08826D0C;
    case 456u: goto L_08826D18;
    case 457u: goto L_08826D28;
    case 458u: goto L_08826D34;
    case 459u: goto L_08826D3C;
    case 460u: goto L_08826D4C;
    case 461u: goto L_08826D58;
    case 462u: goto L_08826D68;
    case 463u: goto L_08826D74;
    case 464u: goto L_08826D80;
    case 465u: goto L_08827144;
    case 466u: goto L_08827158;
    case 467u: goto L_08827164;
    case 468u: goto L_08827170;
    case 469u: goto L_0882717C;
    case 470u: goto L_08827188;
    case 471u: goto L_088271A8;
    case 472u: goto L_088271C4;
    case 473u: goto L_088272CC;
    case 474u: goto L_088272DC;
    case 475u: goto L_088272EC;
    case 476u: goto L_08827300;
    case 477u: goto L_0882732C;
    case 478u: goto L_0882736C;
    case 479u: goto L_08827380;
    case 480u: goto L_088273B0;
    case 481u: goto L_088273C0;
    case 482u: goto L_088273D4;
    case 483u: goto L_08827400;
    case 484u: goto L_08827440;
    case 485u: goto L_08827454;
    case 486u: goto L_0882747C;
    case 487u: goto L_088278A0;
    case 488u: goto L_088278A8;
    case 489u: goto L_088278B8;
    case 490u: goto L_088278C0;
    case 491u: goto L_08827BB4;
    case 492u: goto L_08827BBC;
    case 493u: goto L_08827BCC;
    case 494u: goto L_08827BD4;
    case 495u: goto L_08827E14;
    case 496u: goto L_08827E1C;
    case 497u: goto L_08827E2C;
    case 498u: goto L_08827E34;
    case 499u: goto L_08827E54;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08824000:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17530u << 16u);
      if (branch_taken) {
          goto L_088240F4;
      }
      goto L_08824014;
    }
L_08824014:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08824038;
    }
    goto L_08824038;
L_08824038:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08824058u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08824058u) goto L_08824058;
    return;
L_08824058:
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08824084;
    }
    goto L_08824084;
L_08824084:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[19];
    ctx.gpr[31] = (0x088240CCu);
    ctx.fpr[17] = ctx.fpr[0] - ctx.fpr[2];
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x088240CCu) goto L_088240CC;
    return;
L_088240CC:
    ctx.gpr[31] = (0x088240D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088240D4u) goto L_088240D4;
    return;
L_088240D4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088240F4;
      }
      goto L_088240DC;
    }
L_088240DC:
    ctx.gpr[31] = (0x088240E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088240E4u) goto L_088240E4;
    return;
L_088240E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[31] = (0x088240F4u);
    ctx.gpr[6] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CF8u>(ctx, &aot_mem) && ctx.pc == 0x088240F4u) goto L_088240F4;
    return;
L_088240F4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 642u, 0x08823D38u>(ctx, &aot_mem); return;
      }
      goto L_08824104;
    }
L_08824104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088243A0;
      }
      goto L_0882410C;
    }
L_0882410C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088243A0;
      }
      goto L_08824114;
    }
L_08824114:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088243A0;
      }
      goto L_08824124;
    }
L_08824124:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824390;
      }
      goto L_08824134;
    }
L_08824134:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08824390;
      }
      goto L_08824158;
    }
L_08824158:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_088241C8;
    }
    goto L_08824164;
L_08824164:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08824224;
      }
      goto L_0882416C;
    }
L_0882416C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824224;
      }
      goto L_088241C8;
    }
L_088241C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824224;
      }
      goto L_088241D0;
    }
L_088241D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08824224;
L_08824224:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08824238u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08824238u) goto L_08824238;
    return;
L_08824238:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08824268;
    }
    goto L_08824268;
L_08824268:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08824390;
      }
      goto L_08824280;
    }
L_08824280:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08824390;
      }
      goto L_088242BC;
    }
L_088242BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088242F0;
      }
      goto L_088242CC;
    }
L_088242CC:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1212), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[31] = (0x088242F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088242F0u) goto L_088242F0;
    return;
L_088242F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08824390;
      }
      goto L_0882430C;
    }
L_0882430C:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882432Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0882432Cu) goto L_0882432C;
    return;
L_0882432C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08824368u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08824368u) goto L_08824368;
    return;
L_08824368:
    ctx.gpr[31] = (0x08824370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08824370u) goto L_08824370;
    return;
L_08824370:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08824390;
      }
      goto L_08824378;
    }
L_08824378:
    ctx.gpr[31] = (0x08824380u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08824380u) goto L_08824380;
    return;
L_08824380:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[31] = (0x08824390u);
    ctx.gpr[6] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CF8u>(ctx, &aot_mem) && ctx.pc == 0x08824390u) goto L_08824390;
    return;
L_08824390:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824124;
      }
      goto L_088243A0;
    }
L_088243A0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 629u, 0x08823C1Cu>(ctx, &aot_mem); return;
      }
      goto L_088243A8;
    }
L_088243A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088243D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(372)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(368)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(404)));
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[12] = (16409u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[9] = (ctx.gpr[12] | 39322u);
    ctx.gpr[12] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26144));
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (15744u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[10] = (48793u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[11] = (48588u << 16u);
    ctx.gpr[14] = (48896u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[10] | 39322u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[10] = (ctx.gpr[11] | 52429u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(432));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[15] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(448));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (16537u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[3] = (49062u << 16u);
    ctx.gpr[24] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[3] | 26214u);
    ctx.gpr[21] = (ctx.gpr[24] + static_cast<std::uint32_t>(-26112));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-26112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[25] = (16416u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26144), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[13] = (48968u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[13] = (ctx.gpr[13] | 62915u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26128));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824560:
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(684), 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(679), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(678), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(680), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(681), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(683), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(677), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8040), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088245A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088245B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 666u, 0x08AE7F80u>(ctx, &aot_mem) && ctx.pc == 0x088245B4u) goto L_088245B4;
    return;
L_088245B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088245C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088245D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 248u, 0x08AE9148u>(ctx, &aot_mem) && ctx.pc == 0x088245D0u) goto L_088245D0;
    return;
L_088245D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088245E8;
      }
      goto L_088245E0;
    }
L_088245E0:
    ctx.gpr[31] = (0x088245E8u);
    // nop
    goto L_088245F4;
L_088245E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088245F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08824630u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(676), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 882u, 0x089C79A8u>(ctx, &aot_mem) && ctx.pc == 0x08824630u) goto L_08824630;
    return;
L_08824630:
    ctx.gpr[31] = (0x08824638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 44u, 0x089C8370u>(ctx, &aot_mem) && ctx.pc == 0x08824638u) goto L_08824638;
    return;
L_08824638:
    ctx.gpr[31] = (0x08824640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08824640u) goto L_08824640;
    return;
L_08824640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-5632)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08824714;
      }
      goto L_08824654;
    }
L_08824654:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-5712));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5672));
    ctx.gpr[19] = (2229u << 16u);
    goto L_0882466C;
L_0882466C:
    ctx.gpr[31] = (0x08824674u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824674u) goto L_08824674;
    return;
L_08824674:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882469Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x0882469Cu) goto L_0882469C;
    return;
L_0882469C:
    ctx.gpr[31] = (0x088246A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x088246A4u) goto L_088246A4;
    return;
L_088246A4:
    ctx.gpr[31] = (0x088246ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088246ACu) goto L_088246AC;
    return;
L_088246AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088246D4;
      }
      goto L_088246B8;
    }
L_088246B8:
    ctx.gpr[31] = (0x088246C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088246C0u) goto L_088246C0;
    return;
L_088246C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088246CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088246CCu) goto L_088246CC;
    return;
L_088246CC:
    ctx.gpr[31] = (0x088246D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x088246D4u) goto L_088246D4;
    return;
L_088246D4:
    ctx.gpr[4] = (ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088246E8;
      }
      goto L_088246E0;
    }
L_088246E0:
    ctx.gpr[31] = (0x088246E8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088246E8u) goto L_088246E8;
    return;
L_088246E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088246FCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x088246FCu) goto L_088246FC;
    return;
L_088246FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-5632)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882466C;
      }
      goto L_08824714;
    }
L_08824714:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-5632), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824748:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824768;
      }
      goto L_08824760;
    }
L_08824760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824770;
      }
      goto L_08824768;
    }
L_08824768:
    ctx.gpr[31] = (0x08824770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 329u, 0x08AE968Cu>(ctx, &aot_mem) && ctx.pc == 0x08824770u) goto L_08824770;
    return;
L_08824770:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882477C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25292)));
    ctx.gpr[6] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-19208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088247ACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088247ACu) goto L_088247AC;
    return;
L_088247AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25292), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088247D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088247E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088247E8u) goto L_088247E8;
    return;
L_088247E8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08824808;
      }
      goto L_088247F8;
    }
L_088247F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882480C;
      }
      goto L_08824804;
    }
L_08824804:
    ctx.gpr[4] = (0u | 1u);
    goto L_08824808;
L_08824808:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882480C;
L_0882480C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882481C;
      }
      goto L_08824814;
    }
L_08824814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08824820;
      }
      goto L_0882481C;
    }
L_0882481C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08824820;
L_08824820:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882482C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(640)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(668)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088248C0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088248CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824920;
      }
      goto L_088248E8;
    }
L_088248E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08824910;
      }
      goto L_088248F8;
    }
L_088248F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08824910;
    }
    goto L_08824904;
L_08824904:
    ctx.gpr[31] = (0x0882490Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0882490Cu) goto L_0882490C;
    return;
L_0882490C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08824910;
L_08824910:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824920;
      }
      goto L_08824918;
    }
L_08824918:
    ctx.gpr[31] = (0x08824920u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08824920u) goto L_08824920;
    return;
L_08824920:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824934:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824958;
      }
      goto L_08824954;
    }
L_08824954:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08824958;
L_08824958:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824960:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18736));
    ctx.gpr[5] = (0u | 0u);
    goto L_0882496C;
L_0882496C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0882496C;
      }
      goto L_08824980;
    }
L_08824980:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824988:
    // Adds a bullet trace (start a0, end a1, weapon type a2, shooter a3). A free-aim shot's trace starts at the gun, from
    // a copy in the host's scratch area: the caller's own start stays on the camera ray (lcs_free_aim_trace.hpp).
    {
        float start[3], gun[3];
        for (std::uint32_t i = 0; i < 3u; ++i) start[i] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + i * 4u));
        if (lcs::lcs_free_aim_trace_from_gun(start, gun)) {
            constexpr std::uint32_t kTraceStart = 0x0BF40100u;
            for (std::uint32_t i = 0; i < 3u; ++i) aot_mem.aot_store32(kTraceStart + i * 4u, std::bit_cast<std::uint32_t>(gun[i]));
            aot_mem.aot_store32(kTraceStart + 12u, 0u);
            ctx.gpr[4] = kTraceStart;
        }
    }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x088249B4u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088249B4u) goto L_088249B4;
    return;
L_088249B4:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088249E0;
      }
      goto L_088249BC;
    }
L_088249BC:
    ctx.gpr[31] = (0x088249C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088249C4u) goto L_088249C4;
    return;
L_088249C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824BDC;
      }
      goto L_088249CC;
    }
L_088249CC:
    ctx.gpr[31] = (0x088249D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088249D4u) goto L_088249D4;
    return;
L_088249D4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08824BDC;
      }
      goto L_088249DC;
    }
L_088249DC:
    ctx.gpr[4] = (2232u << 16u);
    goto L_088249E0;
L_088249E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824A14;
    }
L_08824A14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824A44;
    }
L_08824A44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824A74;
    }
L_08824A74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824AA4;
    }
L_08824AA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824AD4;
    }
L_08824AD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824B04;
    }
L_08824B04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824B34;
    }
L_08824B34:
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
    // nop
      if (branch_taken) {
          goto L_08824BDC;
      }
      goto L_08824B64;
    }
L_08824B64:
    ctx.gpr[31] = (0x08824B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08824B6Cu) goto L_08824B6C;
    return;
L_08824B6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08824B90;
      }
      goto L_08824B74;
    }
L_08824B74:
    ctx.gpr[31] = (0x08824B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08824B7Cu) goto L_08824B7C;
    return;
L_08824B7C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
          goto L_08824BA4;
      }
      goto L_08824B90;
    }
L_08824B90:
    ctx.gpr[31] = (0x08824B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08824B98u) goto L_08824B98;
    return;
L_08824B98:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08824BA4;
L_08824BA4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08824BDC;
      }
      goto L_08824BD4;
    }
L_08824BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824C70;
      }
      goto L_08824BDC;
    }
L_08824BDC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824C04;
      }
      goto L_08824BEC;
    }
L_08824BEC:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824C04:
    ctx.gpr[8] = (16076u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 750u);
    ctx.gpr[31] = (0x08824C24u);
    ctx.gpr[7] = (0u | 150u);
    goto L_0882690C;
L_08824C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824C70;
      }
      goto L_08824C2C;
    }
L_08824C2C:
    ctx.gpr[8] = (16179u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 13107u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[31] = (0x08824C4Cu);
    ctx.gpr[7] = (0u | 200u);
    goto L_0882690C;
L_08824C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824C70;
      }
      goto L_08824C54;
    }
L_08824C54:
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2000u);
    ctx.gpr[31] = (0x08824C70u);
    ctx.gpr[7] = (0u | 220u);
    goto L_0882690C;
L_08824C70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08824CA8;
L_08824CA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824CBC;
      }
      goto L_08824CB4;
    }
L_08824CB4:
    ctx.gpr[31] = (0x08824CBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08824934;
L_08824CBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08824CA8;
      }
      goto L_08824CCC;
    }
L_08824CCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824CE0:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (0u | 32u);
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    goto L_08824D00;
L_08824D00:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(111)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08824D34;
      }
      goto L_08824D28;
    }
L_08824D28:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D38;
      }
      goto L_08824D34;
    }
L_08824D34:
    ctx.gpr[5] = (0u | 1u);
    goto L_08824D38;
L_08824D38:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08824D00;
      }
      goto L_08824D54;
    }
L_08824D54:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08824D60;
      }
      goto L_08824D5C;
    }
L_08824D5C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08824D60;
L_08824D60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824D68:
    ctx.gpr[3] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (ctx.gpr[6] & 255u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    ctx.gpr[10] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17712));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08824D94;
L_08824D94:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08824DBC;
      }
      goto L_08824DA0;
    }
L_08824DA0:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08824D94;
      }
      goto L_08824DB4;
    }
L_08824DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824DF8;
      }
      goto L_08824DBC;
    }
L_08824DBC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824E84;
      }
      goto L_08824DF8;
    }
L_08824DF8:
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08824E04;
L_08824E04:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824E70;
      }
      goto L_08824E10;
    }
L_08824E10:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[2] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    goto L_08824E54;
L_08824E54:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08824E54;
      }
      goto L_08824E68;
    }
L_08824E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824E84;
      }
      goto L_08824E70;
    }
L_08824E70:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08824E04;
      }
      goto L_08824E84;
    }
L_08824E84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824E8C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17712));
    goto L_08824E98;
L_08824E98:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08824E98;
      }
      goto L_08824EAC;
    }
L_08824EAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-17712));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[16] = (65280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08824EE8;
L_08824EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824F7C;
      }
      goto L_08824EF4;
    }
L_08824EF4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824F74;
      }
      goto L_08824EFC;
    }
L_08824EFC:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08824F08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824F08u) goto L_08824F08;
    return;
L_08824F08:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08824F14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824F14u) goto L_08824F14;
    return;
L_08824F14:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08824F20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824F20u) goto L_08824F20;
    return;
L_08824F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11092)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11100)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[31] = (0x08824F4Cu);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824F4Cu) goto L_08824F4C;
    return;
L_08824F4C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08824F58u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824F58u) goto L_08824F58;
    return;
L_08824F58:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08824F64u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824F64u) goto L_08824F64;
    return;
L_08824F64:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08824F70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824F70u) goto L_08824F70;
    return;
L_08824F70:
    ctx.gpr[20] = (0u | 1u);
    goto L_08824F74;
L_08824F74:
    ctx.gpr[31] = (0x08824F7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 5u, 0x08828138u>(ctx, &aot_mem) && ctx.pc == 0x08824F7Cu) goto L_08824F7C;
    return;
L_08824F7C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08824EE8;
      }
      goto L_08824F8C;
    }
L_08824F8C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824FB8;
      }
      goto L_08824F94;
    }
L_08824F94:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08824FA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824FA0u) goto L_08824FA0;
    return;
L_08824FA0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08824FACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824FACu) goto L_08824FAC;
    return;
L_08824FAC:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08824FB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08824FB8u) goto L_08824FB8;
    return;
L_08824FB8:
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
L_08824FD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-17712));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08824FF4;
L_08824FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825008;
      }
      goto L_08825000;
    }
L_08825000:
    ctx.gpr[31] = (0x08825008u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08824CE0;
L_08825008:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08824FF4;
      }
      goto L_08825018;
    }
L_08825018:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882502C:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8032), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088250A0;
      }
      goto L_08825058;
    }
L_08825058:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08825074u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20144));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x08825074u) goto L_08825074;
    return;
L_08825074:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825098;
      }
      goto L_0882507C;
    }
L_0882507C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08825090u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29008));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x08825090u) goto L_08825090;
    return;
L_08825090:
    ctx.gpr[31] = (0x08825098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x08825098u) goto L_08825098;
    return;
L_08825098:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016), 0u);
    goto L_088250A0;
L_088250A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088250B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    ctx.gpr[3] = (ctx.gpr[10] | 0u);
    ctx.gpr[12] = (ctx.gpr[7] | 0u);
    ctx.gpr[13] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] & 255u);
    ctx.gpr[5] = (ctx.gpr[13] | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_088250FC;
      }
      goto L_088250F0;
    }
L_088250F0:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825118;
      }
      goto L_088250FC;
    }
L_088250FC:
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8032)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825120;
      }
      goto L_08825110;
    }
L_08825110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825234;
      }
      goto L_08825118;
    }
L_08825118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825234;
      }
      goto L_08825120;
    }
L_08825120:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12960));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[2] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8032)));
    ctx.gpr[12] = (ctx.gpr[2] << 6u);
    ctx.gpr[2] = (ctx.gpr[2] << 4u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-17200));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[12] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08825234;
      }
      goto L_0882518C;
    }
L_0882518C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8032)));
    ctx.gpr[13] = (ctx.gpr[12] << 6u);
    ctx.gpr[12] = (ctx.gpr[12] << 4u);
    ctx.gpr[12] = (ctx.gpr[13] + ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8032)));
    ctx.gpr[12] = (ctx.gpr[7] << 6u);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[12] + ctx.gpr[7]);
    ctx.gpr[12] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[12]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8032)));
    ctx.gpr[7] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8032)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8032)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-8032), ctx.gpr[4]);
    goto L_08825234;
L_08825234:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882523C:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8028), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088252B0;
      }
      goto L_08825268;
    }
L_08825268:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08825284u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20144));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x08825284u) goto L_08825284;
    return;
L_08825284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088252A8;
      }
      goto L_0882528C;
    }
L_0882528C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088252A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29008));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x088252A0u) goto L_088252A0;
    return;
L_088252A0:
    ctx.gpr[31] = (0x088252A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x088252A8u) goto L_088252A8;
    return;
L_088252A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016), 0u);
    goto L_088252B0;
L_088252B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088252C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    ctx.gpr[3] = (ctx.gpr[10] | 0u);
    ctx.gpr[12] = (ctx.gpr[7] | 0u);
    ctx.gpr[13] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] & 255u);
    ctx.gpr[5] = (ctx.gpr[13] | 0u);
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08825310;
      }
      goto L_08825304;
    }
L_08825304:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882532C;
      }
      goto L_08825310;
    }
L_08825310:
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825334;
      }
      goto L_08825324;
    }
L_08825324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825504;
      }
      goto L_0882532C;
    }
L_0882532C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825504;
      }
      goto L_08825334;
    }
L_08825334:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12960));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[2] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[12] = (ctx.gpr[2] << 7u);
    ctx.gpr[2] = (ctx.gpr[2] << 4u);
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[2]);
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-14640));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08825504;
      }
      goto L_08825398;
    }
L_08825398:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[13] = (ctx.gpr[12] << 7u);
    ctx.gpr[12] = (ctx.gpr[12] << 4u);
    ctx.gpr[12] = (ctx.gpr[13] - ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[12] = (ctx.gpr[7] << 7u);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[12] - ctx.gpr[7]);
    ctx.gpr[12] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[12]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088254F8;
      }
      goto L_08825478;
    }
L_08825478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(101)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(103)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088254F8;
L_088254F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-8028), ctx.gpr[4]);
    goto L_08825504;
L_08825504:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882550C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[30] = (ctx.gpr[8] & 255u);
    ctx.gpr[23] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.gpr[21] = (ctx.gpr[11] & 65535u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08825578u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 517u, 0x08A06634u>(ctx, &aot_mem) && ctx.pc == 0x08825578u) goto L_08825578;
    return;
L_08825578:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8024)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2178u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088255A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18624));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x088255A0u) goto L_088255A0;
    return;
L_088255A0:
    ctx.gpr[31] = (0x088255A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ECCu>(ctx, &aot_mem) && ctx.pc == 0x088255A8u) goto L_088255A8;
    return;
L_088255A8:
    ctx.gpr[31] = (0x088255B0u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 237u, 0x08A5D914u>(ctx, &aot_mem) && ctx.pc == 0x088255B0u) goto L_088255B0;
    return;
L_088255B0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088255BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 199u, 0x08AC8FD8u>(ctx, &aot_mem) && ctx.pc == 0x088255BCu) goto L_088255BC;
    return;
L_088255BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088255C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926F5Cu>(ctx, &aot_mem) && ctx.pc == 0x088255C8u) goto L_088255C8;
    return;
L_088255C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_088255EC;
    }
L_088255EC:
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
        goto L_08825608;
    }
    goto L_088255F8;
L_088255F8:
    ctx.gpr[31] = (0x08825600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08825600u) goto L_08825600;
    return;
L_08825600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08825604;
L_08825604:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_08825608;
L_08825608:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08825620u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08825620u) goto L_08825620;
    return;
L_08825620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825678;
      }
      goto L_08825670;
    }
L_08825670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882567C;
      }
      goto L_08825678;
    }
L_08825678:
    ctx.gpr[2] = (0u | 0u);
    goto L_0882567C;
L_0882567C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088256B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 257u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088256ECu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 193u, 0x08AC8F7Cu>(ctx, &aot_mem) && ctx.pc == 0x088256ECu) goto L_088256EC;
    return;
L_088256EC:
    ctx.gpr[31] = (0x088256F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 168u, 0x08A5D3C4u>(ctx, &aot_mem) && ctx.pc == 0x088256F4u) goto L_088256F4;
    return;
L_088256F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882570C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882576C;
      }
      goto L_08825734;
    }
L_08825734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08825740u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 526u, 0x08AD670Cu>(ctx, &aot_mem) && ctx.pc == 0x08825740u) goto L_08825740;
    return;
L_08825740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08825774;
      }
      goto L_08825764;
    }
L_08825764:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08825790;
      }
      goto L_0882576C;
    }
L_0882576C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825890;
      }
      goto L_08825774;
    }
L_08825774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
        goto L_08825790;
    }
    goto L_08825784;
L_08825784:
    ctx.gpr[31] = (0x0882578Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0882578Cu) goto L_0882578C;
    return;
L_0882578C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    goto L_08825790;
L_08825790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x088257A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x088257A4u) goto L_088257A4;
    return;
L_088257A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088257B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 522u, 0x08A06708u>(ctx, &aot_mem) && ctx.pc == 0x088257B8u) goto L_088257B8;
    return;
L_088257B8:
    ctx.gpr[31] = (0x088257C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x088257C0u) goto L_088257C0;
    return;
L_088257C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088257CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x088257CCu) goto L_088257CC;
    return;
L_088257CC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x088257E4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 472u, 0x088CF858u>(ctx, &aot_mem) && ctx.pc == 0x088257E4u) goto L_088257E4;
    return;
L_088257E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0882580C;
      }
      goto L_088257F0;
    }
L_088257F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882580C;
      }
      goto L_08825800;
    }
L_08825800:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0882580Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0882580Cu) goto L_0882580C;
    return;
L_0882580C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825834;
      }
      goto L_0882581C;
    }
L_0882581C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0882582Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882582Cu) goto L_0882582C;
    return;
L_0882582C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882583C;
      }
      goto L_08825834;
    }
L_08825834:
    ctx.gpr[31] = (0x0882583Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x0882583Cu) goto L_0882583C;
    return;
L_0882583C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08825864;
      }
      goto L_08825848;
    }
L_08825848:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08825864;
      }
      goto L_08825858;
    }
L_08825858:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08825864u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08825864u) goto L_08825864;
    return;
L_08825864:
    ctx.gpr[31] = (0x0882586Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 475u, 0x088CF910u>(ctx, &aot_mem) && ctx.pc == 0x0882586Cu) goto L_0882586C;
    return;
L_0882586C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825890;
      }
      goto L_0882587C;
    }
L_0882587C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825890;
      }
      goto L_08825888;
    }
L_08825888:
    ctx.gpr[31] = (0x08825890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08825890u) goto L_08825890;
    return;
L_08825890:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088258B0:
    ctx.gpr[9] = (2233u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-11056));
    ctx.gpr[11] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (16256u << 16u);
    ctx.gpr[8] = (0u | 257u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[6] = (0u | 1024u);
    ctx.gpr[5] = (0u | 5u);
    goto L_088258E0;
L_088258E0:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_088258E0;
      }
      goto L_08825938;
    }
L_08825938:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8020), 0u);
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8024), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882594C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-11056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08825968;
L_08825968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882597C;
      }
      goto L_08825974;
    }
L_08825974:
    ctx.gpr[31] = (0x0882597Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088256B4;
L_0882597C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08825968;
      }
      goto L_0882598C;
    }
L_0882598C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088259A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-11056));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[31] = (0x088259F4u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-8020), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 481u, 0x088CF984u>(ctx, &aot_mem) && ctx.pc == 0x088259F4u) goto L_088259F4;
    return;
L_088259F4:
    ctx.gpr[4] = (16396u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2232u << 16u);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[23]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(12960));
    goto L_08825A30;
L_08825A30:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825B94;
      }
      goto L_08825A40;
    }
L_08825A40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08825A6C;
      }
      goto L_08825A58;
    }
L_08825A58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08825B74;
      }
      goto L_08825A6C;
    }
L_08825A6C:
    ctx.gpr[31] = (0x08825A74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08825A74u) goto L_08825A74;
    return;
L_08825A74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08825AB0;
      }
      goto L_08825A80;
    }
L_08825A80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(99)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 244 ? 1u : 0u);
      if (branch_taken) {
          goto L_08825AA0;
      }
      goto L_08825A98;
    }
L_08825A98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825AB0;
      }
      goto L_08825AA0;
    }
L_08825AA0:
    ctx.gpr[31] = (0x08825AA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088256B4;
L_08825AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825BA8;
      }
      goto L_08825AB0;
    }
L_08825AB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08825AF8;
      }
      goto L_08825AB8;
    }
L_08825AB8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08825AF8;
      }
      goto L_08825AC8;
    }
L_08825AC8:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[23]);
    goto L_08825ACC;
L_08825ACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08825AD8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 504u, 0x08A064B8u>(ctx, &aot_mem) && ctx.pc == 0x08825AD8u) goto L_08825AD8;
    return;
L_08825AD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825AE8;
      }
      goto L_08825AE0;
    }
L_08825AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08825AF8;
      }
      goto L_08825AE8;
    }
L_08825AE8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08825ACC;
      }
      goto L_08825AF8;
    }
L_08825AF8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825B74;
      }
      goto L_08825B00;
    }
L_08825B00:
    ctx.gpr[31] = (0x08825B08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0882570C;
L_08825B08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825B74;
      }
      goto L_08825B18;
    }
L_08825B18:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08825B74;
      }
      goto L_08825B28;
    }
L_08825B28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(97)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(98)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 132u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08825B74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08825B74u) goto L_08825B74;
    return;
L_08825B74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825B84;
      }
      goto L_08825B80;
    }
L_08825B80:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    goto L_08825B84;
L_08825B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-8020), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08825BA8;
      }
      goto L_08825B94;
    }
L_08825B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825BA8;
      }
      goto L_08825BA0;
    }
L_08825BA0:
    ctx.gpr[31] = (0x08825BA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088256B4;
L_08825BA8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08825A30;
      }
      goto L_08825BB8;
    }
L_08825BB8:
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
L_08825BFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[18] = (ctx.gpr[5] & 65535u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.gpr[23] = (ctx.gpr[11] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x08825C94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x08825C94u) goto L_08825C94;
    return;
L_08825C94:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[4] = (16238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08825CE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x08825CE8u) goto L_08825CE8;
    return;
L_08825CE8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (16220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08825D38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x08825D38u) goto L_08825D38;
    return;
L_08825D38:
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825D78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825E54;
      }
      goto L_08825D9C;
    }
L_08825D9C:
    ctx.gpr[8] = (ctx.gpr[9] << 7u);
    ctx.gpr[10] = (ctx.gpr[9] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[10] = (2233u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-11056));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08825E44;
      }
      goto L_08825DC0;
    }
L_08825DC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(116)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(96)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(97)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(98)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(99)));
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(108)));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(102))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[2] = (17096u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[12] | 0u);
    ctx.gpr[11] = (ctx.gpr[13] | 0u);
    ctx.gpr[31] = (0x08825E3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x08825E3Cu) goto L_08825E3C;
    return;
L_08825E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825E58;
      }
      goto L_08825E44;
    }
L_08825E44:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825D9C;
      }
      goto L_08825E54;
    }
L_08825E54:
    ctx.gpr[2] = (0u | 0u);
    goto L_08825E58;
L_08825E58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825E64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08825E78u);
    // nop
    goto L_08824960;
L_08825E78:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5616));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5296), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5296));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5264));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08825F38u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08824E8C;
L_08825F38:
    ctx.gpr[31] = (0x08825F40u);
    // nop
    goto L_0882502C;
L_08825F40:
    ctx.gpr[31] = (0x08825F48u);
    // nop
    goto L_0882523C;
L_08825F48:
    ctx.gpr[31] = (0x08825F50u);
    // nop
    goto L_08826758;
L_08825F50:
    ctx.gpr[31] = (0x08825F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 642u, 0x08877EFCu>(ctx, &aot_mem) && ctx.pc == 0x08825F58u) goto L_08825F58;
    return;
L_08825F58:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1413), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1416), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08825F7Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1420), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08825F7Cu) goto L_08825F7C;
    return;
L_08825F7C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08825F88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12480));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08825F88u) goto L_08825F88;
    return;
L_08825F88:
    ctx.gpr[31] = (0x08825F90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08825F90u) goto L_08825F90;
    return;
L_08825F90:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825FB4;
      }
      goto L_08825FA0;
    }
L_08825FA0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08825FB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12468));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08825FB0u) goto L_08825FB0;
    return;
L_08825FB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[2]);
    goto L_08825FB4;
L_08825FB4:
    ctx.gpr[31] = (0x08825FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08825FBCu) goto L_08825FBC;
    return;
L_08825FBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08825FE0u);
    // nop
    goto L_0882594C;
L_08825FE0:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825FFC;
      }
      goto L_08825FF0;
    }
L_08825FF0:
    ctx.gpr[31] = (0x08825FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 115u, 0x08A0D1E0u>(ctx, &aot_mem) && ctx.pc == 0x08825FF8u) goto L_08825FF8;
    return;
L_08825FF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), 0u);
    goto L_08825FFC;
L_08825FFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882600C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882601Cu);
    // nop
    goto L_08824FD8;
L_0882601C:
    ctx.gpr[31] = (0x08826024u);
    // nop
    goto L_08824C8C;
L_08826024:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08826040u);
    // nop
    goto L_08824EB4;
L_08826040:
    ctx.gpr[31] = (0x08826048u);
    // nop
    goto L_08826D80;
L_08826048:
    ctx.gpr[31] = (0x08826050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 14u, 0x0882848Cu>(ctx, &aot_mem) && ctx.pc == 0x08826050u) goto L_08826050;
    return;
L_08826050:
    ctx.gpr[31] = (0x08826058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 84u, 0x0882918Cu>(ctx, &aot_mem) && ctx.pc == 0x08826058u) goto L_08826058;
    return;
L_08826058:
    ctx.gpr[31] = (0x08826060u);
    // nop
    goto L_08826780;
L_08826060:
    ctx.gpr[31] = (0x08826068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 648u, 0x08877F84u>(ctx, &aot_mem) && ctx.pc == 0x08826068u) goto L_08826068;
    return;
L_08826068:
    ctx.gpr[31] = (0x08826070u);
    // nop
    goto L_088259A0;
L_08826070:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882607C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088260D0;
      }
      goto L_088260A4;
    }
L_088260A4:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5120));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088260D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x088260D0u) goto L_088260D0;
    return;
L_088260D0:
    ctx.gpr[31] = (0x088260D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088260D8u) goto L_088260D8;
    return;
L_088260D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882655C;
      }
      goto L_088260E0;
    }
L_088260E0:
    ctx.gpr[31] = (0x088260E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088260E8u) goto L_088260E8;
    return;
L_088260E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882655C;
      }
      goto L_088260F4;
    }
L_088260F4:
    ctx.gpr[31] = (0x088260FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088260FCu) goto L_088260FC;
    return;
L_088260FC:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(740)));
      if (branch_taken) {
          goto L_08826274;
      }
      goto L_08826108;
    }
L_08826108:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5120));
    ctx.gpr[31] = (0x0882611Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x0882611Cu) goto L_0882611C;
    return;
L_0882611C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
      if (branch_taken) {
          goto L_0882613C;
      }
      goto L_08826124;
    }
L_08826124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08826140;
    }
    goto L_08826134;
L_08826134:
    ctx.gpr[31] = (0x0882613Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0882613Cu) goto L_0882613C;
    return;
L_0882613C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08826140;
L_08826140:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08826160u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08826160u) goto L_08826160;
    return;
L_08826160:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882616Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x0882616Cu) goto L_0882616C;
    return;
L_0882616C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826190;
      }
      goto L_0882617C;
    }
L_0882617C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826190;
      }
      goto L_08826188;
    }
L_08826188:
    ctx.gpr[31] = (0x08826190u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08826190u) goto L_08826190;
    return;
L_08826190:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15995u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 59245u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (15621u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 50856u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x0882626Cu);
    ctx.gpr[7] = (0u | 100u);
    goto L_08824D68;
L_0882626C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882655C;
      }
      goto L_08826274;
    }
L_08826274:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088263EC;
      }
      goto L_08826280;
    }
L_08826280:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5120));
    ctx.gpr[31] = (0x08826294u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08826294u) goto L_08826294;
    return;
L_08826294:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_088262B4;
      }
      goto L_0882629C;
    }
L_0882629C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_088262B8;
    }
    goto L_088262AC;
L_088262AC:
    ctx.gpr[31] = (0x088262B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x088262B4u) goto L_088262B4;
    return;
L_088262B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_088262B8;
L_088262B8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x088262D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x088262D8u) goto L_088262D8;
    return;
L_088262D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088262E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x088262E4u) goto L_088262E4;
    return;
L_088262E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826308;
      }
      goto L_088262F4;
    }
L_088262F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826308;
      }
      goto L_08826300;
    }
L_08826300:
    ctx.gpr[31] = (0x08826308u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08826308u) goto L_08826308;
    return;
L_08826308:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (48477u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 12059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (15621u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 50856u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x088263E4u);
    ctx.gpr[7] = (0u | 100u);
    goto L_08824D68;
L_088263E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882655C;
      }
      goto L_088263EC;
    }
L_088263EC:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882655C;
      }
      goto L_088263F8;
    }
L_088263F8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5120));
    ctx.gpr[31] = (0x0882640Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x0882640Cu) goto L_0882640C;
    return;
L_0882640C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), 0u);
      if (branch_taken) {
          goto L_0882642C;
      }
      goto L_08826414;
    }
L_08826414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
        goto L_08826430;
    }
    goto L_08826424;
L_08826424:
    ctx.gpr[31] = (0x0882642Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0882642Cu) goto L_0882642C;
    return;
L_0882642C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    goto L_08826430;
L_08826430:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08826450u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08826450u) goto L_08826450;
    return;
L_08826450:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882645Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x0882645Cu) goto L_0882645C;
    return;
L_0882645C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826480;
      }
      goto L_0882646C;
    }
L_0882646C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826480;
      }
      goto L_08826478;
    }
L_08826478:
    ctx.gpr[31] = (0x08826480u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08826480u) goto L_08826480;
    return;
L_08826480:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15812u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39846u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (48271u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16268u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 18874u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x0882655Cu);
    ctx.gpr[7] = (0u | 100u);
    goto L_08824D68;
L_0882655C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826740;
      }
      goto L_088265A4;
    }
L_088265A4:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_088265BC;
      }
      goto L_088265B0;
    }
L_088265B0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_088265BC;
L_088265BC:
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[31] = (0x08826614u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08826614u) goto L_08826614;
    return;
L_08826614:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16179u << 16u);
      if (branch_taken) {
          goto L_08826738;
      }
      goto L_0882661C;
    }
L_0882661C:
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x08826658u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08826658u) goto L_08826658;
    return;
L_08826658:
    ctx.gpr[31] = (0x08826660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08826660u) goto L_08826660;
    return;
L_08826660:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08826688;
    }
    goto L_08826688;
L_08826688:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088266A0;
    }
    goto L_088266A0;
L_088266A0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088266B0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x088266B0u) goto L_088266B0;
    return;
L_088266B0:
    ctx.gpr[31] = (0x088266B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x088266B8u) goto L_088266B8;
    return;
L_088266B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088266CCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x088266CCu) goto L_088266CC;
    return;
L_088266CC:
    ctx.gpr[31] = (0x088266D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x088266D4u) goto L_088266D4;
    return;
L_088266D4:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(65)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0882670Cu);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0882670Cu) goto L_0882670C;
    return;
L_0882670C:
    ctx.gpr[31] = (0x08826714u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08826714u) goto L_08826714;
    return;
L_08826714:
    ctx.gpr[31] = (0x0882671Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0882671Cu) goto L_0882671C;
    return;
L_0882671C:
    ctx.gpr[31] = (0x08826724u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08826724u) goto L_08826724;
    return;
L_08826724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08826738u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08826738u) goto L_08826738;
    return;
L_08826738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826744;
      }
      goto L_08826740;
    }
L_08826740:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08826744;
L_08826744:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826758:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[5] = (0u | 0u);
    goto L_08826764;
L_08826764:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08826764;
      }
      goto L_08826778;
    }
L_08826778:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_0882679C;
L_0882679C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088267B0;
      }
      goto L_088267A8;
    }
L_088267A8:
    ctx.gpr[31] = (0x088267B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08826574;
L_088267B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0882679C;
      }
      goto L_088267C0;
    }
L_088267C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088267D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[21] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-6448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    goto L_08826838;
L_08826838:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826860;
      }
      goto L_08826844;
    }
L_08826844:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826860;
      }
      goto L_0882684C;
    }
L_0882684C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08826838;
      }
      goto L_08826860;
    }
L_08826860:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088268A4;
      }
      goto L_08826868;
    }
L_08826868:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08826880u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x08826880u) goto L_08826880;
    return;
L_08826880:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088268A4;
L_088268A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088268D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 144u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08826900u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-23836));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 366u, 0x08AF5CA4u>(ctx, &aot_mem) && ctx.pc == 0x08826900u) goto L_08826900;
    return;
L_08826900:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882690C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-18736));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[31]);
    goto L_08826930;
L_08826930:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826940;
      }
      goto L_0882693C;
    }
L_0882693C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08826940;
L_08826940:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08826930;
      }
      goto L_08826950;
    }
L_08826950:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[11]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088269BC;
      }
      goto L_0882695C;
    }
L_0882695C:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (20224u << 16u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
      if (branch_taken) {
          goto L_0882697C;
      }
      goto L_08826970;
    }
L_08826970:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_0882697C;
L_0882697C:
    ctx.gpr[6] = (16000u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
        goto L_088269A4;
    }
    goto L_08826998;
L_08826998:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088269B4;
      }
      goto L_088269A4;
    }
L_088269A4:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    goto L_088269B4;
L_088269B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826A20;
      }
      goto L_088269BC;
    }
L_088269BC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[11]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826A20;
      }
      goto L_088269C8;
    }
L_088269C8:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (20224u << 16u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
      if (branch_taken) {
          goto L_088269E8;
      }
      goto L_088269DC;
    }
L_088269DC:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_088269E8;
L_088269E8:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
        goto L_08826A10;
    }
    goto L_08826A04;
L_08826A04:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08826A20;
      }
      goto L_08826A10;
    }
L_08826A10:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    goto L_08826A20;
L_08826A20:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    goto L_08826A30;
L_08826A30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826A58;
      }
      goto L_08826A38;
    }
L_08826A38:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826A58;
      }
      goto L_08826A44;
    }
L_08826A44:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08826A30;
      }
      goto L_08826A58;
    }
L_08826A58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826AB0;
      }
      goto L_08826A60;
    }
L_08826A60:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    goto L_08826AB0;
L_08826AB0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12960));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08826D74;
      }
      goto L_08826BD0;
    }
L_08826BD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08826BF0;
    }
    goto L_08826BE4;
L_08826BE4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08826BF0;
      }
      goto L_08826BF0;
    }
L_08826BF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08826C10;
    }
    goto L_08826C04;
L_08826C04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08826C10;
      }
      goto L_08826C10;
    }
L_08826C10:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08826C34;
    }
    goto L_08826C24;
L_08826C24:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08826C38;
      }
      goto L_08826C34;
    }
L_08826C34:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08826C38;
L_08826C38:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08826D74;
      }
      goto L_08826CC0;
    }
L_08826CC0:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17150u << 16u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08826D3C;
      }
      goto L_08826CFC;
    }
L_08826CFC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
        goto L_08826D18;
    }
    goto L_08826D0C;
L_08826D0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08826D28;
      }
      goto L_08826D18;
    }
L_08826D18:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08826D28;
L_08826D28:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08826D34u);
    ctx.gpr[5] = (0u | 185u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08826D34u) goto L_08826D34;
    return;
L_08826D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826D74;
      }
      goto L_08826D3C;
    }
L_08826D3C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
        goto L_08826D58;
    }
    goto L_08826D4C;
L_08826D4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08826D68;
      }
      goto L_08826D58;
    }
L_08826D58:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08826D68;
L_08826D68:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08826D74u);
    ctx.gpr[5] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08826D74u) goto L_08826D74;
    return;
L_08826D74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826D80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1552));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1524), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1464), ctx.gpr[5]);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1460), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5616));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1452), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1448), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1444), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(136));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1484), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1480), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1476), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(296));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1472), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1468), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1420), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(148));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1416), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1412), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(212));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1408), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(244));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1404), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(276));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1400), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1396), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(308));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1392), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1488), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(732));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1388), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1380), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1368), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1172), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1164), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1528), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1500), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(780)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-18736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1508), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1516), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1520), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1532), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1536), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1540), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1544), ctx.gpr[30]);
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[17] = (0u | 152u);
    ctx.gpr[16] = (0u | 34u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1492), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1548), ctx.gpr[31]);
    goto L_08827144;
L_08827144:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1324), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (20352u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08827E34;
      }
      goto L_08827158;
    }
L_08827158:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08827164u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08827164u) goto L_08827164;
    return;
L_08827164:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08827170u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08827170u) goto L_08827170;
    return;
L_08827170:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0882717Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0882717Cu) goto L_0882717C;
    return;
L_0882717C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08827188u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08827188u) goto L_08827188;
    return;
L_08827188:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[8] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (static_cast<std::int32_t>(ctx.gpr[8]) < 0) {
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
        goto L_088271A8;
    }
    goto L_088271A8;
L_088271A8:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
        goto L_088271C4;
    }
    goto L_088271C4;
L_088271C4:
    ctx.fpr[22] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1324)));
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
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.lo);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1464)));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1460)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088272DC;
      }
      goto L_088272CC;
    }
L_088272CC:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08827E34;
      }
      goto L_088272DC;
    }
L_088272DC:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088273B0;
      }
      goto L_088272EC;
    }
L_088272EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
        goto L_08827300;
    }
    goto L_08827300;
L_08827300:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_0882732C;
    }
    goto L_0882732C;
L_0882732C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_0882736C;
    }
    goto L_0882736C;
L_0882736C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
        goto L_08827380;
    }
    goto L_08827380;
L_08827380:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882747C;
      }
      goto L_088273B0;
    }
L_088273B0:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882747C;
      }
      goto L_088273C0;
    }
L_088273C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
        goto L_088273D4;
    }
    goto L_088273D4;
L_088273D4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_08827400;
    }
    goto L_08827400;
L_08827400:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_08827440;
    }
    goto L_08827440;
L_08827440:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
        goto L_08827454;
    }
    goto L_08827454;
L_08827454:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
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
    goto L_0882747C;
L_0882747C:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(368), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(369), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(370), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(371), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(373), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(374), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1452)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(375), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(376), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(377), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(378), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1448)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(379), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(381), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(382), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1444)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(383), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(385), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(386), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(387), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(390), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1484)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(391), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1480)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(401), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(402), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(403), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(404), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(405), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1468)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1380), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1368), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088278A0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x088278A0u) goto L_088278A0;
    return;
L_088278A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088278C0;
      }
      goto L_088278A8;
    }
L_088278A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088278B8u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x088278B8u) goto L_088278B8;
    return;
L_088278B8:
    ctx.gpr[31] = (0x088278C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x088278C0u) goto L_088278C0;
    return;
L_088278C0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(529), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(530), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(531), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1452)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(537), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1448)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(539), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1444)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(545), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(546), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(547), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1276), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08827BB4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x08827BB4u) goto L_08827BB4;
    return;
L_08827BB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827BD4;
      }
      goto L_08827BBC;
    }
L_08827BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08827BCCu);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x08827BCCu) goto L_08827BCC;
    return;
L_08827BCC:
    ctx.gpr[31] = (0x08827BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x08827BD4u) goto L_08827BD4;
    return;
L_08827BD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1172), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[20];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08827E14u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x08827E14u) goto L_08827E14;
    return;
L_08827E14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827E34;
      }
      goto L_08827E1C;
    }
L_08827E1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08827E2Cu);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x08827E2Cu) goto L_08827E2C;
    return;
L_08827E2C:
    ctx.gpr[31] = (0x08827E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x08827E34u) goto L_08827E34;
    return;
L_08827E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1324)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08827144;
      }
      goto L_08827E54;
    }
L_08827E54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1436)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1372)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1368)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1360)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1356)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1348)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1320)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1300)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.pc = 0x08828000u; return;
}

void recomp_unit_0008(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0008_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_8(Runtime &runtime) {
    runtime.register_generated_unit(8u, 0x08824000u, 16384u, &recomp_unit_0008, &recomp_unit_0008_entry);
    runtime.register_function(0x08824000u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824014u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824038u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824058u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824084u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824104u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882410Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824114u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824124u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824134u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824158u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824164u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882416Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824224u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824238u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824268u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824280u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882430Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882432Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824368u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824370u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824378u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824380u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824390u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824560u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824630u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824638u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824640u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824654u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882466Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824674u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882469Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824714u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824748u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824760u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824768u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824770u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882477Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824804u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824808u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882480Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824814u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882481Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824820u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882482Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824904u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882490Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824910u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824918u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824920u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824934u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824954u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824958u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824960u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882496Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824980u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824988u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BDCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CCCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825000u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825008u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825018u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882502Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825038u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825058u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825074u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882507Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825090u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825098u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825110u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825118u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825120u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882518Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825234u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882523Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825248u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825268u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825284u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882528Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825304u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825310u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825324u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882532Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825334u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825398u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825478u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825504u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882550Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825578u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825600u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825604u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825608u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825620u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825670u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825678u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882567Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882570Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825734u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825740u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825764u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882576Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825774u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825784u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882578Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825790u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825800u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882580Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882581Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882582Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825834u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882583Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825848u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825858u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825864u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882586Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882587Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825888u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825890u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825938u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882594Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825968u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825974u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882597Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882598Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825ACCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825BA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825BA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825BB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825BFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E3Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F48u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FCCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882600Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882601Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826024u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826030u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826040u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826048u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826050u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826058u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826060u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826068u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826070u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882607Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826108u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882611Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826124u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826134u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882613Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826140u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826160u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882616Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882617Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826188u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826190u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882626Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826274u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826280u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826294u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882629Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826300u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826308u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088263E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088263ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088263F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882640Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826414u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826424u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882642Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826430u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826450u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882645Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882646Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826478u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826480u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882655Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826574u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826614u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882661Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826658u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826660u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826688u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882670Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826714u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882671Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826724u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826738u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826740u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826744u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826758u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826764u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826778u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826780u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882679Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826838u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826844u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882684Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826860u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826868u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826880u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826900u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882690Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826930u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882693Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826940u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826950u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882695Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826970u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882697Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826998u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BD0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D3Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827144u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827158u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827164u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827170u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882717Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827188u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088272CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088272DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088272ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827300u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882732Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882736Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827380u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827400u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827440u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827454u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882747Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BCCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E54u, &recomp_unit_0008, "recomp_unit_0008");
}
} // namespace psprecomp
