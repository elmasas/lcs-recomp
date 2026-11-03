#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_world_detail.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0083[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0,
    28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 41,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60,
    0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69,
    0, 0, 70, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91,
    0, 0, 0, 92, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0, 98, 99, 0, 100, 0, 0, 101,
    0, 0, 102, 103, 0, 104, 0, 0, 0, 105, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 124, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 130, 0, 131, 0, 0, 132, 0, 0,
    0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0,
    0, 142, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 162, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0,
    171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177,
    0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 210,
    0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234,
    0, 235, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 252, 253, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 270, 0, 271, 0, 272, 0, 0, 273, 0,
    274, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 312, 0,
    0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0,
    0, 323, 0, 324, 0, 0, 0, 0, 325, 326, 0, 0, 327, 328, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 335, 336, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 340,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0,
    0, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0,
    364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0,
    0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399,
    0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0,
    0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0,
    433, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 441, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 476, 477, 0, 0, 0, 0, 478, 0,
    0, 479, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0,
    0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 501, 0, 0, 502, 0, 0, 503,
    0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0,
    0, 514, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 522, 0, 523, 0, 524, 0, 525, 0, 0,
    526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 0,
    0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 547, 0, 548,
    0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 557, 0, 558, 0, 559, 0, 0, 560, 0,
    0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0,
    576, 0, 0, 577, 0, 0, 578, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0,
    0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0,
    0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 600, 0, 0,
    601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0,
    607, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 614, 615, 0, 616, 0, 617, 0, 0,
    0, 0, 618, 619, 0, 0, 620, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636,
    0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 644,
    0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0,
    670, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0,
    677, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0,
    0, 688, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 697, 0,
    0, 698, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 701, 702, 0, 703, 0, 704, 705, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707,
};
void recomp_unit_0083_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08950000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0083[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08950000;
    case 2u: goto L_08950028;
    case 3u: goto L_08950048;
    case 4u: goto L_0895006C;
    case 5u: goto L_08950088;
    case 6u: goto L_08950090;
    case 7u: goto L_0895009C;
    case 8u: goto L_089500B4;
    case 9u: goto L_089500C4;
    case 10u: goto L_089500C8;
    case 11u: goto L_089500D4;
    case 12u: goto L_08950104;
    case 13u: goto L_08950130;
    case 14u: goto L_08950138;
    case 15u: goto L_08950154;
    case 16u: goto L_08950164;
    case 17u: goto L_08950174;
    case 18u: goto L_0895018C;
    case 19u: goto L_0895019C;
    case 20u: goto L_089501A4;
    case 21u: goto L_089501B4;
    case 22u: goto L_089501BC;
    case 23u: goto L_089501C8;
    case 24u: goto L_089501D0;
    case 25u: goto L_089501E0;
    case 26u: goto L_089501E8;
    case 27u: goto L_089501F8;
    case 28u: goto L_08950200;
    case 29u: goto L_0895021C;
    case 30u: goto L_08950228;
    case 31u: goto L_08950238;
    case 32u: goto L_08950240;
    case 33u: goto L_08950248;
    case 34u: goto L_08950254;
    case 35u: goto L_08950268;
    case 36u: goto L_08950270;
    case 37u: goto L_08950278;
    case 38u: goto L_089502D0;
    case 39u: goto L_089502D8;
    case 40u: goto L_089502F4;
    case 41u: goto L_089502FC;
    case 42u: goto L_08950310;
    case 43u: goto L_08950334;
    case 44u: goto L_08950338;
    case 45u: goto L_08950360;
    case 46u: goto L_08950380;
    case 47u: goto L_089503A4;
    case 48u: goto L_089503B8;
    case 49u: goto L_089503D4;
    case 50u: goto L_089503DC;
    case 51u: goto L_089503F4;
    case 52u: goto L_0895040C;
    case 53u: goto L_08950418;
    case 54u: goto L_08950424;
    case 55u: goto L_08950444;
    case 56u: goto L_0895044C;
    case 57u: goto L_08950454;
    case 58u: goto L_0895045C;
    case 59u: goto L_08950464;
    case 60u: goto L_0895047C;
    case 61u: goto L_08950484;
    case 62u: goto L_0895049C;
    case 63u: goto L_089504A4;
    case 64u: goto L_089504B0;
    case 65u: goto L_089504B8;
    case 66u: goto L_089504BC;
    case 67u: goto L_089504D0;
    case 68u: goto L_089504F4;
    case 69u: goto L_089504FC;
    case 70u: goto L_08950508;
    case 71u: goto L_0895050C;
    case 72u: goto L_08950520;
    case 73u: goto L_089505A0;
    case 74u: goto L_089505B4;
    case 75u: goto L_089505BC;
    case 76u: goto L_089505D4;
    case 77u: goto L_0895068C;
    case 78u: goto L_089506A0;
    case 79u: goto L_089506DC;
    case 80u: goto L_08950704;
    case 81u: goto L_08950780;
    case 82u: goto L_0895078C;
    case 83u: goto L_08950794;
    case 84u: goto L_089507BC;
    case 85u: goto L_089507CC;
    case 86u: goto L_089507D4;
    case 87u: goto L_089507DC;
    case 88u: goto L_089507E4;
    case 89u: goto L_089507EC;
    case 90u: goto L_089507F4;
    case 91u: goto L_089507FC;
    case 92u: goto L_0895080C;
    case 93u: goto L_08950810;
    case 94u: goto L_08950838;
    case 95u: goto L_08950848;
    case 96u: goto L_0895084C;
    case 97u: goto L_08950854;
    case 98u: goto L_08950864;
    case 99u: goto L_08950868;
    case 100u: goto L_08950870;
    case 101u: goto L_0895087C;
    case 102u: goto L_08950888;
    case 103u: goto L_0895088C;
    case 104u: goto L_08950894;
    case 105u: goto L_089508A4;
    case 106u: goto L_089508A8;
    case 107u: goto L_089508B4;
    case 108u: goto L_089508BC;
    case 109u: goto L_089508E8;
    case 110u: goto L_08950950;
    case 111u: goto L_089509A0;
    case 112u: goto L_089509A8;
    case 113u: goto L_089509B4;
    case 114u: goto L_089509BC;
    case 115u: goto L_089509E0;
    case 116u: goto L_089509EC;
    case 117u: goto L_089509FC;
    case 118u: goto L_08950A58;
    case 119u: goto L_08950A70;
    case 120u: goto L_08950A88;
    case 121u: goto L_08950A9C;
    case 122u: goto L_08950B4C;
    case 123u: goto L_08950B68;
    case 124u: goto L_08950B6C;
    case 125u: goto L_08950B78;
    case 126u: goto L_08950B98;
    case 127u: goto L_08950BC4;
    case 128u: goto L_08950BD0;
    case 129u: goto L_08950BDC;
    case 130u: goto L_08950BE0;
    case 131u: goto L_08950BE8;
    case 132u: goto L_08950BF4;
    case 133u: goto L_08950C04;
    case 134u: goto L_08950C0C;
    case 135u: goto L_08950C14;
    case 136u: goto L_08950C20;
    case 137u: goto L_08950C28;
    case 138u: goto L_08950C38;
    case 139u: goto L_08950C58;
    case 140u: goto L_08950C60;
    case 141u: goto L_08950C68;
    case 142u: goto L_08950C84;
    case 143u: goto L_08950C88;
    case 144u: goto L_08950C90;
    case 145u: goto L_08950CA0;
    case 146u: goto L_08950CA8;
    case 147u: goto L_08950CB0;
    case 148u: goto L_08950CD8;
    case 149u: goto L_08950CE4;
    case 150u: goto L_08950CEC;
    case 151u: goto L_08950D0C;
    case 152u: goto L_08950D28;
    case 153u: goto L_08950D34;
    case 154u: goto L_08950D3C;
    case 155u: goto L_08950D44;
    case 156u: goto L_08950D54;
    case 157u: goto L_08950D58;
    case 158u: goto L_08950D7C;
    case 159u: goto L_08950D84;
    case 160u: goto L_08950DE0;
    case 161u: goto L_08950DF8;
    case 162u: goto L_08950E14;
    case 163u: goto L_08950E18;
    case 164u: goto L_08950E54;
    case 165u: goto L_08950E8C;
    case 166u: goto L_08950EA0;
    case 167u: goto L_08950EAC;
    case 168u: goto L_08950EC8;
    case 169u: goto L_08950EE0;
    case 170u: goto L_08950EF4;
    case 171u: goto L_08950F00;
    case 172u: goto L_08950F0C;
    case 173u: goto L_08950F6C;
    case 174u: goto L_08950F74;
    case 175u: goto L_08950F7C;
    case 176u: goto L_08950FEC;
    case 177u: goto L_08950FFC;
    case 178u: goto L_08951004;
    case 179u: goto L_0895104C;
    case 180u: goto L_08951078;
    case 181u: goto L_08951084;
    case 182u: goto L_0895109C;
    case 183u: goto L_08951100;
    case 184u: goto L_08951140;
    case 185u: goto L_08951148;
    case 186u: goto L_08951150;
    case 187u: goto L_089511D0;
    case 188u: goto L_08951270;
    case 189u: goto L_089512DC;
    case 190u: goto L_089512E4;
    case 191u: goto L_089512F0;
    case 192u: goto L_08951308;
    case 193u: goto L_0895136C;
    case 194u: goto L_089513A8;
    case 195u: goto L_089513B0;
    case 196u: goto L_089513B8;
    case 197u: goto L_08951434;
    case 198u: goto L_089514D4;
    case 199u: goto L_089514F0;
    case 200u: goto L_089514F8;
    case 201u: goto L_08951518;
    case 202u: goto L_08951524;
    case 203u: goto L_08951534;
    case 204u: goto L_08951540;
    case 205u: goto L_08951548;
    case 206u: goto L_08951558;
    case 207u: goto L_08951560;
    case 208u: goto L_0895156C;
    case 209u: goto L_08951574;
    case 210u: goto L_0895157C;
    case 211u: goto L_08951588;
    case 212u: goto L_08951594;
    case 213u: goto L_089515C8;
    case 214u: goto L_089515DC;
    case 215u: goto L_08951604;
    case 216u: goto L_08951624;
    case 217u: goto L_08951630;
    case 218u: goto L_08951694;
    case 219u: goto L_0895169C;
    case 220u: goto L_089516A8;
    case 221u: goto L_089516B4;
    case 222u: goto L_089516BC;
    case 223u: goto L_089516D4;
    case 224u: goto L_08951700;
    case 225u: goto L_0895170C;
    case 226u: goto L_08951714;
    case 227u: goto L_0895171C;
    case 228u: goto L_0895172C;
    case 229u: goto L_08951744;
    case 230u: goto L_0895174C;
    case 231u: goto L_08951758;
    case 232u: goto L_08951760;
    case 233u: goto L_08951768;
    case 234u: goto L_0895177C;
    case 235u: goto L_08951784;
    case 236u: goto L_08951788;
    case 237u: goto L_08951794;
    case 238u: goto L_0895179C;
    case 239u: goto L_089517C8;
    case 240u: goto L_089517DC;
    case 241u: goto L_089517E4;
    case 242u: goto L_089517EC;
    case 243u: goto L_089517F8;
    case 244u: goto L_0895181C;
    case 245u: goto L_08951830;
    case 246u: goto L_08951840;
    case 247u: goto L_08951848;
    case 248u: goto L_08951850;
    case 249u: goto L_08951858;
    case 250u: goto L_08951864;
    case 251u: goto L_0895186C;
    case 252u: goto L_08951874;
    case 253u: goto L_08951878;
    case 254u: goto L_08951884;
    case 255u: goto L_089518A0;
    case 256u: goto L_089518AC;
    case 257u: goto L_089518B8;
    case 258u: goto L_089518C0;
    case 259u: goto L_089518C8;
    case 260u: goto L_089518D0;
    case 261u: goto L_089518E4;
    case 262u: goto L_08951908;
    case 263u: goto L_08951914;
    case 264u: goto L_08951920;
    case 265u: goto L_08951928;
    case 266u: goto L_0895193C;
    case 267u: goto L_08951944;
    case 268u: goto L_0895194C;
    case 269u: goto L_08951958;
    case 270u: goto L_0895195C;
    case 271u: goto L_08951964;
    case 272u: goto L_0895196C;
    case 273u: goto L_08951978;
    case 274u: goto L_08951980;
    case 275u: goto L_08951990;
    case 276u: goto L_08951998;
    case 277u: goto L_089519A4;
    case 278u: goto L_089519AC;
    case 279u: goto L_089519B4;
    case 280u: goto L_089519BC;
    case 281u: goto L_089519C4;
    case 282u: goto L_089519D0;
    case 283u: goto L_089519DC;
    case 284u: goto L_089519EC;
    case 285u: goto L_08951A00;
    case 286u: goto L_08951A20;
    case 287u: goto L_08951A2C;
    case 288u: goto L_08951A34;
    case 289u: goto L_08951A40;
    case 290u: goto L_08951A54;
    case 291u: goto L_08951A5C;
    case 292u: goto L_08951A68;
    case 293u: goto L_08951A7C;
    case 294u: goto L_08951AA8;
    case 295u: goto L_08951AC4;
    case 296u: goto L_08951AFC;
    case 297u: goto L_08951B04;
    case 298u: goto L_08951B14;
    case 299u: goto L_08951B1C;
    case 300u: goto L_08951B2C;
    case 301u: goto L_08951B34;
    case 302u: goto L_08951B4C;
    case 303u: goto L_08951B70;
    case 304u: goto L_08951B80;
    case 305u: goto L_08951B90;
    case 306u: goto L_08951B98;
    case 307u: goto L_08951BA4;
    case 308u: goto L_08951BAC;
    case 309u: goto L_08951BDC;
    case 310u: goto L_08951BE8;
    case 311u: goto L_08951BF0;
    case 312u: goto L_08951BF8;
    case 313u: goto L_08951C08;
    case 314u: goto L_08951C18;
    case 315u: goto L_08951C24;
    case 316u: goto L_08951C2C;
    case 317u: goto L_08951C38;
    case 318u: goto L_08951C40;
    case 319u: goto L_08951C54;
    case 320u: goto L_08951C5C;
    case 321u: goto L_08951C64;
    case 322u: goto L_08951C78;
    case 323u: goto L_08951C84;
    case 324u: goto L_08951C8C;
    case 325u: goto L_08951CA0;
    case 326u: goto L_08951CA4;
    case 327u: goto L_08951CB0;
    case 328u: goto L_08951CB4;
    case 329u: goto L_08951CB8;
    case 330u: goto L_08951CC4;
    case 331u: goto L_08951CF4;
    case 332u: goto L_08951D14;
    case 333u: goto L_08951D28;
    case 334u: goto L_08951D30;
    case 335u: goto L_08951D3C;
    case 336u: goto L_08951D40;
    case 337u: goto L_08951D58;
    case 338u: goto L_08951D64;
    case 339u: goto L_08951D74;
    case 340u: goto L_08951D7C;
    case 341u: goto L_08951D94;
    case 342u: goto L_08951DB8;
    case 343u: goto L_08951DC8;
    case 344u: goto L_08951DD4;
    case 345u: goto L_08951DE0;
    case 346u: goto L_08951DE8;
    case 347u: goto L_08951E20;
    case 348u: goto L_08951E34;
    case 349u: goto L_08951E40;
    case 350u: goto L_08951E4C;
    case 351u: goto L_08951E5C;
    case 352u: goto L_08951E64;
    case 353u: goto L_08951E6C;
    case 354u: goto L_08951E78;
    case 355u: goto L_08951E88;
    case 356u: goto L_08951E90;
    case 357u: goto L_08951E98;
    case 358u: goto L_08951EA4;
    case 359u: goto L_08951EB0;
    case 360u: goto L_08951EC0;
    case 361u: goto L_08951ECC;
    case 362u: goto L_08951EE0;
    case 363u: goto L_08951EEC;
    case 364u: goto L_08951F00;
    case 365u: goto L_08951F08;
    case 366u: goto L_08951F10;
    case 367u: goto L_08951F18;
    case 368u: goto L_08951F20;
    case 369u: goto L_08951F34;
    case 370u: goto L_08951F54;
    case 371u: goto L_08951F5C;
    case 372u: goto L_08951F64;
    case 373u: goto L_08951F88;
    case 374u: goto L_08951FC0;
    case 375u: goto L_08951FC8;
    case 376u: goto L_08951FE4;
    case 377u: goto L_08951FF8;
    case 378u: goto L_08952058;
    case 379u: goto L_08952064;
    case 380u: goto L_08952070;
    case 381u: goto L_08952078;
    case 382u: goto L_0895207C;
    case 383u: goto L_089520B4;
    case 384u: goto L_089520C4;
    case 385u: goto L_089520D0;
    case 386u: goto L_089520E4;
    case 387u: goto L_089520F0;
    case 388u: goto L_08952110;
    case 389u: goto L_08952120;
    case 390u: goto L_0895214C;
    case 391u: goto L_0895215C;
    case 392u: goto L_08952184;
    case 393u: goto L_08952208;
    case 394u: goto L_08952214;
    case 395u: goto L_0895221C;
    case 396u: goto L_08952224;
    case 397u: goto L_08952244;
    case 398u: goto L_08952274;
    case 399u: goto L_0895227C;
    case 400u: goto L_08952288;
    case 401u: goto L_0895229C;
    case 402u: goto L_089522B4;
    case 403u: goto L_089522BC;
    case 404u: goto L_089522C8;
    case 405u: goto L_089522DC;
    case 406u: goto L_089522FC;
    case 407u: goto L_08952318;
    case 408u: goto L_0895232C;
    case 409u: goto L_08952350;
    case 410u: goto L_0895235C;
    case 411u: goto L_08952370;
    case 412u: goto L_08952378;
    case 413u: goto L_08952390;
    case 414u: goto L_0895239C;
    case 415u: goto L_089523A8;
    case 416u: goto L_089523B8;
    case 417u: goto L_089523C0;
    case 418u: goto L_089523F4;
    case 419u: goto L_08952400;
    case 420u: goto L_0895243C;
    case 421u: goto L_08952444;
    case 422u: goto L_08952450;
    case 423u: goto L_0895246C;
    case 424u: goto L_08952484;
    case 425u: goto L_08952490;
    case 426u: goto L_0895249C;
    case 427u: goto L_089524A8;
    case 428u: goto L_089524BC;
    case 429u: goto L_089524C8;
    case 430u: goto L_089524D4;
    case 431u: goto L_089524E0;
    case 432u: goto L_089524F4;
    case 433u: goto L_08952500;
    case 434u: goto L_08952514;
    case 435u: goto L_08952520;
    case 436u: goto L_08952558;
    case 437u: goto L_089525C8;
    case 438u: goto L_089525D0;
    case 439u: goto L_089525D8;
    case 440u: goto L_089525F0;
    case 441u: goto L_0895260C;
    case 442u: goto L_08952610;
    case 443u: goto L_0895264C;
    case 444u: goto L_08952684;
    case 445u: goto L_0895269C;
    case 446u: goto L_089526C8;
    case 447u: goto L_08952708;
    case 448u: goto L_08952724;
    case 449u: goto L_0895272C;
    case 450u: goto L_089527DC;
    case 451u: goto L_08952808;
    case 452u: goto L_08952834;
    case 453u: goto L_08952860;
    case 454u: goto L_0895288C;
    case 455u: goto L_089528B8;
    case 456u: goto L_089528E4;
    case 457u: goto L_08952910;
    case 458u: goto L_0895291C;
    case 459u: goto L_08952928;
    case 460u: goto L_0895293C;
    case 461u: goto L_08952974;
    case 462u: goto L_08952980;
    case 463u: goto L_0895299C;
    case 464u: goto L_089529A4;
    case 465u: goto L_089529AC;
    case 466u: goto L_089529C4;
    case 467u: goto L_089529D0;
    case 468u: goto L_089529D8;
    case 469u: goto L_089529F0;
    case 470u: goto L_08952A08;
    case 471u: goto L_08952A20;
    case 472u: goto L_08952A28;
    case 473u: goto L_08952A3C;
    case 474u: goto L_08952A44;
    case 475u: goto L_08952A58;
    case 476u: goto L_08952A60;
    case 477u: goto L_08952A64;
    case 478u: goto L_08952A78;
    case 479u: goto L_08952A84;
    case 480u: goto L_08952A8C;
    case 481u: goto L_08952AA4;
    case 482u: goto L_08952ABC;
    case 483u: goto L_08952ACC;
    case 484u: goto L_08952AD4;
    case 485u: goto L_08952AE4;
    case 486u: goto L_08952B04;
    case 487u: goto L_08952B14;
    case 488u: goto L_08952B40;
    case 489u: goto L_08952B60;
    case 490u: goto L_08952B68;
    case 491u: goto L_08952BC8;
    case 492u: goto L_08952BDC;
    case 493u: goto L_08952BE4;
    case 494u: goto L_08952BF4;
    case 495u: goto L_08952C64;
    case 496u: goto L_08952C90;
    case 497u: goto L_08952CCC;
    case 498u: goto L_08952D4C;
    case 499u: goto L_08952D54;
    case 500u: goto L_08952D5C;
    case 501u: goto L_08952D64;
    case 502u: goto L_08952D70;
    case 503u: goto L_08952D7C;
    case 504u: goto L_08952D88;
    case 505u: goto L_08952D94;
    case 506u: goto L_08952DA0;
    case 507u: goto L_08952DA8;
    case 508u: goto L_08952DB0;
    case 509u: goto L_08952DB8;
    case 510u: goto L_08952DD4;
    case 511u: goto L_08952DE0;
    case 512u: goto L_08952DEC;
    case 513u: goto L_08952DF8;
    case 514u: goto L_08952E04;
    case 515u: goto L_08952E10;
    case 516u: goto L_08952E1C;
    case 517u: goto L_08952E24;
    case 518u: goto L_08952E30;
    case 519u: goto L_08952E3C;
    case 520u: goto L_08952E4C;
    case 521u: goto L_08952E58;
    case 522u: goto L_08952E5C;
    case 523u: goto L_08952E64;
    case 524u: goto L_08952E6C;
    case 525u: goto L_08952E74;
    case 526u: goto L_08952E80;
    case 527u: goto L_08952E8C;
    case 528u: goto L_08952E98;
    case 529u: goto L_08952EA4;
    case 530u: goto L_08952EAC;
    case 531u: goto L_08952EB4;
    case 532u: goto L_08952EBC;
    case 533u: goto L_08952ED0;
    case 534u: goto L_08952ED8;
    case 535u: goto L_08952EE4;
    case 536u: goto L_08952EF0;
    case 537u: goto L_08952F0C;
    case 538u: goto L_08952F3C;
    case 539u: goto L_08952F44;
    case 540u: goto L_08952F94;
    case 541u: goto L_08952FA0;
    case 542u: goto L_08952FA8;
    case 543u: goto L_08952FC0;
    case 544u: goto L_08952FC8;
    case 545u: goto L_08952FE0;
    case 546u: goto L_08952FE8;
    case 547u: goto L_08952FF4;
    case 548u: goto L_08952FFC;
    case 549u: goto L_08953008;
    case 550u: goto L_08953018;
    case 551u: goto L_08953024;
    case 552u: goto L_0895302C;
    case 553u: goto L_08953038;
    case 554u: goto L_08953040;
    case 555u: goto L_08953050;
    case 556u: goto L_08953058;
    case 557u: goto L_0895305C;
    case 558u: goto L_08953064;
    case 559u: goto L_0895306C;
    case 560u: goto L_08953078;
    case 561u: goto L_08953094;
    case 562u: goto L_0895309C;
    case 563u: goto L_089530A8;
    case 564u: goto L_089530AC;
    case 565u: goto L_089530DC;
    case 566u: goto L_08953118;
    case 567u: goto L_0895313C;
    case 568u: goto L_0895318C;
    case 569u: goto L_08953194;
    case 570u: goto L_089531A0;
    case 571u: goto L_089531A8;
    case 572u: goto L_089531B8;
    case 573u: goto L_089531C0;
    case 574u: goto L_089531D8;
    case 575u: goto L_089532E4;
    case 576u: goto L_08953300;
    case 577u: goto L_0895330C;
    case 578u: goto L_08953318;
    case 579u: goto L_08953320;
    case 580u: goto L_0895332C;
    case 581u: goto L_08953334;
    case 582u: goto L_0895333C;
    case 583u: goto L_08953348;
    case 584u: goto L_0895335C;
    case 585u: goto L_08953368;
    case 586u: goto L_08953370;
    case 587u: goto L_08953378;
    case 588u: goto L_08953384;
    case 589u: goto L_08953394;
    case 590u: goto L_089533A0;
    case 591u: goto L_089533A8;
    case 592u: goto L_089533C4;
    case 593u: goto L_089533E8;
    case 594u: goto L_089533F8;
    case 595u: goto L_08953408;
    case 596u: goto L_08953410;
    case 597u: goto L_08953430;
    case 598u: goto L_08953458;
    case 599u: goto L_08953468;
    case 600u: goto L_08953474;
    case 601u: goto L_08953480;
    case 602u: goto L_0895348C;
    case 603u: goto L_089534C4;
    case 604u: goto L_089534CC;
    case 605u: goto L_089534E0;
    case 606u: goto L_089534F0;
    case 607u: goto L_08953500;
    case 608u: goto L_0895350C;
    case 609u: goto L_08953514;
    case 610u: goto L_08953520;
    case 611u: goto L_08953534;
    case 612u: goto L_0895353C;
    case 613u: goto L_0895354C;
    case 614u: goto L_08953560;
    case 615u: goto L_08953564;
    case 616u: goto L_0895356C;
    case 617u: goto L_08953574;
    case 618u: goto L_08953588;
    case 619u: goto L_0895358C;
    case 620u: goto L_08953598;
    case 621u: goto L_0895359C;
    case 622u: goto L_089535AC;
    case 623u: goto L_089535C4;
    case 624u: goto L_089535CC;
    case 625u: goto L_089535EC;
    case 626u: goto L_089535FC;
    case 627u: goto L_08953624;
    case 628u: goto L_08953638;
    case 629u: goto L_08953644;
    case 630u: goto L_08953654;
    case 631u: goto L_08953664;
    case 632u: goto L_089536A0;
    case 633u: goto L_089536B0;
    case 634u: goto L_089536D0;
    case 635u: goto L_089536F0;
    case 636u: goto L_089536FC;
    case 637u: goto L_08953708;
    case 638u: goto L_08953718;
    case 639u: goto L_08953724;
    case 640u: goto L_0895372C;
    case 641u: goto L_08953748;
    case 642u: goto L_08953768;
    case 643u: goto L_08953770;
    case 644u: goto L_0895377C;
    case 645u: goto L_0895378C;
    case 646u: goto L_08953794;
    case 647u: goto L_089537B8;
    case 648u: goto L_089537CC;
    case 649u: goto L_089537D4;
    case 650u: goto L_089537E8;
    case 651u: goto L_08953818;
    case 652u: goto L_08953824;
    case 653u: goto L_08953848;
    case 654u: goto L_089539C0;
    case 655u: goto L_089539E0;
    case 656u: goto L_08953A7C;
    case 657u: goto L_08953AAC;
    case 658u: goto L_08953AB8;
    case 659u: goto L_08953AC8;
    case 660u: goto L_08953AD4;
    case 661u: goto L_08953ADC;
    case 662u: goto L_08953AE8;
    case 663u: goto L_08953AFC;
    case 664u: goto L_08953B30;
    case 665u: goto L_08953B80;
    case 666u: goto L_08953B8C;
    case 667u: goto L_08953B9C;
    case 668u: goto L_08953BF0;
    case 669u: goto L_08953BF8;
    case 670u: goto L_08953C00;
    case 671u: goto L_08953C08;
    case 672u: goto L_08953C14;
    case 673u: goto L_08953C2C;
    case 674u: goto L_08953C44;
    case 675u: goto L_08953C4C;
    case 676u: goto L_08953C74;
    case 677u: goto L_08953C80;
    case 678u: goto L_08953C98;
    case 679u: goto L_08953CA0;
    case 680u: goto L_08953CAC;
    case 681u: goto L_08953CB8;
    case 682u: goto L_08953CC4;
    case 683u: goto L_08953D0C;
    case 684u: goto L_08953D20;
    case 685u: goto L_08953D28;
    case 686u: goto L_08953D3C;
    case 687u: goto L_08953DF0;
    case 688u: goto L_08953E04;
    case 689u: goto L_08953E0C;
    case 690u: goto L_08953E20;
    case 691u: goto L_08953EC8;
    case 692u: goto L_08953EDC;
    case 693u: goto L_08953EE4;
    case 694u: goto L_08953EF8;
    case 695u: goto L_08953F68;
    case 696u: goto L_08953F70;
    case 697u: goto L_08953F78;
    case 698u: goto L_08953F84;
    case 699u: goto L_08953F90;
    case 700u: goto L_08953FA4;
    case 701u: goto L_08953FB4;
    case 702u: goto L_08953FB8;
    case 703u: goto L_08953FC0;
    case 704u: goto L_08953FC8;
    case 705u: goto L_08953FCC;
    case 706u: goto L_08953FE8;
    case 707u: goto L_08953FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08950000:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (89u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28672));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (89u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    ctx.gpr[31] = (0x08950028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28672));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08950028u) goto L_08950028;
    return;
