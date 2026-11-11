#include "lcs_controls.hpp"
#include "lcs_free_aim_trace.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0021[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8,
    9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 16, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54,
    0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0,
    70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100,
    101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136,
    0, 137, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0,
    182, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 199, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 223, 224, 0, 225,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249, 250, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 0,
    0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 271, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 281, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0,
    290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 299,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305,
    0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 307, 308, 0, 0, 0, 0, 309, 0, 0, 0, 310, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 315, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0,
    0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 342, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0,
    349, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 356, 0, 357, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0,
    425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 429, 0, 0, 0, 0, 430, 0, 0, 0, 431, 432, 0, 433, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 0, 435, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 440, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0,
    0, 0, 464, 0, 0, 465, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0,
    0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0,
    0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 504, 0, 505,
    0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0,
    513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    522, 0, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541,
    0, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547,
    0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 551, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555,
    0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    565, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 573, 0, 0, 0, 0, 0, 574, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    576, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 583, 0,
    0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 591,
    0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0,
    597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0,
    0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 604, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 611,
    0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0,
    0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 625, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 0, 631, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 645, 0, 0, 0, 646, 0, 647, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651,
};
// Shots go to the crosshair.
static void crosshair_shot(Runtime &rt, AllegrexContext &ctx, GuestMemory::AotFastView &aot_mem) {
    if (!lcs::lcs_free_aim_active() || ctx.gpr[17] != lcs::lcs_guest_player_ped(aot_mem)) return;

    // Weapon range.
    AllegrexContext info = ctx;
    info.gpr[4] = aot_mem.aot_load32(ctx.gpr[16]);
    info.gpr[31] = 0u;
    if (!rt.invoke_isolated_aot(0x0894DA0Cu, info) || info.gpr[2] == 0u) return;

    // Crosshair.
    aot_mem.aot_store32(0x08B832A0u + 384u, std::bit_cast<std::uint32_t>(0.5f));
    aot_mem.aot_store32(0x08B832A0u + 388u, std::bit_cast<std::uint32_t>(0.5f));

    // Camera ray. The call runs on a stack of its own in the host's scratch area (as the GPS and the distant lights do),
    // not deeper on the game thread's own stack.
    constexpr std::uint32_t kScratch = 0x0BF40000u, kCallStack = kScratch + 0x10000u - 64u;
    const std::uint32_t ray = kScratch;
    AllegrexContext target = ctx;
    target.gpr[29] = kCallStack;
    target.gpr[4] = 0x08B832A0u;
    target.gpr[5] = ctx.gpr[29] + 96u;
    target.gpr[6] = ray;
    target.gpr[7] = ray + 16u;
    target.gpr[31] = 0u;
    target.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(info.gpr[2] + 4u));
    if (!rt.invoke_isolated_aot(0x088ED398u, target)) return;

    // The shot runs along the camera ray through the crosshair: from the ray's start, which the game puts level with the
    // gun (beside the shoulder), to its far end at the weapon's range. So it hits what is under the crosshair at any
    // distance, which a shot from the gun itself only does at full range. The game's own crosshair mode fires the
    // shotgun's pellets this way (0x0885B5E0).
    float source[3], far_point[3];
    for (std::uint32_t i = 0; i < 3u; ++i) {
        source[i] = std::bit_cast<float>(aot_mem.aot_load32(ray + i * 4u));
        far_point[i] = std::bit_cast<float>(aot_mem.aot_load32(ray + 16u + i * 4u));
    }
    float gun[3];
    for (std::uint32_t i = 0; i < 3u; ++i) gun[i] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + 96u + i * 4u));
    lcs::lcs_free_aim_note_shot(gun, source);  // its trace starts at the gun (unit 0008)
    for (std::uint32_t i = 0; i < 3u; ++i) {
        aot_mem.aot_store32(ctx.gpr[29] + 96u + i * 4u, std::bit_cast<std::uint32_t>(source[i]));
        aot_mem.aot_store32(ctx.gpr[29] + 80u + i * 4u, std::bit_cast<std::uint32_t>(far_point[i]));
    }
}
void recomp_unit_0021_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08858000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0021[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08858000;
    case 2u: goto L_0885805C;
    case 3u: goto L_08858068;
    case 4u: goto L_088580A4;
    case 5u: goto L_088580CC;
    case 6u: goto L_088580D8;
    case 7u: goto L_088580F0;
    case 8u: goto L_088580FC;
    case 9u: goto L_08858100;
    case 10u: goto L_08858118;
    case 11u: goto L_08858130;
    case 12u: goto L_08858134;
    case 13u: goto L_0885813C;
    case 14u: goto L_08858144;
    case 15u: goto L_08858168;
    case 16u: goto L_08858184;
    case 17u: goto L_08858188;
    case 18u: goto L_08858190;
    case 19u: goto L_08858198;
    case 20u: goto L_088581A0;
    case 21u: goto L_088581A8;
    case 22u: goto L_088581B0;
    case 23u: goto L_088581B4;
    case 24u: goto L_088581D0;
    case 25u: goto L_088581E4;
    case 26u: goto L_088581F4;
    case 27u: goto L_08858230;
    case 28u: goto L_0885824C;
    case 29u: goto L_08858254;
    case 30u: goto L_0885825C;
    case 31u: goto L_08858290;
    case 32u: goto L_088582AC;
    case 33u: goto L_088582BC;
    case 34u: goto L_088582C8;
    case 35u: goto L_088582D0;
    case 36u: goto L_088582E0;
    case 37u: goto L_088582F0;
    case 38u: goto L_08858320;
    case 39u: goto L_08858348;
    case 40u: goto L_08858350;
    case 41u: goto L_08858358;
    case 42u: goto L_0885836C;
    case 43u: goto L_0885838C;
    case 44u: goto L_08858394;
    case 45u: goto L_088583AC;
    case 46u: goto L_088583BC;
    case 47u: goto L_088583CC;
    case 48u: goto L_088583D4;
    case 49u: goto L_088583E0;
    case 50u: goto L_08858400;
    case 51u: goto L_08858410;
    case 52u: goto L_08858438;
    case 53u: goto L_08858474;
    case 54u: goto L_0885847C;
    case 55u: goto L_0885848C;
    case 56u: goto L_08858494;
    case 57u: goto L_088584AC;
    case 58u: goto L_088584CC;
    case 59u: goto L_088584E0;
    case 60u: goto L_088584E8;
    case 61u: goto L_088584F0;
    case 62u: goto L_08858500;
    case 63u: goto L_08858528;
    case 64u: goto L_0885855C;
    case 65u: goto L_0885857C;
    case 66u: goto L_0885858C;
    case 67u: goto L_088585B4;
    case 68u: goto L_088585F0;
    case 69u: goto L_088585F8;
    case 70u: goto L_08858600;
    case 71u: goto L_0885860C;
    case 72u: goto L_08858650;
    case 73u: goto L_08858658;
    case 74u: goto L_08858670;
    case 75u: goto L_08858684;
    case 76u: goto L_088586B0;
    case 77u: goto L_088586C4;
    case 78u: goto L_088586D0;
    case 79u: goto L_088586E8;
    case 80u: goto L_08858730;
    case 81u: goto L_0885873C;
    case 82u: goto L_0885874C;
    case 83u: goto L_0885875C;
    case 84u: goto L_08858788;
    case 85u: goto L_088587B4;
    case 86u: goto L_088587BC;
    case 87u: goto L_088587D0;
    case 88u: goto L_088587DC;
    case 89u: goto L_0885880C;
    case 90u: goto L_0885881C;
    case 91u: goto L_08858828;
    case 92u: goto L_08858848;
    case 93u: goto L_08858858;
    case 94u: goto L_08858880;
    case 95u: goto L_088588BC;
    case 96u: goto L_08858904;
    case 97u: goto L_0885894C;
    case 98u: goto L_08858964;
    case 99u: goto L_0885896C;
    case 100u: goto L_0885897C;
    case 101u: goto L_08858980;
    case 102u: goto L_08858998;
    case 103u: goto L_088589A0;
    case 104u: goto L_088589B0;
    case 105u: goto L_088589E4;
    case 106u: goto L_088589F4;
    case 107u: goto L_088589FC;
    case 108u: goto L_08858A18;
    case 109u: goto L_08858A2C;
    case 110u: goto L_08858A34;
    case 111u: goto L_08858A3C;
    case 112u: goto L_08858A40;
    case 113u: goto L_08858AD0;
    case 114u: goto L_08858ADC;
    case 115u: goto L_08858B18;
    case 116u: goto L_08858B68;
    case 117u: goto L_08858B7C;
    case 118u: goto L_08858B90;
    case 119u: goto L_08858B98;
    case 120u: goto L_08858BA0;
    case 121u: goto L_08858BB8;
    case 122u: goto L_08858BC8;
    case 123u: goto L_08858BCC;
    case 124u: goto L_08858C10;
    case 125u: goto L_08858C24;
    case 126u: goto L_08858C28;
    case 127u: goto L_08858C40;
    case 128u: goto L_08858C48;
    case 129u: goto L_08858C58;
    case 130u: goto L_08858C8C;
    case 131u: goto L_08858C9C;
    case 132u: goto L_08858CB8;
    case 133u: goto L_08858CC4;
    case 134u: goto L_08858CD4;
    case 135u: goto L_08858CF4;
    case 136u: goto L_08858CFC;
    case 137u: goto L_08858D04;
    case 138u: goto L_08858D0C;
    case 139u: goto L_08858D14;
    case 140u: goto L_08858D20;
    case 141u: goto L_08858D28;
    case 142u: goto L_08858D44;
    case 143u: goto L_08858D5C;
    case 144u: goto L_08858D64;
    case 145u: goto L_08858D6C;
    case 146u: goto L_08858D88;
    case 147u: goto L_08858D94;
    case 148u: goto L_08858DAC;
    case 149u: goto L_08858DB4;
    case 150u: goto L_08858DBC;
    case 151u: goto L_08858DD0;
    case 152u: goto L_08858DE0;
    case 153u: goto L_08858DF0;
    case 154u: goto L_08858EAC;
    case 155u: goto L_08858F28;
    case 156u: goto L_08858F34;
    case 157u: goto L_08858F54;
    case 158u: goto L_08858F60;
    case 159u: goto L_08858FA0;
    case 160u: goto L_08858FB0;
    case 161u: goto L_08858FB8;
    case 162u: goto L_08858FC8;
    case 163u: goto L_08858FCC;
    case 164u: goto L_08858FE4;
    case 165u: goto L_08858FEC;
    case 166u: goto L_08858FFC;
    case 167u: goto L_08859030;
    case 168u: goto L_08859040;
    case 169u: goto L_08859060;
    case 170u: goto L_08859064;
    case 171u: goto L_088590A8;
    case 172u: goto L_08859118;
    case 173u: goto L_08859120;
    case 174u: goto L_08859128;
    case 175u: goto L_08859144;
    case 176u: goto L_08859150;
    case 177u: goto L_08859158;
    case 178u: goto L_08859160;
    case 179u: goto L_08859168;
    case 180u: goto L_08859170;
    case 181u: goto L_08859178;
    case 182u: goto L_08859180;
    case 183u: goto L_08859188;
    case 184u: goto L_0885918C;
    case 185u: goto L_08859194;
    case 186u: goto L_088591B0;
    case 187u: goto L_088591B8;
    case 188u: goto L_088591C0;
    case 189u: goto L_088591D0;
    case 190u: goto L_088591DC;
    case 191u: goto L_08859270;
    case 192u: goto L_08859288;
    case 193u: goto L_088592F0;
    case 194u: goto L_0885931C;
    case 195u: goto L_08859328;
    case 196u: goto L_08859344;
    case 197u: goto L_0885935C;
    case 198u: goto L_08859378;
    case 199u: goto L_08859398;
    case 200u: goto L_0885939C;
    case 201u: goto L_088593C8;
    case 202u: goto L_088593D4;
    case 203u: goto L_088593DC;
    case 204u: goto L_088593E8;
    case 205u: goto L_088593F0;
    case 206u: goto L_08859404;
    case 207u: goto L_08859428;
    case 208u: goto L_08859460;
    case 209u: goto L_0885947C;
    case 210u: goto L_08859498;
    case 211u: goto L_088594A4;
    case 212u: goto L_088594A8;
    case 213u: goto L_088594C4;
    case 214u: goto L_088594D0;
    case 215u: goto L_088594F0;
    case 216u: goto L_088594F8;
    case 217u: goto L_08859500;
    case 218u: goto L_08859520;
    case 219u: goto L_0885952C;
    case 220u: goto L_0885953C;
    case 221u: goto L_0885954C;
    case 222u: goto L_08859554;
    case 223u: goto L_08859570;
    case 224u: goto L_08859574;
    case 225u: goto L_0885957C;
    case 226u: goto L_08859598;
    case 227u: goto L_088595A4;
    case 228u: goto L_088595AC;
    case 229u: goto L_088595B4;
    case 230u: goto L_088595BC;
    case 231u: goto L_088595C4;
    case 232u: goto L_088595CC;
    case 233u: goto L_088595DC;
    case 234u: goto L_088595E4;
    case 235u: goto L_088595F0;
    case 236u: goto L_08859600;
    case 237u: goto L_08859614;
    case 238u: goto L_08859620;
    case 239u: goto L_08859628;
    case 240u: goto L_08859634;
    case 241u: goto L_0885963C;
    case 242u: goto L_08859644;
    case 243u: goto L_0885967C;
    case 244u: goto L_08859688;
    case 245u: goto L_08859694;
    case 246u: goto L_088596A0;
    case 247u: goto L_088596B0;
    case 248u: goto L_088596BC;
    case 249u: goto L_088596CC;
    case 250u: goto L_088596D0;
    case 251u: goto L_088596D8;
    case 252u: goto L_088596E4;
    case 253u: goto L_088596EC;
    case 254u: goto L_088596F4;
    case 255u: goto L_08859704;
    case 256u: goto L_08859710;
    case 257u: goto L_08859718;
    case 258u: goto L_08859734;
    case 259u: goto L_0885973C;
    case 260u: goto L_08859754;
    case 261u: goto L_0885975C;
    case 262u: goto L_08859770;
    case 263u: goto L_08859780;
    case 264u: goto L_08859790;
    case 265u: goto L_088597A0;
    case 266u: goto L_088597B0;
    case 267u: goto L_088597C0;
    case 268u: goto L_088597D0;
    case 269u: goto L_088597D8;
    case 270u: goto L_088597E0;
    case 271u: goto L_088597E4;
    case 272u: goto L_08859808;
    case 273u: goto L_08859814;
    case 274u: goto L_08859850;
    case 275u: goto L_088598A0;
    case 276u: goto L_088598B4;
    case 277u: goto L_088598C0;
    case 278u: goto L_088598C8;
    case 279u: goto L_088598E0;
    case 280u: goto L_08859900;
    case 281u: goto L_08859908;
    case 282u: goto L_08859910;
    case 283u: goto L_08859918;
    case 284u: goto L_08859930;
    case 285u: goto L_08859938;
    case 286u: goto L_08859944;
    case 287u: goto L_0885994C;
    case 288u: goto L_0885995C;
    case 289u: goto L_08859970;
    case 290u: goto L_08859980;
    case 291u: goto L_08859994;
    case 292u: goto L_088599A8;
    case 293u: goto L_088599B0;
    case 294u: goto L_088599BC;
    case 295u: goto L_088599C4;
    case 296u: goto L_088599D4;
    case 297u: goto L_088599E8;
    case 298u: goto L_088599F4;
    case 299u: goto L_088599FC;
    case 300u: goto L_08859A14;
    case 301u: goto L_08859A34;
    case 302u: goto L_08859A44;
    case 303u: goto L_08859A5C;
    case 304u: goto L_08859A64;
    case 305u: goto L_08859A7C;
    case 306u: goto L_08859A84;
    case 307u: goto L_08859B14;
    case 308u: goto L_08859B18;
    case 309u: goto L_08859B2C;
    case 310u: goto L_08859B3C;
    case 311u: goto L_08859B40;
    case 312u: goto L_08859B48;
    case 313u: goto L_08859B5C;
    case 314u: goto L_08859B74;
    case 315u: goto L_08859B78;
    case 316u: goto L_08859B84;
    case 317u: goto L_08859BC0;
    case 318u: goto L_08859BC8;
    case 319u: goto L_08859BCC;
    case 320u: goto L_08859C04;
    case 321u: goto L_08859C0C;
    case 322u: goto L_08859C24;
    case 323u: goto L_08859C64;
    case 324u: goto L_08859C74;
    case 325u: goto L_08859C84;
    case 326u: goto L_08859C94;
    case 327u: goto L_08859CA4;
    case 328u: goto L_08859CA8;
    case 329u: goto L_08859D0C;
    case 330u: goto L_08859D14;
    case 331u: goto L_08859D24;
    case 332u: goto L_08859D28;
    case 333u: goto L_08859D64;
    case 334u: goto L_08859D78;
    case 335u: goto L_08859D88;
    case 336u: goto L_08859DB8;
    case 337u: goto L_08859DE0;
    case 338u: goto L_08859E68;
    case 339u: goto L_08859ED0;
    case 340u: goto L_08859ED8;
    case 341u: goto L_08859EE8;
    case 342u: goto L_08859EF0;
    case 343u: goto L_08859EF8;
    case 344u: goto L_08859F5C;
    case 345u: goto L_08859F64;
    case 346u: goto L_08859F74;
    case 347u: goto L_08859FE4;
    case 348u: goto L_08859FF8;
    case 349u: goto L_0885A000;
    case 350u: goto L_0885A00C;
    case 351u: goto L_0885A018;
    case 352u: goto L_0885A020;
    case 353u: goto L_0885A038;
    case 354u: goto L_0885A040;
    case 355u: goto L_0885A058;
    case 356u: goto L_0885A05C;
    case 357u: goto L_0885A064;
    case 358u: goto L_0885A070;
    case 359u: goto L_0885A08C;
    case 360u: goto L_0885A094;
    case 361u: goto L_0885A0B0;
    case 362u: goto L_0885A0B8;
    case 363u: goto L_0885A0C0;
    case 364u: goto L_0885A0C8;
    case 365u: goto L_0885A0D0;
    case 366u: goto L_0885A0D8;
    case 367u: goto L_0885A0E8;
    case 368u: goto L_0885A0F8;
    case 369u: goto L_0885A118;
    case 370u: goto L_0885A128;
    case 371u: goto L_0885A1A4;
    case 372u: goto L_0885A1B8;
    case 373u: goto L_0885A1C0;
    case 374u: goto L_0885A1CC;
    case 375u: goto L_0885A1D4;
    case 376u: goto L_0885A1EC;
    case 377u: goto L_0885A220;
    case 378u: goto L_0885A230;
    case 379u: goto L_0885A2AC;
    case 380u: goto L_0885A2BC;
    case 381u: goto L_0885A340;
    case 382u: goto L_0885A348;
    case 383u: goto L_0885A374;
    case 384u: goto L_0885A3B8;
    case 385u: goto L_0885A3CC;
    case 386u: goto L_0885A3DC;
    case 387u: goto L_0885A3EC;
    case 388u: goto L_0885A3F8;
    case 389u: goto L_0885A418;
    case 390u: goto L_0885A420;
    case 391u: goto L_0885A430;
    case 392u: goto L_0885A4AC;
    case 393u: goto L_0885A4BC;
    case 394u: goto L_0885A52C;
    case 395u: goto L_0885A5B0;
    case 396u: goto L_0885A5D0;
    case 397u: goto L_0885A5F0;
    case 398u: goto L_0885A63C;
    case 399u: goto L_0885A644;
    case 400u: goto L_0885A654;
    case 401u: goto L_0885A6D0;
    case 402u: goto L_0885A6E0;
    case 403u: goto L_0885A6F4;
    case 404u: goto L_0885A710;
    case 405u: goto L_0885A720;
    case 406u: goto L_0885A730;
    case 407u: goto L_0885A738;
    case 408u: goto L_0885A740;
    case 409u: goto L_0885A758;
    case 410u: goto L_0885A780;
    case 411u: goto L_0885A790;
    case 412u: goto L_0885A7A0;
    case 413u: goto L_0885A7A8;
    case 414u: goto L_0885A7B0;
    case 415u: goto L_0885A800;
    case 416u: goto L_0885A808;
    case 417u: goto L_0885A818;
    case 418u: goto L_0885A82C;
    case 419u: goto L_0885A834;
    case 420u: goto L_0885A83C;
    case 421u: goto L_0885A844;
    case 422u: goto L_0885A850;
    case 423u: goto L_0885A870;
    case 424u: goto L_0885A878;
    case 425u: goto L_0885A880;
    case 426u: goto L_0885A888;
    case 427u: goto L_0885A8A0;
    case 428u: goto L_0885A8BC;
    case 429u: goto L_0885A8C0;
    case 430u: goto L_0885A8D4;
    case 431u: goto L_0885A8E4;
    case 432u: goto L_0885A8E8;
    case 433u: goto L_0885A8F0;
    case 434u: goto L_0885A904;
    case 435u: goto L_0885A91C;
    case 436u: goto L_0885A920;
    case 437u: goto L_0885A92C;
    case 438u: goto L_0885A968;
    case 439u: goto L_0885A970;
    case 440u: goto L_0885A974;
    case 441u: goto L_0885A9A0;
    case 442u: goto L_0885A9A8;
    case 443u: goto L_0885A9C0;
    case 444u: goto L_0885A9E8;
    case 445u: goto L_0885AA04;
    case 446u: goto L_0885AA10;
    case 447u: goto L_0885AA18;
    case 448u: goto L_0885AA20;
    case 449u: goto L_0885AA28;
    case 450u: goto L_0885AA30;
    case 451u: goto L_0885AA54;
    case 452u: goto L_0885AA5C;
    case 453u: goto L_0885AA64;
    case 454u: goto L_0885AA6C;
    case 455u: goto L_0885AA7C;
    case 456u: goto L_0885AA98;
    case 457u: goto L_0885AAA0;
    case 458u: goto L_0885AAA8;
    case 459u: goto L_0885AAB0;
    case 460u: goto L_0885AAC0;
    case 461u: goto L_0885AADC;
    case 462u: goto L_0885AAE8;
    case 463u: goto L_0885AAF0;
    case 464u: goto L_0885AB08;
    case 465u: goto L_0885AB14;
    case 466u: goto L_0885AB1C;
    case 467u: goto L_0885AB24;
    case 468u: goto L_0885AB2C;
    case 469u: goto L_0885AB40;
    case 470u: goto L_0885AB60;
    case 471u: goto L_0885AB68;
    case 472u: goto L_0885AB8C;
    case 473u: goto L_0885AB94;
    case 474u: goto L_0885ABC4;
    case 475u: goto L_0885AC1C;
    case 476u: goto L_0885AC24;
    case 477u: goto L_0885AC2C;
    case 478u: goto L_0885AC34;
    case 479u: goto L_0885AC3C;
    case 480u: goto L_0885AC48;
    case 481u: goto L_0885AC54;
    case 482u: goto L_0885AC74;
    case 483u: goto L_0885AC7C;
    case 484u: goto L_0885ACB8;
    case 485u: goto L_0885AD04;
    case 486u: goto L_0885AD0C;
    case 487u: goto L_0885AD14;
    case 488u: goto L_0885AD1C;
    case 489u: goto L_0885AD24;
    case 490u: goto L_0885AD28;
    case 491u: goto L_0885AD38;
    case 492u: goto L_0885AD54;
    case 493u: goto L_0885AD5C;
    case 494u: goto L_0885AD64;
    case 495u: goto L_0885AD6C;
    case 496u: goto L_0885AD74;
    case 497u: goto L_0885AD84;
    case 498u: goto L_0885ADA0;
    case 499u: goto L_0885ADA8;
    case 500u: goto L_0885ADB0;
    case 501u: goto L_0885ADBC;
    case 502u: goto L_0885ADD8;
    case 503u: goto L_0885ADE0;
    case 504u: goto L_0885ADF4;
    case 505u: goto L_0885ADFC;
    case 506u: goto L_0885AE04;
    case 507u: goto L_0885AE10;
    case 508u: goto L_0885AE28;
    case 509u: goto L_0885AE34;
    case 510u: goto L_0885AE48;
    case 511u: goto L_0885AE70;
    case 512u: goto L_0885AE78;
    case 513u: goto L_0885AE80;
    case 514u: goto L_0885AEB4;
    case 515u: goto L_0885AEE4;
    case 516u: goto L_0885AF14;
    case 517u: goto L_0885AF44;
    case 518u: goto L_0885AF74;
    case 519u: goto L_0885AFA4;
    case 520u: goto L_0885AFD4;
    case 521u: goto L_0885AFD8;
    case 522u: goto L_0885B000;
    case 523u: goto L_0885B00C;
    case 524u: goto L_0885B014;
    case 525u: goto L_0885B020;
    case 526u: goto L_0885B028;
    case 527u: goto L_0885B03C;
    case 528u: goto L_0885B08C;
    case 529u: goto L_0885B0B0;
    case 530u: goto L_0885B0D8;
    case 531u: goto L_0885B104;
    case 532u: goto L_0885B160;
    case 533u: goto L_0885B190;
    case 534u: goto L_0885B198;
    case 535u: goto L_0885B1A4;
    case 536u: goto L_0885B1BC;
    case 537u: goto L_0885B1C4;
    case 538u: goto L_0885B1E0;
    case 539u: goto L_0885B254;
    case 540u: goto L_0885B25C;
    case 541u: goto L_0885B27C;
    case 542u: goto L_0885B284;
    case 543u: goto L_0885B29C;
    case 544u: goto L_0885B2A4;
    case 545u: goto L_0885B2C4;
    case 546u: goto L_0885B2E4;
    case 547u: goto L_0885B2FC;
    case 548u: goto L_0885B304;
    case 549u: goto L_0885B320;
    case 550u: goto L_0885B32C;
    case 551u: goto L_0885B344;
    case 552u: goto L_0885B348;
    case 553u: goto L_0885B37C;
    case 554u: goto L_0885B3E8;
    case 555u: goto L_0885B3FC;
    case 556u: goto L_0885B408;
    case 557u: goto L_0885B420;
    case 558u: goto L_0885B42C;
    case 559u: goto L_0885B434;
    case 560u: goto L_0885B44C;
    case 561u: goto L_0885B460;
    case 562u: goto L_0885B490;
    case 563u: goto L_0885B538;
    case 564u: goto L_0885B544;
    case 565u: goto L_0885B580;
    case 566u: goto L_0885B588;
    case 567u: goto L_0885B590;
    case 568u: goto L_0885B59C;
    case 569u: goto L_0885B5A4;
    case 570u: goto L_0885B5BC;
    case 571u: goto L_0885B5E8;
    case 572u: goto L_0885B6B8;
    case 573u: goto L_0885B708;
    case 574u: goto L_0885B720;
    case 575u: goto L_0885B724;
    case 576u: goto L_0885B780;
    case 577u: goto L_0885B788;
    case 578u: goto L_0885B79C;
    case 579u: goto L_0885B7AC;
    case 580u: goto L_0885B7B4;
    case 581u: goto L_0885B7E0;
    case 582u: goto L_0885B7F0;
    case 583u: goto L_0885B7F8;
    case 584u: goto L_0885B80C;
    case 585u: goto L_0885B850;
    case 586u: goto L_0885B858;
    case 587u: goto L_0885B860;
    case 588u: goto L_0885B86C;
    case 589u: goto L_0885B8DC;
    case 590u: goto L_0885B8E4;
    case 591u: goto L_0885B8FC;
    case 592u: goto L_0885B920;
    case 593u: goto L_0885B930;
    case 594u: goto L_0885B93C;
    case 595u: goto L_0885B944;
    case 596u: goto L_0885B96C;
    case 597u: goto L_0885B980;
    case 598u: goto L_0885B990;
    case 599u: goto L_0885B9B8;
    case 600u: goto L_0885B9E4;
    case 601u: goto L_0885BA08;
    case 602u: goto L_0885BAC0;
    case 603u: goto L_0885BAC8;
    case 604u: goto L_0885BB08;
    case 605u: goto L_0885BB18;
    case 606u: goto L_0885BB24;
    case 607u: goto L_0885BB48;
    case 608u: goto L_0885BB50;
    case 609u: goto L_0885BB58;
    case 610u: goto L_0885BB60;
    case 611u: goto L_0885BB7C;
    case 612u: goto L_0885BB84;
    case 613u: goto L_0885BB8C;
    case 614u: goto L_0885BB9C;
    case 615u: goto L_0885BBAC;
    case 616u: goto L_0885BC40;
    case 617u: goto L_0885BC58;
    case 618u: goto L_0885BCC0;
    case 619u: goto L_0885BCEC;
    case 620u: goto L_0885BCF8;
    case 621u: goto L_0885BD14;
    case 622u: goto L_0885BD2C;
    case 623u: goto L_0885BD48;
    case 624u: goto L_0885BD68;
    case 625u: goto L_0885BD6C;
    case 626u: goto L_0885BD98;
    case 627u: goto L_0885BDA4;
    case 628u: goto L_0885BDAC;
    case 629u: goto L_0885BDB8;
    case 630u: goto L_0885BDC0;
    case 631u: goto L_0885BDD4;
    case 632u: goto L_0885BDD8;
    case 633u: goto L_0885BE10;
    case 634u: goto L_0885BE30;
    case 635u: goto L_0885BE44;
    case 636u: goto L_0885BE4C;
    case 637u: goto L_0885BE58;
    case 638u: goto L_0885BEA4;
    case 639u: goto L_0885BEB4;
    case 640u: goto L_0885BEDC;
    case 641u: goto L_0885BEE8;
    case 642u: goto L_0885BF24;
    case 643u: goto L_0885BF40;
    case 644u: goto L_0885BF54;
    case 645u: goto L_0885BF58;
    case 646u: goto L_0885BF68;
    case 647u: goto L_0885BF70;
    case 648u: goto L_0885BFC0;
    case 649u: goto L_0885BFC8;
    case 650u: goto L_0885BFF4;
    case 651u: goto L_0885BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08858000:
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
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08858068;
      }
      goto L_0885805C;
    }
