#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_render_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0126[4088] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108,
    0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 145, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 162, 0, 0,
    0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0,
    0, 0, 176, 0, 177, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 185,
    0, 186, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 247, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 262,
    0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271,
    0, 0, 0, 272, 0, 0, 0, 273, 274, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 280, 0, 0, 281, 0, 0, 282, 283, 0, 284, 285, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298,
    0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0,
    307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0,
    321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 326, 0, 327, 328, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 334, 0, 0,
    0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0, 0, 0, 0, 342, 343, 0, 0, 0, 0, 344, 0, 0, 0,
    345, 346, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0,
    0, 354, 0, 0, 355, 0, 0, 356, 357, 0, 358, 359, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 367,
    0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0,
    380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 0, 410,
    0, 0, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419,
    0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0,
    0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0,
    455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0,
    476, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0,
    0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 0,
    0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0,
    513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 0,
    0, 0, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 534,
    0, 0, 0, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0,
    544, 0, 0, 545, 0, 546, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552,
    0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 557,
    0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0,
    579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 587, 0,
    588, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 598, 0,
    599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606,
    0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0,
    0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 622,
    0, 0, 0, 623, 0, 624, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 0, 639, 640, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 646, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 651, 0, 0,
    0, 0, 652, 0, 653, 654, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 0,
    0, 660, 0, 0, 0, 661, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0,
    666, 0, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 678, 0, 0, 0, 0, 679, 0, 680, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0,
    684, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 0,
    0, 699, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710,
    0, 0, 0, 0, 0, 0, 711, 0, 712, 713, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 718, 0, 719, 0,
    0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0,
    0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 730,
    0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 735, 0, 0, 0, 0, 736,
};
void recomp_unit_0126_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089FC000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0126[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FC000;
    case 2u: goto L_089FC054;
    case 3u: goto L_089FC08C;
    case 4u: goto L_089FC0A0;
    case 5u: goto L_089FC0BC;
    case 6u: goto L_089FC0C4;
    case 7u: goto L_089FC0D0;
    case 8u: goto L_089FC0DC;
    case 9u: goto L_089FC0E8;
    case 10u: goto L_089FC0F4;
    case 11u: goto L_089FC100;
    case 12u: goto L_089FC148;
    case 13u: goto L_089FC1AC;
    case 14u: goto L_089FC1EC;
    case 15u: goto L_089FC248;
    case 16u: goto L_089FC2F4;
    case 17u: goto L_089FC6B8;
    case 18u: goto L_089FC738;
    case 19u: goto L_089FC87C;
    case 20u: goto L_089FC8A0;
    case 21u: goto L_089FC8AC;
    case 22u: goto L_089FC8B8;
    case 23u: goto L_089FC8C4;
    case 24u: goto L_089FC8D0;
    case 25u: goto L_089FC8DC;
    case 26u: goto L_089FC8E8;
    case 27u: goto L_089FC900;
    case 28u: goto L_089FC914;
    case 29u: goto L_089FC91C;
    case 30u: goto L_089FC92C;
    case 31u: goto L_089FC934;
    case 32u: goto L_089FC944;
    case 33u: goto L_089FC950;
    case 34u: goto L_089FC95C;
    case 35u: goto L_089FC968;
    case 36u: goto L_089FC974;
    case 37u: goto L_089FC980;
    case 38u: goto L_089FC9AC;
    case 39u: goto L_089FC9E4;
    case 40u: goto L_089FCA58;
    case 41u: goto L_089FCA60;
    case 42u: goto L_089FCA68;
    case 43u: goto L_089FCA70;
    case 44u: goto L_089FCAAC;
    case 45u: goto L_089FCAC4;
    case 46u: goto L_089FCACC;
    case 47u: goto L_089FCAD4;
    case 48u: goto L_089FCAF8;
    case 49u: goto L_089FCB0C;
    case 50u: goto L_089FCB14;
    case 51u: goto L_089FCB2C;
    case 52u: goto L_089FCB3C;
    case 53u: goto L_089FCB44;
    case 54u: goto L_089FCB4C;
    case 55u: goto L_089FCB58;
    case 56u: goto L_089FCB60;
    case 57u: goto L_089FCB68;
    case 58u: goto L_089FCB80;
    case 59u: goto L_089FCB90;
    case 60u: goto L_089FCB98;
    case 61u: goto L_089FCBA0;
    case 62u: goto L_089FCBF0;
    case 63u: goto L_089FCC14;
    case 64u: goto L_089FCC1C;
    case 65u: goto L_089FCC3C;
    case 66u: goto L_089FCC6C;
    case 67u: goto L_089FCC80;
    case 68u: goto L_089FCC88;
    case 69u: goto L_089FCC90;
    case 70u: goto L_089FCD00;
    case 71u: goto L_089FCD0C;
    case 72u: goto L_089FCE00;
    case 73u: goto L_089FCE08;
    case 74u: goto L_089FCE20;
    case 75u: goto L_089FCE28;
    case 76u: goto L_089FCE30;
    case 77u: goto L_089FCE3C;
    case 78u: goto L_089FCE50;
    case 79u: goto L_089FCE5C;
    case 80u: goto L_089FCE88;
    case 81u: goto L_089FCEB8;
    case 82u: goto L_089FCF30;
    case 83u: goto L_089FCF68;
    case 84u: goto L_089FCF80;
    case 85u: goto L_089FCF94;
    case 86u: goto L_089FCFC4;
    case 87u: goto L_089FCFD0;
    case 88u: goto L_089FCFDC;
    case 89u: goto L_089FCFE0;
    case 90u: goto L_089FD048;
    case 91u: goto L_089FD070;
    case 92u: goto L_089FD098;
    case 93u: goto L_089FD0B8;
    case 94u: goto L_089FD0C8;
    case 95u: goto L_089FD0D0;
    case 96u: goto L_089FD0D8;
    case 97u: goto L_089FD0EC;
    case 98u: goto L_089FD128;
    case 99u: goto L_089FD170;
    case 100u: goto L_089FD188;
    case 101u: goto L_089FD194;
    case 102u: goto L_089FD1A0;
    case 103u: goto L_089FD1A8;
    case 104u: goto L_089FD1C0;
    case 105u: goto L_089FD1D0;
    case 106u: goto L_089FD1DC;
    case 107u: goto L_089FD1E8;
    case 108u: goto L_089FD1FC;
    case 109u: goto L_089FD208;
    case 110u: goto L_089FD218;
    case 111u: goto L_089FD22C;
    case 112u: goto L_089FD240;
    case 113u: goto L_089FD248;
    case 114u: goto L_089FD25C;
    case 115u: goto L_089FD298;
    case 116u: goto L_089FD2BC;
    case 117u: goto L_089FD2C8;
    case 118u: goto L_089FD2D4;
    case 119u: goto L_089FD2E8;
    case 120u: goto L_089FD2FC;
    case 121u: goto L_089FD308;
    case 122u: goto L_089FD324;
    case 123u: goto L_089FD33C;
    case 124u: goto L_089FD344;
    case 125u: goto L_089FD34C;
    case 126u: goto L_089FD350;
    case 127u: goto L_089FD364;
    case 128u: goto L_089FD374;
    case 129u: goto L_089FD380;
    case 130u: goto L_089FD3A4;
    case 131u: goto L_089FD3AC;
    case 132u: goto L_089FD3BC;
    case 133u: goto L_089FD3E0;
    case 134u: goto L_089FD3E8;
    case 135u: goto L_089FD3F0;
    case 136u: goto L_089FD404;
    case 137u: goto L_089FD434;
    case 138u: goto L_089FD44C;
    case 139u: goto L_089FD478;
    case 140u: goto L_089FD494;
    case 141u: goto L_089FD4A4;
    case 142u: goto L_089FD4BC;
    case 143u: goto L_089FD4D0;
    case 144u: goto L_089FD504;
    case 145u: goto L_089FD514;
    case 146u: goto L_089FD518;
    case 147u: goto L_089FD534;
    case 148u: goto L_089FD580;
    case 149u: goto L_089FD5A4;
    case 150u: goto L_089FD5AC;
    case 151u: goto L_089FD5C0;
    case 152u: goto L_089FD5CC;
    case 153u: goto L_089FD5D4;
    case 154u: goto L_089FD604;
    case 155u: goto L_089FD60C;
    case 156u: goto L_089FD620;
    case 157u: goto L_089FD650;
    case 158u: goto L_089FD658;
    case 159u: goto L_089FD660;
    case 160u: goto L_089FD668;
    case 161u: goto L_089FD670;
    case 162u: goto L_089FD674;
    case 163u: goto L_089FD684;
    case 164u: goto L_089FD694;
    case 165u: goto L_089FD6B8;
    case 166u: goto L_089FD6C4;
    case 167u: goto L_089FD6C8;
    case 168u: goto L_089FD708;
    case 169u: goto L_089FD724;
    case 170u: goto L_089FD73C;
    case 171u: goto L_089FD748;
    case 172u: goto L_089FD750;
    case 173u: goto L_089FD764;
    case 174u: goto L_089FD76C;
    case 175u: goto L_089FD778;
    case 176u: goto L_089FD788;
    case 177u: goto L_089FD790;
    case 178u: goto L_089FD794;
    case 179u: goto L_089FD79C;
    case 180u: goto L_089FD7A8;
    case 181u: goto L_089FD7B4;
    case 182u: goto L_089FD7BC;
    case 183u: goto L_089FD7E0;
    case 184u: goto L_089FD7F8;
    case 185u: goto L_089FD7FC;
    case 186u: goto L_089FD804;
    case 187u: goto L_089FD808;
    case 188u: goto L_089FD810;
    case 189u: goto L_089FD850;
    case 190u: goto L_089FD86C;
    case 191u: goto L_089FD87C;
    case 192u: goto L_089FD88C;
    case 193u: goto L_089FD8B0;
    case 194u: goto L_089FD8CC;
    case 195u: goto L_089FD8E4;
    case 196u: goto L_089FD8EC;
    case 197u: goto L_089FD8F4;
    case 198u: goto L_089FD8FC;
    case 199u: goto L_089FD90C;
    case 200u: goto L_089FD93C;
    case 201u: goto L_089FD96C;
    case 202u: goto L_089FD97C;
    case 203u: goto L_089FD98C;
    case 204u: goto L_089FD998;
    case 205u: goto L_089FD9A0;
    case 206u: goto L_089FD9B4;
    case 207u: goto L_089FD9F0;
    case 208u: goto L_089FDA10;
    case 209u: goto L_089FDA28;
    case 210u: goto L_089FDA30;
    case 211u: goto L_089FDA3C;
    case 212u: goto L_089FDA48;
    case 213u: goto L_089FDA58;
    case 214u: goto L_089FDA60;
    case 215u: goto L_089FDA68;
    case 216u: goto L_089FDA84;
    case 217u: goto L_089FDAC4;
    case 218u: goto L_089FDAE0;
    case 219u: goto L_089FDAF0;
    case 220u: goto L_089FDAFC;
    case 221u: goto L_089FDB28;
    case 222u: goto L_089FDB54;
    case 223u: goto L_089FDB90;
    case 224u: goto L_089FDBC0;
    case 225u: goto L_089FDBE4;
    case 226u: goto L_089FDC14;
    case 227u: goto L_089FDC34;
    case 228u: goto L_089FDC5C;
    case 229u: goto L_089FDCA4;
    case 230u: goto L_089FDCCC;
    case 231u: goto L_089FDCD4;
    case 232u: goto L_089FDD04;
    case 233u: goto L_089FDD14;
    case 234u: goto L_089FDD24;
    case 235u: goto L_089FDD2C;
    case 236u: goto L_089FDD70;
    case 237u: goto L_089FDD80;
    case 238u: goto L_089FDD90;
    case 239u: goto L_089FDD98;
    case 240u: goto L_089FDDCC;
    case 241u: goto L_089FDDF8;
    case 242u: goto L_089FDE20;
    case 243u: goto L_089FDE40;
    case 244u: goto L_089FDE48;
    case 245u: goto L_089FDE4C;
    case 246u: goto L_089FDE7C;
    case 247u: goto L_089FDE8C;
    case 248u: goto L_089FDE90;
    case 249u: goto L_089FDEBC;
    case 250u: goto L_089FDEE8;
    case 251u: goto L_089FDF18;
    case 252u: goto L_089FDF44;
    case 253u: goto L_089FDF70;
    case 254u: goto L_089FDF78;
    case 255u: goto L_089FDF7C;
    case 256u: goto L_089FDFA0;
    case 257u: goto L_089FDFC4;
    case 258u: goto L_089FDFCC;
    case 259u: goto L_089FDFD8;
    case 260u: goto L_089FDFE0;
    case 261u: goto L_089FDFE8;
    case 262u: goto L_089FDFFC;
    case 263u: goto L_089FE004;
    case 264u: goto L_089FE00C;
    case 265u: goto L_089FE01C;
    case 266u: goto L_089FE02C;
    case 267u: goto L_089FE03C;
    case 268u: goto L_089FE04C;
    case 269u: goto L_089FE05C;
    case 270u: goto L_089FE06C;
    case 271u: goto L_089FE07C;
    case 272u: goto L_089FE08C;
    case 273u: goto L_089FE09C;
    case 274u: goto L_089FE0A0;
    case 275u: goto L_089FE0A8;
    case 276u: goto L_089FE0B0;
    case 277u: goto L_089FE0BC;
    case 278u: goto L_089FE0DC;
    case 279u: goto L_089FE0FC;
    case 280u: goto L_089FE108;
    case 281u: goto L_089FE114;
    case 282u: goto L_089FE120;
    case 283u: goto L_089FE124;
    case 284u: goto L_089FE12C;
    case 285u: goto L_089FE130;
    case 286u: goto L_089FE138;
    case 287u: goto L_089FE140;
    case 288u: goto L_089FE14C;
    case 289u: goto L_089FE15C;
    case 290u: goto L_089FE16C;
    case 291u: goto L_089FE178;
    case 292u: goto L_089FE188;
    case 293u: goto L_089FE1B0;
    case 294u: goto L_089FE1C0;
    case 295u: goto L_089FE1D0;
    case 296u: goto L_089FE1E0;
    case 297u: goto L_089FE1EC;
    case 298u: goto L_089FE1FC;
    case 299u: goto L_089FE20C;
    case 300u: goto L_089FE214;
    case 301u: goto L_089FE220;
    case 302u: goto L_089FE230;
    case 303u: goto L_089FE240;
    case 304u: goto L_089FE250;
    case 305u: goto L_089FE260;
    case 306u: goto L_089FE270;
    case 307u: goto L_089FE280;
    case 308u: goto L_089FE290;
    case 309u: goto L_089FE2A0;
    case 310u: goto L_089FE2A8;
    case 311u: goto L_089FE2B0;
    case 312u: goto L_089FE2B8;
    case 313u: goto L_089FE2C0;
    case 314u: goto L_089FE2C8;
    case 315u: goto L_089FE2D0;
    case 316u: goto L_089FE2D8;
    case 317u: goto L_089FE2E0;
    case 318u: goto L_089FE2E8;
    case 319u: goto L_089FE2F0;
    case 320u: goto L_089FE2F8;
    case 321u: goto L_089FE300;
    case 322u: goto L_089FE310;
    case 323u: goto L_089FE31C;
    case 324u: goto L_089FE328;
    case 325u: goto L_089FE334;
    case 326u: goto L_089FE338;
    case 327u: goto L_089FE340;
    case 328u: goto L_089FE344;
    case 329u: goto L_089FE348;
    case 330u: goto L_089FE350;
    case 331u: goto L_089FE358;
    case 332u: goto L_089FE360;
    case 333u: goto L_089FE368;
    case 334u: goto L_089FE374;
    case 335u: goto L_089FE38C;
    case 336u: goto L_089FE394;
    case 337u: goto L_089FE3A0;
    case 338u: goto L_089FE3A8;
    case 339u: goto L_089FE3B0;
    case 340u: goto L_089FE3B8;
    case 341u: goto L_089FE3C4;
    case 342u: goto L_089FE3D8;
    case 343u: goto L_089FE3DC;
    case 344u: goto L_089FE3F0;
    case 345u: goto L_089FE400;
    case 346u: goto L_089FE404;
    case 347u: goto L_089FE418;
    case 348u: goto L_089FE424;
    case 349u: goto L_089FE438;
    case 350u: goto L_089FE444;
    case 351u: goto L_089FE458;
    case 352u: goto L_089FE468;
    case 353u: goto L_089FE478;
    case 354u: goto L_089FE484;
    case 355u: goto L_089FE490;
    case 356u: goto L_089FE49C;
    case 357u: goto L_089FE4A0;
    case 358u: goto L_089FE4A8;
    case 359u: goto L_089FE4AC;
    case 360u: goto L_089FE4C0;
    case 361u: goto L_089FE4C8;
    case 362u: goto L_089FE4D0;
    case 363u: goto L_089FE4D8;
    case 364u: goto L_089FE4E0;
    case 365u: goto L_089FE4EC;
    case 366u: goto L_089FE4F4;
    case 367u: goto L_089FE4FC;
    case 368u: goto L_089FE510;
    case 369u: goto L_089FE51C;
    case 370u: goto L_089FE540;
    case 371u: goto L_089FE548;
    case 372u: goto L_089FE584;
    case 373u: goto L_089FE5B4;
    case 374u: goto L_089FE5C0;
    case 375u: goto L_089FE5D4;
    case 376u: goto L_089FE5DC;
    case 377u: goto L_089FE5E4;
    case 378u: goto L_089FE5EC;
    case 379u: goto L_089FE5F4;
    case 380u: goto L_089FE600;
    case 381u: goto L_089FE614;
    case 382u: goto L_089FE624;
    case 383u: goto L_089FE630;
    case 384u: goto L_089FE63C;
    case 385u: goto L_089FE644;
    case 386u: goto L_089FE64C;
    case 387u: goto L_089FE664;
    case 388u: goto L_089FE69C;
    case 389u: goto L_089FE6A4;
    case 390u: goto L_089FE6AC;
    case 391u: goto L_089FE6BC;
    case 392u: goto L_089FE6CC;
    case 393u: goto L_089FE6D4;
    case 394u: goto L_089FE6EC;
    case 395u: goto L_089FE704;
    case 396u: goto L_089FE714;
    case 397u: goto L_089FE73C;
    case 398u: goto L_089FE744;
    case 399u: goto L_089FE754;
    case 400u: goto L_089FE784;
    case 401u: goto L_089FE78C;
    case 402u: goto L_089FE79C;
    case 403u: goto L_089FE7A8;
    case 404u: goto L_089FE7C4;
    case 405u: goto L_089FE7CC;
    case 406u: goto L_089FE7D4;
    case 407u: goto L_089FE7DC;
    case 408u: goto L_089FE7E4;
    case 409u: goto L_089FE7EC;
    case 410u: goto L_089FE7FC;
    case 411u: goto L_089FE80C;
    case 412u: goto L_089FE814;
    case 413u: goto L_089FE81C;
    case 414u: goto L_089FE824;
    case 415u: goto L_089FE82C;
    case 416u: goto L_089FE838;
    case 417u: goto L_089FE848;
    case 418u: goto L_089FE870;
    case 419u: goto L_089FE87C;
    case 420u: goto L_089FE884;
    case 421u: goto L_089FE890;
    case 422u: goto L_089FE898;
    case 423u: goto L_089FE8A8;
    case 424u: goto L_089FE8B0;
    case 425u: goto L_089FE8C0;
    case 426u: goto L_089FE8E8;
    case 427u: goto L_089FE8F4;
    case 428u: goto L_089FE904;
    case 429u: goto L_089FE910;
    case 430u: goto L_089FE918;
    case 431u: goto L_089FE920;
    case 432u: goto L_089FE928;
    case 433u: goto L_089FE930;
    case 434u: goto L_089FE938;
    case 435u: goto L_089FE954;
    case 436u: goto L_089FE964;
    case 437u: goto L_089FE984;
    case 438u: goto L_089FE9AC;
    case 439u: goto L_089FE9C8;
    case 440u: goto L_089FE9DC;
    case 441u: goto L_089FE9E8;
    case 442u: goto L_089FE9F0;
    case 443u: goto L_089FEA30;
    case 444u: goto L_089FEA40;
    case 445u: goto L_089FEA50;
    case 446u: goto L_089FEA60;
    case 447u: goto L_089FEA68;
    case 448u: goto L_089FEA78;
    case 449u: goto L_089FEA98;
    case 450u: goto L_089FEAB4;
    case 451u: goto L_089FEAC8;
    case 452u: goto L_089FEAD4;
    case 453u: goto L_089FEADC;
    case 454u: goto L_089FEAF0;
    case 455u: goto L_089FEB00;
    case 456u: goto L_089FEB08;
    case 457u: goto L_089FEB10;
    case 458u: goto L_089FEB18;
    case 459u: goto L_089FEB38;
    case 460u: goto L_089FEB40;
    case 461u: goto L_089FEB50;
    case 462u: goto L_089FEB5C;
    case 463u: goto L_089FEB64;
    case 464u: goto L_089FEB7C;
    case 465u: goto L_089FEB90;
    case 466u: goto L_089FEBC8;
    case 467u: goto L_089FEBD0;
    case 468u: goto L_089FEBDC;
    case 469u: goto L_089FEBE4;
    case 470u: goto L_089FEC28;
    case 471u: goto L_089FEC38;
    case 472u: goto L_089FEC4C;
    case 473u: goto L_089FEC5C;
    case 474u: goto L_089FEC64;
    case 475u: goto L_089FEC78;
    case 476u: goto L_089FEC80;
    case 477u: goto L_089FEC88;
    case 478u: goto L_089FEC9C;
    case 479u: goto L_089FECA4;
    case 480u: goto L_089FECAC;
    case 481u: goto L_089FECC4;
    case 482u: goto L_089FECD0;
    case 483u: goto L_089FECE8;
    case 484u: goto L_089FEDB0;
    case 485u: goto L_089FEDB4;
    case 486u: goto L_089FEDBC;
    case 487u: goto L_089FEDDC;
    case 488u: goto L_089FEDE4;
    case 489u: goto L_089FEDF4;
    case 490u: goto L_089FEE14;
    case 491u: goto L_089FEE1C;
    case 492u: goto L_089FEE34;
    case 493u: goto L_089FEE44;
    case 494u: goto L_089FEE64;
    case 495u: goto L_089FEE6C;
    case 496u: goto L_089FEE74;
    case 497u: goto L_089FEE8C;
    case 498u: goto L_089FEEB4;
    case 499u: goto L_089FEEC4;
    case 500u: goto L_089FEEC8;
    case 501u: goto L_089FEED4;
    case 502u: goto L_089FEEE0;
    case 503u: goto L_089FEEF0;
    case 504u: goto L_089FEF10;
    case 505u: goto L_089FEF18;
    case 506u: goto L_089FEF34;
    case 507u: goto L_089FEF3C;
    case 508u: goto L_089FEF58;
    case 509u: goto L_089FEF60;
    case 510u: goto L_089FEF68;
    case 511u: goto L_089FEF70;
    case 512u: goto L_089FEF78;
    case 513u: goto L_089FEF80;
    case 514u: goto L_089FEF90;
    case 515u: goto L_089FEFA0;
    case 516u: goto L_089FEFA8;
    case 517u: goto L_089FEFB0;
    case 518u: goto L_089FEFB8;
    case 519u: goto L_089FEFC0;
    case 520u: goto L_089FEFCC;
    case 521u: goto L_089FEFDC;
    case 522u: goto L_089FEFE4;
    case 523u: goto L_089FEFF4;
    case 524u: goto L_089FF00C;
    case 525u: goto L_089FF014;
    case 526u: goto L_089FF024;
    case 527u: goto L_089FF034;
    case 528u: goto L_089FF03C;
    case 529u: goto L_089FF04C;
    case 530u: goto L_089FF058;
    case 531u: goto L_089FF060;
    case 532u: goto L_089FF06C;
    case 533u: goto L_089FF074;
    case 534u: goto L_089FF07C;
    case 535u: goto L_089FF090;
    case 536u: goto L_089FF098;
    case 537u: goto L_089FF0A0;
    case 538u: goto L_089FF0A8;
    case 539u: goto L_089FF0B0;
    case 540u: goto L_089FF0BC;
    case 541u: goto L_089FF0D0;
    case 542u: goto L_089FF0E4;
    case 543u: goto L_089FF0F8;
    case 544u: goto L_089FF100;
    case 545u: goto L_089FF10C;
    case 546u: goto L_089FF114;
    case 547u: goto L_089FF120;
    case 548u: goto L_089FF134;
    case 549u: goto L_089FF140;
    case 550u: goto L_089FF148;
    case 551u: goto L_089FF168;
    case 552u: goto L_089FF17C;
    case 553u: goto L_089FF188;
    case 554u: goto L_089FF1A0;
    case 555u: goto L_089FF1E8;
    case 556u: goto L_089FF1F4;
    case 557u: goto L_089FF1FC;
    case 558u: goto L_089FF204;
    case 559u: goto L_089FF20C;
    case 560u: goto L_089FF21C;
    case 561u: goto L_089FF22C;
    case 562u: goto L_089FF23C;
    case 563u: goto L_089FF248;
    case 564u: goto L_089FF250;
    case 565u: goto L_089FF25C;
    case 566u: goto L_089FF2AC;
    case 567u: goto L_089FF2B4;
    case 568u: goto L_089FF2BC;
    case 569u: goto L_089FF2C4;
    case 570u: goto L_089FF2CC;
    case 571u: goto L_089FF310;
    case 572u: goto L_089FF320;
    case 573u: goto L_089FF328;
    case 574u: goto L_089FF350;
    case 575u: goto L_089FF37C;
    case 576u: goto L_089FF3A8;
    case 577u: goto L_089FF3B8;
    case 578u: goto L_089FF3EC;
    case 579u: goto L_089FF400;
    case 580u: goto L_089FF418;
    case 581u: goto L_089FF434;
    case 582u: goto L_089FF440;
    case 583u: goto L_089FF44C;
    case 584u: goto L_089FF458;
    case 585u: goto L_089FF464;
    case 586u: goto L_089FF470;
    case 587u: goto L_089FF478;
    case 588u: goto L_089FF480;
    case 589u: goto L_089FF488;
    case 590u: goto L_089FF494;
    case 591u: goto L_089FF4A0;
    case 592u: goto L_089FF4AC;
    case 593u: goto L_089FF4B8;
    case 594u: goto L_089FF4C4;
    case 595u: goto L_089FF4D0;
    case 596u: goto L_089FF4DC;
    case 597u: goto L_089FF4F0;
    case 598u: goto L_089FF4F8;
    case 599u: goto L_089FF500;
    case 600u: goto L_089FF508;
    case 601u: goto L_089FF510;
    case 602u: goto L_089FF518;
    case 603u: goto L_089FF520;
    case 604u: goto L_089FF554;
    case 605u: goto L_089FF564;
    case 606u: goto L_089FF57C;
    case 607u: goto L_089FF584;
    case 608u: goto L_089FF58C;
    case 609u: goto L_089FF594;
    case 610u: goto L_089FF5B0;
    case 611u: goto L_089FF5D4;
    case 612u: goto L_089FF5DC;
    case 613u: goto L_089FF5F8;
    case 614u: goto L_089FF608;
    case 615u: goto L_089FF614;
    case 616u: goto L_089FF654;
    case 617u: goto L_089FF6AC;
    case 618u: goto L_089FF6CC;
    case 619u: goto L_089FF6D8;
    case 620u: goto L_089FF6E0;
    case 621u: goto L_089FF6E8;
    case 622u: goto L_089FF6FC;
    case 623u: goto L_089FF70C;
    case 624u: goto L_089FF714;
    case 625u: goto L_089FF71C;
    case 626u: goto L_089FF728;
    case 627u: goto L_089FF734;
    case 628u: goto L_089FF744;
    case 629u: goto L_089FF754;
    case 630u: goto L_089FF794;
    case 631u: goto L_089FF79C;
    case 632u: goto L_089FF7A4;
    case 633u: goto L_089FF7AC;
    case 634u: goto L_089FF7B4;
    case 635u: goto L_089FF7BC;
    case 636u: goto L_089FF7C4;
    case 637u: goto L_089FF7CC;
    case 638u: goto L_089FF7D4;
    case 639u: goto L_089FF7E4;
    case 640u: goto L_089FF7E8;
    case 641u: goto L_089FF828;
    case 642u: goto L_089FF86C;
    case 643u: goto L_089FF8B4;
    case 644u: goto L_089FF8E0;
    case 645u: goto L_089FF8F4;
    case 646u: goto L_089FF8F8;
    case 647u: goto L_089FF930;
    case 648u: goto L_089FF950;
    case 649u: goto L_089FF960;
    case 650u: goto L_089FF970;
    case 651u: goto L_089FF974;
    case 652u: goto L_089FF988;
    case 653u: goto L_089FF990;
    case 654u: goto L_089FF994;
    case 655u: goto L_089FF99C;
    case 656u: goto L_089FF9B4;
    case 657u: goto L_089FF9C8;
    case 658u: goto L_089FF9DC;
    case 659u: goto L_089FF9E8;
    case 660u: goto L_089FFA04;
    case 661u: goto L_089FFA14;
    case 662u: goto L_089FFA20;
    case 663u: goto L_089FFA28;
    case 664u: goto L_089FFA40;
    case 665u: goto L_089FFA78;
    case 666u: goto L_089FFA80;
    case 667u: goto L_089FFA8C;
    case 668u: goto L_089FFA94;
    case 669u: goto L_089FFAA8;
    case 670u: goto L_089FFAB0;
    case 671u: goto L_089FFABC;
    case 672u: goto L_089FFAD0;
    case 673u: goto L_089FFAD8;
    case 674u: goto L_089FFAE8;
    case 675u: goto L_089FFB08;
    case 676u: goto L_089FFB18;
    case 677u: goto L_089FFB28;
    case 678u: goto L_089FFB2C;
    case 679u: goto L_089FFB40;
    case 680u: goto L_089FFB48;
    case 681u: goto L_089FFB4C;
    case 682u: goto L_089FFB54;
    case 683u: goto L_089FFB6C;
    case 684u: goto L_089FFB80;
    case 685u: goto L_089FFB94;
    case 686u: goto L_089FFBA0;
    case 687u: goto L_089FFBBC;
    case 688u: goto L_089FFBCC;
    case 689u: goto L_089FFBD8;
    case 690u: goto L_089FFBE0;
    case 691u: goto L_089FFBF4;
    case 692u: goto L_089FFC2C;
    case 693u: goto L_089FFC34;
    case 694u: goto L_089FFC40;
    case 695u: goto L_089FFC48;
    case 696u: goto L_089FFC5C;
    case 697u: goto L_089FFC64;
    case 698u: goto L_089FFC70;
    case 699u: goto L_089FFC84;
    case 700u: goto L_089FFC8C;
    case 701u: goto L_089FFCA0;
    case 702u: goto L_089FFCB4;
    case 703u: goto L_089FFCC0;
    case 704u: goto L_089FFCC8;
    case 705u: goto L_089FFCDC;
    case 706u: goto L_089FFD14;
    case 707u: goto L_089FFDA8;
    case 708u: goto L_089FFDC4;
    case 709u: goto L_089FFDD0;
    case 710u: goto L_089FFDFC;
    case 711u: goto L_089FFE18;
    case 712u: goto L_089FFE20;
    case 713u: goto L_089FFE24;
    case 714u: goto L_089FFE30;
    case 715u: goto L_089FFE38;
    case 716u: goto L_089FFE50;
    case 717u: goto L_089FFE68;
    case 718u: goto L_089FFE70;
    case 719u: goto L_089FFE78;
    case 720u: goto L_089FFE88;
    case 721u: goto L_089FFEB4;
    case 722u: goto L_089FFECC;
    case 723u: goto L_089FFED4;
    case 724u: goto L_089FFEEC;
    case 725u: goto L_089FFEF4;
    case 726u: goto L_089FFF04;
    case 727u: goto L_089FFF20;
    case 728u: goto L_089FFF60;
    case 729u: goto L_089FFF74;
    case 730u: goto L_089FFF7C;
    case 731u: goto L_089FFF8C;
    case 732u: goto L_089FFF94;
    case 733u: goto L_089FFFAC;
    case 734u: goto L_089FFFC0;
    case 735u: goto L_089FFFC8;
    case 736u: goto L_089FFFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FC000:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[23] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[31] = (0x089FC054u);
    ctx.gpr[30] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 608u, 0x088735E8u>(ctx, &aot_mem) && ctx.pc == 0x089FC054u) goto L_089FC054;
    return;