L_08950028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08950048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32104));
    ctx.pc = 0x08B0BC54u;
    return;
L_08950048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0895006Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32128));
    ctx.pc = 0x08B0BC24u;
    return;
L_0895006C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950090;
      }
      goto L_08950088;
    }
L_08950088:
    ctx.gpr[31] = (0x08950090u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x08950090u) goto L_08950090;
    return;
L_08950090:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895009C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089500B4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089518E4;
L_089500B4:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(504));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(704));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089500D4;
      }
      goto L_089500C4;
    }
L_089500C4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089500C8;
L_089500C8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[6] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_089500C8;
    }
    goto L_089500D4;
L_089500D4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08950138;
      }
      goto L_08950130;
    }
L_08950130:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895021C;
      }
      goto L_08950138;
    }
L_08950138:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (16u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[18] = lcs::kWorldBufferSize;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08950154u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[2] = lcs::kWorldBufferBase + 0u * lcs::kWorldBufferSize;
    goto L_08950154;
L_08950154:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08950164u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[2] = lcs::kWorldBufferBase + 1u * lcs::kWorldBufferSize;
    goto L_08950164;
L_08950164:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08950174u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[2] = lcs::kWorldBufferBase + 2u * lcs::kWorldBufferSize;
    goto L_08950174;
L_08950174:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0895019C;
      }
      goto L_0895018C;
    }