L_0885805C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088580A4;
      }
      goto L_08858068;
    }
L_08858068:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088580A4;
L_088580A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
        goto L_088580D8;
    }
    goto L_088580CC;
L_088580CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_088580D8;
      }
      goto L_088580D8;
    }
L_088580D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088580FC;
      }
      goto L_088580F0;
    }
L_088580F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08858100;
      }
      goto L_088580FC;
    }
L_088580FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    goto L_08858100;
L_08858100:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08858134;
      }
      goto L_08858118;
    }
L_08858118:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08858134;
      }
      goto L_08858130;
    }
L_08858130:
    ctx.gpr[19] = (0u | 1u);
    goto L_08858134;
L_08858134:
    ctx.gpr[31] = (0x0885813Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885813Cu) goto L_0885813C;
    return;
L_0885813C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08858188;
      }
      goto L_08858144;
    }
L_08858144:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5080)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08858168;
    }
    goto L_08858168;
L_08858168:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5080), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08858188;
      }
      goto L_08858184;
    }
L_08858184:
    ctx.gpr[20] = (0u | 1u);
    goto L_08858188;
L_08858188:
    ctx.gpr[31] = (0x08858190u);
    ctx.gpr[21] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08858190u) goto L_08858190;
    return;
L_08858190:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088581B4;
      }
      goto L_08858198;
    }