L_089FC054:
    ctx.gpr[4] = (18303u << 16u);
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[0];
    ctx.gpr[9] = (ctx.gpr[4] | 64000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089FC08Cu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 401u, 0x08A27194u>(ctx, &aot_mem) && ctx.pc == 0x089FC08Cu) goto L_089FC08C;
    return;
L_089FC08C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_089FC0A0;
L_089FC0A0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 593u, 0x089FBD68u>(ctx, &aot_mem); return;
      }
      goto L_089FC0BC;
    }
L_089FC0BC:
    ctx.gpr[31] = (0x089FC0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 317u, 0x08A26060u>(ctx, &aot_mem) && ctx.pc == 0x089FC0C4u) goto L_089FC0C4;
    return;
L_089FC0C4:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FC0D0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC0D0u) goto L_089FC0D0;
    return;
L_089FC0D0:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FC0DCu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC0DCu) goto L_089FC0DC;
    return;
L_089FC0DC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FC0E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC0E8u) goto L_089FC0E8;
    return;
L_089FC0E8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FC0F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC0F4u) goto L_089FC0F4;
    return;
L_089FC0F4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FC100u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC100u) goto L_089FC100;
    return;
L_089FC100:
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
L_089FC148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC9AC;
      }
      goto L_089FC1AC;
    }