L_0895018C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
      if (branch_taken) {
          goto L_089501B4;
      }
      goto L_0895019C;
    }
L_0895019C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089501B4;
      }
      goto L_089501A4;
    }
L_089501A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    goto L_089501B4;
L_089501B4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08950200;
      }
      goto L_089501BC;
    }
L_089501BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08950200;
      }
      goto L_089501C8;
    }
L_089501C8:
    // Host scenery buffers survive reinitialization; no VRAM backup is needed.
    goto L_089501F8;
    ctx.gpr[31] = (0x089501D0u);
    // nop
    ctx.pc = 0x08B0B9D4u;
    return;
L_089501D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089501E0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x089501E0u) goto L_089501E0;
    return;
L_089501E0:
    ctx.gpr[31] = (0x089501E8u);
    // nop
    ctx.pc = 0x08B0B9D4u;
    return;
L_089501E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089501F8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x089501F8u) goto L_089501F8;
    return;
L_089501F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950360;
      }
      goto L_08950200;
    }
L_08950200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08950360;
      }
      goto L_0895021C;
    }
L_0895021C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08950228u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089518E4;
L_08950228:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08950270;
      }
      goto L_08950238;
    }
L_08950238:
    ctx.gpr[31] = (0x08950240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951AC4;
L_08950240:
    ctx.gpr[31] = (0x08950248u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951CF4;
L_08950248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08950254u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.pc = 0x08B0B9D4u;
    return;
L_08950254:
    // Retain the host buffer in place instead of backing it up into 2 MiB VRAM.
    goto L_08950268;
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08950268u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26624));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08950268u) goto L_08950268;
    return;
L_08950268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089502F4;
      }
      goto L_08950270;
    }
L_08950270:
    ctx.gpr[31] = (0x08950278u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951AC4;
L_08950278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089502D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951AC4;
L_089502D0:
    ctx.gpr[31] = (0x089502D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951CF4;
L_089502D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089502F4;
L_089502F4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08950338;
    }
    goto L_089502FC;
L_089502FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08950334;
      }
      goto L_08950310;
    }
L_08950310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08950310;
      }
      goto L_08950334;
    }
L_08950334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08950338;
L_08950338:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    goto L_08950360;
L_08950360:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089503A4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08952724;
L_089503A4:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089503D4;
      }
      goto L_089503B8;
    }
L_089503B8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089503D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08950CD8;
L_089503D4:
    ctx.gpr[31] = (0x089503DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08952724;
L_089503DC:
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
L_089503F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895040Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08952724;
L_0895040C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895044C;
      }
      goto L_08950418;
    }
L_08950418:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08950424u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089518E4;
L_08950424:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895045C;
      }
      goto L_08950444;
    }