L_08858198:
    ctx.gpr[31] = (0x088581A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088581A0u) goto L_088581A0;
    return;
L_088581A0:
    ctx.gpr[31] = (0x088581A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 331u, 0x08945604u>(ctx, &aot_mem) && ctx.pc == 0x088581A8u) goto L_088581A8;
    return;
L_088581A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088581B4;
      }
      goto L_088581B0;
    }
L_088581B0:
    ctx.gpr[21] = (0u | 1u);
    goto L_088581B4;
L_088581B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885873C;
      }
      goto L_088581D0;
    }
L_088581D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885873C;
      }
      goto L_088581E4;
    }
L_088581E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(828)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858684;
      }
      goto L_088581F4;
    }
L_088581F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1722)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858290;
      }
      goto L_08858230;
    }
L_08858230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858290;
      }
      goto L_0885824C;
    }
L_0885824C:
    ctx.gpr[31] = (0x08858254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08858254u) goto L_08858254;
    return;
L_08858254:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08858290;
      }
      goto L_0885825C;
    }
L_0885825C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(3008));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3032)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3024)));
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5004)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3036), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088582E0;
      }
      goto L_08858290;
    }
L_08858290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088582D0;
      }
      goto L_088582AC;
    }
L_088582AC:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088582BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 42u, 0x08AA83C4u>(ctx, &aot_mem) && ctx.pc == 0x088582BCu) goto L_088582BC;
    return;
L_088582BC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088582C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 228u, 0x08898D60u>(ctx, &aot_mem) && ctx.pc == 0x088582C8u) goto L_088582C8;
    return;
L_088582C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088582E0;
      }
      goto L_088582D0;
    }
L_088582D0:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    goto L_088582E0;
L_088582E0:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088582F0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x088582F0u) goto L_088582F0;
    return;
L_088582F0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08858320;
    }
    goto L_08858320;
L_08858320:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[31] = (0x08858348u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08858348u) goto L_08858348;
    return;
L_08858348:
    ctx.gpr[31] = (0x08858350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08858350u) goto L_08858350;
    return;
L_08858350:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088584CC;
      }
      goto L_08858358;
    }
L_08858358:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088584CC;
      }
      goto L_0885836C;
    }
L_0885836C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5000)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0885838C;
    }
    goto L_0885838C;
L_0885838C:
    ctx.gpr[31] = (0x08858394u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08858394u) goto L_08858394;
    return;
L_08858394:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2960)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4996)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088583ACu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088583ACu) goto L_088583AC;
    return;
L_088583AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088583CC;
      }
      goto L_088583BC;
    }
L_088583BC:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088583CC;
L_088583CC:
    ctx.gpr[31] = (0x088583D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088583D4u) goto L_088583D4;
    return;
L_088583D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858474;
      }
      goto L_088583E0;
    }
L_088583E0:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (48665u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x08858400u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08858400u) goto L_08858400;
    return;
L_08858400:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08858410u);
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08858410u) goto L_08858410;
    return;
L_08858410:
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08858438u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08858438u) goto L_08858438;
    return;
L_08858438:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08858474u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08858474u) goto L_08858474;
    return;
L_08858474:
    ctx.gpr[31] = (0x0885847Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885847Cu) goto L_0885847C;
    return;
L_0885847C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2960));
    ctx.gpr[5] = (ctx.gpr[21] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858494;
      }
      goto L_0885848C;
    }
L_0885848C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088584AC;
      }
      goto L_08858494;
    }
L_08858494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_088584AC;
    }
    goto L_088584AC;
L_088584AC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088585F0;
      }
      goto L_088584CC;
    }