L_089FC1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_089FC1EC;
    }
    goto L_089FC1EC;
L_089FC1EC:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16469u << 16u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20447u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7952)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8084)));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7968)));
    ctx.fpr[17] = ctx.fpr[22] - ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[18];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC9AC;
      }
      goto L_089FC248;
    }
L_089FC248:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11104)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11124)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x089FC2F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC2F4u) goto L_089FC2F4;
    return;
L_089FC2F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5168));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[30] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016), 0u);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-29008));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20144));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = ctx.fpr[18] - ctx.fpr[17];
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(72));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[0] + ctx.fpr[19];
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[16];
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[15] = ctx.fpr[19] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(104));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(116));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[2] = (ctx.gpr[4] << 5u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[11] = (15177u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (20352u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[2] = (16672u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (0u | 20u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[2] = (2230u << 16u);
    goto L_089FC6B8;
L_089FC6B8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[15] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[24] = (ctx.gpr[14] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[14]));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[11]);
    ctx.gpr[13] = (ctx.gpr[13] & 2047u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[14] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(60));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(30));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    if (static_cast<std::int32_t>(ctx.gpr[13]) < 0) {
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
        goto L_089FC738;
    }
    goto L_089FC738;
L_089FC738:
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[13] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[13]);
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
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[13]);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[13] = (ctx.gpr[13] << 5u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[2] + ctx.fpr[0];
    ctx.gpr[13] = (ctx.gpr[13] << 5u);
    ctx.fpr[1] = ctx.fpr[3] + ctx.fpr[1];
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[6]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.fpr[19] = ctx.fpr[1] - ctx.fpr[5];
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[15]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[13] = (ctx.gpr[13] << 5u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[3];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[13];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[3] - ctx.fpr[1];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[17] = ctx.fpr[5] + ctx.fpr[17];
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[13] = (ctx.gpr[13] << 5u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[15] = (ctx.gpr[13] << 5u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016), ctx.gpr[14]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012), ctx.gpr[13]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1440));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(970));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(900));
      if (branch_taken) {
          goto L_089FC6B8;
      }
      goto L_089FC87C;
    }
L_089FC87C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FC8A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC8A0u) goto L_089FC8A0;
    return;
L_089FC8A0:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FC8ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC8ACu) goto L_089FC8AC;
    return;
L_089FC8AC:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089FC8B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC8B8u) goto L_089FC8B8;
    return;
L_089FC8B8:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x089FC8C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC8C4u) goto L_089FC8C4;
    return;
L_089FC8C4:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FC8D0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC8D0u) goto L_089FC8D0;
    return;
L_089FC8D0:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FC8DCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC8DCu) goto L_089FC8DC;
    return;
L_089FC8DC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FC8E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC8E8u) goto L_089FC8E8;
    return;
L_089FC8E8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16908));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089FC900u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC900u) goto L_089FC900;
    return;
L_089FC900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FC914u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x089FC914u) goto L_089FC914;
    return;
L_089FC914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC934;
      }
      goto L_089FC91C;
    }
L_089FC91C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089FC92Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC92Cu) goto L_089FC92C;
    return;
L_089FC92C:
    ctx.gpr[31] = (0x089FC934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x089FC934u) goto L_089FC934;
    return;
L_089FC934:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FC944u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC944u) goto L_089FC944;
    return;
L_089FC944:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FC950u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC950u) goto L_089FC950;
    return;
L_089FC950:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FC95Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC95Cu) goto L_089FC95C;
    return;
L_089FC95C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FC968u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC968u) goto L_089FC968;
    return;
L_089FC968:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089FC974u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC974u) goto L_089FC974;
    return;
L_089FC974:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FC980u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FC980u) goto L_089FC980;
    return;
L_089FC980:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8016), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012), 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_089FC9AC;
L_089FC9AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC9E4:
    // CCoronas::RegisterCorona. The draw distance comes from the game's data; scale it with the view distance.
    ctx.fpr[13] = ctx.fpr[13] * lcs::corona_distance_scale();
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[14] = (ctx.gpr[2] + static_cast<std::uint32_t>(12960));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[12] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[13] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[18]));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089FCA68;
      }
      goto L_089FCA58;
    }
L_089FCA58:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCA70;
      }
      goto L_089FCA60;
    }
L_089FCA60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCAF8;
      }
      goto L_089FCA68;
    }