L_08950444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
      if (branch_taken) {
          goto L_08950454;
      }
      goto L_0895044C;
    }
L_0895044C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089504BC;
      }
      goto L_08950454;
    }
L_08950454:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08950464;
      }
      goto L_0895045C;
    }
L_0895045C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089504A4;
      }
      goto L_08950464;
    }
L_08950464:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08950484;
    }
    goto L_0895047C;
L_0895047C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089504A4;
      }
      goto L_08950484;
    }
L_08950484:
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089504A4;
      }
      goto L_0895049C;
    }
L_0895049C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089504A4;
      }
      goto L_089504A4;
    }
L_089504A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089504B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089514F8;
L_089504B0:
    ctx.gpr[31] = (0x089504B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952724;
L_089504B8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089504BC;
L_089504BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089504D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089504F4u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = 0x08B0BC74u;
    return;
L_089504F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895050C;
      }
      goto L_089504FC;
    }
L_089504FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895050C;
      }
      goto L_08950508;
    }
L_08950508:
    ctx.gpr[4] = (0u | 1u);
    goto L_0895050C;
L_0895050C:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_089505B4;
      }
      goto L_089505A0;
    }
L_089505A0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089505BC;
      }
      goto L_089505B4;
    }
L_089505B4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    goto L_089505BC;
L_089505BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089505D4;
    }
    goto L_089505D4;
L_089505D4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[4] = (17112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2784));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-56));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(820), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0895068Cu);
    ctx.gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 387u, 0x08A7EEF8u>(ctx, &aot_mem) && ctx.pc == 0x0895068Cu) goto L_0895068C;
    return;
L_0895068C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1136));
    ctx.gpr[31] = (0x089506A0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x089506A0u) goto L_089506A0;
    return;
L_089506A0:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089506DCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089506DCu) goto L_089506DC;
    return;
L_089506DC:
    ctx.gpr[4] = (15360u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[31] = (0x08950704u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 768u, 0x0894FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08950704u) goto L_08950704;
    return;
L_08950704:
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(820)));
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (2560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950794;
      }
      goto L_08950780;
    }
L_08950780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950794;
      }
      goto L_0895078C;
    }
L_0895078C:
    ctx.gpr[31] = (0x08950794u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08950794u) goto L_08950794;
    return;
L_08950794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089507BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_089507D4;
      }
      goto L_089507CC;
    }
L_089507CC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    goto L_089507D4;
L_089507D4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089507E4;
      }
      goto L_089507DC;
    }
L_089507DC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    goto L_089507E4;
L_089507E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089507F4;
      }
      goto L_089507EC;
    }
L_089507EC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), ctx.gpr[5]);
    goto L_089507F4;
L_089507F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089507FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(696)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(700)));
      if (branch_taken) {
          goto L_08950870;
      }
      goto L_0895080C;
    }
L_0895080C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_08950810;
L_08950810:
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[10] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[8] != ctx.gpr[5]) {
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
        goto L_0895084C;
    }
    goto L_08950838;
L_08950838:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950854;
      }
      goto L_08950848;
    }
L_08950848:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_0895084C;
L_0895084C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950864;
      }
      goto L_08950854;
    }
L_08950854:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08950868;
      }
      goto L_08950864;
    }
L_08950864:
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    goto L_08950868;
L_08950868:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
      if (branch_taken) {
          goto L_08950810;
      }
      goto L_08950870;
    }
L_08950870:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895088C;
      }
      goto L_0895087C;
    }
L_0895087C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895088C;
      }
      goto L_08950888;
    }
L_08950888:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_0895088C;
L_0895088C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950894:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(11092));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11106));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089508B4;
      }
      goto L_089508A4;
    }
L_089508A4:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_089508A8;
L_089508A8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    if (ctx.gpr[7] != ctx.gpr[5]) {
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
        goto L_089508A8;
    }
    goto L_089508B4;
L_089508B4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7488), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089508BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7488)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 300 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089509A8;
      }
      goto L_089508E8;
    }
L_089508E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7488)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7492));
    ctx.gpr[6] = (2233u << 16u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-56));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 59u);
    ctx.gpr[31] = (0x08950950u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2784));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 205u, 0x08AC9108u>(ctx, &aot_mem) && ctx.pc == 0x08950950u) goto L_08950950;
    return;
L_08950950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7488));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(11092), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089509BC;
      }
      goto L_089509A0;
    }
L_089509A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089509E0;
      }
      goto L_089509A8;
    }
L_089509A8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089509B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32144));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089509B4u) goto L_089509B4;
    return;
L_089509B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950A58;
      }
      goto L_089509BC;
    }
L_089509BC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<0u, 27u, 27u, 3u>();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950A58;
      }
      goto L_089509E0;
    }
L_089509E0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950A58;
      }
      goto L_089509EC;
    }
L_089509EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7488)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950A58;
      }
      goto L_089509FC;
    }
L_089509FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7488)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7492));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(11104))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12960));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<0u, 27u, 27u, 3u>();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(11104), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08950A58;
L_08950A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08950A88u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089518E4;
L_08950A88:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9276));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(279), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(704), 0u);
    ctx.gpr[7] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 208u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x08950B4Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7388));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08950B4Cu) goto L_08950B4C;
    return;
L_08950B4C:
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(504));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(704));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-26464));
      if (branch_taken) {
          goto L_08950B78;
      }
      goto L_08950B68;
    }
L_08950B68:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08950B6C;
L_08950B6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08950B6C;
    }
    goto L_08950B78;
L_08950B78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[31] = (0x08950B98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08950894;
L_08950B98:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29728));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29728)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08950BC4u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08950BC4u) goto L_08950BC4;
    return;
L_08950BC4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08950BE0;
      }
      goto L_08950BD0;
    }
L_08950BD0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08950BDCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 482u, 0x08B01F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08950BDCu) goto L_08950BDC;
    return;
L_08950BDC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08950BE0;
L_08950BE0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08950BF4;
      }
      goto L_08950BE8;
    }
L_08950BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08950BF4;
L_08950BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08950C38;
      }
      goto L_08950C04;
    }
L_08950C04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08950C28;
      }
      goto L_08950C0C;
    }
L_08950C0C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08950C20;
      }
      goto L_08950C14;
    }
L_08950C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08950C20;
L_08950C20:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    goto L_08950C28;
L_08950C28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(297)));
      if (branch_taken) {
          goto L_08950C60;
      }
      goto L_08950C38;
    }
L_08950C38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08950C58u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 151u, 0x08B00A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08950C58u) goto L_08950C58;
    return;
L_08950C58:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(297)));
    goto L_08950C60;
L_08950C60:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950C88;
      }
      goto L_08950C68;
    }
L_08950C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08950C84u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08950C84u) goto L_08950C84;
    return;
L_08950C84:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08950C88;
L_08950C88:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950CA8;
      }
      goto L_08950C90;
    }
L_08950C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08950CA8;
      }
      goto L_08950CA0;
    }
L_08950CA0:
    ctx.gpr[31] = (0x08950CA8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08950CA8u) goto L_08950CA8;
    return;
L_08950CA8:
    ctx.gpr[31] = (0x08950CB0u);
    ctx.gpr[4] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08950CB0u) goto L_08950CB0;
    return;
L_08950CB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11108), ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950CD8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[9] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
        goto L_08950CEC;
    }
    goto L_08950CE4;
L_08950CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950D7C;
      }
      goto L_08950CEC;
    }
L_08950CEC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(708)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08950D7C;
      }
      goto L_08950D0C;
    }
L_08950D0C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08950D58;
      }
      goto L_08950D28;
    }
L_08950D28:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950D3C;
      }
      goto L_08950D34;
    }
L_08950D34:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08950D58;
      }
      goto L_08950D3C;
    }
L_08950D3C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950D54;
      }
      goto L_08950D44;
    }
L_08950D44:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(504), 0u);
    goto L_08950D54;
L_08950D54:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    goto L_08950D58;
L_08950D58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(708)));
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08950D0C;
      }
      goto L_08950D7C;
    }
L_08950D7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08950EAC;
      }
      goto L_08950DE0;
    }
L_08950DE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] >> 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08950E18;
      }
      goto L_08950DF8;
    }
L_08950DF8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[7] >> 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08950DF8;
      }
      goto L_08950E14;
    }
L_08950E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08950E18;
L_08950E18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[22] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7328)));
    ctx.gpr[4] = (15027u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20087u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08950E54u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 336u, 0x0895631Cu>(ctx, &aot_mem) && ctx.pc == 0x08950E54u) goto L_08950E54;
    return;
L_08950E54:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[31] = (0x08950E8Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08950E8Cu) goto L_08950E8C;
    return;
L_08950E8C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08950EA0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08950EA0u) goto L_08950EA0;
    return;
L_08950EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08950EAC;
L_08950EAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23416)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950F7C;
      }
      goto L_08950EC8;
    }
L_08950EC8:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 40u, 4u);
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
    ctx.vfpu_ctrl[0u] = 0x00000FE4u;
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08950F7C;
      }
      goto L_08950EE0;
    }
L_08950EE0:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[31] = (0x08950EF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2784));
    goto L_0895272C;
L_08950EF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950F74;
      }
      goto L_08950F00;
    }
L_08950F00:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08950F7C;
      }
      goto L_08950F0C;
    }
L_08950F0C:
    ctx.gpr[4] = (ctx.gpr[20] >> 8u);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[6] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08950F6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 336u, 0x0895631Cu>(ctx, &aot_mem) && ctx.pc == 0x08950F6Cu) goto L_08950F6C;
    return;
L_08950F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895104C;
      }
      goto L_08950F74;
    }
L_08950F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895104C;
      }
      goto L_08950F7C;
    }
L_08950F7C:
    ctx.gpr[5] = (ctx.gpr[20] >> 8u);
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[20] & ctx.gpr[6]);
    ctx.gpr[20] = (2560u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[7] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08951004;
      }
      goto L_08950FEC;
    }
L_08950FEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08950FFCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 336u, 0x0895631Cu>(ctx, &aot_mem) && ctx.pc == 0x08950FFCu) goto L_08950FFC;
    return;
L_08950FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895104C;
      }
      goto L_08951004;
    }
L_08951004:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_0895104C;
L_0895104C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08951078:
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089512DC;
      }
      goto L_08951084;
    }
L_08951084:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32064)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895109C:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089512DC;
      }
      goto L_08951100;
    }
L_08951100:
    ctx.gpr[6] = (49152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089512DC;
      }
      goto L_08951140;
    }
L_08951140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089512DC;
      }
      goto L_08951148;
    }
L_08951148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089512DC;
      }
      goto L_08951150;
    }
L_08951150:
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089512DC;
      }
      goto L_089511D0;
    }
L_089511D0:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (56319u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(162));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (57856u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089512DC;
      }
      goto L_08951270;
    }
L_08951270:
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(50));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089512DC;
L_089512DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089512E4:
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089514F0;
      }
      goto L_089512F0;
    }
L_089512F0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951308:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (7424u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089514F0;
      }
      goto L_0895136C;
    }
L_0895136C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089514F0;
      }
      goto L_089513A8;
    }
L_089513A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089514F0;
      }
      goto L_089513B0;
    }