L_088584CC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088585F0;
      }
      goto L_088584E0;
    }
L_088584E0:
    ctx.gpr[31] = (0x088584E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088584E8u) goto L_088584E8;
    return;
L_088584E8:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885855C;
      }
      goto L_088584F0;
    }
L_088584F0:
    ctx.gpr[4] = (16040u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.gpr[31] = (0x08858500u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08858500u) goto L_08858500;
    return;
L_08858500:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
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
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08858528;
    }
    goto L_08858528;
L_08858528:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16040u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0885855C;
L_0885855C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x0885857Cu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0885857Cu) goto L_0885857C;
    return;
L_0885857C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0885858Cu);
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0885858Cu) goto L_0885858C;
    return;
L_0885858C:
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x088585B4u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x088585B4u) goto L_088585B4;
    return;
L_088585B4:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088585F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088585F0u) goto L_088585F0;
    return;
L_088585F0:
    ctx.gpr[31] = (0x088585F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088585F8u) goto L_088585F8;
    return;
L_088585F8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0885860C;
      }
      goto L_08858600;
    }
L_08858600:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0885860C;
L_0885860C:
    crosshair_shot(rt, ctx, aot_mem);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08858650u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 366u, 0x08852198u>(ctx, &aot_mem) && ctx.pc == 0x08858650u) goto L_08858650;
    return;
L_08858650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858670;
      }
      goto L_08858658;
    }
L_08858658:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08858670u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 64u, 0x08860C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08858670u) goto L_08858670;
    return;
L_08858670:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08858C9C;
      }
      goto L_08858684;
    }
L_08858684:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088586B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x088586B0u) goto L_088586B0;
    return;
L_088586B0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088586C4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x088586C4u) goto L_088586C4;
    return;
L_088586C4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088586D0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x088586D0u) goto L_088586D0;
    return;
L_088586D0:
    ctx.gpr[7] = (ctx.gpr[22] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088586E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x088586E8u) goto L_088586E8;
    return;
L_088586E8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[22] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x08858730u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 366u, 0x08852198u>(ctx, &aot_mem) && ctx.pc == 0x08858730u) goto L_08858730;
    return;
L_08858730:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858C9C;
      }
      goto L_0885873C;
    }
L_0885873C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 213u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885875C;
      }
      goto L_0885874C;
    }
L_0885874C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-986));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088589FC;
      }
      goto L_0885875C;
    }
L_0885875C:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858828;
      }
      goto L_08858788;
    }
L_08858788:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088587B4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088587B4u) goto L_088587B4;
    return;
L_088587B4:
    ctx.gpr[31] = (0x088587BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088587BCu) goto L_088587BC;
    return;
L_088587BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088587D0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 566u, 0x0885FEF0u>(ctx, &aot_mem) && ctx.pc == 0x088587D0u) goto L_088587D0;
    return;
L_088587D0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088587DCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x088587DCu) goto L_088587DC;
    return;
L_088587DC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-986));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885881C;
      }
      goto L_0885880C;
    }
L_0885880C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08858828;
      }
      goto L_0885881C;
    }
L_0885881C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08858828;
L_08858828:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08858848u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08858848u) goto L_08858848;
    return;
L_08858848:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08858858u);
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08858858u) goto L_08858858;
    return;
L_08858858:
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08858880u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08858880u) goto L_08858880;
    return;
L_08858880:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088588BCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088588BCu) goto L_088588BC;
    return;
L_088588BC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
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
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08858904u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08858904u) goto L_08858904;
    return;
L_08858904:
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-8004), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x0885894Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 366u, 0x08852198u>(ctx, &aot_mem) && ctx.pc == 0x0885894Cu) goto L_0885894C;
    return;
L_0885894C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-8004), 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858964;
    }
L_08858964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 4u);
      if (branch_taken) {
          goto L_08858980;
      }
      goto L_0885896C;
    }
L_0885896C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08858980;
      }
      goto L_0885897C;
    }
L_0885897C:
    ctx.gpr[21] = (0u | 2u);
    goto L_08858980;
L_08858980:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[31] = (0x08858998u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 568u, 0x08A436F0u>(ctx, &aot_mem) && ctx.pc == 0x08858998u) goto L_08858998;
    return;
L_08858998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088589F4;
      }
      goto L_088589A0;
    }
L_088589A0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088589F4;
      }
      goto L_088589B0;
    }
L_088589B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088589E4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088589E4u) goto L_088589E4;
    return;
L_088589E4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[22] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088589B0;
      }
      goto L_088589F4;
    }
L_088589F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858C9C;
      }
      goto L_088589FC;
    }
L_088589FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08858A34;
      }
      goto L_08858A18;
    }
L_08858A18:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08858A34;
      }
      goto L_08858A2C;
    }
L_08858A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08858A40;
      }
      goto L_08858A34;
    }
L_08858A34:
    ctx.gpr[31] = (0x08858A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08858A3Cu) goto L_08858A3C;
    return;
L_08858A3C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08858A40;
L_08858A40:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08858ADC;
      }
      goto L_08858AD0;
    }
L_08858AD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08858B18;
      }
      goto L_08858ADC;
    }
L_08858ADC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08858B18;
L_08858B18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08858B68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 410u, 0x08852680u>(ctx, &aot_mem) && ctx.pc == 0x08858B68u) goto L_08858B68;
    return;
L_08858B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08858BCC;
      }
      goto L_08858B7C;
    }
L_08858B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08858BCC;
      }
      goto L_08858B90;
    }
L_08858B90:
    ctx.gpr[31] = (0x08858B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08858B98u) goto L_08858B98;
    return;
L_08858B98:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08858BB8;
      }
      goto L_08858BA0;
    }
L_08858BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08858BCC;
      }
      goto L_08858BB8;
    }
L_08858BB8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08858BC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 506u, 0x0885F648u>(ctx, &aot_mem) && ctx.pc == 0x08858BC8u) goto L_08858BC8;
    return;
L_08858BC8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08858BCC;
L_08858BCC:
    crosshair_shot(rt, ctx, aot_mem);
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08858C10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 366u, 0x08852198u>(ctx, &aot_mem) && ctx.pc == 0x08858C10u) goto L_08858C10;
    return;
L_08858C10:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08858C28;
      }
      goto L_08858C24;
    }
L_08858C24:
    ctx.gpr[21] = (0u | 4u);
    goto L_08858C28;
L_08858C28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[31] = (0x08858C40u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 568u, 0x08A436F0u>(ctx, &aot_mem) && ctx.pc == 0x08858C40u) goto L_08858C40;
    return;
L_08858C40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858C9C;
      }
      goto L_08858C48;
    }
L_08858C48:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858C9C;
      }
      goto L_08858C58;
    }
L_08858C58:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08858C8Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08858C8Cu) goto L_08858C8C;
    return;
L_08858C8C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858C58;
      }
      goto L_08858C9C;
    }
L_08858C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858D28;
      }
      goto L_08858CB8;
    }
L_08858CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858D28;
      }
      goto L_08858CC4;
    }
L_08858CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08858CFC;
      }
      goto L_08858CD4;
    }
L_08858CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858D04;
      }
      goto L_08858CF4;
    }
L_08858CF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858D28;
      }
      goto L_08858CFC;
    }
L_08858CFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08859064;
      }
      goto L_08858D04;
    }
L_08858D04:
    ctx.gpr[31] = (0x08858D0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x08858D0Cu) goto L_08858D0C;
    return;
L_08858D0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858D28;
      }
      goto L_08858D14;
    }
L_08858D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x08858D20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 56u, 0x08888678u>(ctx, &aot_mem) && ctx.pc == 0x08858D20u) goto L_08858D20;
    return;
L_08858D20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858D64;
      }
      goto L_08858D28;
    }
L_08858D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858D6C;
      }
      goto L_08858D44;
    }
L_08858D44:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08858D5Cu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x08858D5Cu) goto L_08858D5C;
    return;
L_08858D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858DAC;
      }
      goto L_08858D64;
    }
L_08858D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08859064;
      }
      goto L_08858D6C;
    }
L_08858D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858DAC;
      }
      goto L_08858D88;
    }
L_08858D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858DAC;
      }
      goto L_08858D94;
    }
L_08858D94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08858DACu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x08858DACu) goto L_08858DAC;
    return;
L_08858DAC:
    ctx.gpr[31] = (0x08858DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08858DB4u) goto L_08858DB4;
    return;
L_08858DB4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08858DE0;
      }
      goto L_08858DBC;
    }
L_08858DBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858DE0;
      }
      goto L_08858DD0;
    }
L_08858DD0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08858DE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 334u, 0x08851F54u>(ctx, &aot_mem) && ctx.pc == 0x08858DE0u) goto L_08858DE0;
    return;
L_08858DE0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858F28;
      }
      goto L_08858DF0;
    }
L_08858DF0:
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(488), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7397)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(490), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(492));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(504));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(516));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(491), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(526), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[10]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08858EACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 205u, 0x08851234u>(ctx, &aot_mem) && ctx.pc == 0x08858EACu) goto L_08858EAC;
    return;
L_08858EAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(524), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(528))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(528))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[23] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08858F28u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A878Cu>(ctx, &aot_mem) && ctx.pc == 0x08858F28u) goto L_08858F28;
    return;
L_08858F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858F60;
      }
      goto L_08858F34;
    }
L_08858F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858F60;
      }
      goto L_08858F54;
    }
L_08858F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08858F60;
L_08858F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[11] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[31] = (0x08858FA0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 445u, 0x08852ADCu>(ctx, &aot_mem) && ctx.pc == 0x08858FA0u) goto L_08858FA0;
    return;
L_08858FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08858FB8;
      }
      goto L_08858FB0;
    }
L_08858FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 4u);
      if (branch_taken) {
          goto L_08858FCC;
      }
      goto L_08858FB8;
    }
L_08858FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08858FCC;
      }
      goto L_08858FC8;
    }
L_08858FC8:
    ctx.gpr[18] = (0u | 2u);
    goto L_08858FCC;
L_08858FCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[31] = (0x08858FE4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 568u, 0x08A436F0u>(ctx, &aot_mem) && ctx.pc == 0x08858FE4u) goto L_08858FE4;
    return;
L_08858FE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859040;
      }
      goto L_08858FEC;
    }
L_08858FEC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859040;
      }
      goto L_08858FFC;
    }
L_08858FFC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08859030u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08859030u) goto L_08859030;
    return;
L_08859030:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858FFC;
      }
      goto L_08859040;
    }
L_08859040:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08859060u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088590A8;
L_08859060:
    ctx.gpr[2] = (0u | 1u);
    goto L_08859064;
L_08859064:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088590A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1536));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1520), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1508), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1496), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1516), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1524), ctx.gpr[23]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1484), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1488), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1492), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1500), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1528), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1532), ctx.gpr[31]);
    ctx.gpr[31] = (0x08859118u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08859118u) goto L_08859118;
    return;
L_08859118:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885AB94;
      }
      goto L_08859120;
    }
L_08859120:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859150;
      }
      goto L_08859128;
    }
L_08859128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859150;
      }
      goto L_08859144;
    }
L_08859144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08859168;
      }
      goto L_08859150;
    }
L_08859150:
    ctx.gpr[31] = (0x08859158u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08859158u) goto L_08859158;
    return;
L_08859158:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08859170;
      }
      goto L_08859160;
    }
L_08859160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885918C;
      }
      goto L_08859168;
    }
L_08859168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AC7C;
      }
      goto L_08859170;
    }
L_08859170:
    ctx.gpr[31] = (0x08859178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08859178u) goto L_08859178;
    return;
L_08859178:
    ctx.gpr[31] = (0x08859180u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 331u, 0x08945604u>(ctx, &aot_mem) && ctx.pc == 0x08859180u) goto L_08859180;
    return;