L_089FCA68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCD00;
      }
      goto L_089FCA70;
    }
L_089FCA70:
    { const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.gpr[14] = (16908u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCACC;
      }
      goto L_089FCAAC;
    }
L_089FCAAC:
    ctx.gpr[14] = (16968u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[14] = (16752u << 16u);
      if (branch_taken) {
          goto L_089FCAD4;
      }
      goto L_089FCAC4;
    }
L_089FCAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCAF8;
      }
      goto L_089FCACC;
    }
L_089FCACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCD00;
      }
      goto L_089FCAD4;
    }
L_089FCAD4:
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_089FCAF8;
L_089FCAF8:
    ctx.gpr[14] = (2277u << 16u);
    ctx.gpr[15] = (0u | 0u);
    ctx.gpr[25] = (0u | 1u);
    ctx.gpr[24] = (0u | 56u);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(15296));
    goto L_089FCB0C;
L_089FCB0C:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_089FCB3C;
      }
      goto L_089FCB14;
    }
L_089FCB14:
    ctx.gpr[16] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[16]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[25] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FCB3C;
      }
      goto L_089FCB2C;
    }
L_089FCB2C:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[15]) < 56 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FCB0C;
      }
      goto L_089FCB3C;
    }
L_089FCB3C:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
    // nop
      if (branch_taken) {
          goto L_089FCC1C;
      }
      goto L_089FCB44;
    }
L_089FCB44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCB58;
      }
      goto L_089FCB4C;
    }
L_089FCB4C:
    ctx.gpr[15] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (0u | 1u);
      if (branch_taken) {
          goto L_089FCB60;
      }
      goto L_089FCB58;
    }
L_089FCB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCD00;
      }
      goto L_089FCB60;
    }
L_089FCB60:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_089FCB90;
      }
      goto L_089FCB68;
    }
L_089FCB68:
    ctx.gpr[16] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[16]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCB90;
      }
      goto L_089FCB80;
    }
L_089FCB80:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[15]) < 56 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FCB60;
      }
      goto L_089FCB90;
    }
L_089FCB90:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_089FCBA0;
      }
      goto L_089FCB98;
    }
L_089FCB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCD00;
      }
      goto L_089FCBA0;
    }
L_089FCBA0:
    ctx.gpr[15] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[15]);
    ctx.gpr[24] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[15] = (ctx.gpr[15] | 2u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[15] = (ctx.gpr[15] | 4u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (0u | 0u);
    goto L_089FCBF0;
L_089FCBF0:
    ctx.gpr[16] = (ctx.gpr[25] + ctx.gpr[15]);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[14]);
    ctx.gpr[15] = (ctx.gpr[15] << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[15]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCBF0;
      }
      goto L_089FCC14;
    }
L_089FCC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCC3C;
      }
      goto L_089FCC1C;
    }
L_089FCC1C:
    ctx.gpr[24] = (ctx.gpr[15] << 7u);
    ctx.gpr[15] = (ctx.gpr[15] << 4u);
    ctx.gpr[24] = (ctx.gpr[24] - ctx.gpr[15]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(52)));
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCC80;
      }
      goto L_089FCC3C;
    }
L_089FCC3C:
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089FCC88;
      }
      goto L_089FCC6C;
    }
L_089FCC6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089FCC90;
      }
      goto L_089FCC80;
    }
L_089FCC80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_089FCD00;
      }
      goto L_089FCC88;
    }
L_089FCC88:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089FCC90;
L_089FCC90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_089FCD00;
L_089FCD00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCD0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16964)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16968)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16960), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16940)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-16928)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16932)));
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-16924), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-16916), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-16952), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-16956), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-16948), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-16936), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-16920), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16912), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCE00:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCE08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCE20u);
    ctx.gpr[7] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCE20u) goto L_089FCE20;
    return;
L_089FCE20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCE30;
      }
      goto L_089FCE28;
    }
L_089FCE28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FCE30;
      }
      goto L_089FCE30;
    }
L_089FCE30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCE3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u | 88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCE50u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCE50u) goto L_089FCE50;
    return;
L_089FCE50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCE5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCE88u);
    ctx.gpr[7] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCE88u) goto L_089FCE88;
    return;
L_089FCE88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FCEB8u);
    ctx.gpr[7] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCEB8u) goto L_089FCEB8;
    return;
L_089FCEB8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCF30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCF68u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCF68u) goto L_089FCF68;
    return;
L_089FCF68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[31] = (0x089FCF80u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCF80u) goto L_089FCF80;
    return;
L_089FCF80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCF94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCFC4u);
    ctx.gpr[7] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCFC4u) goto L_089FCFC4;
    return;
L_089FCFC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
        goto L_089FCFE0;
    }
    goto L_089FCFD0;
L_089FCFD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FCFDCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 244u, 0x088B9474u>(ctx, &aot_mem) && ctx.pc == 0x089FCFDCu) goto L_089FCFDC;
    return;
L_089FCFDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_089FCFE0;
L_089FCFE0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12800));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD048u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCE5C;
L_089FD048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089FD070u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927FA4u>(ctx, &aot_mem) && ctx.pc == 0x089FD070u) goto L_089FD070;
    return;
L_089FD070:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089FD098u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927FA4u>(ctx, &aot_mem) && ctx.pc == 0x089FD098u) goto L_089FD098;
    return;
L_089FD098:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089FD0B8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927FA4u>(ctx, &aot_mem) && ctx.pc == 0x089FD0B8u) goto L_089FD0B8;
    return;
L_089FD0B8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD0C8u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 541u, 0x08916FD4u>(ctx, &aot_mem) && ctx.pc == 0x089FD0C8u) goto L_089FD0C8;
    return;
L_089FD0C8:
    ctx.gpr[31] = (0x089FD0D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 2u, 0x08AA8044u>(ctx, &aot_mem) && ctx.pc == 0x089FD0D0u) goto L_089FD0D0;
    return;
L_089FD0D0:
    ctx.gpr[31] = (0x089FD0D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 544u, 0x08AAEBE8u>(ctx, &aot_mem) && ctx.pc == 0x089FD0D8u) goto L_089FD0D8;
    return;
L_089FD0D8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x089FD0ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3296));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x089FD0ECu) goto L_089FD0EC;
    return;
L_089FD0EC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
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
L_089FD128:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD188u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878BB8u>(ctx, &aot_mem) && ctx.pc == 0x089FD188u) goto L_089FD188;
    return;
L_089FD188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD1D0;
      }
      goto L_089FD194;
    }
L_089FD194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD1A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 80u, 0x0891C688u>(ctx, &aot_mem) && ctx.pc == 0x089FD1A0u) goto L_089FD1A0;
    return;
L_089FD1A0:
    ctx.gpr[31] = (0x089FD1A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 539u, 0x08916FA8u>(ctx, &aot_mem) && ctx.pc == 0x089FD1A8u) goto L_089FD1A8;
    return;
L_089FD1A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089FD1C0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD1C0u) goto L_089FD1C0;
    return;
L_089FD1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    goto L_089FD1D0;
L_089FD1D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD1DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCF30;
L_089FD1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD1FC;
      }
      goto L_089FD1E8;
    }
L_089FD1E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 148u);
    ctx.gpr[31] = (0x089FD1FCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD1FCu) goto L_089FD1FC;
    return;
L_089FD1FC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089FD208u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCE3C;
L_089FD208:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD22Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_089FCE08;
L_089FD22C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD240u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 116u, 0x0891C8C8u>(ctx, &aot_mem) && ctx.pc == 0x089FD240u) goto L_089FD240;
    return;
L_089FD240:
    ctx.gpr[31] = (0x089FD248u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD128;
L_089FD248:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089FD25Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_089FCE5C;
L_089FD25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD2BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878BB8u>(ctx, &aot_mem) && ctx.pc == 0x089FD2BCu) goto L_089FD2BC;
    return;
L_089FD2BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FD2C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCF30;
L_089FD2C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FD2D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCE3C;
L_089FD2D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD2E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD2FCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_089FCE08;
L_089FD2FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD350;
      }
      goto L_089FD308;
    }
L_089FD308:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089FD324u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD128;
L_089FD324:
    ctx.gpr[5] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FD33Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12396));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 250u, 0x088B94D8u>(ctx, &aot_mem) && ctx.pc == 0x089FD33Cu) goto L_089FD33C;
    return;
L_089FD33C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD350;
      }
      goto L_089FD344;
    }
L_089FD344:
    ctx.gpr[31] = (0x089FD34Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD170;
L_089FD34C:
    ctx.gpr[16] = (0u | 0u);
    goto L_089FD350;
L_089FD350:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 75u, 0x0891C5C0u>(ctx, &aot_mem) && ctx.pc == 0x089FD374u) goto L_089FD374;
    return;
L_089FD374:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD3A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878BB8u>(ctx, &aot_mem) && ctx.pc == 0x089FD3A4u) goto L_089FD3A4;
    return;
L_089FD3A4:
    ctx.gpr[31] = (0x089FD3ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 784u, 0x0891B988u>(ctx, &aot_mem) && ctx.pc == 0x089FD3ACu) goto L_089FD3AC;
    return;
L_089FD3AC:
    ctx.gpr[17] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-11420));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_089FD3BC;
L_089FD3BC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD3E0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 250u, 0x088B94D8u>(ctx, &aot_mem) && ctx.pc == 0x089FD3E0u) goto L_089FD3E0;
    return;
L_089FD3E0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_089FD3BC;
    }
    goto L_089FD3E8;
L_089FD3E8:
    ctx.gpr[31] = (0x089FD3F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD170;
L_089FD3F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD404:
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (51572u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD434:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FD514;
      }
      goto L_089FD478;
    }
L_089FD478:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x089FD494u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19376));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 51u, 0x089303ACu>(ctx, &aot_mem) && ctx.pc == 0x089FD494u) goto L_089FD494;
    return;
L_089FD494:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[5] = (2274u << 16u);
      if (branch_taken) {
          goto L_089FD514;
      }
      goto L_089FD4A4;
    }
L_089FD4A4:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19376));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD514;
      }
      goto L_089FD4BC;
    }
L_089FD4BC:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1360), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FD4D0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FD4D0u) goto L_089FD4D0;
    return;
L_089FD4D0:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19376));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089FD504u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x089FD504u) goto L_089FD504;
    return;
L_089FD504:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1362), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1364), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FD518;
      }
      goto L_089FD514;
    }
L_089FD514:
    ctx.gpr[2] = (0u | 0u);
    goto L_089FD518;
L_089FD518:
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
L_089FD534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD580u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 340u, 0x089A5734u>(ctx, &aot_mem) && ctx.pc == 0x089FD580u) goto L_089FD580;
    return;
L_089FD580:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16292));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089FD5A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD5A4u) goto L_089FD5A4;
    return;
L_089FD5A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD5AC;
L_089FD5AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1828), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FD5AC;
      }
      goto L_089FD5C0;
    }
L_089FD5C0:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089FD5D4;
      }
      goto L_089FD5CC;
    }
L_089FD5CC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089FD5D4;
L_089FD5D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2068), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16140)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (0u | 146u);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16144)));
    goto L_089FD604;
L_089FD604:
    ctx.gpr[31] = (0x089FD60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089FD60Cu) goto L_089FD60C;
    return;
L_089FD60C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089FD620u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089FD620u) goto L_089FD620;
    return;
L_089FD620:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089FD650u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 124u, 0x08A28E40u>(ctx, &aot_mem) && ctx.pc == 0x089FD650u) goto L_089FD650;
    return;
L_089FD650:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD668;
      }
      goto L_089FD658;
    }
L_089FD658:
    ctx.gpr[31] = (0x089FD660u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x089FD660u) goto L_089FD660;
    return;
L_089FD660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD670;
      }
      goto L_089FD668;
    }
L_089FD668:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(2076), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089FD674;
      }
      goto L_089FD670;
    }
L_089FD670:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(2076), ctx.gpr[30]);
    goto L_089FD674;
L_089FD674:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FD604;
      }
      goto L_089FD684;
    }
L_089FD684:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089FD694u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089FD694u) goto L_089FD694;
    return;
L_089FD694:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11316)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FD6C4;
      }
      goto L_089FD6B8;
    }
L_089FD6B8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2140), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089FD6C8;
      }
      goto L_089FD6C4;
    }
L_089FD6C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2140), static_cast<std::uint8_t>(0u));
    goto L_089FD6C8;
L_089FD6C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2144), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FD750;
      }
      goto L_089FD724;
    }
L_089FD724:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16292));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FD73Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 369u, 0x089A63D4u>(ctx, &aot_mem) && ctx.pc == 0x089FD73Cu) goto L_089FD73C;
    return;
L_089FD73C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD750;
      }
      goto L_089FD748;
    }
L_089FD748:
    ctx.gpr[31] = (0x089FD750u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 253u, 0x0899DA6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD750u) goto L_089FD750;
    return;