L_089513B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089514F0;
      }
      goto L_089513B8;
    }
L_089513B8:
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089514F0;
      }
      goto L_08951434;
    }
L_08951434:
    ctx.gpr[6] = (56319u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4103));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089514F0;
      }
      goto L_089514D4;
    }
L_089514D4:
    ctx.gpr[4] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4103));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089514F0;
L_089514F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089514F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08951574;
      }
      goto L_08951518;
    }
L_08951518:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951524u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(32164));
    ctx.pc = 0x08B0BBDCu;
    return;
L_08951524:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08951534u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951534u) goto L_08951534;
    return;
L_08951534:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(279)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951560;
      }
      goto L_08951540;
    }
L_08951540:
    ctx.gpr[31] = (0x08951548u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0895246C;
L_08951548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (2197u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-268));
      if (branch_taken) {
          goto L_0895157C;
      }
      goto L_08951558;
    }
L_08951558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951594;
      }
      goto L_08951560;
    }
L_08951560:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0895156Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32192));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x0895156Cu) goto L_0895156C;
    return;
L_0895156C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089516BC;
      }
      goto L_08951574;
    }
L_08951574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089516BC;
      }
      goto L_0895157C;
    }
L_0895157C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951588u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32224));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951588u) goto L_08951588;
    return;
L_08951588:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08951594u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951DE8;
L_08951594:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (0x089515C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC7178u>(ctx, &aot_mem) && ctx.pc == 0x089515C8u) goto L_089515C8;
    return;
L_089515C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (116u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08951630;
      }
      goto L_089515DC;
    }
L_089515DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08951604u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08951604u) goto L_08951604;
    return;
L_08951604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u | 500u);
    ctx.gpr[31] = (0x08951624u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC72D8u>(ctx, &aot_mem) && ctx.pc == 0x08951624u) goto L_08951624;
    return;
L_08951624:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
      if (branch_taken) {
          goto L_0895169C;
      }
      goto L_08951630;
    }
L_08951630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(296)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.gpr[7] = (0u | 500u);
    ctx.gpr[31] = (0x08951694u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC72D8u>(ctx, &aot_mem) && ctx.pc == 0x08951694u) goto L_08951694;
    return;
L_08951694:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    goto L_0895169C;
L_0895169C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089516A8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC64u;
    return;
L_089516A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x089516B4u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_089516B4:
    ctx.gpr[31] = (0x089516BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089524A8;
L_089516BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089516D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08951700u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 484u, 0x08AC73F0u>(ctx, &aot_mem) && ctx.pc == 0x08951700u) goto L_08951700;
    return;
L_08951700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08951768;
      }
      goto L_0895170C;
    }
L_0895170C:
    ctx.gpr[31] = (0x08951714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089504D0;
L_08951714:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951768;
      }
      goto L_0895171C;
    }
L_0895171C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895174C;
      }
      goto L_0895172C;
    }
L_0895172C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (116u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08951784;
      }
      goto L_08951744;
    }
L_08951744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951788;
      }
      goto L_0895174C;
    }
L_0895174C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951758u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32356));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951758u) goto L_08951758;
    return;
L_08951758:
    ctx.gpr[31] = (0x08951760u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089524E0;
L_08951760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089518D0;
      }
      goto L_08951768;
    }
L_08951768:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32284));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (0x0895177Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x0895177Cu) goto L_0895177C;
    return;
L_0895177C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089518D0;
      }
      goto L_08951784;
    }
L_08951784:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    goto L_08951788;
L_08951788:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089517C8;
      }
      goto L_08951794;
    }
L_08951794:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089517EC;
      }
      goto L_0895179C;
    }
L_0895179C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(780));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(784), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
      if (branch_taken) {
          goto L_08951878;
      }
      goto L_089517C8;
    }
L_089517C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32396));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x089517DCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089517DCu) goto L_089517DC;
    return;
L_089517DC:
    ctx.gpr[31] = (0x089517E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089524E0;
L_089517E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089518D0;
      }
      goto L_089517EC;
    }
L_089517EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951858;
      }
      goto L_089517F8;
    }
L_089517F8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(124)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[31] = (0x0895181Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (lcs::expand_world_sector(rt, ctx.gpr[16], ctx.gpr[5], ctx.gpr[6])) goto L_0895181C;
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 565u, 0x0886B040u>(ctx, &aot_mem) && ctx.pc == 0x0895181Cu) goto L_0895181C;
    return;
L_0895181C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951848;
      }
      goto L_08951830;
    }
L_08951830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895186C;
      }
      goto L_08951840;
    }
L_08951840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951874;
      }
      goto L_08951848;
    }
L_08951848:
    ctx.gpr[31] = (0x08951850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089524E0;
L_08951850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089518D0;
      }
      goto L_08951858;
    }
L_08951858:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951864u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32440));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951864u) goto L_08951864;
    return;
L_08951864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089518D0;
      }
      goto L_0895186C;
    }
L_0895186C:
    ctx.gpr[31] = (0x08951874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 396u, 0x08956CA0u>(ctx, &aot_mem) && ctx.pc == 0x08951874u) goto L_08951874;
    return;
L_08951874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    goto L_08951878;
L_08951878:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089518C8;
      }
      goto L_08951884;
    }
L_08951884:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x089518A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089514F8;
L_089518A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089518C0;
      }
      goto L_089518AC;
    }
L_089518AC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089518B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32496));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089518B8u) goto L_089518B8;
    return;
L_089518B8:
    ctx.gpr[31] = (0x089518C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089524E0;
L_089518C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089518D0;
      }
      goto L_089518C8;
    }
L_089518C8:
    ctx.gpr[31] = (0x089518D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952500;
L_089518D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089518E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895195C;
      }
      goto L_08951908;
    }
L_08951908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951920;
      }
      goto L_08951914;
    }
L_08951914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951928;
      }
      goto L_08951920;
    }
L_08951920:
    ctx.gpr[31] = (0x08951928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x08951928u) goto L_08951928;
    return;
L_08951928:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895194C;
      }
      goto L_0895193C;
    }
L_0895193C:
    ctx.gpr[31] = (0x08951944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951AC4;
L_08951944:
    ctx.gpr[31] = (0x0895194Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951CF4;
L_0895194C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951958u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32552));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951958u) goto L_08951958;
    return;
L_08951958:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_0895195C;
L_0895195C:
    ctx.gpr[31] = (0x08951964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089504D0;
L_08951964:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951A40;
      }
      goto L_0895196C;
    }
L_0895196C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32588));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951978u) goto L_08951978;
    return;
L_08951978:
    ctx.gpr[31] = (0x08951980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895246C;
L_08951980:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(279), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08951990u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 476u, 0x08AC7360u>(ctx, &aot_mem) && ctx.pc == 0x08951990u) goto L_08951990;
    return;
L_08951990:
    ctx.gpr[31] = (0x08951998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089524A8;
L_08951998:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089519A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32612));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089519A4u) goto L_089519A4;
    return;
L_089519A4:
    ctx.gpr[31] = (0x089519ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 312u, 0x089358F8u>(ctx, &aot_mem) && ctx.pc == 0x089519ACu) goto L_089519AC;
    return;
L_089519AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089519C4;
      }
      goto L_089519B4;
    }
L_089519B4:
    ctx.gpr[31] = (0x089519BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 520u, 0x08AC7660u>(ctx, &aot_mem) && ctx.pc == 0x089519BCu) goto L_089519BC;
    return;
L_089519BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089519D0;
      }
      goto L_089519C4;
    }
L_089519C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089519D0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951DE8;
L_089519D0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089519DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32632));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089519DCu) goto L_089519DC;
    return;
L_089519DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(279), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951A40;
      }
      goto L_089519EC;
    }
L_089519EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (116u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08951A40;
      }
      goto L_08951A00;
    }
L_08951A00:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26768)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951A34;
      }
      goto L_08951A20;
    }
L_08951A20:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951A2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32648));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951A2Cu) goto L_08951A2C;
    return;
L_08951A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951A40;
      }
      goto L_08951A34;
    }
L_08951A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x08951A40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08951A40u) goto L_08951A40;
    return;
L_08951A40:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2233u << 16u);
      if (branch_taken) {
          goto L_08951A7C;
      }
      goto L_08951A54;
    }
L_08951A54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08951A5C;
L_08951A5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(784)));
    ctx.gpr[31] = (0x08951A68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08951A68u) goto L_08951A68;
    return;
L_08951A68:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08951A5C;
      }
      goto L_08951A7C;
    }
L_08951A7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08951AA8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC64u;
    return;
L_08951AA8:
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
L_08951AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08951B04;
      }
      goto L_08951AFC;
    }
L_08951AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951CC4;
      }
      goto L_08951B04;
    }
L_08951B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08951CC4;
      }
      goto L_08951B14;
    }
L_08951B14:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08951B1C;
L_08951B1C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951B34;
      }
      goto L_08951B2C;
    }
L_08951B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08951CB8;
      }
      goto L_08951B34;
    }
L_08951B34:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[5] << 3u);
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08951CB4;
      }
      goto L_08951B4C;
    }
L_08951B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08951CA4;
      }
      goto L_08951B70;
    }
L_08951B70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951CA4;
      }
      goto L_08951B80;
    }
L_08951B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08951BAC;
      }
      goto L_08951B90;
    }
L_08951B90:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08951BA4;
      }
      goto L_08951B98;
    }
L_08951B98:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08951BA4;
L_08951BA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08951CA0;
      }
      goto L_08951BAC;
    }
L_08951BAC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08951BE8;
      }
      goto L_08951BDC;
    }
L_08951BDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08951BF0;
      }
      goto L_08951BE8;
    }
L_08951BE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    goto L_08951BF0;
L_08951BF0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08951C2C;
      }
      goto L_08951BF8;
    }
L_08951BF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08951C08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08951C08u) goto L_08951C08;
    return;
L_08951C08:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08951C2C;
      }
      goto L_08951C18;
    }
L_08951C18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08951C24u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08951C24u) goto L_08951C24;
    return;
L_08951C24:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08951C2C;
L_08951C2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08951C40;
      }
      goto L_08951C38;
    }
L_08951C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08951C5C;
      }
      goto L_08951C40;
    }
L_08951C40:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08951C54u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08951C54u) goto L_08951C54;
    return;
L_08951C54:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08951C5C;
L_08951C5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08951C78;
      }
      goto L_08951C64;
    }
L_08951C64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08951C64;
      }
      goto L_08951C78;
    }
L_08951C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08951C8C;
      }
      goto L_08951C84;
    }
L_08951C84:
    ctx.gpr[31] = (0x08951C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08951C8Cu) goto L_08951C8C;
    return;
L_08951C8C:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_08951CA0;
L_08951CA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08951CA4;
L_08951CA4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08951B4C;
      }
      goto L_08951CB0;
    }
L_08951CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    goto L_08951CB4;
L_08951CB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08951CB8;
L_08951CB8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08951B1C;
      }
      goto L_08951CC4;
    }
L_08951CC4:
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
L_08951CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08951D14u);
    // nop
    goto L_08952724;
L_08951D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08951D40;
      }
      goto L_08951D28;
    }
L_08951D28:
    ctx.gpr[31] = (0x08951D30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08951DB8;
L_08951D30:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08951D28;
      }
      goto L_08951D3C;
    }