L_08859180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885918C;
      }
      goto L_08859188;
    }
L_08859188:
    ctx.gpr[17] = (0u | 1u);
    goto L_0885918C;
L_0885918C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_08859194;
    }
L_08859194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_088591B0;
    }
L_088591B0:
    ctx.gpr[31] = (0x088591B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088591B8u) goto L_088591B8;
    return;
L_088591B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_088591C0;
    }
L_088591C0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_088591D0;
    }
L_088591D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_088591DC;
    }
L_088591DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (15820u << 16u);
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_08859270;
    }
L_08859270:
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_08859288;
    }
L_08859288:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885931C;
      }
      goto L_088592F0;
    }
L_088592F0:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859328;
      }
      goto L_0885931C;
    }
L_0885931C:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08859328;
L_08859328:
    ctx.gpr[5] = (16201u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16006u << 16u);
      if (branch_taken) {
          goto L_08859398;
      }
      goto L_08859344;
    }
L_08859344:
    ctx.gpr[5] = (ctx.gpr[5] | 2706u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08859378;
      }
      goto L_0885935C;
    }
L_0885935C:
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
        goto L_0885939C;
    }
    goto L_08859378;
L_08859378:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16253u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 28836u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088593F0;
      }
      goto L_08859398;
    }
L_08859398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    goto L_0885939C;
L_0885939C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1792), 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1816), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088593DC;
      }
      goto L_088593C8;
    }
L_088593C8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[31] = (0x088593D4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29140)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x088593D4u) goto L_088593D4;
    return;
L_088593D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_088593DC;
    }
L_088593DC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[31] = (0x088593E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29136)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x088593E8u) goto L_088593E8;
    return;
L_088593E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859404;
      }
      goto L_088593F0;
    }
L_088593F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1816), 0u);
    goto L_08859404;
L_08859404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08859428u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 749u, 0x08807268u>(ctx, &aot_mem) && ctx.pc == 0x08859428u) goto L_08859428;
    return;
L_08859428:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08859460u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 94u, 0x08824988u>(ctx, &aot_mem) && ctx.pc == 0x08859460u) goto L_08859460;
    return;
L_08859460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088594A8;
      }
      goto L_0885947C;
    }
L_0885947C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088594A8;
      }
      goto L_08859498;
    }
L_08859498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088594A8;
      }
      goto L_088594A4;
    }
L_088594A4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(504)));
    goto L_088594A8;
L_088594A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08859500;
      }
      goto L_088594C4;
    }
L_088594C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08859500;
      }
      goto L_088594D0;
    }
L_088594D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088594F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18044));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088594F0u) goto L_088594F0;
    return;
L_088594F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08859500;
      }
      goto L_088594F8;
    }
L_088594F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08859500;
      }
      goto L_08859500;
    }
L_08859500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08859554;
      }
      goto L_08859520;
    }
L_08859520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_0885954C;
    }
    goto L_0885952C;
L_0885952C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x0885953Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0885953Cu) goto L_0885953C;
    return;
L_0885953C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_0885954C;
L_0885954C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(182)));
      if (branch_taken) {
          goto L_08859574;
      }
      goto L_08859554;
    }
L_08859554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859574;
      }
      goto L_08859570;
    }
L_08859570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1376)));
    goto L_08859574;
L_08859574:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A094;
      }
      goto L_0885957C;
    }
L_0885957C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A094;
      }
      goto L_08859598;
    }
L_08859598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088595DC;
      }
      goto L_088595A4;
    }
L_088595A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088595B4;
      }
      goto L_088595AC;
    }
L_088595AC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088595DC;
      }
      goto L_088595B4;
    }
L_088595B4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A094;
      }
      goto L_088595BC;
    }
L_088595BC:
    ctx.gpr[31] = (0x088595C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x088595C4u) goto L_088595C4;
    return;
L_088595C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A094;
      }
      goto L_088595CC;
    }
L_088595CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885A094;
      }
      goto L_088595DC;
    }
L_088595DC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1480), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088595F0;
      }
      goto L_088595E4;
    }
L_088595E4:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_08859628;
      }
      goto L_088595F0;
    }
L_088595F0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1480), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08859620;
      }
      goto L_08859600;
    }
L_08859600:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1480), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1025));
    ctx.gpr[31] = (0x08859614u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08859614u) goto L_08859614;
    return;
L_08859614:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1025)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08859620;
L_08859620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    goto L_08859628;
L_08859628:
    ctx.gpr[4] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_08859ED8;
      }
      goto L_08859634;
    }
L_08859634:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08859ED8;
      }
      goto L_0885963C;
    }
L_0885963C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08859ED8;
      }
      goto L_08859644;
    }
L_08859644:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859694;
      }
      goto L_0885967C;
    }
L_0885967C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08859688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x08859688u) goto L_08859688;
    return;
L_08859688:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1480)));
      if (branch_taken) {
          goto L_088596D0;
      }
      goto L_08859694;
    }
L_08859694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1480)));
      if (branch_taken) {
          goto L_088596BC;
      }
      goto L_088596A0;
    }
L_088596A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1026));
    ctx.gpr[31] = (0x088596B0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088596B0u) goto L_088596B0;
    return;
L_088596B0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1026)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088596BC;
L_088596BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x088596CCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 337u, 0x0899E154u>(ctx, &aot_mem) && ctx.pc == 0x088596CCu) goto L_088596CC;
    return;
L_088596CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088596D0;
L_088596D0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859A84;
      }
      goto L_088596D8;
    }
L_088596D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088596E4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 322u, 0x08899450u>(ctx, &aot_mem) && ctx.pc == 0x088596E4u) goto L_088596E4;
    return;
L_088596E4:
    ctx.gpr[31] = (0x088596ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088596ECu) goto L_088596EC;
    return;
L_088596EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859704;
      }
      goto L_088596F4;
    }
L_088596F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885975C;
      }
      goto L_08859704;
    }
L_08859704:
    ctx.gpr[5] = (ctx.gpr[23] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885973C;
      }
      goto L_08859710;
    }
L_08859710:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08859718;
L_08859718:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08859734u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x08859734u) goto L_08859734;
    return;
L_08859734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859A34;
      }
      goto L_0885973C;
    }
L_0885973C:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_08859754;
    }
    goto L_08859754;
L_08859754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08859718;
      }
      goto L_0885975C;
    }
L_0885975C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859908;
      }
      goto L_08859770;
    }
L_08859770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 21u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
        goto L_088597E4;
    }
    goto L_08859780;
L_08859780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 20u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
        goto L_088597E4;
    }
    goto L_08859790;
L_08859790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 19u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
        goto L_088597E4;
    }
    goto L_088597A0;
L_088597A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088597D0;
      }
      goto L_088597B0;
    }
L_088597B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088597D0;
      }
      goto L_088597C0;
    }
L_088597C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859908;
      }
      goto L_088597D0;
    }
L_088597D0:
    ctx.gpr[31] = (0x088597D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088597D8u) goto L_088597D8;
    return;
L_088597D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859908;
      }
      goto L_088597E0;
    }
L_088597E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_088597E4;
L_088597E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08859814;
      }
      goto L_08859808;
    }
L_08859808:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08859850;
      }
      goto L_08859814;
    }
L_08859814:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08859850;
L_08859850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (49312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088598A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088598A0u) goto L_088598A0;
    return;
L_088598A0:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1500u);
    ctx.gpr[31] = (0x088598B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x088598B4u) goto L_088598B4;
    return;
L_088598B4:
    ctx.gpr[5] = (ctx.gpr[23] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088598C8;
      }
      goto L_088598C0;
    }
L_088598C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088598E0;
      }
      goto L_088598C8;
    }
L_088598C8:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_088598E0;
    }
    goto L_088598E0;
L_088598E0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08859900u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x08859900u) goto L_08859900;
    return;
L_08859900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859A34;
      }
      goto L_08859908;
    }
L_08859908:
    ctx.gpr[31] = (0x08859910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08859910u) goto L_08859910;
    return;
L_08859910:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088599A8;
      }
      goto L_08859918;
    }
L_08859918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2956)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088599E8;
      }
      goto L_08859930;
    }
L_08859930:
    ctx.gpr[31] = (0x08859938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 132u, 0x088D4A84u>(ctx, &aot_mem) && ctx.pc == 0x08859938u) goto L_08859938;
    return;
L_08859938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08859944u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 459u, 0x08A8AC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08859944u) goto L_08859944;
    return;
L_08859944:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859970;
      }
      goto L_0885994C;
    }
L_0885994C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0885995Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885995Cu) goto L_0885995C;
    return;
L_0885995C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08859970;
L_08859970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859994;
      }
      goto L_08859980;
    }
L_08859980:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2956), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088599E8;
      }
      goto L_08859994;
    }
L_08859994:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2956), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088599E8;
      }
      goto L_088599A8;
    }
L_088599A8:
    ctx.gpr[31] = (0x088599B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 132u, 0x088D4A84u>(ctx, &aot_mem) && ctx.pc == 0x088599B0u) goto L_088599B0;
    return;
L_088599B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088599BCu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 459u, 0x08A8AC6Cu>(ctx, &aot_mem) && ctx.pc == 0x088599BCu) goto L_088599BC;
    return;
L_088599BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088599E8;
      }
      goto L_088599C4;
    }
L_088599C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x088599D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088599D4u) goto L_088599D4;
    return;
L_088599D4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088599E8;
L_088599E8:
    ctx.gpr[5] = (ctx.gpr[23] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088599FC;
      }
      goto L_088599F4;
    }
L_088599F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08859A14;
      }
      goto L_088599FC;
    }
L_088599FC:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_08859A14;
    }
    goto L_08859A14;
L_08859A14:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08859A34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x08859A34u) goto L_08859A34;
    return;
L_08859A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859A64;
      }
      goto L_08859A44;
    }
L_08859A44:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08859A5Cu);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x08859A5Cu) goto L_08859A5C;
    return;
L_08859A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859C64;
      }
      goto L_08859A64;
    }
L_08859A64:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08859A7Cu);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x08859A7Cu) goto L_08859A7C;
    return;
L_08859A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859C64;
      }
      goto L_08859A84;
    }
L_08859A84:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7396)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08859B48;
      }
      goto L_08859B14;
    }
L_08859B14:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1040), static_cast<std::uint8_t>(0u));
    goto L_08859B18;
L_08859B18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08859B3C;
    }
    goto L_08859B2C;
L_08859B2C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B40;
      }
      goto L_08859B3C;
    }
L_08859B3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08859B40;
L_08859B40:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1040), static_cast<std::uint8_t>(0u));
        goto L_08859B18;
    }
    goto L_08859B48;
L_08859B48:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_08859B78;
    }
    goto L_08859B5C;
L_08859B5C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1041), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08859B84;
      }
      goto L_08859B74;
    }
L_08859B74:
    ctx.gpr[4] = (2232u << 16u);
    goto L_08859B78;
L_08859B78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2232u << 16u);
    goto L_08859B84;
L_08859B84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
        goto L_08859BC8;
    }
    goto L_08859BC0;
L_08859BC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08859BCC;
      }
      goto L_08859BC8;
    }
L_08859BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08859BCC;
L_08859BCC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(230), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(235), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.gpr[5] = (ctx.gpr[23] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(231), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(ctx.gpr[1]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859C0C;
      }
      goto L_08859C04;
    }
L_08859C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08859C24;
      }
      goto L_08859C0C;
    }
L_08859C0C:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_08859C24;
    }
    goto L_08859C24;
L_08859C24:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(236));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[31] = (0x08859C64u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08859C64u) goto L_08859C64;
    return;
L_08859C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (0u | 8u);
      if (branch_taken) {
          goto L_08859CA4;
      }
      goto L_08859C74;
    }