L_089FD750:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD764:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2076));
    goto L_089FD76C;
L_089FD76C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089FD790;
      }
      goto L_089FD778;
    }
L_089FD778:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FD76C;
      }
      goto L_089FD788;
    }
L_089FD788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FD794;
      }
      goto L_089FD790;
    }
L_089FD790:
    ctx.gpr[2] = (0u | 1u);
    goto L_089FD794;
L_089FD794:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD79C:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD804;
      }
      goto L_089FD7A8;
    }
L_089FD7A8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089FD7BC;
      }
      goto L_089FD7B4;
    }
L_089FD7B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089FD808;
      }
      goto L_089FD7BC;
    }
L_089FD7BC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089FD7F8;
      }
      goto L_089FD7E0;
    }
L_089FD7E0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7256)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FD7FC;
      }
      goto L_089FD7F8;
    }
L_089FD7F8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089FD7FC;
L_089FD7FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089FD808;
      }
      goto L_089FD804;
    }
L_089FD804:
    ctx.gpr[2] = (0u | 0u);
    goto L_089FD808;
L_089FD808:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD850u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 312u, 0x089B10ECu>(ctx, &aot_mem) && ctx.pc == 0x089FD850u) goto L_089FD850;
    return;
L_089FD850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD8F4;
      }
      goto L_089FD86C;
    }
L_089FD86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FD8EC;
      }
      goto L_089FD87C;
    }
L_089FD87C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FD8E4;
      }
      goto L_089FD88C;
    }
L_089FD88C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089FD8B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 328u, 0x08855A6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD8B0u) goto L_089FD8B0;
    return;
L_089FD8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(47) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FD8CC;
    }
L_089FD8CC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3264)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE548;
      }
      goto L_089FD8EC;
    }
L_089FD8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE548;
      }
      goto L_089FD8F4;
    }
L_089FD8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE548;
      }
      goto L_089FD8FC;
    }
L_089FD8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FDFC4;
      }
      goto L_089FD90C;
    }
L_089FD90C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089FDFC4;
      }
      goto L_089FD93C;
    }
L_089FD93C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_089FDE90;
    }
    goto L_089FD96C;
L_089FD96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[21] = (0u | 50u);
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDE4C;
    }
    goto L_089FD97C;
L_089FD97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDE4C;
    }
    goto L_089FD98C;
L_089FD98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089FD998u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089FD998u) goto L_089FD998;
    return;
L_089FD998:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDE4C;
    }
    goto L_089FD9A0;
L_089FD9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDE4C;
    }
    goto L_089FD9B4;
L_089FD9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089FD9F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD9F0u) goto L_089FD9F0;
    return;
L_089FD9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[31] = (0x089FDA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089FDA10u) goto L_089FDA10;
    return;
L_089FDA10:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16136)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089FDA28u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x089FDA28u) goto L_089FDA28;
    return;
L_089FDA28:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_089FDD98;
    }
    goto L_089FDA30;
L_089FDA30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_089FDD98;
    }
    goto L_089FDA3C;
L_089FDA3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_089FDD98;
    }
    goto L_089FDA48;
L_089FDA48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    ctx.gpr[5] = (0u | 5u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_089FDD98;
    }
    goto L_089FDA58;
L_089FDA58:
    ctx.gpr[31] = (0x089FDA60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 852u, 0x0889FE78u>(ctx, &aot_mem) && ctx.pc == 0x089FDA60u) goto L_089FDA60;
    return;
L_089FDA60:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDD2C;
    }
    goto L_089FDA68;
L_089FDA68:
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49049u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x089FDA84u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089FDA84u) goto L_089FDA84;
    return;
L_089FDA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[19] = ctx.fpr[22] + ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x089FDAC4u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x089FDAC4u) goto L_089FDAC4;
    return;
L_089FDAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089FDAE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDAE0u) goto L_089FDAE0;
    return;
L_089FDAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[31] = (0x089FDAF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089FDAF0u) goto L_089FDAF0;
    return;
L_089FDAF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDAFCu);
    ctx.gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089FDAFCu) goto L_089FDAFC;
    return;
L_089FDAFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDCD4;
    }
    goto L_089FDB28;
L_089FDB28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDCD4;
    }
    goto L_089FDB54;
L_089FDB54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(350) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[4] = (17146u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FDBE4;
      }
      goto L_089FDB90;
    }
L_089FDB90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 250u);
        goto L_089FDBC0;
    }
    goto L_089FDBC0;
L_089FDBC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FDC34;
      }
      goto L_089FDBE4;
    }
L_089FDBE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 250u);
        goto L_089FDC14;
    }
    goto L_089FDC14;
L_089FDC14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_089FDC34;
L_089FDC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089FDC5C;
    }
    goto L_089FDC5C;
L_089FDC5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 250u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FDCCC;
      }
      goto L_089FDCA4;
    }
L_089FDCA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    goto L_089FDCCC;
L_089FDCCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDE40;
      }
      goto L_089FDCD4;
    }
L_089FDCD4:
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[31] = (0x089FDD04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 559u, 0x08886D34u>(ctx, &aot_mem) && ctx.pc == 0x089FDD04u) goto L_089FDD04;
    return;
L_089FDD04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDD14u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089FDD14u) goto L_089FDD14;
    return;
L_089FDD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x089FDD24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089FDD24u) goto L_089FDD24;
    return;
L_089FDD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDE40;
      }
      goto L_089FDD2C;
    }
L_089FDD2C:
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDD70u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 559u, 0x08886D34u>(ctx, &aot_mem) && ctx.pc == 0x089FDD70u) goto L_089FDD70;
    return;
L_089FDD70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDD80u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089FDD80u) goto L_089FDD80;
    return;
L_089FDD80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x089FDD90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089FDD90u) goto L_089FDD90;
    return;
L_089FDD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDE40;
      }
      goto L_089FDD98;
    }
L_089FDD98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3000));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_089FDE20;
    }
    goto L_089FDDCC;
L_089FDDCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_089FDE20;
    }
    goto L_089FDDF8;
L_089FDDF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089FDE40;
      }
      goto L_089FDE20;
    }
L_089FDE20:
    ctx.gpr[5] = (0u | 1200u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    goto L_089FDE40;
L_089FDE40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
      if (branch_taken) {
          goto L_089FDE90;
      }
      goto L_089FDE48;
    }
L_089FDE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    goto L_089FDE4C;
L_089FDE4C:
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[31] = (0x089FDE7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 559u, 0x08886D34u>(ctx, &aot_mem) && ctx.pc == 0x089FDE7Cu) goto L_089FDE7C;
    return;
L_089FDE7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDE8Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089FDE8Cu) goto L_089FDE8C;
    return;
L_089FDE8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    goto L_089FDE90;
L_089FDE90:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDFC4;
      }
      goto L_089FDEBC;
    }
L_089FDEBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_089FDF7C;
    }
    goto L_089FDEE8;
L_089FDEE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_089FDF18;
    }
    goto L_089FDF18;
L_089FDF18:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF70;
      }
      goto L_089FDF44;
    }
L_089FDF44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089FDF70;
L_089FDF70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
      if (branch_taken) {
          goto L_089FDFA0;
      }
      goto L_089FDF78;
    }
L_089FDF78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    goto L_089FDF7C;
L_089FDF7C:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    goto L_089FDFA0;
L_089FDFA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    goto L_089FDFC4;
L_089FDFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FDFCC;
    }
L_089FDFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDFE8;
      }
      goto L_089FDFD8;
    }
L_089FDFD8:
    ctx.gpr[31] = (0x089FDFE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089FDFE0u) goto L_089FDFE0;
    return;
L_089FDFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FDFE8;
    }
L_089FDFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089FDFFC;
L_089FDFFC:
    ctx.gpr[31] = (0x089FE004u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 510u, 0x089AA50Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE004u) goto L_089FE004;
    return;
L_089FE004:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE00C;
    }
L_089FE00C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (0u | 24u);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FE0A0;
    }
    goto L_089FE01C;
L_089FE01C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 25u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FE0A0;
    }
    goto L_089FE02C;
L_089FE02C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 49u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FE0A0;
    }
    goto L_089FE03C;
L_089FE03C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 39u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FE0A0;
    }
    goto L_089FE04C;
L_089FE04C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 40u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FE0A0;
    }
    goto L_089FE05C;
L_089FE05C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 43u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FE0A0;
    }
    goto L_089FE06C;
L_089FE06C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 44u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FE0A0;
    }
    goto L_089FE07C;
L_089FE07C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 45u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FE0A0;
    }
    goto L_089FE08C;
L_089FE08C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE0B0;
      }
      goto L_089FE09C;
    }
L_089FE09C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    goto L_089FE0A0;
L_089FE0A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE0B0;
      }
      goto L_089FE0A8;
    }
L_089FE0A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FE0B0;
    }
L_089FE0B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089FE14C;
      }
      goto L_089FE0BC;
    }
L_089FE0BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1362))))));
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(19376));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE138;
      }
      goto L_089FE0DC;
    }
L_089FE0DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1362))))));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_089FE130;
      }
      goto L_089FE0FC;
    }
L_089FE0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE124;
      }
      goto L_089FE108;
    }
L_089FE108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089FE124;
    }
    goto L_089FE114;
L_089FE114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089FE120u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089FE120u) goto L_089FE120;
    return;
L_089FE120:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089FE124;
L_089FE124:
    ctx.gpr[31] = (0x089FE12Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089FE12Cu) goto L_089FE12C;
    return;
L_089FE12C:
    ctx.gpr[4] = (0u | 18u);
    goto L_089FE130;
L_089FE130:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE138;
    }
L_089FE138:
    ctx.gpr[31] = (0x089FE140u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089FE140u) goto L_089FE140;
    return;
L_089FE140:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1362), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE14C;
    }
L_089FE14C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE15C;
    }
L_089FE15C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE16C;
    }
L_089FE16C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE1D0;
      }
      goto L_089FE178;
    }
L_089FE178:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE1D0;
      }
      goto L_089FE188;
    }
L_089FE188:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE1B0;
    }
L_089FE1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE1C0;
    }
L_089FE1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1248)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE1D0;
    }
L_089FE1D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE214;
      }
      goto L_089FE1E0;
    }
L_089FE1E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE214;
      }
      goto L_089FE1EC;
    }
L_089FE1EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089FE214;
      }
      goto L_089FE1FC;
    }
L_089FE1FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE20Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FE20Cu) goto L_089FE20C;
    return;
L_089FE20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE214;
    }
L_089FE214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FE2A0;
      }
      goto L_089FE220;
    }
L_089FE220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE2A0;
      }
      goto L_089FE230;
    }
L_089FE230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE2A0;
      }
      goto L_089FE240;
    }
L_089FE240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE2A0;
      }
      goto L_089FE250;
    }
L_089FE250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE2A0;
      }
      goto L_089FE260;
    }
L_089FE260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE2A0;
      }
      goto L_089FE270;
    }
L_089FE270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE2A0;
      }
      goto L_089FE280;
    }
L_089FE280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE2A0;
      }
      goto L_089FE290;
    }
L_089FE290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE2B0;
      }
      goto L_089FE2A0;
    }
L_089FE2A0:
    ctx.gpr[31] = (0x089FE2A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089FE2A8u) goto L_089FE2A8;
    return;
L_089FE2A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE2B8;
      }
      goto L_089FE2B0;
    }
L_089FE2B0:
    ctx.gpr[31] = (0x089FE2B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089FE2B8u) goto L_089FE2B8;
    return;
L_089FE2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FE2C0;
    }
L_089FE2C0:
    ctx.gpr[31] = (0x089FE2C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 746u, 0x08A2F818u>(ctx, &aot_mem) && ctx.pc == 0x089FE2C8u) goto L_089FE2C8;
    return;
L_089FE2C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE2D8;
      }
      goto L_089FE2D0;
    }
L_089FE2D0:
    ctx.gpr[31] = (0x089FE2D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 821u, 0x089ABEC0u>(ctx, &aot_mem) && ctx.pc == 0x089FE2D8u) goto L_089FE2D8;
    return;
L_089FE2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FE2E0;
    }
L_089FE2E0:
    ctx.gpr[31] = (0x089FE2E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 415u, 0x089A1D28u>(ctx, &aot_mem) && ctx.pc == 0x089FE2E8u) goto L_089FE2E8;
    return;
L_089FE2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FE2F0;
    }
L_089FE2F0:
    ctx.gpr[31] = (0x089FE2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 561u, 0x089A25E8u>(ctx, &aot_mem) && ctx.pc == 0x089FE2F8u) goto L_089FE2F8;
    return;
L_089FE2F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE348;
      }
      goto L_089FE300;
    }
L_089FE300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_089FE344;
      }
      goto L_089FE310;
    }
L_089FE310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE338;
      }
      goto L_089FE31C;
    }