L_08951D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08951D40;
L_08951D40:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951D64;
      }
      goto L_08951D58;
    }
L_08951D58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(277)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D74;
      }
      goto L_08951D64;
    }
L_08951D64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08951D74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D94;
L_08951D74:
    ctx.gpr[31] = (0x08951D7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952724;
L_08951D7C:
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
L_08951D94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08951DD4;
      }
      goto L_08951DC8;
    }
L_08951DC8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08951DD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08951DD4u) goto L_08951DD4;
    return;
L_08951DD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951DE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (32770u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(431));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08951E6C;
      }
      goto L_08951E20;
    }
L_08951E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x08951E34u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BC74u;
    return;
L_08951E34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08951E64;
      }
      goto L_08951E40;
    }
L_08951E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08951E4Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC64u;
    return;
L_08951E4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(279)));
    ctx.gpr[5] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08951F20;
      }
      goto L_08951E5C;
    }
L_08951E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08951F18;
      }
      goto L_08951E64;
    }
L_08951E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951F64;
      }
      goto L_08951E6C;
    }
L_08951E6C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951E78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32672));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951E78u) goto L_08951E78;
    return;
L_08951E78:
    ctx.gpr[19] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(27056), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32696));
    goto L_08951E88;
L_08951E88:
    ctx.gpr[31] = (0x08951E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x08951E90u) goto L_08951E90;
    return;
L_08951E90:
    ctx.gpr[31] = (0x08951E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 296u, 0x089C1504u>(ctx, &aot_mem) && ctx.pc == 0x08951E98u) goto L_08951E98;
    return;
L_08951E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951ECC;
      }
      goto L_08951EA4;
    }
L_08951EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951ECC;
      }
      goto L_08951EB0;
    }
L_08951EB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27056)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(27056), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08951EC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951EC0u) goto L_08951EC0;
    return;
L_08951EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08951ECCu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_08951ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x08951EE0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BC74u;
    return;
L_08951EE0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08951F08;
      }
      goto L_08951EEC;
    }
L_08951EEC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08951F00u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951F00u) goto L_08951F00;
    return;
L_08951F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951E40;
      }
      goto L_08951F08;
    }
L_08951F08:
    ctx.gpr[31] = (0x08951F10u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B0BC14u;
    return;
L_08951F10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951E88;
      }
      goto L_08951F18;
    }
L_08951F18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951F5C;
      }
      goto L_08951F20;
    }
L_08951F20:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32732));
    ctx.gpr[31] = (0x08951F34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08951F34u) goto L_08951F34;
    return;
L_08951F34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[31] = (0x08951F54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951DE0;
L_08951F54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951F64;
      }
      goto L_08951F5C;
    }
L_08951F5C:
    ctx.gpr[31] = (0x08951F64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951F88;
L_08951F64:
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
L_08951F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2276u << 16u);
      if (branch_taken) {
          goto L_08951FF8;
      }
      goto L_08951FC0;
    }
L_08951FC0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28200));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08951FC8;
L_08951FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(784)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08951FE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 415u, 0x089C9D98u>(ctx, &aot_mem) && ctx.pc == 0x08951FE4u) goto L_08951FE4;
    return;
L_08951FE4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08951FC8;
      }
      goto L_08951FF8;
    }
L_08951FF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895207C;
      }
      goto L_08952058;
    }
L_08952058:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[31] = (0x08952064u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08952064u) goto L_08952064;
    return;
L_08952064:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0895207C;
      }
      goto L_08952070;
    }
L_08952070:
    ctx.gpr[31] = (0x08952078u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08952078u) goto L_08952078;
    return;
L_08952078:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0895207C;
L_0895207C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53))))));
    ctx.gpr[31] = (0x089520B4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 488u, 0x08B01FE4u>(ctx, &aot_mem) && ctx.pc == 0x089520B4u) goto L_089520B4;
    return;
L_089520B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089520D0;
      }
      goto L_089520C4;
    }
L_089520C4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089520F0;
      }
      goto L_089520D0;
    }
L_089520D0:
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089520E4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x089520E4u) goto L_089520E4;
    return;
L_089520E4:
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_089520F0;
L_089520F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[31] = (0x08952110u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 488u, 0x08B01FE4u>(ctx, &aot_mem) && ctx.pc == 0x08952110u) goto L_08952110;
    return;
L_08952110:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895214C;
      }
      goto L_08952120;
    }
L_08952120:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
      if (branch_taken) {
          goto L_08952184;
      }
      goto L_0895214C;
    }
L_0895214C:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895215Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x0895215Cu) goto L_0895215C;
    return;
L_0895215C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    goto L_08952184;
L_08952184:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(278)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08952208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951DE0;
L_08952208:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08952224;
      }
      goto L_08952214;
    }
L_08952214:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952224;
      }
      goto L_0895221C;
    }
L_0895221C:
    ctx.gpr[31] = (0x08952224u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08952224u) goto L_08952224;
    return;
L_08952224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2233u << 16u);
      if (branch_taken) {
          goto L_0895229C;
      }
      goto L_08952274;
    }
L_08952274:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_0895227C;
L_0895227C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(784)));
    ctx.gpr[31] = (0x08952288u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08952288u) goto L_08952288;
    return;
L_08952288:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895227C;
      }
      goto L_0895229C;
    }
L_0895229C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2233u << 16u);
      if (branch_taken) {
          goto L_089522DC;
      }
      goto L_089522B4;
    }
L_089522B4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_089522BC;
L_089522BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089522C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089522C8u) goto L_089522C8;
    return;
L_089522C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089522BC;
      }
      goto L_089522DC;
    }
L_089522DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(704), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[9] = (2276u << 16u);
      if (branch_taken) {
          goto L_08952450;
      }
      goto L_089522FC;
    }
L_089522FC:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[10] = (2276u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-28200));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    goto L_08952318;
L_08952318:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
      if (branch_taken) {
          goto L_08952444;
      }
      goto L_0895232C;
    }
L_0895232C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 128u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
        goto L_0895235C;
    }
    goto L_08952350;
L_08952350:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08952370;
      }
      goto L_0895235C;
    }
L_0895235C:
    ctx.gpr[3] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[3] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08952370;
L_08952370:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952444;
      }
      goto L_08952378;
    }
L_08952378:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[12] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089523B8;
      }
      goto L_08952390;
    }
L_08952390:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = ctx.gpr[14] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089523A8;
      }
      goto L_0895239C;
    }
L_0895239C:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089523B8;
      }
      goto L_089523A8;
    }
L_089523A8:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08952390;
      }
      goto L_089523B8;
    }
L_089523B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952444;
      }
      goto L_089523C0;
    }
L_089523C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(708), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[31] = (0x089523F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x089523F4u) goto L_089523F4;
    return;
L_089523F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08952400u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08952400u) goto L_08952400;
    return;
L_08952400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(744), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(704), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08952444;
      }
      goto L_0895243C;
    }
L_0895243C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952450;
      }
      goto L_08952444;
    }
L_08952444:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08952318;
      }
      goto L_08952450;
    }
L_08952450:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895246C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08952484u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC3Cu;
    return;
L_08952484:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895249C;
      }
      goto L_08952490;
    }
L_08952490:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0895249Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32704));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x0895249Cu) goto L_0895249C;
    return;
L_0895249C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089524A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (0x089524BCu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC34u;
    return;
L_089524BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089524D4;
      }
      goto L_089524C8;
    }
L_089524C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089524D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32668));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089524D4u) goto L_089524D4;
    return;
L_089524D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089524E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x089524F4u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_089524F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08952514u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_08952514:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089525D0;
      }
      goto L_08952558;
    }
L_08952558:
    ctx.gpr[11] = (2233u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] >> 8u);
    ctx.gpr[10] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    ctx.gpr[7] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[5] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_089525D8;
      }
      goto L_089525C8;
    }
L_089525C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089526C8;
      }
      goto L_089525D0;
    }
L_089525D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952708;
      }
      goto L_089525D8;
    }
L_089525D8:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] >> 4u);
    ctx.gpr[14] = (ctx.gpr[14] << 4u);
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[13];
    ctx.gpr[3] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_08952610;
      }
      goto L_089525F0;
    }
L_089525F0:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.gpr[12] = (ctx.gpr[13] >> 4u);
    ctx.gpr[12] = (ctx.gpr[12] << 4u);
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
      if (branch_taken) {
          goto L_089525F0;
      }
      goto L_0895260C;
    }
L_0895260C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08952610;
L_08952610:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[3] | 0u);
    ctx.gpr[17] = (ctx.gpr[12] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7328)));
    ctx.gpr[5] = (15027u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20087u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895264Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 336u, 0x0895631Cu>(ctx, &aot_mem) && ctx.pc == 0x0895264Cu) goto L_0895264C;
    return;
L_0895264C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[31] = (0x08952684u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08952684u) goto L_08952684;
    return;
L_08952684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895269Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0895269Cu) goto L_0895269C;
    return;
L_0895269C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (2560u << 16u);
    ctx.gpr[8] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[10] = (15u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089526C8;
L_089526C8:
    ctx.gpr[4] = (ctx.gpr[3] & ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[3] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_08952708;
L_08952708:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952724:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895272C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(2), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(6), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(10), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(14), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(18), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(22), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(26), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(30), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(34), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(38), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(42), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(46), ctx.gpr[3]));
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<56u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<88u>(ctx.gpr[10]);
    ctx.set_vfpu_scalar_bits_ct<25u>(ctx.gpr[11]);
    ctx.set_vfpu_scalar_bits_ct<57u>(ctx.gpr[12]);
    ctx.set_vfpu_scalar_bits_ct<89u>(ctx.gpr[13]);
    ctx.set_vfpu_scalar_bits_ct<26u>(ctx.gpr[14]);
    ctx.set_vfpu_scalar_bits_ct<58u>(ctx.gpr[15]);
    ctx.set_vfpu_scalar_bits_ct<90u>(ctx.gpr[24]);
    ctx.set_vfpu_scalar_bits_ct<27u>(ctx.gpr[25]);
    ctx.set_vfpu_scalar_bits_ct<59u>(ctx.gpr[2]);
    ctx.set_vfpu_scalar_bits_ct<91u>(ctx.gpr[3]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<59u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 2u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 3u>(vfpu_d); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 36u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 24u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 20u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 40u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 24u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 16u, 4u);
      ctx.eat_vfpu_prefixes(); }
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
          goto L_0895291C;
      }
      goto L_089527DC;
    }
L_089527DC:
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
          goto L_0895291C;
      }
      goto L_08952808;
    }
L_08952808:
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
          goto L_0895291C;
      }
      goto L_08952834;
    }
L_08952834:
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
          goto L_0895291C;
      }
      goto L_08952860;
    }
L_08952860:
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
          goto L_08952928;
      }
      goto L_0895288C;
    }
L_0895288C:
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
          goto L_08952928;
      }
      goto L_089528B8;
    }
L_089528B8:
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
          goto L_08952928;
      }
      goto L_089528E4;
    }
L_089528E4:
    ctx.execute_vfpu_vcmp_ct<51u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 51u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08952928;
      }
      goto L_08952910;
    }