L_08859C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859CA4;
      }
      goto L_08859C84;
    }
L_08859C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859CA4;
      }
      goto L_08859C94;
    }
L_08859C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859CA8;
      }
      goto L_08859CA4;
    }
L_08859CA4:
    ctx.gpr[16] = (0u | 32u);
    goto L_08859CA8;
L_08859CA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08859D0Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08859D0Cu) goto L_08859D0C;
    return;
L_08859D0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859D78;
      }
      goto L_08859D14;
    }
L_08859D14:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859D78;
      }
      goto L_08859D24;
    }
L_08859D24:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08859D28;
L_08859D28:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08859D64u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08859D64u) goto L_08859D64;
    return;
L_08859D64:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08859D28;
    }
    goto L_08859D78;
L_08859D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859ED0;
      }
      goto L_08859D88;
    }
L_08859D88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    goto L_08859DB8;
L_08859DB8:
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08859DE0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08859DE0u) goto L_08859DE0;
    return;
L_08859DE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08859E68u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08859E68u) goto L_08859E68;
    return;
L_08859E68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08859ED0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08859ED0u) goto L_08859ED0;
    return;
L_08859ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A08C;
      }
      goto L_08859ED8;
    }
L_08859ED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859EF8;
      }
      goto L_08859EE8;
    }
L_08859EE8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_08859EF8;
      }
      goto L_08859EF0;
    }
L_08859EF0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885A08C;
      }
      goto L_08859EF8;
    }
L_08859EF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08859F5Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08859F5Cu) goto L_08859F5C;
    return;
L_08859F5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859FF8;
      }
      goto L_08859F64;
    }
L_08859F64:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859FF8;
      }
      goto L_08859F74;
    }
L_08859F74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08859FE4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x08859FE4u) goto L_08859FE4;
    return;
L_08859FE4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859F74;
      }
      goto L_08859FF8;
    }
L_08859FF8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A08C;
      }
      goto L_0885A000;
    }
L_0885A000:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885A08C;
      }
      goto L_0885A00C;
    }
L_0885A00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0885A018u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x0885A018u) goto L_0885A018;
    return;
L_0885A018:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A040;
      }
      goto L_0885A020;
    }
L_0885A020:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885A038u);
    ctx.gpr[6] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0885A038u) goto L_0885A038;
    return;
L_0885A038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885A05C;
      }
      goto L_0885A040;
    }
L_0885A040:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885A058u);
    ctx.gpr[6] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0885A058u) goto L_0885A058;
    return;
L_0885A058:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_0885A05C;
L_0885A05C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A08C;
      }
      goto L_0885A064;
    }
L_0885A064:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0885A070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x0885A070u) goto L_0885A070;
    return;
L_0885A070:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0885A08C;
L_0885A08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A9E8;
      }
      goto L_0885A094;
    }
L_0885A094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885A9E8;
      }
      goto L_0885A0B0;
    }
L_0885A0B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0885A420;
      }
      goto L_0885A0B8;
    }
L_0885A0B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0885A9E8;
      }
      goto L_0885A0C0;
    }
L_0885A0C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885A644;
      }
      goto L_0885A0C8;
    }
L_0885A0C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0885A83C;
      }
      goto L_0885A0D0;
    }
L_0885A0D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0885A844;
      }
      goto L_0885A0D8;
    }
L_0885A0D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A1C0;
      }
      goto L_0885A0E8;
    }
L_0885A0E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A1C0;
      }
      goto L_0885A0F8;
    }
L_0885A0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0885A118u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885A118u) goto L_0885A118;
    return;
L_0885A118:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A1B8;
      }
      goto L_0885A128;
    }
L_0885A128:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 68u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0885A1A4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x0885A1A4u) goto L_0885A1A4;
    return;
L_0885A1A4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A128;
      }
      goto L_0885A1B8;
    }
L_0885A1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A3B8;
      }
      goto L_0885A1C0;
    }
L_0885A1C0:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1D4;
      }
      goto L_0885A1CC;
    }
L_0885A1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0885A1EC;
      }
      goto L_0885A1D4;
    }
L_0885A1D4:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_0885A1EC;
    }
    goto L_0885A1EC;
L_0885A1EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0885A220u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 274u, 0x088A1870u>(ctx, &aot_mem) && ctx.pc == 0x0885A220u) goto L_0885A220;
    return;
L_0885A220:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A2BC;
      }
      goto L_0885A230;
    }
L_0885A230:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0885A2ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x0885A2ACu) goto L_0885A2AC;
    return;
L_0885A2AC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A230;
      }
      goto L_0885A2BC;
    }
L_0885A2BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885A348;
      }
      goto L_0885A340;
    }
L_0885A340:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0885A348;
L_0885A348:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0885A374u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x0885A374u) goto L_0885A374;
    return;
L_0885A374:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 68u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0885A3B8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x0885A3B8u) goto L_0885A3B8;
    return;
L_0885A3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885A418;
      }
      goto L_0885A3CC;
    }
L_0885A3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A418;
      }
      goto L_0885A3DC;
    }
L_0885A3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A418;
      }
      goto L_0885A3EC;
    }
L_0885A3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885A418;
      }
      goto L_0885A3F8;
    }
L_0885A3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1808), ctx.gpr[4]);
    goto L_0885A418;
L_0885A418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A9E8;
      }
      goto L_0885A420;
    }
L_0885A420:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A4BC;
      }
      goto L_0885A430;
    }
L_0885A430:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0885A4ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x0885A4ACu) goto L_0885A4AC;
    return;
L_0885A4AC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A430;
      }
      goto L_0885A4BC;
    }
L_0885A4BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
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
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0885A52C;
    }
    goto L_0885A52C;
L_0885A52C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x0885A5B0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0885A5B0u) goto L_0885A5B0;
    return;
L_0885A5B0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0885A5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0885A5D0u) goto L_0885A5D0;
    return;
L_0885A5D0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0885A5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0885A5F0u) goto L_0885A5F0;
    return;
L_0885A5F0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 68u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0885A63Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x0885A63Cu) goto L_0885A63C;
    return;
L_0885A63C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A9E8;
      }
      goto L_0885A644;
    }
L_0885A644:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A6E0;
      }
      goto L_0885A654;
    }
L_0885A654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0885A6D0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x0885A6D0u) goto L_0885A6D0;
    return;
L_0885A6D0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A654;
      }
      goto L_0885A6E0;
    }
L_0885A6E0:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17095u << 16u);
      if (branch_taken) {
          goto L_0885A808;
      }
      goto L_0885A6F4;
    }
L_0885A6F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885A808;
      }
      goto L_0885A710;
    }
L_0885A710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885A730;
      }
      goto L_0885A720;
    }
L_0885A720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0885A738;
      }
      goto L_0885A730;
    }
L_0885A730:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0885A738;
L_0885A738:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A780;
      }
      goto L_0885A740;
    }
L_0885A740:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885A780;
      }
      goto L_0885A758;
    }
L_0885A758:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0885A780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 153u, 0x08A0D424u>(ctx, &aot_mem) && ctx.pc == 0x0885A780u) goto L_0885A780;
    return;
L_0885A780:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885A7A0;
      }
      goto L_0885A790;
    }
L_0885A790:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0885A7A8;
      }
      goto L_0885A7A0;
    }
L_0885A7A0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0885A7A8;
L_0885A7A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A834;
      }
      goto L_0885A7B0;
    }
L_0885A7B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(856)));
    ctx.gpr[31] = (0x0885A800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0885A800u) goto L_0885A800;
    return;
L_0885A800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A834;
      }
      goto L_0885A808;
    }
L_0885A808:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A834;
      }
      goto L_0885A818;
    }
L_0885A818:
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0885A82Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 484u, 0x0883F1F4u>(ctx, &aot_mem) && ctx.pc == 0x0885A82Cu) goto L_0885A82C;
    return;
L_0885A82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0885A834;
L_0885A834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A9E8;
      }
      goto L_0885A83C;
    }
L_0885A83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A9E8;
      }
      goto L_0885A844;
    }
L_0885A844:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A878;
      }
      goto L_0885A850;
    }
L_0885A850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885A870u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23884));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885A870u) goto L_0885A870;
    return;
L_0885A870:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A880;
      }
      goto L_0885A878;
    }
L_0885A878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0885A880;
      }
      goto L_0885A880;
    }
L_0885A880:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A9E8;
      }
      goto L_0885A888;
    }
L_0885A888:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7395)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(880), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0885A8A0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(882), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A8A0u) goto L_0885A8A0;
    return;
L_0885A8A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885A8F0;
      }
      goto L_0885A8BC;
    }
L_0885A8BC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    goto L_0885A8C0;
L_0885A8C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_0885A8E4;
    }
    goto L_0885A8D4;
L_0885A8D4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A8E8;
      }
      goto L_0885A8E4;
    }
L_0885A8E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0885A8E8;
L_0885A8E8:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
        goto L_0885A8C0;
    }
    goto L_0885A8F0;
L_0885A8F0:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_0885A920;
    }
    goto L_0885A904;
L_0885A904:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1389), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0885A92C;
      }
      goto L_0885A91C;
    }
L_0885A91C:
    ctx.gpr[4] = (2232u << 16u);
    goto L_0885A920;
L_0885A920:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2232u << 16u);
    goto L_0885A92C;
L_0885A92C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1384), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1400), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1376), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1380)));
        goto L_0885A970;
    }
    goto L_0885A968;
L_0885A968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885A974;
      }
      goto L_0885A970;
    }
L_0885A970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0885A974;
L_0885A974:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(883), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(884), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(885), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(886), static_cast<std::uint8_t>(ctx.gpr[1]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A9A8;
      }
      goto L_0885A9A0;
    }
L_0885A9A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0885A9C0;
      }
      goto L_0885A9A8;
    }
L_0885A9A8:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_0885A9C0;
    }
    goto L_0885A9C0;
L_0885A9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(887), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[31] = (0x0885A9E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x0885A9E8u) goto L_0885A9E8;
    return;
L_0885A9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885AB8C;
      }
      goto L_0885AA04;
    }
L_0885AA04:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0885AA5C;
      }
      goto L_0885AA10;
    }
L_0885AA10:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0885AAA0;
      }
      goto L_0885AA18;
    }
L_0885AA18:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885AB1C;
      }
      goto L_0885AA20;
    }
L_0885AA20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0885AB68;
      }
      goto L_0885AA28;
    }
L_0885AA28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0885AAF0;
      }
      goto L_0885AA30;
    }
L_0885AA30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 72u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0885AA54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 617u, 0x0896ED98u>(ctx, &aot_mem) && ctx.pc == 0x0885AA54u) goto L_0885AA54;
    return;
L_0885AA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AB8C;
      }
      goto L_0885AA5C;
    }
L_0885AA5C:
    ctx.gpr[31] = (0x0885AA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AA64u) goto L_0885AA64;
    return;
L_0885AA64:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885AA7C;
      }
      goto L_0885AA6C;
    }
L_0885AA6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7836)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7836), ctx.gpr[5]);
    goto L_0885AA7C;
L_0885AA7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 62u);
    ctx.gpr[31] = (0x0885AA98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AA98u) goto L_0885AA98;
    return;
L_0885AA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AB8C;
      }
      goto L_0885AAA0;
    }
L_0885AAA0:
    ctx.gpr[31] = (0x0885AAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AAA8u) goto L_0885AAA8;
    return;
L_0885AAA8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885AAC0;
      }
      goto L_0885AAB0;
    }
L_0885AAB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7836)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7836), ctx.gpr[5]);
    goto L_0885AAC0;
L_0885AAC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 61u);
    ctx.gpr[31] = (0x0885AADCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AADCu) goto L_0885AADC;
    return;
L_0885AADC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0885AAE8u);
    ctx.gpr[5] = (0u | 107u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x0885AAE8u) goto L_0885AAE8;
    return;