L_089FE31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089FE338;
    }
    goto L_089FE328;
L_089FE328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089FE334u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089FE334u) goto L_089FE334;
    return;
L_089FE334:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089FE338;
L_089FE338:
    ctx.gpr[31] = (0x089FE340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089FE340u) goto L_089FE340;
    return;
L_089FE340:
    ctx.gpr[4] = (0u | 19u);
    goto L_089FE344;
L_089FE344:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_089FE348;
L_089FE348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FE350;
    }
L_089FE350:
    ctx.gpr[31] = (0x089FE358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 575u, 0x089A2778u>(ctx, &aot_mem) && ctx.pc == 0x089FE358u) goto L_089FE358;
    return;
L_089FE358:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE3A0;
      }
      goto L_089FE360;
    }
L_089FE360:
    ctx.gpr[31] = (0x089FE368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089FE368u) goto L_089FE368;
    return;
L_089FE368:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089FE38C;
    }
    goto L_089FE374;
L_089FE374:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_089FE394;
      }
      goto L_089FE38C;
    }
L_089FE38C:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_089FE394;
L_089FE394:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089FE3A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089FE3A0u) goto L_089FE3A0;
    return;
L_089FE3A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FE3A8;
    }
L_089FE3A8:
    ctx.gpr[31] = (0x089FE3B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 923u, 0x089A3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE3B0u) goto L_089FE3B0;
    return;
L_089FE3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FE3B8;
    }
L_089FE3B8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089FE3C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 419u, 0x0899E554u>(ctx, &aot_mem) && ctx.pc == 0x089FE3C4u) goto L_089FE3C4;
    return;
L_089FE3C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_089FE418;
      }
      goto L_089FE3D8;
    }
L_089FE3D8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FE3DC;
L_089FE3DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089FE404;
      }
      goto L_089FE3F0;
    }
L_089FE3F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FE404;
      }
      goto L_089FE400;
    }
L_089FE400:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089FE404;
L_089FE404:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FE3DC;
      }
      goto L_089FE418;
    }
L_089FE418:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C0;
      }
      goto L_089FE424;
    }
L_089FE424:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_089FE4C0;
      }
      goto L_089FE438;
    }
L_089FE438:
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[23] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
    goto L_089FE444;
L_089FE444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE4AC;
      }
      goto L_089FE458;
    }
L_089FE458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089FE4AC;
      }
      goto L_089FE468;
    }
L_089FE468:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[20]) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(844), ctx.gpr[23]);
        goto L_089FE4AC;
    }
    goto L_089FE478;
L_089FE478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4A0;
      }
      goto L_089FE484;
    }
L_089FE484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(912), 0u);
        goto L_089FE4A0;
    }
    goto L_089FE490;
L_089FE490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089FE49Cu);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089FE49Cu) goto L_089FE49C;
    return;
L_089FE49C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(912), 0u);
    goto L_089FE4A0;
L_089FE4A0:
    ctx.gpr[31] = (0x089FE4A8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089FE4A8u) goto L_089FE4A8;
    return;
L_089FE4A8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(844), ctx.gpr[23]);
    goto L_089FE4AC;
L_089FE4AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FE444;
      }
      goto L_089FE4C0;
    }
L_089FE4C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4C8;
      }
      goto L_089FE4C8;
    }
L_089FE4C8:
    ctx.gpr[31] = (0x089FE4D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089FE4D0u) goto L_089FE4D0;
    return;
L_089FE4D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4E0;
      }
      goto L_089FE4D8;
    }
L_089FE4D8:
    ctx.gpr[31] = (0x089FE4E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FE584;
L_089FE4E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089FE4FC;
      }
      goto L_089FE4EC;
    }
L_089FE4EC:
    ctx.gpr[31] = (0x089FE4F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FF1A0;
L_089FE4F4:
    ctx.gpr[31] = (0x089FE4FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FF654;
L_089FE4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
        goto L_089FE51C;
    }
    goto L_089FE510;
L_089FE510:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1416), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    goto L_089FE51C;
L_089FE51C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FE548;
      }
      goto L_089FE540;
    }
L_089FE540:
    ctx.gpr[31] = (0x089FE548u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 447u, 0x0899E750u>(ctx, &aot_mem) && ctx.pc == 0x089FE548u) goto L_089FE548;
    return;
L_089FE548:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF03C;
      }
      goto L_089FE5B4;
    }
L_089FE5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE5D4;
      }
      goto L_089FE5C0;
    }
L_089FE5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF03C;
      }
      goto L_089FE5D4;
    }
L_089FE5D4:
    ctx.gpr[31] = (0x089FE5DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089FE5DCu) goto L_089FE5DC;
    return;
L_089FE5DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF03C;
      }
      goto L_089FE5E4;
    }
L_089FE5E4:
    ctx.gpr[31] = (0x089FE5ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 489u, 0x0899EC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE5ECu) goto L_089FE5EC;
    return;
L_089FE5EC:
    ctx.gpr[31] = (0x089FE5F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 498u, 0x0899ECCCu>(ctx, &aot_mem) && ctx.pc == 0x089FE5F4u) goto L_089FE5F4;
    return;
L_089FE5F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1972)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FE600;
    }
L_089FE600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1976)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FE614;
    }
L_089FE614:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), 0u);
    ctx.gpr[4] = (512u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1976), 0u);
      if (branch_taken) {
          goto L_089FEBD0;
      }
      goto L_089FE624;
    }
L_089FE624:
    ctx.gpr[6] = (128u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FE9F0;
      }
      goto L_089FE630;
    }
L_089FE630:
    ctx.gpr[6] = (16u << 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_089FEE6C;
      }
      goto L_089FE63C;
    }
L_089FE63C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9E8;
      }
      goto L_089FE644;
    }
L_089FE644:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6A4;
      }
      goto L_089FE64C;
    }
L_089FE64C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FE6A4;
      }
      goto L_089FE664;
    }
L_089FE664:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089FE6AC;
      }
      goto L_089FE69C;
    }
L_089FE69C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6D4;
      }
      goto L_089FE6A4;
    }
L_089FE6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FE6AC;
    }
L_089FE6AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6D4;
      }
      goto L_089FE6BC;
    }
L_089FE6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089FE6CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x089FE6CCu) goto L_089FE6CC;
    return;
L_089FE6CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE6D4;
    }
L_089FE6D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE78C;
      }
      goto L_089FE6EC;
    }
L_089FE6EC:
    ctx.gpr[5] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (8192u << 16u);
      if (branch_taken) {
          goto L_089FE744;
      }
      goto L_089FE704;
    }
L_089FE704:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE714u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FE714u) goto L_089FE714;
    return;
L_089FE714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE73Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FE73Cu) goto L_089FE73C;
    return;
L_089FE73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE744;
    }
L_089FE744:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE754u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FE754u) goto L_089FE754;
    return;
L_089FE754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE784u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FE784u) goto L_089FE784;
    return;
L_089FE784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE78C;
    }
L_089FE78C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE918;
      }
      goto L_089FE79C;
    }
L_089FE79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE8B0;
      }
      goto L_089FE7A8;
    }
L_089FE7A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089FE7C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x089FE7C4u) goto L_089FE7C4;
    return;
L_089FE7C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE8B0;
      }
      goto L_089FE7CC;
    }
L_089FE7CC:
    ctx.gpr[31] = (0x089FE7D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089FE7D4u) goto L_089FE7D4;
    return;
L_089FE7D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE814;
      }
      goto L_089FE7DC;
    }
L_089FE7DC:
    ctx.gpr[31] = (0x089FE7E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x089FE7E4u) goto L_089FE7E4;
    return;
L_089FE7E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE814;
      }
      goto L_089FE7EC;
    }
L_089FE7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE814;
      }
      goto L_089FE7FC;
    }
L_089FE7FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE80Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089FE80Cu) goto L_089FE80C;
    return;
L_089FE80C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE814;
    }
L_089FE814:
    ctx.gpr[31] = (0x089FE81Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089FE81Cu) goto L_089FE81C;
    return;
L_089FE81C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE898;
      }
      goto L_089FE824;
    }
L_089FE824:
    ctx.gpr[31] = (0x089FE82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE82Cu) goto L_089FE82C;
    return;
L_089FE82C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FE898;
      }
      goto L_089FE838;
    }
L_089FE838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE848u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FE848u) goto L_089FE848;
    return;
L_089FE848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FE884;
      }
      goto L_089FE870;
    }
L_089FE870:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE87Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FE87Cu) goto L_089FE87C;
    return;
L_089FE87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE884;
    }
L_089FE884:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE890u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FE890u) goto L_089FE890;
    return;
L_089FE890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE898;
    }
L_089FE898:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE8A8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089FE8A8u) goto L_089FE8A8;
    return;
L_089FE8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE8B0;
    }
L_089FE8B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE8C0u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FE8C0u) goto L_089FE8C0;
    return;
L_089FE8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[17] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FE904;
      }
      goto L_089FE8E8;
    }
L_089FE8E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE8F4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FE8F4u) goto L_089FE8F4;
    return;
L_089FE8F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE904;
    }
L_089FE904:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE910u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FE910u) goto L_089FE910;
    return;
L_089FE910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE918;
    }
L_089FE918:
    ctx.gpr[31] = (0x089FE920u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089FE920u) goto L_089FE920;
    return;
L_089FE920:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FE938;
      }
      goto L_089FE928;
    }
L_089FE928:
    ctx.gpr[31] = (0x089FE930u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089FD44C;
L_089FE930:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE938;
    }
L_089FE938:
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (8192u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_089FE984;
      }
      goto L_089FE954;
    }
L_089FE954:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE964u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FE964u) goto L_089FE964;
    return;
L_089FE964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FE9C8;
      }
      goto L_089FE984;
    }
L_089FE984:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE9ACu);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 361u, 0x089A1960u>(ctx, &aot_mem) && ctx.pc == 0x089FE9ACu) goto L_089FE9AC;
    return;
L_089FE9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE9C8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FE9C8u) goto L_089FE9C8;
    return;
L_089FE9C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FE9DCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE9DCu) goto L_089FE9DC;
    return;
L_089FE9DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE9E8u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE9E8u) goto L_089FE9E8;
    return;
L_089FE9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FE9F0;
    }
L_089FE9F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[7] = (17352u << 16u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
      if (branch_taken) {
          goto L_089FEA68;
      }
      goto L_089FEA30;
    }
L_089FEA30:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[7] = (ctx.gpr[7] & 4u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEA68;
      }
      goto L_089FEA40;
    }
L_089FEA40:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEA68;
      }
      goto L_089FEA50;
    }
L_089FEA50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089FEA60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x089FEA60u) goto L_089FEA60;
    return;
L_089FEA60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBC8;
      }
      goto L_089FEA68;
    }
L_089FEA68:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEADC;
      }
      goto L_089FEA78;
    }
L_089FEA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(644));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEA98u);
    ctx.gpr[6] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 361u, 0x089A1960u>(ctx, &aot_mem) && ctx.pc == 0x089FEA98u) goto L_089FEA98;
    return;
L_089FEA98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089FEAB4u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089FEAB4u) goto L_089FEAB4;
    return;
L_089FEAB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089FEAC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 79u, 0x089A05ACu>(ctx, &aot_mem) && ctx.pc == 0x089FEAC8u) goto L_089FEAC8;
    return;
L_089FEAC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEAD4u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEAD4u) goto L_089FEAD4;
    return;
L_089FEAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBC8;
      }
      goto L_089FEADC;
    }
L_089FEADC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[8] = (17608u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_089FEB40;
      }
      goto L_089FEAF0;
    }
L_089FEAF0:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEB40;
      }
      goto L_089FEB00;
    }
L_089FEB00:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FEBC8;
      }
      goto L_089FEB08;
    }
L_089FEB08:
    ctx.gpr[31] = (0x089FEB10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x089FEB10u) goto L_089FEB10;
    return;
L_089FEB10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBC8;
      }
      goto L_089FEB18;
    }
L_089FEB18:
    ctx.gpr[8] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(644));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x089FEB38u);
    ctx.gpr[7] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 202u, 0x088D4F88u>(ctx, &aot_mem) && ctx.pc == 0x089FEB38u) goto L_089FEB38;
    return;
L_089FEB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBC8;
      }
      goto L_089FEB40;
    }
L_089FEB40:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEBC8;
      }
      goto L_089FEB50;
    }
L_089FEB50:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089FEB5Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089FEB5Cu) goto L_089FEB5C;
    return;
L_089FEB5C:
    ctx.gpr[31] = (0x089FEB64u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089FEB64u) goto L_089FEB64;
    return;
L_089FEB64:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
        goto L_089FEB90;
    }
    goto L_089FEB7C;
L_089FEB7C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    goto L_089FEB90;
L_089FEB90:
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x089FEBC8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089FEBC8u) goto L_089FEBC8;
    return;
L_089FEBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FEBD0;
    }