L_08952910:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895291C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952928:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895293C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08952974u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089518E4;
L_08952974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08952C64;
      }
      goto L_08952980;
    }
L_08952980:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089529C4;
      }
      goto L_0895299C;
    }
L_0895299C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08952A20;
      }
      goto L_089529A4;
    }
L_089529A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089529F0;
      }
      goto L_089529AC;
    }
L_089529AC:
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32616));
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32572));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A20;
      }
      goto L_089529C4;
    }
L_089529C4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08952A08;
      }
      goto L_089529D0;
    }
L_089529D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A20;
      }
      goto L_089529D8;
    }
L_089529D8:
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32352));
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32308));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A20;
      }
      goto L_089529F0;
    }
L_089529F0:
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32528));
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32484));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A20;
      }
      goto L_08952A08;
    }
L_08952A08:
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32440));
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32396));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A20;
      }
      goto L_08952A20;
    }
L_08952A20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A84;
      }
      goto L_08952A28;
    }
L_08952A28:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (2233u << 16u);
      if (branch_taken) {
          goto L_08952A78;
      }
      goto L_08952A3C;
    }
L_08952A3C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[21] = (0u | 0u);
    goto L_08952A44;
L_08952A44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A64;
      }
      goto L_08952A58;
    }
L_08952A58:
    ctx.gpr[31] = (0x08952A60u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08952A60u) goto L_08952A60;
    return;
L_08952A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08952A64;
L_08952A64:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08952A44;
      }
      goto L_08952A78;
    }
L_08952A78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x08952A84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x08952A84u) goto L_08952A84;
    return;
L_08952A84:
    ctx.gpr[31] = (0x08952A8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x08952A8Cu) goto L_08952A8C;
    return;
L_08952A8C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08952AA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x08952AA4u) goto L_08952AA4;
    return;
L_08952AA4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[31] = (0x08952ABCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x08952ABCu) goto L_08952ABC;
    return;
L_08952ABC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08952ACCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x08952ACCu) goto L_08952ACC;
    return;
L_08952ACC:
    ctx.gpr[31] = (0x08952AD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x08952AD4u) goto L_08952AD4;
    return;
L_08952AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08952AE4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 560u, 0x08AD6A18u>(ctx, &aot_mem) && ctx.pc == 0x08952AE4u) goto L_08952AE4;
    return;
L_08952AE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (22354u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19524));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[31] = (0x08952B04u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFD0u>(ctx, &aot_mem) && ctx.pc == 0x08952B04u) goto L_08952B04;
    return;
L_08952B04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x08952B14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x08952B14u) goto L_08952B14;
    return;
L_08952B14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08952B40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D94;
L_08952B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08952B60u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08950CD8;
L_08952B60:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952C64;
      }
      goto L_08952B68;
    }
L_08952B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
      if (branch_taken) {
          goto L_08952BDC;
      }
      goto L_08952BC8;
    }
L_08952BC8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
        goto L_08952BE4;
    }
    goto L_08952BDC;
L_08952BDC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    goto L_08952BE4;
L_08952BE4:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08952BF4;
    }
    goto L_08952BF4;
L_08952BF4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (17112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08952C64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952C90;
L_08952C64:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08952D54;
      }
      goto L_08952CCC;
    }
L_08952CCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (15383u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23157u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08952D5C;
    }
    goto L_08952D4C;
L_08952D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DB8;
      }
      goto L_08952D54;
    }
L_08952D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089530AC;
      }
      goto L_08952D5C;
    }
L_08952D5C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08952DB8;
      }
      goto L_08952D64;
    }
L_08952D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08952DB8;
      }
      goto L_08952D70;
    }
L_08952D70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DB8;
      }
      goto L_08952D7C;
    }
L_08952D7C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952D88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32264));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08952D88u) goto L_08952D88;
    return;
L_08952D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08952DB0;
      }
      goto L_08952D94;
    }
L_08952D94:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952DA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32248));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08952DA0u) goto L_08952DA0;
    return;
L_08952DA0:
    ctx.gpr[31] = (0x08952DA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951AC4;
L_08952DA8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08952DB0;
L_08952DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089530AC;
      }
      goto L_08952DB8;
    }
L_08952DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08952E64;
      }
      goto L_08952DD4;
    }
L_08952DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08952E64;
      }
      goto L_08952DE0;
    }
L_08952DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08952E64;
      }
      goto L_08952DEC;
    }
L_08952DEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952E64;
      }
      goto L_08952DF8;
    }
L_08952DF8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952E04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32232));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08952E04u) goto L_08952E04;
    return;
L_08952E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08952E3C;
      }
      goto L_08952E10;
    }
L_08952E10:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952E1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32204));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08952E1Cu) goto L_08952E1C;
    return;
L_08952E1C:
    ctx.gpr[31] = (0x08952E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x08952E24u) goto L_08952E24;
    return;
L_08952E24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[31] = (0x08952E30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951CF4;
L_08952E30:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952E3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32184));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08952E3Cu) goto L_08952E3C;
    return;
L_08952E3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x08952E4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089530DC;
L_08952E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952E5C;
      }
      goto L_08952E58;
    }
L_08952E58:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    goto L_08952E5C;
L_08952E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089530AC;
      }
      goto L_08952E64;
    }
L_08952E64:
    ctx.gpr[31] = (0x08952E6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089504D0;
L_08952E6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952E98;
      }
      goto L_08952E74;
    }
L_08952E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08952E98;
      }
      goto L_08952E80;
    }
L_08952E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08952E98;
      }
      goto L_08952E8C;
    }
L_08952E8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952FFC;
      }
      goto L_08952E98;
    }
L_08952E98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08952EA4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089518E4;
L_08952EA4:
    ctx.gpr[31] = (0x08952EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951AC4;
L_08952EAC:
    ctx.gpr[31] = (0x08952EB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951CF4;
L_08952EB4:
    ctx.gpr[31] = (0x08952EBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D94;
L_08952EBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08952ED8;
      }
      goto L_08952ED0;
    }
L_08952ED0:
    ctx.gpr[31] = (0x08952ED8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895293C;
L_08952ED8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x08952EE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952244;
L_08952EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952F44;
      }
      goto L_08952EF0;
    }
L_08952EF0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32180));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08952F0Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08952F0Cu) goto L_08952F0C;
    return;
L_08952F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08952F3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089514F8;
L_08952F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952FF4;
      }
      goto L_08952F44;
    }
L_08952F44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08952FA0;
      }
      goto L_08952F94;
    }
L_08952F94:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08952FA8;
      }
      goto L_08952FA0;
    }
L_08952FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08952FE8;
      }
      goto L_08952FA8;
    }
L_08952FA8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[5]);
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08952FC8;
    }
    goto L_08952FC0;
L_08952FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08952FE8;
      }
      goto L_08952FC8;
    }
L_08952FC8:
    ctx.gpr[17] = (ctx.gpr[17] << 5u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952FE8;
      }
      goto L_08952FE0;
    }
L_08952FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08952FE8;
      }
      goto L_08952FE8;
    }
L_08952FE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08952FF4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089514F8;
L_08952FF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_0895305C;
      }
      goto L_08952FFC;
    }
L_08952FFC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08953008u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32148));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08953008u) goto L_08953008;
    return;
L_08953008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895302C;
      }
      goto L_08953018;
    }
L_08953018:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08953024u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32124));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 760u, 0x0894FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08953024u) goto L_08953024;
    return;
L_08953024:
    ctx.gpr[31] = (0x0895302Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951AC4;
L_0895302C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953040;
      }
      goto L_08953038;
    }
L_08953038:
    ctx.gpr[31] = (0x08953040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x08953040u) goto L_08953040;
    return;
L_08953040:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08953050u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951CF4;
L_08953050:
    ctx.gpr[31] = (0x08953058u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D94;
L_08953058:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_0895305C;
L_0895305C:
    ctx.gpr[31] = (0x08953064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089504D0;
L_08953064:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953078;
      }
      goto L_0895306C;
    }
L_0895306C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08953078u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951DE8;
L_08953078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895309C;
      }
      goto L_08953094;
    }
L_08953094:
    ctx.gpr[31] = (0x0895309Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089530DC;
L_0895309C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089530AC;
      }
      goto L_089530A8;
    }
L_089530A8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    goto L_089530AC;
L_089530AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089530DC:
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
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    // Refresh model state without swapping the active and fading sectors.
    if (lcs::begin_world_detail_refresh(rt, ctx.gpr[21], ctx.gpr[29])) goto L_08953378;
    ctx.gpr[31] = (0x08953118u);
    // nop
    goto L_08952724;
L_08953118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12960));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08953194;
      }
      goto L_0895313C;
    }
L_0895313C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_089531B8;
      }
      goto L_0895318C;
    }
L_0895318C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089531A8;
      }
      goto L_08953194;
    }
L_08953194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089531A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x089531A0u) goto L_089531A0;
    return;
L_089531A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953AFC;
      }
      goto L_089531A8;
    }
L_089531A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089531C0;
      }
      goto L_089531B8;
    }
L_089531B8:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    goto L_089531C0;
L_089531C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089531D8;
    }
    goto L_089531D8;
L_089531D8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[17];
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[4] = (17112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089532E4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08951DE0;
L_089532E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953368;
      }
      goto L_08953300;
    }
L_08953300:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953368;
      }
      goto L_0895330C;
    }
L_0895330C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(277)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953368;
      }
      goto L_08953318;
    }
L_08953318:
    ctx.gpr[31] = (0x08953320u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 137u, 0x088ED164u>(ctx, &aot_mem) && ctx.pc == 0x08953320u) goto L_08953320;
    return;
L_08953320:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08953368;
      }
      goto L_0895332C;
    }
L_0895332C:
    ctx.gpr[31] = (0x08953334u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 119u, 0x088ED058u>(ctx, &aot_mem) && ctx.pc == 0x08953334u) goto L_08953334;
    return;
L_08953334:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953368;
      }
      goto L_0895333C;
    }
L_0895333C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895335C;
      }
      goto L_08953348;
    }
L_08953348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 510u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08953378;
      }
      goto L_0895335C;
    }
L_0895335C:
    ctx.gpr[4] = (0u | 479u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08953378;
      }
      goto L_08953368;
    }
L_08953368:
    ctx.gpr[31] = (0x08953370u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08951AC4;
L_08953370:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08953378;
L_08953378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089533F8;
      }
      goto L_08953384;
    }
L_08953384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089533F8;
      }
      goto L_08953394;
    }
L_08953394:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089533A8;
      }
      goto L_089533A0;
    }
L_089533A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089533E8;
      }
      goto L_089533A8;
    }
L_089533A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089533E8;
      }
      goto L_089533C4;
    }
L_089533C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089533C4;
      }
      goto L_089533E8;
    }
L_089533E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08953394;
      }
      goto L_089533F8;
    }
L_089533F8:
    // The active sector is settled here; register and initialize the selected lists.
    lcs::select_world_detail(rt, ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089535AC;
      }
      goto L_08953408;
    }
L_08953408:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    goto L_08953410;
L_08953410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[4] << 3u);
    ctx.gpr[22] = (ctx.gpr[20] + ctx.gpr[22]);
    if (ctx.gpr[20] == ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
        goto L_0895359C;
    }
    goto L_08953430;
L_08953430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895358C;
      }
      goto L_08953458;
    }