L_0885AAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AB8C;
      }
      goto L_0885AAF0;
    }
L_0885AAF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[6] = (0u | 62u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[6] = (0u | 61u);
        goto L_0885AB08;
    }
    goto L_0885AB08;
L_0885AB08:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[31] = (0x0885AB14u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AB14u) goto L_0885AB14;
    return;
L_0885AB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AB8C;
      }
      goto L_0885AB1C;
    }
L_0885AB1C:
    ctx.gpr[31] = (0x0885AB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AB24u) goto L_0885AB24;
    return;
L_0885AB24:
    if (ctx.gpr[19] != ctx.gpr[2]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_0885AB40;
    }
    goto L_0885AB2C;
L_0885AB2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7836)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7836), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_0885AB40;
L_0885AB40:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 73u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0885AB60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 617u, 0x0896ED98u>(ctx, &aot_mem) && ctx.pc == 0x0885AB60u) goto L_0885AB60;
    return;
L_0885AB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AB8C;
      }
      goto L_0885AB68;
    }
L_0885AB68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0885AB8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 617u, 0x0896ED98u>(ctx, &aot_mem) && ctx.pc == 0x0885AB8Cu) goto L_0885AB8C;
    return;
L_0885AB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AC1C;
      }
      goto L_0885AB94;
    }
L_0885AB94:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0885ABC4;
    }
    goto L_0885ABC4;
L_0885ABC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0885AC1Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 94u, 0x08824988u>(ctx, &aot_mem) && ctx.pc == 0x0885AC1Cu) goto L_0885AC1C;
    return;
L_0885AC1C:
    ctx.gpr[31] = (0x0885AC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AC24u) goto L_0885AC24;
    return;
L_0885AC24:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885AC74;
      }
      goto L_0885AC2C;
    }
L_0885AC2C:
    ctx.gpr[31] = (0x0885AC34u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0885AC34u) goto L_0885AC34;
    return;
L_0885AC34:
    ctx.gpr[31] = (0x0885AC3Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AC3Cu) goto L_0885AC3C;
    return;
L_0885AC3C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0885AC48u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AC48u) goto L_0885AC48;
    return;
L_0885AC48:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0885AC54u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AC54u) goto L_0885AC54;
    return;
L_0885AC54:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[31] = (0x0885AC74u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 657u, 0x08A96D00u>(ctx, &aot_mem) && ctx.pc == 0x0885AC74u) goto L_0885AC74;
    return;
L_0885AC74:
    ctx.gpr[31] = (0x0885AC7Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 313u, 0x08851D50u>(ctx, &aot_mem) && ctx.pc == 0x0885AC7Cu) goto L_0885AC7C;
    return;
L_0885AC7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1484)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1488)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1492)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1500)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1520)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885ACB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885AD04u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AD04u) goto L_0885AD04;
    return;
L_0885AD04:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0885AD28;
      }
      goto L_0885AD0C;
    }
L_0885AD0C:
    ctx.gpr[31] = (0x0885AD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AD14u) goto L_0885AD14;
    return;
L_0885AD14:
    ctx.gpr[31] = (0x0885AD1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 331u, 0x08945604u>(ctx, &aot_mem) && ctx.pc == 0x0885AD1Cu) goto L_0885AD1C;
    return;
L_0885AD1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AD28;
      }
      goto L_0885AD24;
    }
L_0885AD24:
    ctx.gpr[17] = (0u | 1u);
    goto L_0885AD28;
L_0885AD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885AE34;
      }
      goto L_0885AD38;
    }
L_0885AD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AE34;
      }
      goto L_0885AD54;
    }
L_0885AD54:
    ctx.gpr[31] = (0x0885AD5Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0885AD5Cu) goto L_0885AD5C;
    return;
L_0885AD5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AE34;
      }
      goto L_0885AD64;
    }
L_0885AD64:
    ctx.gpr[31] = (0x0885AD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AD6Cu) goto L_0885AD6C;
    return;
L_0885AD6C:
    ctx.gpr[31] = (0x0885AD74u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AD74u) goto L_0885AD74;
    return;
L_0885AD74:
    ctx.gpr[19] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885AD84u);
    ctx.gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x0885AD84u) goto L_0885AD84;
    return;
L_0885AD84:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0885ADD8;
      }
      goto L_0885ADA0;
    }
L_0885ADA0:
    ctx.gpr[31] = (0x0885ADA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885ADA8u) goto L_0885ADA8;
    return;
L_0885ADA8:
    ctx.gpr[31] = (0x0885ADB0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885ADB0u) goto L_0885ADB0;
    return;
L_0885ADB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885ADBCu);
    ctx.gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x0885ADBCu) goto L_0885ADBC;
    return;
L_0885ADBC:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885ADF4;
      }
      goto L_0885ADD8;
    }
L_0885ADD8:
    ctx.gpr[31] = (0x0885ADE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885ADE0u) goto L_0885ADE0;
    return;
L_0885ADE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0885ADF4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x0885ADF4u) goto L_0885ADF4;
    return;
L_0885ADF4:
    ctx.gpr[31] = (0x0885ADFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885ADFCu) goto L_0885ADFC;
    return;
L_0885ADFC:
    ctx.gpr[31] = (0x0885AE04u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AE04u) goto L_0885AE04;
    return;
L_0885AE04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885AE10u);
    ctx.gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x0885AE10u) goto L_0885AE10;
    return;
L_0885AE10:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0885AE28u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1432), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AE28u) goto L_0885AE28;
    return;
L_0885AE28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885AE34u);
    ctx.gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x0885AE34u) goto L_0885AE34;
    return;
L_0885AE34:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885B03C;
      }
      goto L_0885AE48;
    }
L_0885AE48:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[30] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B014;
      }
      goto L_0885AE70;
    }
L_0885AE70:
    ctx.gpr[31] = (0x0885AE78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0885AE78u) goto L_0885AE78;
    return;
L_0885AE78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (2232u << 16u);
      if (branch_taken) {
          goto L_0885B014;
      }
      goto L_0885AE80;
    }
L_0885AE80:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
        goto L_0885AFD8;
    }
    goto L_0885AEB4;
L_0885AEB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
        goto L_0885AFD8;
    }
    goto L_0885AEE4;
L_0885AEE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
        goto L_0885AFD8;
    }
    goto L_0885AF14;
L_0885AF14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
        goto L_0885AFD8;
    }
    goto L_0885AF44;
L_0885AF44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
        goto L_0885AFD8;
    }
    goto L_0885AF74;
L_0885AF74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
        goto L_0885AFD8;
    }
    goto L_0885AFA4;
L_0885AFA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885B00C;
      }
      goto L_0885AFD4;
    }
L_0885AFD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    goto L_0885AFD8;
L_0885AFD8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(816));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0885B000u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B000u) goto L_0885B000;
    return;
L_0885B000:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_0885B028;
      }
      goto L_0885B00C;
    }
L_0885B00C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885B348;
      }
      goto L_0885B014;
    }
L_0885B014:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0885B020u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B020u) goto L_0885B020;
    return;
L_0885B020:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (2230u << 16u);
    goto L_0885B028;
L_0885B028:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[17]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
          goto L_0885B160;
      }
      goto L_0885B03C;
    }
L_0885B03C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_0885B0B0;
      }
      goto L_0885B08C;
    }
L_0885B08C:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0885B0B0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B0B0u) goto L_0885B0B0;
    return;
L_0885B0B0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885B104;
      }
      goto L_0885B0D8;
    }
L_0885B0D8:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0885B104u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B104u) goto L_0885B104;
    return;
L_0885B104:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    goto L_0885B160;
L_0885B160:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-8004), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0885B190u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B190u) goto L_0885B190;
    return;
L_0885B190:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_0885B2A4;
      }
      goto L_0885B198;
    }
L_0885B198:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885B1C4;
      }
      goto L_0885B1A4;
    }
L_0885B1A4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0885B1BCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 116u, 0x08834964u>(ctx, &aot_mem) && ctx.pc == 0x0885B1BCu) goto L_0885B1BC;
    return;
L_0885B1BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B2C4;
      }
      goto L_0885B1C4;
    }
L_0885B1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B2C4;
      }
      goto L_0885B1E0;
    }
L_0885B1E0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0885B254u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x0885B254u) goto L_0885B254;
    return;
L_0885B254:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B284;
      }
      goto L_0885B25C;
    }
L_0885B25C:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0885B27Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 180u, 0x08834EA8u>(ctx, &aot_mem) && ctx.pc == 0x0885B27Cu) goto L_0885B27C;
    return;
L_0885B27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B29C;
      }
      goto L_0885B284;
    }
L_0885B284:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0885B29Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 116u, 0x08834964u>(ctx, &aot_mem) && ctx.pc == 0x0885B29Cu) goto L_0885B29C;
    return;
L_0885B29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B2C4;
      }
      goto L_0885B2A4;
    }
L_0885B2A4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0885B2C4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 180u, 0x08834EA8u>(ctx, &aot_mem) && ctx.pc == 0x0885B2C4u) goto L_0885B2C4;
    return;
L_0885B2C4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-8004), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B304;
      }
      goto L_0885B2E4;
    }
L_0885B2E4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0885B2FCu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x0885B2FCu) goto L_0885B2FC;
    return;
L_0885B2FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B344;
      }
      goto L_0885B304;
    }
L_0885B304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B344;
      }
      goto L_0885B320;
    }
L_0885B320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B344;
      }
      goto L_0885B32C;
    }
L_0885B32C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0885B344u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x0885B344u) goto L_0885B344;
    return;
L_0885B344:
    ctx.gpr[2] = (0u | 1u);
    goto L_0885B348;
L_0885B348:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B37C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1760));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1736), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1692), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1716), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1724), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1728), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1673), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1696), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1700), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1704), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1712), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1720), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1732), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1740), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1744), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1748), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1752), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885B3E8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B3E8u) goto L_0885B3E8;
    return;
L_0885B3E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1680), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0885B420;
      }
      goto L_0885B3FC;
    }
L_0885B3FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B460;
      }
      goto L_0885B408;
    }
L_0885B408:
    ctx.gpr[4] = (15904u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    ctx.gpr[30] = (0u | 3u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0885B460;
      }
      goto L_0885B420;
    }
L_0885B420:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
      if (branch_taken) {
          goto L_0885B44C;
      }
      goto L_0885B42C;
    }
L_0885B42C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B460;
      }
      goto L_0885B434;
    }
L_0885B434:
    ctx.gpr[4] = (16032u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    ctx.gpr[30] = (0u | 5u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_0885B460;
      }
      goto L_0885B44C;
    }
L_0885B44C:
    ctx.gpr[4] = (15830u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 30544u);
    ctx.gpr[30] = (0u | 3u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    goto L_0885B460;
L_0885B460:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1672), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 125u, 0x0885CC20u>(ctx, &aot_mem); return;
      }
      goto L_0885B490;
    }
L_0885B490:
    ctx.gpr[16] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0885B544;
      }
      goto L_0885B538;
    }
L_0885B538:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0885B580;
      }
      goto L_0885B544;
    }
L_0885B544:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0885B580;
L_0885B580:
    ctx.gpr[31] = (0x0885B588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B588u) goto L_0885B588;
    return;
L_0885B588:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0885B720;
      }
      goto L_0885B590;
    }
L_0885B590:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x0885B59Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 491u, 0x088EABACu>(ctx, &aot_mem) && ctx.pc == 0x0885B59Cu) goto L_0885B59C;
    return;
L_0885B59C:
    // Shots follow the camera ray through the crosshair.
    if (!lcs::lcs_auto_aim()) {
        ctx.gpr[2] = 1u;
        aot_mem.aot_store32(0x08B832A0u + 384u, std::bit_cast<std::uint32_t>(0.5f));
        aot_mem.aot_store32(0x08B832A0u + 388u, std::bit_cast<std::uint32_t>(0.5f));
    }
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
        goto L_0885B724;
    }
    goto L_0885B5A4;