L_089FEBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE64;
      }
      goto L_089FEBDC;
    }
L_089FEBDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FEE64;
      }
      goto L_089FEBE4;
    }
L_089FEBE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089FEC64;
      }
      goto L_089FEC28;
    }
L_089FEC28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16840u << 16u);
      if (branch_taken) {
          goto L_089FEC64;
      }
      goto L_089FEC38;
    }
L_089FEC38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEC64;
      }
      goto L_089FEC4C;
    }
L_089FEC4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089FEC5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x089FEC5Cu) goto L_089FEC5C;
    return;
L_089FEC5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE64;
      }
      goto L_089FEC64;
    }
L_089FEC64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE1C;
      }
      goto L_089FEC78;
    }
L_089FEC78:
    ctx.gpr[31] = (0x089FEC80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x089FEC80u) goto L_089FEC80;
    return;
L_089FEC80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEC9C;
      }
      goto L_089FEC88;
    }
L_089FEC88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FEE1C;
      }
      goto L_089FEC9C;
    }
L_089FEC9C:
    ctx.gpr[31] = (0x089FECA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x089FECA4u) goto L_089FECA4;
    return;
L_089FECA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_089FECC4;
      }
      goto L_089FECAC;
    }
L_089FECAC:
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEDE4;
      }
      goto L_089FECC4;
    }
L_089FECC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089FEDB4;
      }
      goto L_089FECD0;
    }
L_089FECD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] >> 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FEDB4;
      }
      goto L_089FECE8;
    }
L_089FECE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (17096u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEDB4;
      }
      goto L_089FEDB0;
    }
L_089FEDB0:
    ctx.gpr[5] = (0u | 0u);
    goto L_089FEDB4;
L_089FEDB4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEDDC;
      }
      goto L_089FEDBC;
    }
L_089FEDBC:
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x089FEDDCu);
    ctx.gpr[7] = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 202u, 0x088D4F88u>(ctx, &aot_mem) && ctx.pc == 0x089FEDDCu) goto L_089FEDDC;
    return;
L_089FEDDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE64;
      }
      goto L_089FEDE4;
    }
L_089FEDE4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEDF4u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FEDF4u) goto L_089FEDF4;
    return;
L_089FEDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEE14u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FEE14u) goto L_089FEE14;
    return;
L_089FEE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE64;
      }
      goto L_089FEE1C;
    }
L_089FEE1C:
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEE64;
      }
      goto L_089FEE34;
    }
L_089FEE34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEE44u);
    ctx.gpr[6] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FEE44u) goto L_089FEE44;
    return;
L_089FEE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEE64u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FEE64u) goto L_089FEE64;
    return;
L_089FEE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FEE6C;
    }
L_089FEE6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FEE74;
    }
L_089FEE74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FEE8C;
    }
L_089FEE8C:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[7] = (0u | 100u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FEEC8;
    }
    goto L_089FEEB4;
L_089FEEB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FEF18;
      }
      goto L_089FEEC4;
    }
L_089FEEC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    goto L_089FEEC8;
L_089FEEC8:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF18;
      }
      goto L_089FEED4;
    }
L_089FEED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF18;
      }
      goto L_089FEEE0;
    }
L_089FEEE0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEEF0u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FEEF0u) goto L_089FEEF0;
    return;
L_089FEEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEF10u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089FEF10u) goto L_089FEF10;
    return;
L_089FEF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FEF18;
    }
L_089FEF18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089FEF34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x089FEF34u) goto L_089FEF34;
    return;
L_089FEF34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF60;
      }
      goto L_089FEF3C;
    }
L_089FEF3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089FEF58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x089FEF58u) goto L_089FEF58;
    return;
L_089FEF58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FEF60;
    }
L_089FEF60:
    ctx.gpr[31] = (0x089FEF68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089FEF68u) goto L_089FEF68;
    return;
L_089FEF68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFA8;
      }
      goto L_089FEF70;
    }
L_089FEF70:
    ctx.gpr[31] = (0x089FEF78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x089FEF78u) goto L_089FEF78;
    return;
L_089FEF78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFA8;
      }
      goto L_089FEF80;
    }
L_089FEF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFA8;
      }
      goto L_089FEF90;
    }
L_089FEF90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEFA0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089FEFA0u) goto L_089FEFA0;
    return;
L_089FEFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FEFA8;
    }
L_089FEFA8:
    ctx.gpr[31] = (0x089FEFB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089FEFB0u) goto L_089FEFB0;
    return;
L_089FEFB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF014;
      }
      goto L_089FEFB8;
    }
L_089FEFB8:
    ctx.gpr[31] = (0x089FEFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEFC0u) goto L_089FEFC0;
    return;
L_089FEFC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FF014;
      }
      goto L_089FEFCC;
    }
L_089FEFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089FEFE4;
      }
      goto L_089FEFDC;
    }
L_089FEFDC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FF00C;
      }
      goto L_089FEFE4;
    }
L_089FEFE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEFF4u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089FEFF4u) goto L_089FEFF4;
    return;
L_089FEFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FF00C;
    }
L_089FF00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FF014;
    }
L_089FF014:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF034;
      }
      goto L_089FF024;
    }
L_089FF024:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FF034u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089FF034u) goto L_089FF034;
    return;
L_089FF034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF03C;
    }
L_089FF03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF04C;
    }
L_089FF04C:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_089FF060;
      }
      goto L_089FF058;
    }
L_089FF058:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FF07C;
      }
      goto L_089FF060;
    }
L_089FF060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF07C;
      }
      goto L_089FF06C;
    }
L_089FF06C:
    ctx.gpr[31] = (0x089FF074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089FF074u) goto L_089FF074;
    return;
L_089FF074:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF098;
      }
      goto L_089FF07C;
    }
L_089FF07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0A0;
      }
      goto L_089FF090;
    }
L_089FF090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF098;
    }
L_089FF098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF0A0;
    }
L_089FF0A0:
    ctx.gpr[31] = (0x089FF0A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 489u, 0x0899EC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF0A8u) goto L_089FF0A8;
    return;
L_089FF0A8:
    ctx.gpr[31] = (0x089FF0B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 498u, 0x0899ECCCu>(ctx, &aot_mem) && ctx.pc == 0x089FF0B0u) goto L_089FF0B0;
    return;
L_089FF0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1972)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF0BC;
    }
L_089FF0BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1976)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF0D0;
    }
L_089FF0D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), 0u);
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1976), 0u);
      if (branch_taken) {
          goto L_089FF100;
      }
      goto L_089FF0E4;
    }
L_089FF0E4:
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF0F8;
    }
L_089FF0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF114;
      }
      goto L_089FF100;
    }
L_089FF100:
    ctx.gpr[5] = (128u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FF148;
      }
      goto L_089FF10C;
    }
L_089FF10C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF114;
    }
L_089FF114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF140;
      }
      goto L_089FF120;
    }
L_089FF120:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089FF134u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF134u) goto L_089FF134;
    return;
L_089FF134:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FF140u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF140u) goto L_089FF140;
    return;
L_089FF140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF188;
      }
      goto L_089FF148;
    }
L_089FF148:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089FF168u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089FF168u) goto L_089FF168;
    return;
L_089FF168:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089FF17Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 79u, 0x089A05ACu>(ctx, &aot_mem) && ctx.pc == 0x089FF17Cu) goto L_089FF17C;
    return;
L_089FF17C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FF188u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF188u) goto L_089FF188;
    return;
L_089FF188:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF1A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2064)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FF1FC;
      }
      goto L_089FF1E8;
    }
L_089FF1E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2073)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
        goto L_089FF204;
    }
    goto L_089FF1F4;
L_089FF1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF21C;
      }
      goto L_089FF1FC;
    }
L_089FF1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF614;
      }
      goto L_089FF204;
    }
L_089FF204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF21C;
      }
      goto L_089FF20C;
    }
L_089FF20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
        goto L_089FF2CC;
    }
    goto L_089FF21C;
L_089FF21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF2C4;
      }
      goto L_089FF22C;
    }
L_089FF22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FF310;
      }
      goto L_089FF23C;
    }
L_089FF23C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2068), 0u);
    ctx.gpr[31] = (0x089FF248u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089FF248u) goto L_089FF248;
    return;
L_089FF248:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF2BC;
      }
      goto L_089FF250;
    }
L_089FF250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FF2B4;
      }
      goto L_089FF25C;
    }
L_089FF25C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (16968u << 16u);
    ctx.gpr[6] = (32639u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 65535u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089FF320;
      }
      goto L_089FF2AC;
    }
L_089FF2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089FF328;
      }
      goto L_089FF2B4;
    }
L_089FF2B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF614;
      }
      goto L_089FF2BC;
    }
L_089FF2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF614;
      }
      goto L_089FF2C4;
    }
L_089FF2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF614;
      }
      goto L_089FF2CC;
    }
L_089FF2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089FF614;
      }
      goto L_089FF310;
    }
L_089FF310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2068), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF614;
      }
      goto L_089FF320;
    }
L_089FF320:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_089FF328;
L_089FF328:
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[13];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089FF350;
    }
    goto L_089FF350;
L_089FF350:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
        goto L_089FF37C;
    }
    goto L_089FF37C;
L_089FF37C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
        goto L_089FF3A8;
    }
    goto L_089FF3A8;
L_089FF3A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF5D4;
      }
      goto L_089FF3B8;
    }
L_089FF3B8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[20] = (0u | 3u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_089FF3EC;
L_089FF3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF5B0;
      }
      goto L_089FF400;
    }
L_089FF400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[30]);
    goto L_089FF418;
L_089FF418:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF594;
      }
      goto L_089FF434;
    }
L_089FF434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF440;
    }
L_089FF440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF44C;
    }
L_089FF44C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089FF464;
      }
      goto L_089FF458;
    }
L_089FF458:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF464;
    }
L_089FF464:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x089FF470u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089FD764;
L_089FF470:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF478;
    }
L_089FF478:
    ctx.gpr[31] = (0x089FF480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 101u, 0x088A07B0u>(ctx, &aot_mem) && ctx.pc == 0x089FF480u) goto L_089FF480;
    return;
L_089FF480:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF488;
    }
L_089FF488:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4AC;
      }
      goto L_089FF494;
    }
L_089FF494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF4A0;
    }
L_089FF4A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF4AC;
    }
L_089FF4AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF4B8;
    }
L_089FF4B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(542)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF4C4;
    }
L_089FF4C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(543)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF4D0;
    }
L_089FF4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF4DC;
    }
L_089FF4DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF4F0;
    }
L_089FF4F0:
    ctx.gpr[31] = (0x089FF4F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 825u, 0x0889FD24u>(ctx, &aot_mem) && ctx.pc == 0x089FF4F8u) goto L_089FF4F8;
    return;
L_089FF4F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF500;
    }
L_089FF500:
    ctx.gpr[31] = (0x089FF508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 829u, 0x0889FD68u>(ctx, &aot_mem) && ctx.pc == 0x089FF508u) goto L_089FF508;
    return;
L_089FF508:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF510;
    }
L_089FF510:
    ctx.gpr[31] = (0x089FF518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 2u, 0x088A0004u>(ctx, &aot_mem) && ctx.pc == 0x089FF518u) goto L_089FF518;
    return;
L_089FF518:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF520;
    }
L_089FF520:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF554;
    }
L_089FF554:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF564;
    }
L_089FF564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(312));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089FF57Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF57Cu) goto L_089FF57C;
    return;
L_089FF57C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF58C;
      }
      goto L_089FF584;
    }
L_089FF584:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_089FF58C;
L_089FF58C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF434;
      }
      goto L_089FF594;
    }
L_089FF594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF418;
      }
      goto L_089FF5B0;
    }
L_089FF5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089FF3EC;
      }
      goto L_089FF5D4;
    }
L_089FF5D4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF614;
      }
      goto L_089FF5DC;
    }
L_089FF5DC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089FF5F8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x089FF5F8u) goto L_089FF5F8;
    return;
L_089FF5F8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089FF608u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089FF608u) goto L_089FF608;
    return;
L_089FF608:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089FF614u);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF614u) goto L_089FF614;
    return;
L_089FF614:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FF6D8;
      }
      goto L_089FF6AC;
    }
L_089FF6AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FF6D8;
      }
      goto L_089FF6CC;
    }
L_089FF6CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF7CC;
      }
      goto L_089FF6D8;
    }
L_089FF6D8:
    ctx.gpr[31] = (0x089FF6E0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 143u, 0x089A4A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF6E0u) goto L_089FF6E0;
    return;
L_089FF6E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF7C4;
      }
      goto L_089FF6E8;
    }
L_089FF6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11312)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FF7D4;
      }
      goto L_089FF6FC;
    }
L_089FF6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2144), 0u);
      if (branch_taken) {
          goto L_089FF7BC;
      }
      goto L_089FF70C;
    }