L_08953458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895348C;
      }
      goto L_08953468;
    }
L_08953468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
        goto L_08953480;
    }
    goto L_08953474;
L_08953474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    goto L_08953480;
L_08953480:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08953588;
      }
      goto L_0895348C;
    }
L_0895348C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089534CC;
      }
      goto L_089534C4;
    }
L_089534C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_089534CC;
      }
      goto L_089534CC;
    }
L_089534CC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08953514;
      }
      goto L_089534E0;
    }
L_089534E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x089534F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x089534F0u) goto L_089534F0;
    return;
L_089534F0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_08953514;
      }
      goto L_08953500;
    }
L_08953500:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[31] = (0x0895350Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x0895350Cu) goto L_0895350C;
    return;
L_0895350C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    goto L_08953514;
L_08953514:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0895353C;
      }
      goto L_08953520;
    }
L_08953520:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08953534u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08953534u) goto L_08953534;
    return;
L_08953534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895353C;
      }
      goto L_0895353C;
    }
L_0895353C:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
        goto L_08953564;
    }
    goto L_0895354C;
L_0895354C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895354C;
      }
      goto L_08953560;
    }
L_08953560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    goto L_08953564;
L_08953564:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08953574;
      }
      goto L_0895356C;
    }
L_0895356C:
    ctx.gpr[31] = (0x08953574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08953574u) goto L_08953574;
    return;
L_08953574:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_08953588;
L_08953588:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0895358C;
L_0895358C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08953430;
      }
      goto L_08953598;
    }
L_08953598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_0895359C;
L_0895359C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08953410;
      }
      goto L_089535AC;
    }
L_089535AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[20] = (0u | 255u);
      if (branch_taken) {
          goto L_089536FC;
      }
      goto L_089535C4;
    }
L_089535C4:
    ctx.gpr[18] = (65535u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32767));
    goto L_089535CC;
L_089535CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089535FC;
      }
      goto L_089535EC;
    }
L_089535EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089536F0;
      }
      goto L_089535FC;
    }
L_089535FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089536F0;
      }
      goto L_08953624;
    }
L_08953624:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089536D0;
      }
      goto L_08953638;
    }
L_08953638:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08953654;
      }
      goto L_08953644;
    }
L_08953644:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089536D0;
      }
      goto L_08953654;
    }
L_08953654:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089536A0;
      }
      goto L_08953664;
    }
L_08953664:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089536D0;
      }
      goto L_089536A0;
    }
L_089536A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089536B0u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x089536B0u) goto L_089536B0;
    return;
L_089536B0:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 15u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089536D0;
L_089536D0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08953624;
      }
      goto L_089536F0;
    }
L_089536F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089535CC;
      }
      goto L_089536FC;
    }
L_089536FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895378C;
      }
      goto L_08953708;
    }
L_08953708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895378C;
      }
      goto L_08953718;
    }
L_08953718:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895372C;
      }
      goto L_08953724;
    }
L_08953724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895377C;
      }
      goto L_0895372C;
    }
L_0895372C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895377C;
      }
      goto L_08953748;
    }
L_08953748:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953770;
      }
      goto L_08953768;
    }
L_08953768:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08953770;
L_08953770:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08953748;
      }
      goto L_0895377C;
    }
L_0895377C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08953718;
      }
      goto L_0895378C;
    }
L_0895378C:
    ctx.gpr[31] = (0x08953794u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08952724;
L_08953794:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[30] = (0u | 0u);
    goto L_089537B8;
L_089537B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_089537CC;
L_089537CC:
    if (ctx.gpr[17] == ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
        goto L_08953AE8;
    }
    goto L_089537D4;
L_089537D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
        goto L_08953AE8;
    }
    goto L_089537E8;
L_089537E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953ADC;
      }
      goto L_08953818;
    }
L_08953818:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08953824;
L_08953824:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08953824;
      }
      goto L_08953848;
    }
L_08953848:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 32767u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089539C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x089539C0u) goto L_089539C0;
    return;
L_089539C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089539E0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 511u, 0x08A06548u>(ctx, &aot_mem) && ctx.pc == 0x089539E0u) goto L_089539E0;
    return;
L_089539E0:
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08953A7Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 762u, 0x0894FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08953A7Cu) goto L_08953A7C;
    return;
L_08953A7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
      if (branch_taken) {
          goto L_08953AB8;
      }
      goto L_08953AAC;
    }
L_08953AAC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08953AB8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08953AB8u) goto L_08953AB8;
    return;
L_08953AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953ADC;
      }
      goto L_08953AC8;
    }
L_08953AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953ADC;
      }
      goto L_08953AD4;
    }
L_08953AD4:
    ctx.gpr[31] = (0x08953ADCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08953ADCu) goto L_08953ADC;
    return;
L_08953ADC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089537CC;
      }
      goto L_08953AE8;
    }
L_08953AE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089537B8;
      }
      goto L_08953AFC;
    }
L_08953AFC:
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
L_08953B30:
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
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08953B80u);
    // nop
    goto L_08952724;
L_08953B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953BF8;
      }
      goto L_08953B8C;
    }
L_08953B8C:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[31] = (0x08953B9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08953B9Cu) goto L_08953B9C;
    return;
L_08953B9C:
    ctx.gpr[4] = (0u | 32768u);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-32));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (50426u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17112u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08953C00;
      }
      goto L_08953BF0;
    }
L_08953BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953C74;
      }
      goto L_08953BF8;
    }
L_08953BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 61u, 0x0895438Cu>(ctx, &aot_mem); return;
      }
      goto L_08953C00;
    }
L_08953C00:
    ctx.gpr[31] = (0x08953C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x08953C08u) goto L_08953C08;
    return;
L_08953C08:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[31] = (0x08953C14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08951CF4;
L_08953C14:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08953C74;
      }
      goto L_08953C2C;
    }
L_08953C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08953C4C;
      }
      goto L_08953C44;
    }
L_08953C44:
    ctx.gpr[31] = (0x08953C4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08953C4Cu) goto L_08953C4C;
    return;
L_08953C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08953C2C;
      }
      goto L_08953C74;
    }
L_08953C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953CC4;
      }
      goto L_08953C80;
    }
L_08953C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08953CA0;
      }
      goto L_08953C98;
    }
L_08953C98:
    ctx.gpr[31] = (0x08953CA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08951AC4;
L_08953CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08953CC4;
      }
      goto L_08953CAC;
    }
L_08953CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953CC4;
      }
      goto L_08953CB8;
    }
L_08953CB8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08953CC4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08951CF4;
L_08953CC4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08953D20;
      }
      goto L_08953D0C;
    }
L_08953D0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(684)));
        goto L_08953D28;
    }
    goto L_08953D20;
L_08953D20:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(684)));
    goto L_08953D28;
L_08953D28:
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08953D3C;
    }
    goto L_08953D3C;
L_08953D3C:
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08953E04;
      }
      goto L_08953DF0;
    }
L_08953DF0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(684)));
        goto L_08953E0C;
    }
    goto L_08953E04;
L_08953E04:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(684)));
    goto L_08953E0C;
L_08953E0C:
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08953E20;
    }
    goto L_08953E20;
L_08953E20:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[22];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[18];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08953EDC;
      }
      goto L_08953EC8;
    }
L_08953EC8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(684)));
        goto L_08953EE4;
    }
    goto L_08953EDC;
L_08953EDC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(684)));
    goto L_08953EE4;
L_08953EE4:
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08953EF8;
    }
    goto L_08953EF8;
L_08953EF8:
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953FCC;
      }
      goto L_08953F68;
    }
L_08953F68:
    ctx.gpr[31] = (0x08953F70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089504D0;
L_08953F70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953FCC;
      }
      goto L_08953F78;
    }
L_08953F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953FCC;
      }
      goto L_08953F84;
    }
L_08953F84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953FCC;
      }
      goto L_08953F90;
    }
L_08953F90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08953FB8;
    }
    goto L_08953FA4;
L_08953FA4:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08953FC0;
      }
      goto L_08953FB4;
    }
L_08953FB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08953FB8;
L_08953FB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953FCC;
      }
      goto L_08953FC0;
    }
L_08953FC0:
    ctx.gpr[31] = (0x08953FC8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08951F88;
L_08953FC8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08953FCC;
L_08953FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953FF4;
      }
      goto L_08953FE8;
    }
L_08953FE8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08953FF4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08952C90;
L_08953FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 9u, 0x08954068u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 1u, 0x08954000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0083(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0083_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_83(Runtime &runtime) {
    runtime.register_generated_unit(83u, 0x08950000u, 16384u, &recomp_unit_0083, &recomp_unit_0083_entry);
    runtime.register_function(0x08950000u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950028u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950048u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895006Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950088u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950090u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895009Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950104u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950130u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950138u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950154u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950164u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950174u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895018Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895019Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950200u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895021Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950228u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950238u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950240u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950248u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950254u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950268u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950270u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950278u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950310u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950334u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950338u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950360u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950380u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895040Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950418u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950424u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950444u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895044Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950454u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895045Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950464u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895047Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950484u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895049Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950508u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895050Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950520u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895068Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950704u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950780u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895078Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895080Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950810u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950838u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950848u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895084Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950854u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950864u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950868u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950870u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895087Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950888u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895088Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950894u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950950u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951004u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895104Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951078u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951084u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895109Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951100u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951140u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951148u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951150u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951270u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951308u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895136Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951434u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951518u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951524u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951534u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951540u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951548u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951558u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951560u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895156Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951574u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895157Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951588u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951594u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951604u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951624u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951630u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951694u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895169Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951700u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895170Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951714u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895171Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895172Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951744u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895174Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951758u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951760u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951768u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895177Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951784u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951788u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895179Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895181Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951830u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951840u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951848u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951850u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951858u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951864u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895186Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951874u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951878u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951884u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951908u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951914u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951920u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951928u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895193Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951944u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895194Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951958u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895195Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951964u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895196Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951978u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951980u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951990u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951998u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951ECCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952058u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952064u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952070u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952078u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895207Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952110u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952120u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895214Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895215Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952184u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952208u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952214u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895221Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952224u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952244u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952274u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895227Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952288u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895229Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952318u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895232Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952350u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895235Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952370u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952378u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952390u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895239Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952400u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895243Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952444u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952450u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895246Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952484u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952490u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895249Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952500u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952514u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952520u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952558u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895260Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952610u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895264Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952684u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895269Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952708u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952724u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895272Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952808u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952834u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952860u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895288Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952910u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895291Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952928u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895293Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952974u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952980u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895299Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952ABCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952ACCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952ED0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952ED8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953008u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953018u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953024u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895302Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953038u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953040u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953050u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953058u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895305Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953064u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895306Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953078u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953094u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895309Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953118u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895313Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895318Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953194u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953300u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895330Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953318u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953320u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895332Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953334u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895333Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953348u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895335Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953368u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953370u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953378u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953384u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953394u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953408u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953410u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953430u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953458u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953468u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953474u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953480u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895348Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953500u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895350Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953514u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953520u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953534u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895353Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895354Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953560u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953564u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895356Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953574u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953588u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895358Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953598u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895359Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953624u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953638u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953644u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953654u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953664u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953708u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953718u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953724u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895372Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953748u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953768u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953770u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895377Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895378Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953818u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953824u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953848u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953ADCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FF4u, &recomp_unit_0083, "recomp_unit_0083");
}
} // namespace psprecomp