L_0885B5A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1668), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0885B5BC;
L_0885B5BC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1684), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0885B5E8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 175u, 0x088ED398u>(ctx, &aot_mem) && ctx.pc == 0x0885B5E8u) goto L_0885B5E8;
    return;
L_0885B5E8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[23] - ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(816));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(864));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0885B6B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B6B8u) goto L_0885B6B8;
    return;
L_0885B6B8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x0885B708u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 366u, 0x08852198u>(ctx, &aot_mem) && ctx.pc == 0x0885B708u) goto L_0885B708;
    return;
L_0885B708:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1668)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1684)));
      if (branch_taken) {
          goto L_0885BB18;
      }
      goto L_0885B720;
    }
L_0885B720:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    goto L_0885B724;
L_0885B724:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885B850;
      }
      goto L_0885B780;
    }
L_0885B780:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B850;
      }
      goto L_0885B788;
    }
L_0885B788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0885B7B4;
    }
    goto L_0885B79C;
L_0885B79C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0885B7ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 506u, 0x0885F648u>(ctx, &aot_mem) && ctx.pc == 0x0885B7ACu) goto L_0885B7AC;
    return;
L_0885B7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B850;
      }
      goto L_0885B7B4;
    }
L_0885B7B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B7F8;
      }
      goto L_0885B7E0;
    }
L_0885B7E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x0885B7F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 42u, 0x08AA83C4u>(ctx, &aot_mem) && ctx.pc == 0x0885B7F0u) goto L_0885B7F0;
    return;
L_0885B7F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
      if (branch_taken) {
          goto L_0885B80C;
      }
      goto L_0885B7F8;
    }
L_0885B7F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    goto L_0885B80C;
L_0885B80C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0885B850;
L_0885B850:
    ctx.gpr[31] = (0x0885B858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B858u) goto L_0885B858;
    return;
L_0885B858:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885B86C;
      }
      goto L_0885B860;
    }
L_0885B860:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0885B86C;
L_0885B86C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B8E4;
      }
      goto L_0885B8DC;
    }
L_0885B8DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0885B8FC;
      }
      goto L_0885B8E4;
    }
L_0885B8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_0885B8FC;
    }
    goto L_0885B8FC;
L_0885B8FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x0885B920u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 568u, 0x08A436F0u>(ctx, &aot_mem) && ctx.pc == 0x0885B920u) goto L_0885B920;
    return;
L_0885B920:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BAC8;
      }
      goto L_0885B930;
    }
L_0885B930:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1680)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BAC8;
      }
      goto L_0885B93C;
    }
L_0885B93C:
    if (ctx.gpr[23] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1688), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_0885B96C;
    }
    goto L_0885B944;
L_0885B944:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B9E4;
      }
      goto L_0885B96C;
    }
L_0885B96C:
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x0885B980u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0885B980u) goto L_0885B980;
    return;
L_0885B980:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0885B990u);
    ctx.fpr[30] = ctx.fpr[26] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0885B990u) goto L_0885B990;
    return;
L_0885B990:
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[13];
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x0885B9B8u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0885B9B8u) goto L_0885B9B8;
    return;
L_0885B9B8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1688)));
    goto L_0885B9E4;
L_0885B9E4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0885BA08u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x0885BA08u) goto L_0885BA08;
    return;
L_0885BA08:
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
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x0885BAC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 366u, 0x08852198u>(ctx, &aot_mem) && ctx.pc == 0x0885BAC0u) goto L_0885BAC0;
    return;
L_0885BAC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BB08;
      }
      goto L_0885BAC8;
    }
L_0885BAC8:
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0885BB08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 366u, 0x08852198u>(ctx, &aot_mem) && ctx.pc == 0x0885BB08u) goto L_0885BB08;
    return;
L_0885BB08:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(0u));
    goto L_0885BB18;
L_0885BB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 122u, 0x0885CB84u>(ctx, &aot_mem); return;
      }
      goto L_0885BB24;
    }
L_0885BB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0885BB48u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 749u, 0x08807268u>(ctx, &aot_mem) && ctx.pc == 0x0885BB48u) goto L_0885BB48;
    return;
L_0885BB48:
    ctx.gpr[31] = (0x0885BB50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 313u, 0x08851D50u>(ctx, &aot_mem) && ctx.pc == 0x0885BB50u) goto L_0885BB50;
    return;
L_0885BB50:
    if (ctx.gpr[23] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
        goto L_0885BDD8;
    }
    goto L_0885BB58;
L_0885BB58:
    if (ctx.gpr[19] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
        goto L_0885BDD8;
    }
    goto L_0885BB60;
L_0885BB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
        goto L_0885BDD8;
    }
    goto L_0885BB7C;
L_0885BB7C:
    ctx.gpr[31] = (0x0885BB84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0885BB84u) goto L_0885BB84;
    return;
L_0885BB84:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
        goto L_0885BDD8;
    }
    goto L_0885BB8C;
L_0885BB8C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BDD4;
      }
      goto L_0885BB9C;
    }
L_0885BB9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885BDD4;
      }
      goto L_0885BBAC;
    }
L_0885BBAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (15820u << 16u);
      if (branch_taken) {
          goto L_0885BDD4;
      }
      goto L_0885BC40;
    }
L_0885BC40:
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885BDD4;
      }
      goto L_0885BC58;
    }
L_0885BC58:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885BCEC;
      }
      goto L_0885BCC0;
    }
L_0885BCC0:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BCF8;
      }
      goto L_0885BCEC;
    }
L_0885BCEC:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0885BCF8;
L_0885BCF8:
    ctx.gpr[5] = (16201u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16006u << 16u);
      if (branch_taken) {
          goto L_0885BD68;
      }
      goto L_0885BD14;
    }
L_0885BD14:
    ctx.gpr[5] = (ctx.gpr[5] | 2706u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885BD48;
      }
      goto L_0885BD2C;
    }
L_0885BD2C:
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
        goto L_0885BD6C;
    }
    goto L_0885BD48;
L_0885BD48:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16253u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 28836u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885BDC0;
      }
      goto L_0885BD68;
    }
L_0885BD68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    goto L_0885BD6C;
L_0885BD6C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1792), 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1816), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0885BDAC;
      }
      goto L_0885BD98;
    }
L_0885BD98:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[31] = (0x0885BDA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29140)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0885BDA4u) goto L_0885BDA4;
    return;
L_0885BDA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BDD4;
      }
      goto L_0885BDAC;
    }
L_0885BDAC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[31] = (0x0885BDB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29136)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0885BDB8u) goto L_0885BDB8;
    return;
L_0885BDB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BDD4;
      }
      goto L_0885BDC0;
    }
L_0885BDC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1816), 0u);
    goto L_0885BDD4;
L_0885BDD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
    goto L_0885BDD8;
L_0885BDD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0885BE10u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 94u, 0x08824988u>(ctx, &aot_mem) && ctx.pc == 0x0885BE10u) goto L_0885BE10;
    return;
L_0885BE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 38u, 0x0885C354u>(ctx, &aot_mem); return;
      }
      goto L_0885BE30;
    }
L_0885BE30:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 54u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 20u, 0x0885C1A8u>(ctx, &aot_mem); return;
      }
      goto L_0885BE44;
    }
L_0885BE44:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 20u, 0x0885C1A8u>(ctx, &aot_mem); return;
      }
      goto L_0885BE4C;
    }
L_0885BE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 20u, 0x0885C1A8u>(ctx, &aot_mem); return;
      }
      goto L_0885BE58;
    }
L_0885BE58:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0885BEA4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x0885BEA4u) goto L_0885BEA4;
    return;
L_0885BEA4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0885BEB4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 322u, 0x08899450u>(ctx, &aot_mem) && ctx.pc == 0x0885BEB4u) goto L_0885BEB4;
    return;
L_0885BEB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0885BEE8;
      }
      goto L_0885BEDC;
    }
L_0885BEDC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0885BF24;
      }
      goto L_0885BEE8;
    }
L_0885BEE8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0885BF24;
L_0885BF24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885BF54;
      }
      goto L_0885BF40;
    }
L_0885BF40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885BF58;
      }
      goto L_0885BF54;
    }
L_0885BF54:
    ctx.gpr[16] = (0u | 0u);
    goto L_0885BF58;
L_0885BF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
        goto L_0885BFC8;
    }
    goto L_0885BF68;
L_0885BF68:
    if (ctx.gpr[16] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
        goto L_0885BFC8;
    }
    goto L_0885BF70;
L_0885BF70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (49344u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0885BFC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0885BFC0u) goto L_0885BFC0;
    return;
L_0885BFC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BFF4;
      }
      goto L_0885BFC8;
    }
L_0885BFC8:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0885BFF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0885BFF4u) goto L_0885BFF4;
    return;
L_0885BFF4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 2u, 0x0885C010u>(ctx, &aot_mem); return;
      }
      goto L_0885BFFC;
    }
L_0885BFFC:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.pc = 0x0885C000u; return;
}

void recomp_unit_0021(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0021_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_21(Runtime &runtime) {
    runtime.register_generated_unit(21u, 0x08858000u, 16384u, &recomp_unit_0021, &recomp_unit_0021_entry);
    runtime.register_function(0x08858000u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885805Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858068u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858100u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858118u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858130u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858134u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885813Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858144u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858168u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858184u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858188u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858190u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858198u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858230u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885824Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858254u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885825Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858290u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858320u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858348u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858350u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858358u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885836Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885838Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858394u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858400u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858410u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858438u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858474u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885847Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885848Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858494u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858500u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858528u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885855Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885857Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885858Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858600u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885860Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858650u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858658u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858670u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858684u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858730u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885873Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885874Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885875Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858788u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885880Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885881Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858828u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858848u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858858u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858880u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858904u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885894Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858964u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885896Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885897Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858980u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858998u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858ADCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859030u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859040u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859060u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859064u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859118u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859120u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859128u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859144u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859150u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859158u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859160u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859168u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859170u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859178u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859180u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859188u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885918Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859194u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859270u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859288u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885931Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859328u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859344u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885935Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859378u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859398u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885939Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859404u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859428u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859460u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885947Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859498u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859500u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859520u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885952Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885953Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885954Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859554u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859570u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859574u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885957Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859598u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859600u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859614u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859620u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859628u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859634u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885963Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859644u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885967Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859688u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859694u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859704u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859710u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859718u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859734u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885973Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859754u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885975Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859770u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859780u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859790u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859808u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859814u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859850u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859900u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859908u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859910u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859918u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859930u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859938u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859944u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885994Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885995Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859970u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859980u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859994u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859ED0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859ED8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A000u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A00Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A018u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A020u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A038u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A040u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A058u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A05Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A064u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A070u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A08Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A094u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A118u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A128u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A220u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A230u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A340u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A348u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A374u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A418u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A420u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A430u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A52Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A63Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A644u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A654u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A710u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A720u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A730u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A738u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A740u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A758u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A780u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A790u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A800u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A808u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A818u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A82Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A834u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A83Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A844u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A850u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A870u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A878u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A880u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A888u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A904u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A91Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A920u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A92Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A968u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A970u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A974u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AADCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADD8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE80u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFD8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B000u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B00Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B014u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B020u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B028u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B03Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B08Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B104u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B160u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B190u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B198u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B254u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B25Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B27Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B284u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B29Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B304u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B320u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B32Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B344u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B348u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B37Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B408u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B420u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B42Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B434u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B44Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B460u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B490u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B538u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B544u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B580u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B588u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B590u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B59Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B708u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B720u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B724u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B780u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B788u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B79Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B80Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B850u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B858u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B860u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B86Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B920u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B930u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B93Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B944u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B96Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B980u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B990u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDD8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEDCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFFCu, &recomp_unit_0021, "recomp_unit_0021");
}
} // namespace psprecomp