L_089FF70C:
    ctx.gpr[31] = (0x089FF714u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089FF714u) goto L_089FF714;
    return;
L_089FF714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF7B4;
      }
      goto L_089FF71C;
    }
L_089FF71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF7AC;
      }
      goto L_089FF728;
    }
L_089FF728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF7A4;
      }
      goto L_089FF734;
    }
L_089FF734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF7A4;
      }
      goto L_089FF744;
    }
L_089FF744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FF79C;
      }
      goto L_089FF754;
    }
L_089FF754:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11328)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16968u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_089FF7E4;
    }
    goto L_089FF794;
L_089FF794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FF7E8;
      }
      goto L_089FF79C;
    }
L_089FF79C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FF7A4;
    }
L_089FF7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FF7AC;
    }
L_089FF7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FF7B4;
    }
L_089FF7B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FF7BC;
    }
L_089FF7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FF7C4;
    }
L_089FF7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FF7CC;
    }
L_089FF7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FF7D4;
    }
L_089FF7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FF7E4;
    }
L_089FF7E4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    goto L_089FF7E8;
L_089FF7E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11328)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16968u << 16u);
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_089FF828;
    }
    goto L_089FF828;
L_089FF828:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11328)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089FF86C;
    }
    goto L_089FF86C;
L_089FF86C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11328)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[7] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 99u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089FF8B4;
    }
    goto L_089FF8B4;
L_089FF8B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11324)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_089FFCB4;
      }
      goto L_089FF8E0;
    }
L_089FF8E0:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCA0;
      }
      goto L_089FF8F4;
    }
L_089FF8F4:
    ctx.gpr[4] = (ctx.gpr[30] << 5u);
    goto L_089FF8F8;
L_089FF8F8:
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFAD8;
      }
      goto L_089FF930;
    }
L_089FF930:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089FF994;
      }
      goto L_089FF950;
    }
L_089FF950:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089FF970;
      }
      goto L_089FF960;
    }
L_089FF960:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF974;
      }
      goto L_089FF970;
    }
L_089FF970:
    ctx.gpr[5] = (0u | 1u);
    goto L_089FF974;
L_089FF974:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089FF990;
      }
      goto L_089FF988;
    }
L_089FF988:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF994;
      }
      goto L_089FF990;
    }
L_089FF990:
    ctx.gpr[4] = (0u | 0u);
    goto L_089FF994;
L_089FF994:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFAD0;
      }
      goto L_089FF99C;
    }
L_089FF99C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089FF9C8;
      }
      goto L_089FF9B4;
    }
L_089FF9B4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089FF9C8;
L_089FF9C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFAD0;
      }
      goto L_089FF9DC;
    }
L_089FF9DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089FFA04;
      }
      goto L_089FF9E8;
    }
L_089FF9E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7372)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FFA04;
      }
      goto L_089FFA04;
    }
L_089FFA04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FFABC;
      }
      goto L_089FFA14;
    }
L_089FFA14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089FFA20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089FD79C;
L_089FFA20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFABC;
      }
      goto L_089FFA28;
    }
L_089FFA28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089FFA40u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 678u, 0x08A2B1E0u>(ctx, &aot_mem) && ctx.pc == 0x089FFA40u) goto L_089FFA40;
    return;
L_089FFA40:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_089FFABC;
      }
      goto L_089FFA78;
    }
L_089FFA78:
    ctx.gpr[31] = (0x089FFA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089FFA80u) goto L_089FFA80;
    return;
L_089FFA80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089FFA8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 650u, 0x08A2B0ACu>(ctx, &aot_mem) && ctx.pc == 0x089FFA8Cu) goto L_089FFA8C;
    return;
L_089FFA8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFABC;
      }
      goto L_089FFA94;
    }
L_089FFA94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FFAA8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B2B4u>(ctx, &aot_mem) && ctx.pc == 0x089FFAA8u) goto L_089FFAA8;
    return;
L_089FFAA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFABC;
      }
      goto L_089FFAB0;
    }
L_089FFAB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    goto L_089FFABC;
L_089FFABC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF9DC;
      }
      goto L_089FFAD0;
    }
L_089FFAD0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF930;
      }
      goto L_089FFAD8;
    }
L_089FFAD8:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC8C;
      }
      goto L_089FFAE8;
    }
L_089FFAE8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089FFB4C;
      }
      goto L_089FFB08;
    }
L_089FFB08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089FFB28;
      }
      goto L_089FFB18;
    }
L_089FFB18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFB2C;
      }
      goto L_089FFB28;
    }
L_089FFB28:
    ctx.gpr[5] = (0u | 1u);
    goto L_089FFB2C;
L_089FFB2C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089FFB48;
      }
      goto L_089FFB40;
    }
L_089FFB40:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFB4C;
      }
      goto L_089FFB48;
    }
L_089FFB48:
    ctx.gpr[4] = (0u | 0u);
    goto L_089FFB4C;
L_089FFB4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC84;
      }
      goto L_089FFB54;
    }
L_089FFB54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089FFB80;
      }
      goto L_089FFB6C;
    }
L_089FFB6C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089FFB80;
L_089FFB80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC84;
      }
      goto L_089FFB94;
    }
L_089FFB94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089FFBBC;
      }
      goto L_089FFBA0;
    }
L_089FFBA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7372)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FFBBC;
      }
      goto L_089FFBBC;
    }
L_089FFBBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FFC70;
      }
      goto L_089FFBCC;
    }
L_089FFBCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089FFBD8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089FD79C;
L_089FFBD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC70;
      }
      goto L_089FFBE0;
    }
L_089FFBE0:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089FFBF4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 678u, 0x08A2B1E0u>(ctx, &aot_mem) && ctx.pc == 0x089FFBF4u) goto L_089FFBF4;
    return;
L_089FFBF4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FFC70;
      }
      goto L_089FFC2C;
    }
L_089FFC2C:
    ctx.gpr[31] = (0x089FFC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089FFC34u) goto L_089FFC34;
    return;
L_089FFC34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089FFC40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 650u, 0x08A2B0ACu>(ctx, &aot_mem) && ctx.pc == 0x089FFC40u) goto L_089FFC40;
    return;
L_089FFC40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC70;
      }
      goto L_089FFC48;
    }
L_089FFC48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FFC5Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B2B4u>(ctx, &aot_mem) && ctx.pc == 0x089FFC5Cu) goto L_089FFC5C;
    return;
L_089FFC5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC70;
      }
      goto L_089FFC64;
    }
L_089FFC64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    goto L_089FFC70;
L_089FFC70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFB94;
      }
      goto L_089FFC84;
    }
L_089FFC84:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFAE8;
      }
      goto L_089FFC8C;
    }
L_089FFC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] << 5u);
      if (branch_taken) {
          goto L_089FF8F8;
      }
      goto L_089FFCA0;
    }
L_089FFCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF8E0;
      }
      goto L_089FFCB4;
    }
L_089FFCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFCDC;
      }
      goto L_089FFCC0;
    }
L_089FFCC0:
    ctx.gpr[31] = (0x089FFCC8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089FFCC8u) goto L_089FFCC8;
    return;
L_089FFCC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089FFCDCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 484u, 0x08A2A8A8u>(ctx, &aot_mem) && ctx.pc == 0x089FFCDCu) goto L_089FFCDC;
    return;
L_089FFCDC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
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
L_089FFD14:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16188)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16192)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16164)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-16184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-16176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-16180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16172), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-16160), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFDA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FFDC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3072));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x089FFDC4u) goto L_089FFDC4;
    return;
L_089FFDC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFDD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089FFE18;
      }
      goto L_089FFDFC;
    }
L_089FFDFC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089FFE24;
      }
      goto L_089FFE18;
    }
L_089FFE18:
    ctx.gpr[31] = (0x089FFE20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x089FFE20u) goto L_089FFE20;
    return;
L_089FFE20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089FFE24;
L_089FFE24:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FFE38;
      }
      goto L_089FFE30;
    }
L_089FFE30:
    ctx.gpr[31] = (0x089FFE38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FFDA8;
L_089FFE38:
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
L_089FFE50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FFE68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 63u, 0x08875A78u>(ctx, &aot_mem) && ctx.pc == 0x089FFE68u) goto L_089FFE68;
    return;
L_089FFE68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFE78;
      }
      goto L_089FFE70;
    }
L_089FFE70:
    ctx.gpr[31] = (0x089FFE78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FFDA8;
L_089FFE78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFE88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FFEF4;
      }
      goto L_089FFEB4;
    }
L_089FFEB4:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089FFEEC;
      }
      goto L_089FFECC;
    }
L_089FFECC:
    ctx.gpr[31] = (0x089FFED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FFDD0;
L_089FFED4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089FFECC;
      }
      goto L_089FFEEC;
    }
L_089FFEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFF04;
      }
      goto L_089FFEF4;
    }
L_089FFEF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089FFF04u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089FFE50;
L_089FFF04:
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
L_089FFF20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FFFC8;
      }
      goto L_089FFF60;
    }
L_089FFF60:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FFFC0;
      }
      goto L_089FFF74;
    }
L_089FFF74:
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_089FFF7C;
L_089FFF7C:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089FFFAC;
      }
      goto L_089FFF8C;
    }
L_089FFF8C:
    ctx.gpr[31] = (0x089FFF94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FFDD0;
L_089FFF94:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089FFF8C;
      }
      goto L_089FFFAC;
    }
L_089FFFAC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FFF7C;
      }
      goto L_089FFFC0;
    }
L_089FFFC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFFDC;
      }
      goto L_089FFFC8;
    }
L_089FFFC8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x089FFFDCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089FFE50;
L_089FFFDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = 0x08A00000u; return;
}

void recomp_unit_0126(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0126_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_126(Runtime &runtime) {
    runtime.register_generated_unit(126u, 0x089FC000u, 16384u, &recomp_unit_0126, &recomp_unit_0126_entry);
    runtime.register_function(0x089FC000u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC054u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC08Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC100u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC148u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC248u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC2F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC738u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC87Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC900u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC914u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC91Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC92Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC934u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC944u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC950u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC95Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC968u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC974u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC980u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCACCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBF0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCEB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD048u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD070u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD098u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD128u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD170u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD188u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD194u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD208u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD218u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD22Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD240u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD248u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD25Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD298u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD308u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD324u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD33Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD344u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD34Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD350u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD364u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD374u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD380u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD404u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD434u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD44Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD478u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD494u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD504u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD514u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD518u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD534u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD580u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD604u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD60Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD620u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD650u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD658u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD660u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD668u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD670u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD674u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD684u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD694u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD708u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD724u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD73Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD748u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD750u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD764u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD76Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD778u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD788u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD790u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD794u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD79Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD804u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD808u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD810u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD850u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD86Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD87Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD88Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD90Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD93Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD96Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD97Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD98Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD998u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDAC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDAE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDAF0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDAFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB54u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDBC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDBE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEE8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFD8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFE8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE004u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE00Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE01Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE02Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE03Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE04Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE05Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE06Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE07Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE08Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE09Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE108u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE114u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE120u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE124u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE12Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE130u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE138u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE140u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE14Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE15Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE16Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE178u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE188u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE20Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE214u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE220u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE230u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE240u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE250u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE260u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE270u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE280u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE290u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE300u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE310u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE31Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE328u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE334u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE338u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE340u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE344u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE348u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE350u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE358u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE360u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE368u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE374u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE38Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE394u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE400u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE404u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE418u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE424u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE438u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE444u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE458u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE468u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE478u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE484u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE490u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE49Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE510u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE51Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE540u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE548u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE584u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE600u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE614u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE624u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE630u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE63Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE644u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE64Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE664u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE69Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE704u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE714u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE73Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE744u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE754u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE784u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE78Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE79Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE80Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE814u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE81Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE824u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE82Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE838u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE848u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE870u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE87Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE884u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE890u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE898u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE904u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE910u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE918u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE920u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE928u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE930u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE938u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE954u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE964u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE984u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEADCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAF0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC9Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECE8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE74u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEED4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEF0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF00Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF014u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF024u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF034u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF03Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF04Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF058u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF060u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF06Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF074u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF07Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF090u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF098u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF100u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF10Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF114u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF120u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF134u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF140u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF148u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF168u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF17Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF188u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF204u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF20Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF21Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF22Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF23Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF248u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF250u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF25Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF310u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF320u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF328u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF350u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF37Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF400u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF418u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF434u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF440u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF44Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF458u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF464u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF470u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF478u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF480u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF488u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF494u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF500u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF508u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF510u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF518u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF520u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF554u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF564u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF57Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF584u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF58Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF594u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF608u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF614u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF654u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF70Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF714u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF71Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF728u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF734u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF744u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF754u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF794u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF79Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF828u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF86Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF930u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF950u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF960u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF970u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF974u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF988u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF990u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF994u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF99Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFABCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAD8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAE8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB54u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBD8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFCA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFCB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFCC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFCC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFCDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFECCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFED4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF74u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFDCu, &recomp_unit_0126, "recomp_unit_0126");
}
} // namespace psprecomp
