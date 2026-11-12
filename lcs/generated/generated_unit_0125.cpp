#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_lod_lights.hpp"
#include "lcs_render_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0125[4061] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 6, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 26, 0, 0, 0, 27, 0, 0, 28,
    0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0,
    35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50,
    0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 67, 68, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78,
    0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0,
    0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120,
    0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 161, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 171, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188,
    0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 206,
    0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 215,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0,
    0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 249, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 255, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 263, 0, 0, 0, 264, 265, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0,
    271, 272, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 293, 0, 0, 294, 0,
    0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 300, 0, 0, 301, 302, 0, 0, 303, 304, 0, 305, 0, 306, 307,
    0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 311, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 323, 0, 0, 0, 0, 324, 0,
    325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 339, 0, 340, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 378, 0, 379, 0, 0, 0, 0, 0, 0, 380,
    0, 381, 382, 0, 0, 0, 0, 0, 0, 0, 383, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0,
    0, 0, 0, 0, 389, 0, 390, 391, 0, 0, 0, 0, 0, 0, 0, 392, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 396, 0, 397, 0, 0, 0,
    0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 401, 0, 402, 0, 0, 0, 0, 0, 0, 403, 404, 0, 405, 0, 0, 0, 0, 406, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 409, 0, 410, 0, 0, 0, 0, 0, 0, 411, 412, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415,
    0, 0, 0, 0, 0, 0, 416, 417, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 422, 0, 0, 0, 0, 0, 0,
    0, 423, 0, 424, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 432,
    0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 440, 441, 0, 442, 0, 443, 0, 444, 0,
    0, 0, 0, 0, 445, 446, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 469, 0, 470, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0,
    0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 504,
    0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 509, 0, 0, 0, 0, 0, 0, 510, 0,
    0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0,
    514, 0, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0,
    0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 524, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 531, 0,
    0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0,
    540, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 552, 0, 553, 0, 0, 554, 555, 0, 556,
    0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0,
    0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0,
    0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 572, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0,
    0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0,
    0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0,
    594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600,
    0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 606,
    0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0,
    0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616,
};
void recomp_unit_0125_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089F8004u;
        entry_id = (entry_delta < 16244u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0125[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F8004;
    case 2u: goto L_089F8040;
    case 3u: goto L_089F8050;
    case 4u: goto L_089F8098;
    case 5u: goto L_089F8104;
    case 6u: goto L_089F8118;
    case 7u: goto L_089F8120;
    case 8u: goto L_089F8124;
    case 9u: goto L_089F8154;
    case 10u: goto L_089F8188;
    case 11u: goto L_089F81D8;
    case 12u: goto L_089F81E4;
    case 13u: goto L_089F81E8;
    case 14u: goto L_089F8218;
    case 15u: goto L_089F8248;
    case 16u: goto L_089F8268;
    case 17u: goto L_089F8284;
    case 18u: goto L_089F828C;
    case 19u: goto L_089F8294;
    case 20u: goto L_089F829C;
    case 21u: goto L_089F82E8;
    case 22u: goto L_089F82F0;
    case 23u: goto L_089F8320;
    case 24u: goto L_089F8354;
    case 25u: goto L_089F8360;
    case 26u: goto L_089F8364;
    case 27u: goto L_089F8374;
    case 28u: goto L_089F8380;
    case 29u: goto L_089F838C;
    case 30u: goto L_089F8398;
    case 31u: goto L_089F83A8;
    case 32u: goto L_089F83B0;
    case 33u: goto L_089F83F0;
    case 34u: goto L_089F83F8;
    case 35u: goto L_089F8404;
    case 36u: goto L_089F840C;
    case 37u: goto L_089F8484;
    case 38u: goto L_089F8494;
    case 39u: goto L_089F84A8;
    case 40u: goto L_089F85C0;
    case 41u: goto L_089F85C8;
    case 42u: goto L_089F85CC;
    case 43u: goto L_089F8604;
    case 44u: goto L_089F860C;
    case 45u: goto L_089F862C;
    case 46u: goto L_089F8648;
    case 47u: goto L_089F8658;
    case 48u: goto L_089F865C;
    case 49u: goto L_089F8678;
    case 50u: goto L_089F8680;
    case 51u: goto L_089F869C;
    case 52u: goto L_089F86A4;
    case 53u: goto L_089F86AC;
    case 54u: goto L_089F8728;
    case 55u: goto L_089F8734;
    case 56u: goto L_089F8758;
    case 57u: goto L_089F8760;
    case 58u: goto L_089F8768;
    case 59u: goto L_089F878C;
    case 60u: goto L_089F8794;
    case 61u: goto L_089F87A4;
    case 62u: goto L_089F87B0;
    case 63u: goto L_089F87C0;
    case 64u: goto L_089F87C8;
    case 65u: goto L_089F87D4;
    case 66u: goto L_089F87DC;
    case 67u: goto L_089F87E4;
    case 68u: goto L_089F87E8;
    case 69u: goto L_089F8808;
    case 70u: goto L_089F889C;
    case 71u: goto L_089F88B8;
    case 72u: goto L_089F88CC;
    case 73u: goto L_089F88D4;
    case 74u: goto L_089F88E0;
    case 75u: goto L_089F88E8;
    case 76u: goto L_089F88F0;
    case 77u: goto L_089F88F8;
    case 78u: goto L_089F8900;
    case 79u: goto L_089F8908;
    case 80u: goto L_089F891C;
    case 81u: goto L_089F8930;
    case 82u: goto L_089F893C;
    case 83u: goto L_089F8954;
    case 84u: goto L_089F8960;
    case 85u: goto L_089F89D8;
    case 86u: goto L_089F8A2C;
    case 87u: goto L_089F8A70;
    case 88u: goto L_089F8A78;
    case 89u: goto L_089F8A80;
    case 90u: goto L_089F8A98;
    case 91u: goto L_089F8AEC;
    case 92u: goto L_089F8AF0;
    case 93u: goto L_089F8B2C;
    case 94u: goto L_089F8B78;
    case 95u: goto L_089F8C48;
    case 96u: goto L_089F8C58;
    case 97u: goto L_089F8C70;
    case 98u: goto L_089F8C78;
    case 99u: goto L_089F8C80;
    case 100u: goto L_089F8CC0;
    case 101u: goto L_089F8D14;
    case 102u: goto L_089F8D1C;
    case 103u: goto L_089F8D24;
    case 104u: goto L_089F8D64;
    case 105u: goto L_089F8DA4;
    case 106u: goto L_089F8DBC;
    case 107u: goto L_089F8DC8;
    case 108u: goto L_089F8DD4;
    case 109u: goto L_089F8DE0;
    case 110u: goto L_089F8DF4;
    case 111u: goto L_089F8DFC;
    case 112u: goto L_089F8E10;
    case 113u: goto L_089F8E18;
    case 114u: goto L_089F8E28;
    case 115u: goto L_089F8E34;
    case 116u: goto L_089F8E48;
    case 117u: goto L_089F8E50;
    case 118u: goto L_089F8E6C;
    case 119u: goto L_089F8E78;
    case 120u: goto L_089F8E80;
    case 121u: goto L_089F8E90;
    case 122u: goto L_089F8EA4;
    case 123u: goto L_089F8EC0;
    case 124u: goto L_089F8ECC;
    case 125u: goto L_089F8ED4;
    case 126u: goto L_089F8EE4;
    case 127u: goto L_089F8EF8;
    case 128u: goto L_089F8F14;
    case 129u: goto L_089F8F3C;
    case 130u: goto L_089F8F60;
    case 131u: goto L_089F8F70;
    case 132u: goto L_089F8F78;
    case 133u: goto L_089F8FD8;
    case 134u: goto L_089F8FE8;
    case 135u: goto L_089F9010;
    case 136u: goto L_089F9078;
    case 137u: goto L_089F90A8;
    case 138u: goto L_089F90C8;
    case 139u: goto L_089F90D8;
    case 140u: goto L_089F90E4;
    case 141u: goto L_089F9150;
    case 142u: goto L_089F91B4;
    case 143u: goto L_089F9208;
    case 144u: goto L_089F9234;
    case 145u: goto L_089F9244;
    case 146u: goto L_089F9248;
    case 147u: goto L_089F9250;
    case 148u: goto L_089F9268;
    case 149u: goto L_089F9274;
    case 150u: goto L_089F9280;
    case 151u: goto L_089F9294;
    case 152u: goto L_089F929C;
    case 153u: goto L_089F92AC;
    case 154u: goto L_089F92B4;
    case 155u: goto L_089F92C8;
    case 156u: goto L_089F92F0;
    case 157u: goto L_089F9314;
    case 158u: goto L_089F9328;
    case 159u: goto L_089F9344;
    case 160u: goto L_089F93FC;
    case 161u: goto L_089F940C;
    case 162u: goto L_089F9410;
    case 163u: goto L_089F9418;
    case 164u: goto L_089F9450;
    case 165u: goto L_089F9474;
    case 166u: goto L_089F947C;
    case 167u: goto L_089F9494;
    case 168u: goto L_089F94D0;
    case 169u: goto L_089F94E8;
    case 170u: goto L_089F94F0;
    case 171u: goto L_089F94F4;
    case 172u: goto L_089F950C;
    case 173u: goto L_089F95C0;
    case 174u: goto L_089F95CC;
    case 175u: goto L_089F95FC;
    case 176u: goto L_089F9610;
    case 177u: goto L_089F9638;
    case 178u: goto L_089F9680;
    case 179u: goto L_089F9688;
    case 180u: goto L_089F9690;
    case 181u: goto L_089F9698;
    case 182u: goto L_089F96A0;
    case 183u: goto L_089F96A8;
    case 184u: goto L_089F96D4;
    case 185u: goto L_089F96E4;
    case 186u: goto L_089F96EC;
    case 187u: goto L_089F96F8;
    case 188u: goto L_089F9700;
    case 189u: goto L_089F9708;
    case 190u: goto L_089F9710;
    case 191u: goto L_089F9718;
    case 192u: goto L_089F9724;
    case 193u: goto L_089F9730;
    case 194u: goto L_089F973C;
    case 195u: goto L_089F975C;
    case 196u: goto L_089F9768;
    case 197u: goto L_089F978C;
    case 198u: goto L_089F9794;
    case 199u: goto L_089F979C;
    case 200u: goto L_089F97A4;
    case 201u: goto L_089F97AC;
    case 202u: goto L_089F97C0;
    case 203u: goto L_089F97CC;
    case 204u: goto L_089F97DC;
    case 205u: goto L_089F97E4;
    case 206u: goto L_089F9800;
    case 207u: goto L_089F9808;
    case 208u: goto L_089F9814;
    case 209u: goto L_089F981C;
    case 210u: goto L_089F9838;
    case 211u: goto L_089F985C;
    case 212u: goto L_089F9868;
    case 213u: goto L_089F9870;
    case 214u: goto L_089F9878;
    case 215u: goto L_089F9880;
    case 216u: goto L_089F989C;
    case 217u: goto L_089F98C0;
    case 218u: goto L_089F98C8;
    case 219u: goto L_089F98CC;
    case 220u: goto L_089F98F0;
    case 221u: goto L_089F98F8;
    case 222u: goto L_089F9900;
    case 223u: goto L_089F9908;
    case 224u: goto L_089F9950;
    case 225u: goto L_089F9960;
    case 226u: goto L_089F9970;
    case 227u: goto L_089F997C;
    case 228u: goto L_089F9988;
    case 229u: goto L_089F9994;
    case 230u: goto L_089F99A8;
    case 231u: goto L_089F99B0;
    case 232u: goto L_089F99C4;
    case 233u: goto L_089F99CC;
    case 234u: goto L_089F99E0;
    case 235u: goto L_089F99E8;
    case 236u: goto L_089F99FC;
    case 237u: goto L_089F9A04;
    case 238u: goto L_089F9A24;
    case 239u: goto L_089F9A2C;
    case 240u: goto L_089F9A34;
    case 241u: goto L_089F9A3C;
    case 242u: goto L_089F9A44;
    case 243u: goto L_089F9A4C;
    case 244u: goto L_089F9A54;
    case 245u: goto L_089F9A5C;
    case 246u: goto L_089F9A64;
    case 247u: goto L_089F9A6C;
    case 248u: goto L_089F9A78;
    case 249u: goto L_089F9A7C;
    case 250u: goto L_089F9A9C;
    case 251u: goto L_089F9AB8;
    case 252u: goto L_089F9BB4;
    case 253u: goto L_089F9BC8;
    case 254u: goto L_089F9BF0;
    case 255u: goto L_089F9C0C;
    case 256u: goto L_089F9C10;
    case 257u: goto L_089F9C1C;
    case 258u: goto L_089F9C28;
    case 259u: goto L_089F9C38;
    case 260u: goto L_089F9C3C;
    case 261u: goto L_089F9C64;
    case 262u: goto L_089F9C80;
    case 263u: goto L_089F9C90;
    case 264u: goto L_089F9CA0;
    case 265u: goto L_089F9CA4;
    case 266u: goto L_089F9CA8;
    case 267u: goto L_089F9CB0;
    case 268u: goto L_089F9CC8;
    case 269u: goto L_089F9CE4;
    case 270u: goto L_089F9CF4;
    case 271u: goto L_089F9D04;
    case 272u: goto L_089F9D08;
    case 273u: goto L_089F9D0C;
    case 274u: goto L_089F9D14;
    case 275u: goto L_089F9D3C;
    case 276u: goto L_089F9D44;
    case 277u: goto L_089F9D48;
    case 278u: goto L_089F9D7C;
    case 279u: goto L_089F9D8C;
    case 280u: goto L_089F9D9C;
    case 281u: goto L_089F9DD0;
    case 282u: goto L_089F9DE0;
    case 283u: goto L_089F9DF0;
    case 284u: goto L_089F9E28;
    case 285u: goto L_089F9E44;
    case 286u: goto L_089F9E48;
    case 287u: goto L_089F9E50;
    case 288u: goto L_089F9E5C;
    case 289u: goto L_089F9E94;
    case 290u: goto L_089F9EA0;
    case 291u: goto L_089F9EB0;
    case 292u: goto L_089F9EEC;
    case 293u: goto L_089F9EF0;
    case 294u: goto L_089F9EFC;
    case 295u: goto L_089F9F08;
    case 296u: goto L_089F9F10;
    case 297u: goto L_089F9F30;
    case 298u: goto L_089F9FB8;
    case 299u: goto L_089F9FC8;
    case 300u: goto L_089F9FCC;
    case 301u: goto L_089F9FD8;
    case 302u: goto L_089F9FDC;
    case 303u: goto L_089F9FE8;
    case 304u: goto L_089F9FEC;
    case 305u: goto L_089F9FF4;
    case 306u: goto L_089F9FFC;
    case 307u: goto L_089FA000;
    case 308u: goto L_089FA00C;
    case 309u: goto L_089FA018;
    case 310u: goto L_089FA02C;
    case 311u: goto L_089FA030;
    case 312u: goto L_089FA038;
    case 313u: goto L_089FA044;
    case 314u: goto L_089FA04C;
    case 315u: goto L_089FA05C;
    case 316u: goto L_089FA078;
    case 317u: goto L_089FA098;
    case 318u: goto L_089FA0A4;
    case 319u: goto L_089FA0AC;
    case 320u: goto L_089FA0C0;
    case 321u: goto L_089FA0D4;
    case 322u: goto L_089FA0E4;
    case 323u: goto L_089FA0E8;
    case 324u: goto L_089FA0FC;
    case 325u: goto L_089FA104;
    case 326u: goto L_089FA110;
    case 327u: goto L_089FA138;
    case 328u: goto L_089FA154;
    case 329u: goto L_089FA1BC;
    case 330u: goto L_089FA1C8;
    case 331u: goto L_089FA20C;
    case 332u: goto L_089FA220;
    case 333u: goto L_089FA228;
    case 334u: goto L_089FA230;
    case 335u: goto L_089FA248;
    case 336u: goto L_089FA258;
    case 337u: goto L_089FA264;
    case 338u: goto L_089FA280;
    case 339u: goto L_089FA28C;
    case 340u: goto L_089FA294;
    case 341u: goto L_089FA298;
    case 342u: goto L_089FA2A0;
    case 343u: goto L_089FA320;
    case 344u: goto L_089FA364;
    case 345u: goto L_089FA380;
    case 346u: goto L_089FA3A0;
    case 347u: goto L_089FA42C;
    case 348u: goto L_089FA450;
    case 349u: goto L_089FA45C;
    case 350u: goto L_089FA4C0;
    case 351u: goto L_089FA4D8;
    case 352u: goto L_089FA4E0;
    case 353u: goto L_089FA4F4;
    case 354u: goto L_089FA508;
    case 355u: goto L_089FA53C;
    case 356u: goto L_089FA57C;
    case 357u: goto L_089FA590;
    case 358u: goto L_089FA5B0;
    case 359u: goto L_089FA5C8;
    case 360u: goto L_089FA5D0;
    case 361u: goto L_089FA5D8;
    case 362u: goto L_089FA5E0;
    case 363u: goto L_089FA5F4;
    case 364u: goto L_089FA608;
    case 365u: goto L_089FA614;
    case 366u: goto L_089FA630;
    case 367u: goto L_089FA63C;
    case 368u: goto L_089FA644;
    case 369u: goto L_089FA64C;
    case 370u: goto L_089FA654;
    case 371u: goto L_089FA65C;
    case 372u: goto L_089FA670;
    case 373u: goto L_089FA694;
    case 374u: goto L_089FA6AC;
    case 375u: goto L_089FA6B4;
    case 376u: goto L_089FA6C8;
    case 377u: goto L_089FA6D8;
    case 378u: goto L_089FA6DC;
    case 379u: goto L_089FA6E4;
    case 380u: goto L_089FA700;
    case 381u: goto L_089FA708;
    case 382u: goto L_089FA70C;
    case 383u: goto L_089FA72C;
    case 384u: goto L_089FA730;
    case 385u: goto L_089FA738;
    case 386u: goto L_089FA74C;
    case 387u: goto L_089FA75C;
    case 388u: goto L_089FA778;
    case 389u: goto L_089FA794;
    case 390u: goto L_089FA79C;
    case 391u: goto L_089FA7A0;
    case 392u: goto L_089FA7C0;
    case 393u: goto L_089FA7C4;
    case 394u: goto L_089FA7CC;
    case 395u: goto L_089FA7E8;
    case 396u: goto L_089FA7EC;
    case 397u: goto L_089FA7F4;
    case 398u: goto L_089FA808;
    case 399u: goto L_089FA818;
    case 400u: goto L_089FA834;
    case 401u: goto L_089FA838;
    case 402u: goto L_089FA840;
    case 403u: goto L_089FA85C;
    case 404u: goto L_089FA860;
    case 405u: goto L_089FA868;
    case 406u: goto L_089FA87C;
    case 407u: goto L_089FA88C;
    case 408u: goto L_089FA8A8;
    case 409u: goto L_089FA8AC;
    case 410u: goto L_089FA8B4;
    case 411u: goto L_089FA8D0;
    case 412u: goto L_089FA8D4;
    case 413u: goto L_089FA8DC;
    case 414u: goto L_089FA8F0;
    case 415u: goto L_089FA900;
    case 416u: goto L_089FA91C;
    case 417u: goto L_089FA920;
    case 418u: goto L_089FA928;
    case 419u: goto L_089FA93C;
    case 420u: goto L_089FA95C;
    case 421u: goto L_089FA964;
    case 422u: goto L_089FA968;
    case 423u: goto L_089FA988;
    case 424u: goto L_089FA990;
    case 425u: goto L_089FA994;
    case 426u: goto L_089FA99C;
    case 427u: goto L_089FA9B0;
    case 428u: goto L_089FA9C0;
    case 429u: goto L_089FA9D4;
    case 430u: goto L_089FA9F4;
    case 431u: goto L_089FA9FC;
    case 432u: goto L_089FAA00;
    case 433u: goto L_089FAA20;
    case 434u: goto L_089FAA28;
    case 435u: goto L_089FAA2C;
    case 436u: goto L_089FAA34;
    case 437u: goto L_089FAA3C;
    case 438u: goto L_089FAA44;
    case 439u: goto L_089FAA4C;
    case 440u: goto L_089FAA60;
    case 441u: goto L_089FAA64;
    case 442u: goto L_089FAA6C;
    case 443u: goto L_089FAA74;
    case 444u: goto L_089FAA7C;
    case 445u: goto L_089FAA94;
    case 446u: goto L_089FAA98;
    case 447u: goto L_089FAAA8;
    case 448u: goto L_089FAAB0;
    case 449u: goto L_089FAAC4;
    case 450u: goto L_089FAAD0;
    case 451u: goto L_089FAAD8;
    case 452u: goto L_089FAAE0;
    case 453u: goto L_089FAB40;
    case 454u: goto L_089FAB48;
    case 455u: goto L_089FAB50;
    case 456u: goto L_089FABB0;
    case 457u: goto L_089FABC8;
    case 458u: goto L_089FABD0;
    case 459u: goto L_089FABDC;
    case 460u: goto L_089FABE8;
    case 461u: goto L_089FABF4;
    case 462u: goto L_089FAC88;
    case 463u: goto L_089FAC94;
    case 464u: goto L_089FACD4;
    case 465u: goto L_089FACDC;
    case 466u: goto L_089FACEC;
    case 467u: goto L_089FAD58;
    case 468u: goto L_089FAD60;
    case 469u: goto L_089FAD70;
    case 470u: goto L_089FAD78;
    case 471u: goto L_089FAD90;
    case 472u: goto L_089FADFC;
    case 473u: goto L_089FAE14;
    case 474u: goto L_089FAE1C;
    case 475u: goto L_089FAE40;
    case 476u: goto L_089FAE44;
    case 477u: goto L_089FAE9C;
    case 478u: goto L_089FAEA4;
    case 479u: goto L_089FAEAC;
    case 480u: goto L_089FAF08;
    case 481u: goto L_089FAF10;
    case 482u: goto L_089FAF2C;
    case 483u: goto L_089FAF40;
    case 484u: goto L_089FAFF4;
    case 485u: goto L_089FB054;
    case 486u: goto L_089FB074;
    case 487u: goto L_089FB148;
    case 488u: goto L_089FB15C;
    case 489u: goto L_089FB18C;
    case 490u: goto L_089FB1E0;
    case 491u: goto L_089FB1EC;
    case 492u: goto L_089FB1F8;
    case 493u: goto L_089FB228;
    case 494u: goto L_089FB234;
    case 495u: goto L_089FB240;
    case 496u: goto L_089FB24C;
    case 497u: goto L_089FB2D0;
    case 498u: goto L_089FB2E8;
    case 499u: goto L_089FB33C;
    case 500u: goto L_089FB348;
    case 501u: goto L_089FB354;
    case 502u: goto L_089FB360;
    case 503u: goto L_089FB378;
    case 504u: goto L_089FB380;
    case 505u: goto L_089FB3A0;
    case 506u: goto L_089FB3B4;
    case 507u: goto L_089FB3C8;
    case 508u: goto L_089FB3DC;
    case 509u: goto L_089FB3E0;
    case 510u: goto L_089FB3FC;
    case 511u: goto L_089FB418;
    case 512u: goto L_089FB42C;
    case 513u: goto L_089FB47C;
    case 514u: goto L_089FB484;
    case 515u: goto L_089FB490;
    case 516u: goto L_089FB498;
    case 517u: goto L_089FB4AC;
    case 518u: goto L_089FB4EC;
    case 519u: goto L_089FB4F4;
    case 520u: goto L_089FB508;
    case 521u: goto L_089FB528;
    case 522u: goto L_089FB53C;
    case 523u: goto L_089FB554;
    case 524u: goto L_089FB558;
    case 525u: goto L_089FB560;
    case 526u: goto L_089FB578;
    case 527u: goto L_089FB5B0;
    case 528u: goto L_089FB5C8;
    case 529u: goto L_089FB5E8;
    case 530u: goto L_089FB5F4;
    case 531u: goto L_089FB5FC;
    case 532u: goto L_089FB608;
    case 533u: goto L_089FB610;
    case 534u: goto L_089FB61C;
    case 535u: goto L_089FB628;
    case 536u: goto L_089FB630;
    case 537u: goto L_089FB634;
    case 538u: goto L_089FB63C;
    case 539u: goto L_089FB660;
    case 540u: goto L_089FB684;
    case 541u: goto L_089FB690;
    case 542u: goto L_089FB6A8;
    case 543u: goto L_089FB6B4;
    case 544u: goto L_089FB714;
    case 545u: goto L_089FB790;
    case 546u: goto L_089FB7D8;
    case 547u: goto L_089FB7E0;
    case 548u: goto L_089FB834;
    case 549u: goto L_089FB840;
    case 550u: goto L_089FB84C;
    case 551u: goto L_089FB854;
    case 552u: goto L_089FB860;
    case 553u: goto L_089FB868;
    case 554u: goto L_089FB874;
    case 555u: goto L_089FB878;
    case 556u: goto L_089FB880;
    case 557u: goto L_089FB898;
    case 558u: goto L_089FB960;
    case 559u: goto L_089FB970;
    case 560u: goto L_089FB978;
    case 561u: goto L_089FB990;
    case 562u: goto L_089FB9A8;
    case 563u: goto L_089FB9B4;
    case 564u: goto L_089FB9C0;
    case 565u: goto L_089FB9CC;
    case 566u: goto L_089FB9D8;
    case 567u: goto L_089FB9E4;
    case 568u: goto L_089FB9F0;
    case 569u: goto L_089FBA08;
    case 570u: goto L_089FBA24;
    case 571u: goto L_089FBA34;
    case 572u: goto L_089FBA38;
    case 573u: goto L_089FBA4C;
    case 574u: goto L_089FBA58;
    case 575u: goto L_089FBB74;
    case 576u: goto L_089FBB8C;
    case 577u: goto L_089FBBA4;
    case 578u: goto L_089FBBB0;
    case 579u: goto L_089FBBBC;
    case 580u: goto L_089FBBC8;
    case 581u: goto L_089FBC10;
    case 582u: goto L_089FBC70;
    case 583u: goto L_089FBC7C;
    case 584u: goto L_089FBCAC;
    case 585u: goto L_089FBCB4;
    case 586u: goto L_089FBCC0;
    case 587u: goto L_089FBCCC;
    case 588u: goto L_089FBCD8;
    case 589u: goto L_089FBCE4;
    case 590u: goto L_089FBCF0;
    case 591u: goto L_089FBCFC;
    case 592u: goto L_089FBD14;
    case 593u: goto L_089FBD68;
    case 594u: goto L_089FBD84;
    case 595u: goto L_089FBD90;
    case 596u: goto L_089FBD9C;
    case 597u: goto L_089FBDA8;
    case 598u: goto L_089FBDB8;
    case 599u: goto L_089FBDD0;
    case 600u: goto L_089FBE00;
    case 601u: goto L_089FBE08;
    case 602u: goto L_089FBE1C;
    case 603u: goto L_089FBE4C;
    case 604u: goto L_089FBE54;
    case 605u: goto L_089FBE70;
    case 606u: goto L_089FBE80;
    case 607u: goto L_089FBE94;
    case 608u: goto L_089FBEB4;
    case 609u: goto L_089FBEEC;
    case 610u: goto L_089FBEF4;
    case 611u: goto L_089FBF0C;
    case 612u: goto L_089FBF20;
    case 613u: goto L_089FBF40;
    case 614u: goto L_089FBF48;
    case 615u: goto L_089FBF64;
    case 616u: goto L_089FBF74;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F8004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 9214u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F8154;
      }
      goto L_089F8040;
    }
L_089F8040:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    goto L_089F8050;
L_089F8050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
        goto L_089F8124;
    }
    goto L_089F8098;
L_089F8098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089F8104u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 565u, 0x088CB090u>(ctx, &aot_mem) && ctx.pc == 0x089F8104u) goto L_089F8104;
    return;
L_089F8104:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8120;
      }
      goto L_089F8118;
    }
L_089F8118:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089F8120;
L_089F8120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    goto L_089F8124;
L_089F8124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
        goto L_089F8050;
    }
    goto L_089F8154;
L_089F8154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_089F8188;
L_089F8188:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F81E4;
      }
      goto L_089F81D8;
    }
L_089F81D8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089F81E8;
      }
      goto L_089F81E4;
    }
L_089F81E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_089F81E8;
L_089F81E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F8284;
      }
      goto L_089F8248;
    }
L_089F8248:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[31] = (0x089F8268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 199u, 0x089D599Cu>(ctx, &aot_mem) && ctx.pc == 0x089F8268u) goto L_089F8268;
    return;
L_089F8268:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F828C;
      }
      goto L_089F8284;
    }
L_089F8284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F87E8;
      }
      goto L_089F828C;
    }
L_089F828C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F8374;
      }
      goto L_089F8294;
    }
L_089F8294:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8374;
      }
      goto L_089F829C;
    }
L_089F829C:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[11] = (17116u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[11] = (49024u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089F82E8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 129u, 0x08978FC8u>(ctx, &aot_mem) && ctx.pc == 0x089F82E8u) goto L_089F82E8;
    return;
L_089F82E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8364;
      }
      goto L_089F82F0;
    }
L_089F82F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8364;
      }
      goto L_089F8320;
    }
L_089F8320:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (16672u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089F8354u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1B24u>(ctx, &aot_mem) && ctx.pc == 0x089F8354u) goto L_089F8354;
    return;
L_089F8354:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(272))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8364;
      }
      goto L_089F8360;
    }
L_089F8360:
    ctx.gpr[18] = (0u | 1u);
    goto L_089F8364;
L_089F8364:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
      if (branch_taken) {
          goto L_089F828C;
      }
      goto L_089F8374;
    }
L_089F8374:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F87E4;
      }
      goto L_089F8380;
    }
L_089F8380:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089F838Cu);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x089F838Cu) goto L_089F838C;
    return;
L_089F838C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F83B0;
      }
      goto L_089F8398;
    }
L_089F8398:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F83A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x089F83A8u) goto L_089F83A8;
    return;
L_089F83A8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089F83B0;
L_089F83B0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089F83F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x089F83F0u) goto L_089F83F0;
    return;
L_089F83F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8404;
      }
      goto L_089F83F8;
    }
L_089F83F8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089F840C;
      }
      goto L_089F8404;
    }
L_089F8404:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089F840C;
L_089F840C:
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
        goto L_089F8494;
    }
    goto L_089F8484;
L_089F8484:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089F84A8;
      }
      goto L_089F8494;
    }
L_089F8494:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089F84A8;
L_089F84A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (20078u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 27432u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089F85C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089F85C0u) goto L_089F85C0;
    return;
L_089F85C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F85CC;
      }
      goto L_089F85C8;
    }
L_089F85C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089F85CC;
L_089F85CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089F8604u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089F8604u) goto L_089F8604;
    return;
L_089F8604:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F865C;
      }
      goto L_089F860C;
    }
L_089F860C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_089F862C;
    }
    goto L_089F862C;
L_089F862C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089F8648;
    }
    goto L_089F8648;
L_089F8648:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F865C;
      }
      goto L_089F8658;
    }
L_089F8658:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089F865C;
L_089F865C:
    ctx.gpr[4] = (20078u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 27432u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F86A4;
      }
      goto L_089F8678;
    }
L_089F8678:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F869C;
      }
      goto L_089F8680;
    }
L_089F8680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089F869Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F869Cu) goto L_089F869C;
    return;
L_089F869C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F87E8;
      }
      goto L_089F86A4;
    }
L_089F86A4:
    ctx.gpr[31] = (0x089F86ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x089F86ACu) goto L_089F86AC;
    return;
L_089F86AC:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 139 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 147u);
      if (branch_taken) {
          goto L_089F8760;
      }
      goto L_089F8728;
    }
L_089F8728:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 138 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8794;
      }
      goto L_089F8734;
    }
L_089F8734:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17432)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089F8758u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17432), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 259u, 0x0891D5D8u>(ctx, &aot_mem) && ctx.pc == 0x089F8758u) goto L_089F8758;
    return;
L_089F8758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8794;
      }
      goto L_089F8760;
    }
L_089F8760:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F8794;
      }
      goto L_089F8768;
    }
L_089F8768:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17436)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089F878Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17436), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 256u, 0x0891D5A8u>(ctx, &aot_mem) && ctx.pc == 0x089F878Cu) goto L_089F878C;
    return;
L_089F878C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8794;
      }
      goto L_089F8794;
    }
L_089F8794:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089F87A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089F87A4u) goto L_089F87A4;
    return;
L_089F87A4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089F87B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3724));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F87B0u) goto L_089F87B0;
    return;
L_089F87B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F87DC;
      }
      goto L_089F87C0;
    }
L_089F87C0:
    ctx.gpr[31] = (0x089F87C8u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089F87C8u) goto L_089F87C8;
    return;
L_089F87C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F87DC;
      }
      goto L_089F87D4;
    }
L_089F87D4:
    ctx.gpr[31] = (0x089F87DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 260u, 0x08ABD8B8u>(ctx, &aot_mem) && ctx.pc == 0x089F87DCu) goto L_089F87DC;
    return;
L_089F87DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089F87E8;
      }
      goto L_089F87E4;
    }
L_089F87E4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089F87E8;
L_089F87E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8808:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17604)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17608)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17576)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-17600), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-17592), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-17596), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17588), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-17572), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F889C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F8908;
      }
      goto L_089F88B8;
    }
L_089F88B8:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089F88D4;
      }
      goto L_089F88CC;
    }
L_089F88CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_089F88D4;
L_089F88D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F88E8;
      }
      goto L_089F88E0;
    }
L_089F88E0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_089F88E8;
L_089F88E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F88F8;
      }
      goto L_089F88F0;
    }
L_089F88F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_089F88F8;
L_089F88F8:
    ctx.gpr[31] = (0x089F8900u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_089F893C;
L_089F8900:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F88B8;
      }
      goto L_089F8908;
    }
L_089F8908:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F891C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F8930u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15320)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 265u, 0x08B05420u>(ctx, &aot_mem) && ctx.pc == 0x089F8930u) goto L_089F8930;
    return;
L_089F8930:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F893C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F8954u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15320)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 273u, 0x08B054E0u>(ctx, &aot_mem) && ctx.pc == 0x089F8954u) goto L_089F8954;
    return;
L_089F8954:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8960:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17324)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17328)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-17320), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-17312), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-17316), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-17308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-17304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F89D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F8A78;
      }
      goto L_089F8A2C;
    }
L_089F8A2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_089F8A80;
    }
    goto L_089F8A70;
L_089F8A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
      if (branch_taken) {
          goto L_089F8AF0;
      }
      goto L_089F8A78;
    }
L_089F8A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8C80;
      }
      goto L_089F8A80;
    }
L_089F8A80:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
        goto L_089F8AF0;
    }
    goto L_089F8A98;
L_089F8A98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(536)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15044u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(528));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089F8AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089F8AECu) goto L_089F8AEC;
    return;
L_089F8AEC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    goto L_089F8AF0;
L_089F8AF0:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[4] = (16160u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(528));
    goto L_089F8B2C;
L_089F8B2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[30] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F8B78u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089F8B78u) goto L_089F8B78;
    return;
L_089F8B78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[26] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089F8B2C;
      }
      goto L_089F8C48;
    }
L_089F8C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8C78;
      }
      goto L_089F8C58;
    }
L_089F8C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8C78;
      }
      goto L_089F8C70;
    }
L_089F8C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089F8C78;
L_089F8C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_089F8C80;
L_089F8C80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_089F8D1C;
      }
      goto L_089F8D14;
    }
L_089F8D14:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089F8D1C;
L_089F8D1C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8E18;
      }
      goto L_089F8D24;
    }
L_089F8D24:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(20144));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[9]);
    goto L_089F8D64;
L_089F8D64:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089F8D64;
      }
      goto L_089F8DA4;
    }
L_089F8DA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089F8DBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089F8DBCu) goto L_089F8DBC;
    return;
L_089F8DBC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089F8DC8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089F8DC8u) goto L_089F8DC8;
    return;
L_089F8DC8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089F8DD4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089F8DD4u) goto L_089F8DD4;
    return;
L_089F8DD4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089F8DE0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089F8DE0u) goto L_089F8DE0;
    return;
L_089F8DE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089F8DF4u);
    ctx.gpr[7] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x089F8DF4u) goto L_089F8DF4;
    return;
L_089F8DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8E18;
      }
      goto L_089F8DFC;
    }
L_089F8DFC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17260));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089F8E10u);
    ctx.gpr[6] = (0u | 62u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x089F8E10u) goto L_089F8E10;
    return;
L_089F8E10:
    ctx.gpr[31] = (0x089F8E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x089F8E18u) goto L_089F8E18;
    return;
L_089F8E18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8E28:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6944));
    goto L_089F8E34;
L_089F8E34:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1040));
      if (branch_taken) {
          goto L_089F8E34;
      }
      goto L_089F8E48;
    }
L_089F8E48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8E50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(6944));
    goto L_089F8E6C;
L_089F8E6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8E80;
      }
      goto L_089F8E78;
    }
L_089F8E78:
    ctx.gpr[31] = (0x089F8E80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089F89D8;
L_089F8E80:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1040));
      if (branch_taken) {
          goto L_089F8E6C;
      }
      goto L_089F8E90;
    }
L_089F8E90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(6944));
    goto L_089F8EC0;
L_089F8EC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8ED4;
      }
      goto L_089F8ECC;
    }
L_089F8ECC:
    ctx.gpr[31] = (0x089F8ED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089F8CC0;
L_089F8ED4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1040));
      if (branch_taken) {
          goto L_089F8EC0;
      }
      goto L_089F8EE4;
    }
L_089F8EE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8FD8;
      }
      goto L_089F8F14;
    }
L_089F8F14:
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[9] = (0u + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(6944));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_089F8F60;
      }
      goto L_089F8F3C;
    }
L_089F8F3C:
    ctx.gpr[9] = (0u + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(6944));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F8F78;
      }
      goto L_089F8F60;
    }
L_089F8F60:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8F14;
      }
      goto L_089F8F70;
    }
L_089F8F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8FD8;
      }
      goto L_089F8F78;
    }
L_089F8F78:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6944));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
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
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(528));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9248;
      }
      goto L_089F8FD8;
    }
L_089F8FD8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9244;
      }
      goto L_089F8FE8;
    }
L_089F8FE8:
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[9] = (0u + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(6944));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9234;
      }
      goto L_089F9010;
    }
L_089F9010:
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[9] = (0u + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(6944));
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(528));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F90A8;
      }
      goto L_089F9078;
    }
L_089F9078:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6944));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F90C8;
      }
      goto L_089F90A8;
    }
L_089F90A8:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6944));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_089F90C8;
L_089F90C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9208;
      }
      goto L_089F90D8;
    }
L_089F90D8:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9150;
      }
      goto L_089F90E4;
    }
L_089F90E4:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6944));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (16160u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F91B4;
      }
      goto L_089F9150;
    }
L_089F9150:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6944));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (16160u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089F91B4;
L_089F91B4:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6944));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(528));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F90D8;
      }
      goto L_089F9208;
    }
L_089F9208:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6944));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9248;
      }
      goto L_089F9234;
    }
L_089F9234:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8FE8;
      }
      goto L_089F9244;
    }
L_089F9244:
    ctx.gpr[2] = (0u | 0u);
    goto L_089F9248;
L_089F9248:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9250:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6944));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089F9268;
L_089F9268:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9280;
      }
      goto L_089F9274;
    }
L_089F9274:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F929C;
      }
      goto L_089F9280;
    }
L_089F9280:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1040));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1040));
      if (branch_taken) {
          goto L_089F9268;
      }
      goto L_089F9294;
    }
L_089F9294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F92AC;
      }
      goto L_089F929C;
    }
L_089F929C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(528));
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
    goto L_089F92AC;
L_089F92AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F92B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F940C;
      }
      goto L_089F92C8;
    }
L_089F92C8:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 6u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(6944));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          goto L_089F93FC;
      }
      goto L_089F92F0;
    }
L_089F92F0:
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 6u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(6944));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F93FC;
      }
      goto L_089F9314;
    }
L_089F9314:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089F9328;
    }
    goto L_089F9328;
L_089F9328:
    ctx.gpr[4] = (16255u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48759u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089F9344;
    }
    goto L_089F9344;
L_089F9344:
    ctx.gpr[4] = (16888u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(6944));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[9]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089F9410;
      }
      goto L_089F93FC;
    }
L_089F93FC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F92C8;
      }
      goto L_089F940C;
    }
L_089F940C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089F9410;
L_089F9410:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F94E8;
      }
      goto L_089F9450;
    }
L_089F9450:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-17132)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x089F9474u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089F8EF8;
L_089F9474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F94F0;
      }
      goto L_089F947C;
    }
L_089F947C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089F9494u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 129u, 0x08AA0804u>(ctx, &aot_mem) && ctx.pc == 0x089F9494u) goto L_089F9494;
    return;
L_089F9494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2092), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-17132)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2096), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089F94D0u);
    ctx.gpr[6] = (0u | 168u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089F94D0u) goto L_089F94D0;
    return;
L_089F94D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-17132)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-17132), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F94F4;
      }
      goto L_089F94E8;
    }
L_089F94E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F94F4;
      }
      goto L_089F94F0;
    }
L_089F94F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089F94F4;
L_089F94F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F950C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17292)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17288), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17296)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17284), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17268)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6944));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21796));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089F95C0u);
    ctx.gpr[6] = (0u | 1040u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x089F95C0u) goto L_089F95C0;
    return;
L_089F95C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F95CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (0u | 39u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F95FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17029));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089F95FCu) goto L_089F95FC;
    return;
L_089F95FC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2208u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F9638u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x089F9638u) goto L_089F9638;
    return;
L_089F9638:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16488), 0u);
    ctx.gpr[4] = (0u | 1750u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16492), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16500), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9680:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9688:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9690:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9698:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F96A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F96A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F96D4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089F9688;
L_089F96D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F9710;
      }
      goto L_089F96E4;
    }
L_089F96E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9708;
      }
      goto L_089F96EC;
    }
L_089F96EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089F96F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089F9908;
L_089F96F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9718;
      }
      goto L_089F9700;
    }
L_089F9700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F97AC;
      }
      goto L_089F9708;
    }
L_089F9708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F9710;
    }
L_089F9710:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F9718;
    }
L_089F9718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F97A4;
      }
      goto L_089F9724;
    }
L_089F9724:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089F9730u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089F98F8;
L_089F9730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F979C;
      }
      goto L_089F973C;
    }
L_089F973C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x089F975Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6320));
    goto L_089F9690;
L_089F975C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9794;
      }
      goto L_089F9768;
    }
L_089F9768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F98C8;
      }
      goto L_089F978C;
    }
L_089F978C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F9794;
    }
L_089F9794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F979C;
    }
L_089F979C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F97A4;
    }
L_089F97A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F97AC;
    }
L_089F97AC:
    ctx.gpr[20] = (2277u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6320));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089F97C0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089F9688;
L_089F97C0:
    ctx.gpr[19] = (0u | 27u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F985C;
      }
      goto L_089F97CC;
    }
L_089F97CC:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(172));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089F97DCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089F96A0;
L_089F97DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F985C;
      }
      goto L_089F97E4;
    }
L_089F97E4:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20520));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089F9800u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089F9900;
L_089F9800:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089F9880;
      }
      goto L_089F9808;
    }
L_089F9808:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089F9814u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 177u, 0x088B0F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089F9814u) goto L_089F9814;
    return;
L_089F9814:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F985C;
      }
      goto L_089F981C;
    }
L_089F981C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089F9838u);
    ctx.gpr[9] = (0u | 1u);
    goto L_089F9690;
L_089F9838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9878;
      }
      goto L_089F985C;
    }
L_089F985C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089F9868u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089F9688;
L_089F9868:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F98C8;
      }
      goto L_089F9870;
    }
L_089F9870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F9878;
    }
L_089F9878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F9880;
    }
L_089F9880:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089F989Cu);
    ctx.gpr[9] = (0u | 1u);
    goto L_089F9690;
L_089F989C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F985C;
      }
      goto L_089F98C0;
    }
L_089F98C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F98C8;
    }
L_089F98C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089F98CC;
L_089F98CC:
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
L_089F98F0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F98F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9900:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F9950u);
    ctx.gpr[9] = (0u | 1u);
    goto L_089F9690;
L_089F9950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (0u | 27u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F9A64;
      }
      goto L_089F9960;
    }
L_089F9960:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(172));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089F9970u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089F96A0;
L_089F9970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F9A5C;
      }
      goto L_089F997C;
    }
L_089F997C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089F9988u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089F9698;
L_089F9988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F9A54;
      }
      goto L_089F9994;
    }
L_089F9994:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F99A8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3472));
    goto L_089F98F0;
L_089F99A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9A4C;
      }
      goto L_089F99B0;
    }
L_089F99B0:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F99C4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17068));
    goto L_089F98F0;
L_089F99C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9A44;
      }
      goto L_089F99CC;
    }
L_089F99CC:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F99E0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17057));
    goto L_089F98F0;
L_089F99E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9A3C;
      }
      goto L_089F99E8;
    }
L_089F99E8:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F99FCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17045));
    goto L_089F98F0;
L_089F99FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9A34;
      }
      goto L_089F9A04;
    }
L_089F9A04:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(173));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089F9A24u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089F98F0;
L_089F9A24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9A6C;
      }
      goto L_089F9A2C;
    }
L_089F9A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A34;
    }
L_089F9A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A3C;
    }
L_089F9A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A44;
    }
L_089F9A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A4C;
    }
L_089F9A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A54;
    }
L_089F9A54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A5C;
    }
L_089F9A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A64;
    }
L_089F9A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A6C;
    }
L_089F9A6C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089F9A78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3444));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F9A78u) goto L_089F9A78;
    return;
L_089F9A78:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_089F9A7C;
L_089F9A7C:
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
L_089F9A9C:
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20552));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17124)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17128)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17100)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-17088)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17092)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17084), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-17076), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-17112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-17116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-17108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-17104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-17096), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (2277u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6320));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-17080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F9BB4u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17072), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089F9610;
L_089F9BB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9BC8:
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_089F9C10;
      }
      goto L_089F9C0C;
    }
L_089F9C0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    goto L_089F9C10;
L_089F9C10:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089F9D8C;
      }
      goto L_089F9C1C;
    }
L_089F9C1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-16212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089F9C3C;
      }
      goto L_089F9C28;
    }
L_089F9C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_089F9D48;
    }
    goto L_089F9C38;
L_089F9C38:
    ctx.gpr[4] = (2232u << 16u);
    goto L_089F9C3C;
L_089F9C3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (50426u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9CA4;
      }
      goto L_089F9C64;
    }
L_089F9C64:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_089F9CA8;
    }
    goto L_089F9C80;
L_089F9C80:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_089F9CA8;
    }
    goto L_089F9C90;
L_089F9C90:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089F9CA8;
      }
      goto L_089F9CA0;
    }
L_089F9CA0:
    ctx.gpr[5] = (0u | 1u);
    goto L_089F9CA4;
L_089F9CA4:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089F9CA8;
L_089F9CA8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_089F9D48;
    }
    goto L_089F9CB0;
L_089F9CB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9D08;
      }
      goto L_089F9CC8;
    }
L_089F9CC8:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_089F9D0C;
    }
    goto L_089F9CE4;
L_089F9CE4:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_089F9D0C;
    }
    goto L_089F9CF4;
L_089F9CF4:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089F9D0C;
      }
      goto L_089F9D04;
    }
L_089F9D04:
    ctx.gpr[5] = (0u | 1u);
    goto L_089F9D08;
L_089F9D08:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089F9D0C;
L_089F9D0C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F9D44;
      }
      goto L_089F9D14;
    }
L_089F9D14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089F9D3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F9D3Cu) goto L_089F9D3C;
    return;
L_089F9D3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9D8C;
      }
      goto L_089F9D44;
    }
L_089F9D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_089F9D48;
L_089F9D48:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089F9D7C;
    }
    goto L_089F9D7C;
L_089F9D7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089F9EF0;
      }
      goto L_089F9D8C;
    }
L_089F9D8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089F9DE0;
      }
      goto L_089F9D9C;
    }
L_089F9D9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089F9DD0;
    }
    goto L_089F9DD0;
L_089F9DD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089F9EF0;
      }
      goto L_089F9DE0;
    }
L_089F9DE0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9E50;
      }
      goto L_089F9DF0;
    }
L_089F9DF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089F9E28;
    }
    goto L_089F9E28;
L_089F9E28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9E48;
      }
      goto L_089F9E44;
    }
L_089F9E44:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089F9E48;
L_089F9E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9EA0;
      }
      goto L_089F9E50;
    }
L_089F9E50:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9EA0;
      }
      goto L_089F9E5C;
    }
L_089F9E5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089F9E94;
    }
    goto L_089F9E94;
L_089F9E94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089F9EA0;
L_089F9EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089F9EF0;
      }
      goto L_089F9EB0;
    }
L_089F9EB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16153u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16224)));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089F9EEC;
    }
    goto L_089F9EEC;
L_089F9EEC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089F9EF0;
L_089F9EF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_089F9F10;
      }
      goto L_089F9EFC;
    }
L_089F9EFC:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9F10;
      }
      goto L_089F9F08;
    }
L_089F9F08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    goto L_089F9F10;
L_089F9F10:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9F30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (15605u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[4] = (2232u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[16] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-16224)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[18] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(15296));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[19] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089F9FB8;
    }
    goto L_089F9FB8;
L_089F9FB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-16224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089F9FCC;
      }
      goto L_089F9FC8;
    }
L_089F9FC8:
    ctx.gpr[16] = (0u | 1u);
    goto L_089F9FCC;
L_089F9FCC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(425)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9FDC;
      }
      goto L_089F9FD8;
    }
L_089F9FD8:
    ctx.gpr[16] = (ctx.gpr[16] | 2u);
    goto L_089F9FDC;
L_089F9FDC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(423)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9FEC;
      }
      goto L_089F9FE8;
    }
L_089F9FE8:
    ctx.gpr[16] = (ctx.gpr[16] | 4u);
    goto L_089F9FEC;
L_089F9FEC:
    ctx.gpr[31] = (0x089F9FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 143u, 0x088ED1B0u>(ctx, &aot_mem) && ctx.pc == 0x089F9FF4u) goto L_089F9FF4;
    return;
L_089F9FF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA000;
      }
      goto L_089F9FFC;
    }
L_089F9FFC:
    ctx.gpr[16] = (ctx.gpr[16] | 8u);
    goto L_089FA000;
L_089FA000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-16200)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FA018;
      }
      goto L_089FA00C;
    }
L_089FA00C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-16208), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FA030;
      }
      goto L_089FA018;
    }
L_089FA018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-16208)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_089FA02C;
    }
    goto L_089FA02C;
L_089FA02C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-16208), ctx.gpr[4]);
    goto L_089FA030;
L_089FA030:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-16200), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    goto L_089FA038;
L_089FA038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA04C;
      }
      goto L_089FA044;
    }
L_089FA044:
    ctx.gpr[31] = (0x089FA04Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089F9BF0;
L_089FA04C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089FA038;
      }
      goto L_089FA05C;
    }
L_089FA05C:
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
L_089FA078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FA098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x089FA098u) goto L_089FA098;
    return;
L_089FA098:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089FA0A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3384));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA0A4u) goto L_089FA0A4;
    return;
L_089FA0A4:
    ctx.gpr[31] = (0x089FA0ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA0ACu) goto L_089FA0AC;
    return;
L_089FA0AC:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16908));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16872));
    goto L_089FA0C0;
L_089FA0C0:
    ctx.gpr[17] = (ctx.gpr[19] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA0E8;
      }
      goto L_089FA0D4;
    }
L_089FA0D4:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089FA0E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA0E4u) goto L_089FA0E4;
    return;
L_089FA0E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089FA0E8;
L_089FA0E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA0C0;
      }
      goto L_089FA0FC;
    }
L_089FA0FC:
    ctx.gpr[31] = (0x089FA104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x089FA104u) goto L_089FA104;
    return;
L_089FA104:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15296));
    goto L_089FA110;
L_089FA110:
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA110;
      }
      goto L_089FA138;
    }
L_089FA138:
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
L_089FA154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(-16908));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FA1BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 39u, 0x089FC9E4u>(ctx, &aot_mem) && ctx.pc == 0x089FA1BCu) goto L_089FA1BC;
    return;
L_089FA1BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA1C8:
    // CCoronas::UpdateCoronaCoors: the same draw distance as RegisterCorona.
    ctx.fpr[12] = ctx.fpr[12] * lcs::corona_distance_scale();
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FA220;
      }
      goto L_089FA20C;
    }
L_089FA20C:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15296));
      if (branch_taken) {
          goto L_089FA228;
      }
      goto L_089FA220;
    }
L_089FA220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA298;
      }
      goto L_089FA228;
    }
L_089FA228:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 7u);
      if (branch_taken) {
          goto L_089FA258;
      }
      goto L_089FA230;
    }
L_089FA230:
    ctx.gpr[9] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FA258;
      }
      goto L_089FA248;
    }
L_089FA248:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 56 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FA228;
      }
      goto L_089FA258;
    }
L_089FA258:
    ctx.gpr[4] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FA28C;
      }
      goto L_089FA264;
    }
L_089FA264:
    ctx.gpr[4] = (ctx.gpr[7] << 7u);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA294;
      }
      goto L_089FA280;
    }
L_089FA280:
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089FA28C;
L_089FA28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA298;
      }
      goto L_089FA294;
    }
L_089FA294:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
    goto L_089FA298;
L_089FA298:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA2A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22640)));
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089FA320u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA320u) goto L_089FA320;
    return;
L_089FA320:
    ctx.gpr[8] = (ctx.fcr31);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3969));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.fcr31 = ctx.gpr[8] & 0x0181FFFFu;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_089FA4C0;
      }
      goto L_089FA364;
    }
L_089FA364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FA4C0;
      }
      goto L_089FA380;
    }
L_089FA380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11104)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089FA3A0u);
    ctx.gpr[22] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089FA3A0u) goto L_089FA3A0;
    return;
L_089FA3A0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (18804u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22640)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[2] = (ctx.gpr[2] | 9214u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11128)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[2] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089FA42Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    goto L_089FA154;
L_089FA42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FA4C0;
      }
      goto L_089FA450;
    }
L_089FA450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA4C0;
      }
      goto L_089FA45C;
    }
L_089FA45C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16840u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11120)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11124)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11128)));
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089FA4C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    goto L_089FA154;
L_089FA4C0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089FA4D8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA4D8u) goto L_089FA4D8;
    return;
L_089FA4D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA4F4;
      }
      goto L_089FA4E0;
    }
L_089FA4E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-16220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-16216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089FA508;
      }
      goto L_089FA4F4;
    }
L_089FA4F4:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9216u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-16216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-16220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089FA508;
L_089FA508:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA53C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FA5D8;
      }
      goto L_089FA57C;
    }
L_089FA57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA5D8;
      }
      goto L_089FA590;
    }
L_089FA590:
    ctx.gpr[4] = (16245u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FA5D0;
      }
      goto L_089FA5B0;
    }
L_089FA5B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089FA5E0;
      }
      goto L_089FA5C8;
    }
L_089FA5C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA5F4;
      }
      goto L_089FA5D0;
    }
L_089FA5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB15C;
      }
      goto L_089FA5D8;
    }
L_089FA5D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB15C;
      }
      goto L_089FA5E0;
    }
L_089FA5E0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089FA5F4;
L_089FA5F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB15C;
      }
      goto L_089FA608;
    }
L_089FA608:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089FA630;
      }
      goto L_089FA614;
    }
L_089FA614:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7372)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FA630;
      }
      goto L_089FA630;
    }
L_089FA630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089FA64C;
      }
      goto L_089FA63C;
    }
L_089FA63C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FB148;
      }
      goto L_089FA644;
    }
L_089FA644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA65C;
      }
      goto L_089FA64C;
    }
L_089FA64C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FAF10;
      }
      goto L_089FA654;
    }
L_089FA654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB148;
      }
      goto L_089FA65C;
    }
L_089FA65C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FA670u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089F9BC8;
L_089FA670:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA694;
    }
L_089FA694:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA6AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA6B4;
    }
L_089FA6B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FA6D8;
      }
      goto L_089FA6C8;
    }
L_089FA6C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA6DC;
      }
      goto L_089FA6D8;
    }
L_089FA6D8:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA6DC;
L_089FA6DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA6E4;
    }
L_089FA6E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 96u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA708;
      }
      goto L_089FA700;
    }
L_089FA700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089FA70C;
      }
      goto L_089FA708;
    }
L_089FA708:
    ctx.gpr[21] = (0u | 1u);
    goto L_089FA70C;
L_089FA70C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] >> 11u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA730;
      }
      goto L_089FA72C;
    }
L_089FA72C:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA730;
L_089FA730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA738;
    }
L_089FA738:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FA778;
      }
      goto L_089FA74C;
    }
L_089FA74C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FA778;
      }
      goto L_089FA75C;
    }
L_089FA75C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FA7C4;
      }
      goto L_089FA778;
    }
L_089FA778:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 96u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA79C;
      }
      goto L_089FA794;
    }
L_089FA794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089FA7A0;
      }
      goto L_089FA79C;
    }
L_089FA79C:
    ctx.gpr[21] = (0u | 1u);
    goto L_089FA7A0;
L_089FA7A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] >> 11u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA7C4;
      }
      goto L_089FA7C0;
    }
L_089FA7C0:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA7C4;
L_089FA7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA7CC;
    }
L_089FA7CC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[18] << 7u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA7EC;
      }
      goto L_089FA7E8;
    }
L_089FA7E8:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA7EC;
L_089FA7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA7F4;
    }
L_089FA7F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FA818;
      }
      goto L_089FA808;
    }
L_089FA808:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA838;
      }
      goto L_089FA818;
    }
L_089FA818:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[18] << 7u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA838;
      }
      goto L_089FA834;
    }
L_089FA834:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA838;
L_089FA838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA840;
    }
L_089FA840:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[18] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA860;
      }
      goto L_089FA85C;
    }
L_089FA85C:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA860;
L_089FA860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA868;
    }
L_089FA868:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FA88C;
      }
      goto L_089FA87C;
    }
L_089FA87C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA8AC;
      }
      goto L_089FA88C;
    }
L_089FA88C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[18] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA8AC;
      }
      goto L_089FA8A8;
    }
L_089FA8A8:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA8AC;
L_089FA8AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA8B4;
    }
L_089FA8B4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[18] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA8D4;
      }
      goto L_089FA8D0;
    }
L_089FA8D0:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA8D4;
L_089FA8D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA8DC;
    }
L_089FA8DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FA900;
      }
      goto L_089FA8F0;
    }
L_089FA8F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA920;
      }
      goto L_089FA900;
    }
L_089FA900:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[18] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA920;
      }
      goto L_089FA91C;
    }
L_089FA91C:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA920;
L_089FA920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA928;
    }
L_089FA928:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA990;
      }
      goto L_089FA93C;
    }
L_089FA93C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 96u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA964;
      }
      goto L_089FA95C;
    }
L_089FA95C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089FA968;
      }
      goto L_089FA964;
    }
L_089FA964:
    ctx.gpr[21] = (0u | 1u);
    goto L_089FA968;
L_089FA968:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] >> 11u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA994;
      }
      goto L_089FA988;
    }
L_089FA988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089FA994;
      }
      goto L_089FA990;
    }
L_089FA990:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FA994;
L_089FA994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FA99C;
    }
L_089FA99C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FA9C0;
      }
      goto L_089FA9B0;
    }
L_089FA9B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA2C;
      }
      goto L_089FA9C0;
    }
L_089FA9C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA28;
      }
      goto L_089FA9D4;
    }
L_089FA9D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 96u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA9FC;
      }
      goto L_089FA9F4;
    }
L_089FA9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089FAA00;
      }
      goto L_089FA9FC;
    }
L_089FA9FC:
    ctx.gpr[21] = (0u | 1u);
    goto L_089FAA00;
L_089FAA00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] >> 11u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA2C;
      }
      goto L_089FAA20;
    }
L_089FAA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089FAA2C;
      }
      goto L_089FAA28;
    }
L_089FAA28:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FAA2C;
L_089FAA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FAA34;
    }
L_089FAA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FAA3C;
    }
L_089FAA3C:
    ctx.gpr[31] = (0x089FAA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 323u, 0x08965524u>(ctx, &aot_mem) && ctx.pc == 0x089FAA44u) goto L_089FAA44;
    return;
L_089FAA44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA64;
      }
      goto L_089FAA4C;
    }
L_089FAA4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA64;
      }
      goto L_089FAA60;
    }
L_089FAA60:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FAA64;
L_089FAA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FAA6C;
    }
L_089FAA6C:
    ctx.gpr[31] = (0x089FAA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 323u, 0x08965524u>(ctx, &aot_mem) && ctx.pc == 0x089FAA74u) goto L_089FAA74;
    return;
L_089FAA74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FAA7C;
    }
L_089FAA7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(60) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA98;
      }
      goto L_089FAA94;
    }
L_089FAA94:
    ctx.gpr[20] = (0u | 1u);
    goto L_089FAA98;
L_089FAA98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAAD8;
      }
      goto L_089FAAA8;
    }
L_089FAAA8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAAC4;
      }
      goto L_089FAAB0;
    }
L_089FAAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FAAD0;
      }
      goto L_089FAAC4;
    }
L_089FAAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089FAAD0;
L_089FAAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB15C;
      }
      goto L_089FAAD8;
    }
L_089FAAD8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAB48;
      }
      goto L_089FAAE0;
    }
L_089FAAE0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(42)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(41)));
    ctx.gpr[3] = (ctx.gpr[8] & 16u);
    ctx.gpr[12] = (ctx.gpr[8] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[8] = (0u < ctx.gpr[3] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089FAB40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 39u, 0x089FC9E4u>(ctx, &aot_mem) && ctx.pc == 0x089FAB40u) goto L_089FAB40;
    return;
L_089FAB40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FABB0;
      }
      goto L_089FAB48;
    }
L_089FAB48:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FABB0;
      }
      goto L_089FAB50;
    }
L_089FAB50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(42)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(41)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    ctx.gpr[3] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089FABB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 39u, 0x089FC9E4u>(ctx, &aot_mem) && ctx.pc == 0x089FABB0u) goto L_089FABB0;
    return;
L_089FABB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_089FACD4;
      }
      goto L_089FABC8;
    }
L_089FABC8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FACD4;
      }
      goto L_089FABD0;
    }
L_089FABD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FABF4;
      }
      goto L_089FABDC;
    }
L_089FABDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FABF4;
      }
      goto L_089FABE8;
    }
L_089FABE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAC94;
      }
      goto L_089FABF4;
    }
L_089FABF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11136)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 6u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089FAC88u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 343u, 0x08AE5E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FAC88u) goto L_089FAC88;
    return;
L_089FAC88:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FACD4;
      }
      goto L_089FAC94;
    }
L_089FAC94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089FACD4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 343u, 0x08AE5E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FACD4u) goto L_089FACD4;
    return;
L_089FACD4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FADFC;
      }
      goto L_089FACDC;
    }
L_089FACDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAD60;
      }
      goto L_089FACEC;
    }
L_089FACEC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x089FAD58u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 343u, 0x08AE5E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FAD58u) goto L_089FAD58;
    return;
L_089FAD58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FADFC;
      }
      goto L_089FAD60;
    }
L_089FAD60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FADFC;
      }
      goto L_089FAD70;
    }
L_089FAD70:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FADFC;
      }
      goto L_089FAD78;
    }
L_089FAD78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FADFC;
      }
      goto L_089FAD90;
    }
L_089FAD90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089FADFCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 343u, 0x08AE5E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FADFCu) goto L_089FADFC;
    return;
L_089FADFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FAF08;
      }
      goto L_089FAE14;
    }
L_089FAE14:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAEA4;
      }
      goto L_089FAE1C;
    }
L_089FAE1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11136)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
        goto L_089FAE44;
    }
    goto L_089FAE40;
L_089FAE40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    goto L_089FAE44;
L_089FAE44:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (16752u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.gpr[2] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (16928u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[18] = lcs::lamp_pool_distance();  // the 40 here is how far a lamp lights the ground
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[8] = (0u | 128u);
    ctx.gpr[31] = (0x089FAE9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 328u, 0x0892AA10u>(ctx, &aot_mem) && ctx.pc == 0x089FAE9Cu) goto L_089FAE9C;
    return;
L_089FAE9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAF08;
      }
      goto L_089FAEA4;
    }
L_089FAEA4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAF08;
      }
      goto L_089FAEAC;
    }
L_089FAEAC:
    ctx.gpr[2] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (16256u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[2] = (16928u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[18] = lcs::lamp_pool_distance();  // the 40 here is how far a lamp lights the ground
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089FAF08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 328u, 0x0892AA10u>(ctx, &aot_mem) && ctx.pc == 0x089FAF08u) goto L_089FAF08;
    return;
L_089FAF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB148;
      }
      goto L_089FAF10;
    }
L_089FAF10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6948)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB148;
      }
      goto L_089FAF2C;
    }
L_089FAF2C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FAF40u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089F9BC8;
L_089FAF40:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
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
    ctx.gpr[31] = (0x089FAFF4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089FAFF4u) goto L_089FAFF4;
    return;
L_089FAFF4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB148;
      }
      goto L_089FB054;
    }
L_089FB054:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6948)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x089FB074u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB074u) goto L_089FB074;
    return;
L_089FB074:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(510));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(510));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(510));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(33));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.fpr[12] = std::sqrt(ctx.fpr[20]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6948)));
    ctx.gpr[8] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (17136u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x089FB148u);
    ctx.gpr[8] = (0u | 255u);
    goto L_089FA154;
L_089FB148:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA608;
      }
      goto L_089FB15C;
    }
L_089FB15C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB18C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FB1E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 632u, 0x088738A0u>(ctx, &aot_mem) && ctx.pc == 0x089FB1E0u) goto L_089FB1E0;
    return;
L_089FB1E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089FB1ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 393u, 0x0894E348u>(ctx, &aot_mem) && ctx.pc == 0x089FB1ECu) goto L_089FB1EC;
    return;
L_089FB1EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FB1F8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 394u, 0x0894E358u>(ctx, &aot_mem) && ctx.pc == 0x089FB1F8u) goto L_089FB1F8;
    return;
L_089FB1F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (0u | 8u);
    // Distant lights, drawn at the point where Project2DFX hooks CCoronas::Render.
    lcs::lod_lights_render(rt, ctx);
    ctx.gpr[31] = (0x089FB228u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB228u) goto L_089FB228;
    return;
L_089FB228:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FB234u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB234u) goto L_089FB234;
    return;
L_089FB234:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FB240u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB240u) goto L_089FB240;
    return;
L_089FB240:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FB24Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB24Cu) goto L_089FB24C;
    return;
L_089FB24C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16584));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16424));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-16908));
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(15296));
    ctx.gpr[23] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    goto L_089FB2D0;
L_089FB2D0:
    ctx.gpr[13] = (ctx.gpr[30] << 7u);
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
    ctx.gpr[13] = (ctx.gpr[13] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[13] + ctx.gpr[18]);
    ctx.gpr[12] = (0u | 5u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089FB2E8;
L_089FB2E8:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[13] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[7] = (ctx.gpr[13] + ctx.gpr[12]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(81)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(87)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(99)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[4] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) > 0;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_089FB2E8;
      }
      goto L_089FB33C;
    }
L_089FB33C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_089FB990;
      }
      goto L_089FB348;
    }
L_089FB348:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089FB360;
      }
      goto L_089FB354;
    }
L_089FB354:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FB990;
      }
      goto L_089FB360;
    }
L_089FB360:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[31] = (0x089FB378u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB378u) goto L_089FB378;
    return;
L_089FB378:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_089FB978;
      }
      goto L_089FB380;
    }
L_089FB380:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089FB3DC;
      }
      goto L_089FB3A0;
    }
L_089FB3A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
        goto L_089FB3E0;
    }
    goto L_089FB3B4;
L_089FB3B4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
        goto L_089FB3E0;
    }
    goto L_089FB3C8;
L_089FB3C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB3FC;
      }
      goto L_089FB3DC;
    }
L_089FB3DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    goto L_089FB3E0;
L_089FB3E0:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089FB558;
      }
      goto L_089FB3FC;
    }
L_089FB3FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB498;
      }
      goto L_089FB418;
    }
L_089FB418:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB490;
      }
      goto L_089FB42C;
    }
L_089FB42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089FB47Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB47Cu) goto L_089FB47C;
    return;
L_089FB47C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_089FB490;
      }
      goto L_089FB484;
    }
L_089FB484:
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089FB498;
      }
      goto L_089FB490;
    }
L_089FB490:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089FB498;
L_089FB498:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(101)));
      if (branch_taken) {
          goto L_089FB4EC;
      }
      goto L_089FB4AC;
    }
L_089FB4AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_089FB4EC;
L_089FB4EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB558;
      }
      goto L_089FB4F4;
    }
L_089FB4F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u - ctx.gpr[5]);
        goto L_089FB508;
    }
    goto L_089FB508;
L_089FB508:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB554;
      }
      goto L_089FB528;
    }
L_089FB528:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(70))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u - ctx.gpr[5]);
        goto L_089FB53C;
    }
    goto L_089FB53C;
L_089FB53C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB558;
      }
      goto L_089FB554;
    }
L_089FB554:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    goto L_089FB558;
L_089FB558:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FB990;
      }
      goto L_089FB560;
    }
L_089FB560:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16128u << 16u);
      if (branch_taken) {
          goto L_089FB990;
      }
      goto L_089FB578;
    }
L_089FB578:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089FB5C8;
      }
      goto L_089FB5B0;
    }
L_089FB5B0:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
      if (branch_taken) {
          goto L_089FB5E8;
      }
      goto L_089FB5C8;
    }
L_089FB5C8:
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    goto L_089FB5E8;
L_089FB5E8:
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FB610;
      }
      goto L_089FB5F4;
    }
L_089FB5F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FB630;
      }
      goto L_089FB5FC;
    }
L_089FB5FC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FB608u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB608u) goto L_089FB608;
    return;
L_089FB608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089FB634;
      }
      goto L_089FB610;
    }
L_089FB610:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB630;
      }
      goto L_089FB61C;
    }
L_089FB61C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FB628u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB628u) goto L_089FB628;
    return;
L_089FB628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089FB634;
      }
      goto L_089FB630;
    }
L_089FB630:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_089FB634;
L_089FB634:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB834;
      }
      goto L_089FB63C;
    }
L_089FB63C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089FB660;
    }
    goto L_089FB660;
L_089FB660:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8084)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089FB6A8;
      }
      goto L_089FB684;
    }
L_089FB684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x089FB690u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 602u, 0x08873598u>(ctx, &aot_mem) && ctx.pc == 0x089FB690u) goto L_089FB690;
    return;
L_089FB690:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089FB6A8;
L_089FB6A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089FB6B4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB6B4u) goto L_089FB6B4;
    return;
L_089FB6B4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
      if (branch_taken) {
          goto L_089FB7E0;
      }
      goto L_089FB714;
    }
L_089FB714:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[16];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[6] = (15733u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 49807u);
    ctx.gpr[7] = (16051u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 13107u);
    ctx.gpr[8] = (15897u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[1];
    ctx.fpr[4] = ctx.fpr[15] - ctx.fpr[1];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[3];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_089FB790;
    }
    goto L_089FB790;
L_089FB790:
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[20];
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[20];
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[20];
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[31] = (0x089FB7D8u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 326u, 0x08A26120u>(ctx, &aot_mem) && ctx.pc == 0x089FB7D8u) goto L_089FB7D8;
    return;
L_089FB7D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB834;
      }
      goto L_089FB7E0;
    }
L_089FB7E0:
    ctx.fpr[15] = ctx.fpr[19] / ctx.fpr[20];
    ctx.gpr[4] = (16800u << 16u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[16] = ctx.fpr[0] / ctx.fpr[20];
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[20];
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089FB834u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 339u, 0x08A264E0u>(ctx, &aot_mem) && ctx.pc == 0x089FB834u) goto L_089FB834;
    return;
L_089FB834:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB990;
      }
      goto L_089FB840;
    }
L_089FB840:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_089FB860;
    }
    goto L_089FB84C;
L_089FB84C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FB874;
      }
      goto L_089FB854;
    }
L_089FB854:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_089FB878;
      }
      goto L_089FB860;
    }
L_089FB860:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB874;
      }
      goto L_089FB868;
    }
L_089FB868:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_089FB878;
      }
      goto L_089FB874;
    }
L_089FB874:
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    goto L_089FB878;
L_089FB878:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB970;
      }
      goto L_089FB880;
    }
L_089FB880:
    ctx.gpr[4] = (ctx.gpr[15] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089FB898u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB898u) goto L_089FB898;
    return;
L_089FB898:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x089FB960u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 326u, 0x08A26120u>(ctx, &aot_mem) && ctx.pc == 0x089FB960u) goto L_089FB960;
    return;
L_089FB960:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FB880;
      }
      goto L_089FB970;
    }
L_089FB970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB990;
      }
      goto L_089FB978;
    }
L_089FB978:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089FB990;
L_089FB990:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[4] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FB2D0;
      }
      goto L_089FB9A8;
    }
L_089FB9A8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FB9B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB9B4u) goto L_089FB9B4;
    return;
L_089FB9B4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FB9C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB9C0u) goto L_089FB9C0;
    return;
L_089FB9C0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FB9CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB9CCu) goto L_089FB9CC;
    return;
L_089FB9CC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FB9D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB9D8u) goto L_089FB9D8;
    return;
L_089FB9D8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FB9E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB9E4u) goto L_089FB9E4;
    return;
L_089FB9E4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089FB9F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FB9F0u) goto L_089FB9F0;
    return;
L_089FB9F0:
    ctx.gpr[4] = (17152u << 16u);
    ctx.gpr[22] = (2277u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(15264));
    goto L_089FBA08;
L_089FBA08:
    ctx.gpr[17] = (ctx.gpr[16] << 7u);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBB8C;
      }
      goto L_089FBA24;
    }
L_089FBA24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBB8C;
      }
      goto L_089FBA34;
    }
L_089FBA34:
    ctx.gpr[19] = (0u | 0u);
    goto L_089FBA38;
L_089FBA38:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBB74;
      }
      goto L_089FBA4C;
    }
L_089FBA4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(101)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[23] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_089FBB74;
      }
      goto L_089FBA58;
    }
L_089FBA58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[21] - ctx.gpr[19]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(58))))));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(82)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(83)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[28];
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(89)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[12] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[31] = (0x089FBB74u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[8]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 657u, 0x08867EE8u>(ctx, &aot_mem) && ctx.pc == 0x089FBB74u) goto L_089FBB74;
    return;
L_089FBB74:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FBA38;
      }
      goto L_089FBB8C;
    }
L_089FBB8C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FBA08;
      }
      goto L_089FBBA4;
    }
L_089FBBA4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FBBB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBBB0u) goto L_089FBBB0;
    return;
L_089FBBB0:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FBBBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBBBCu) goto L_089FBBBC;
    return;
L_089FBBBC:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FBBC8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBBC8u) goto L_089FBBC8;
    return;
L_089FBBC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBC10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[22]);
    ctx.gpr[22] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[21]);
    ctx.gpr[21] = (2277u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(15296));
      if (branch_taken) {
          goto L_089FBCB4;
      }
      goto L_089FBC70;
    }
L_089FBC70:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    goto L_089FBC7C;
L_089FBC7C:
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[21]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
      if (branch_taken) {
          goto L_089FBC7C;
      }
      goto L_089FBCAC;
    }
L_089FBCAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 11u, 0x089FC100u>(ctx, &aot_mem); return;
      }
      goto L_089FBCB4;
    }
L_089FBCB4:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089FBCC0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBCC0u) goto L_089FBCC0;
    return;
L_089FBCC0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FBCCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBCCCu) goto L_089FBCCC;
    return;
L_089FBCCC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FBCD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBCD8u) goto L_089FBCD8;
    return;
L_089FBCD8:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FBCE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBCE4u) goto L_089FBCE4;
    return;
L_089FBCE4:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FBCF0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBCF0u) goto L_089FBCF0;
    return;
L_089FBCF0:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FBCFCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBCFCu) goto L_089FBCFC;
    return;
L_089FBCFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16908));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089FBD14u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089FBD14u) goto L_089FBD14;
    return;
L_089FBD14:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-7960));
    goto L_089FBD68;
L_089FBD68:
    ctx.gpr[4] = (ctx.gpr[17] << 7u);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 4u, 0x089FC0A0u>(ctx, &aot_mem); return;
      }
      goto L_089FBD84;
    }
L_089FBD84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089FBD9C;
      }
      goto L_089FBD90;
    }
L_089FBD90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 4u, 0x089FC0A0u>(ctx, &aot_mem); return;
      }
      goto L_089FBD9C;
    }
L_089FBD9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 4u, 0x089FC0A0u>(ctx, &aot_mem); return;
      }
      goto L_089FBDA8;
    }
L_089FBDA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBE1C;
      }
      goto L_089FBDB8;
    }
L_089FBDB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FBE70;
      }
      goto L_089FBDD0;
    }
L_089FBDD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089FBE00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBE00u) goto L_089FBE00;
    return;
L_089FBE00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBE70;
      }
      goto L_089FBE08;
    }
L_089FBE08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089FBE70;
      }
      goto L_089FBE1C;
    }
L_089FBE1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089FBE4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBE4Cu) goto L_089FBE4C;
    return;
L_089FBE4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBE70;
      }
      goto L_089FBE54;
    }
L_089FBE54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089FBE70;
L_089FBE70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 4u, 0x089FC0A0u>(ctx, &aot_mem); return;
      }
      goto L_089FBE80;
    }
L_089FBE80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 4u, 0x089FC0A0u>(ctx, &aot_mem); return;
      }
      goto L_089FBE94;
    }
L_089FBE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 4u, 0x089FC0A0u>(ctx, &aot_mem); return;
      }
      goto L_089FBEB4;
    }
L_089FBEB4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089FBEECu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBEECu) goto L_089FBEEC;
    return;
L_089FBEEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 4u, 0x089FC0A0u>(ctx, &aot_mem); return;
      }
      goto L_089FBEF4;
    }
L_089FBEF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_089FBF0C;
    }
    goto L_089FBF0C;
L_089FBF0C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 4u, 0x089FC0A0u>(ctx, &aot_mem); return;
      }
      goto L_089FBF20;
    }
L_089FBF20:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_089FBF48;
    }
    goto L_089FBF40;
L_089FBF40:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089FBF74;
      }
      goto L_089FBF48;
    }
L_089FBF48:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089FBF64;
    }
    goto L_089FBF64;
L_089FBF64:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089FBF74;
    }
    goto L_089FBF74;
L_089FBF74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8096)));
    ctx.gpr[4] = (17254u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.pc = 0x089FC000u; return;
}

void recomp_unit_0125(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0125_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_125(Runtime &runtime) {
    runtime.register_generated_unit(125u, 0x089F8000u, 16384u, &recomp_unit_0125, &recomp_unit_0125_entry);
    runtime.register_function(0x089F8004u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8040u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8050u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8098u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8104u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8118u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8120u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8124u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8154u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8188u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8218u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8248u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8268u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8284u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F828Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8294u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F829Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F82E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F82F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8320u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8354u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8360u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8364u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8374u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8380u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F838Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8398u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F83A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F83B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F83F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F83F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8404u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F840Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8484u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8494u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F84A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8604u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F860Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F862Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8648u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8658u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F865Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8678u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8680u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F869Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F86A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F86ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8728u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8734u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8758u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8760u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8768u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F878Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8794u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F87A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F87B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F87C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F87C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F87D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F87DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F87E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F87E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8808u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F889Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88B8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8900u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8908u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F891Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8930u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F893Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8954u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8960u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F89D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A98u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8AECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8AF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CC0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D24u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DBCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DC8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DD4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DE0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DF4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DFCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E18u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E34u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E50u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E6Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E90u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8EA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8EC0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8ECCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8ED4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8EE4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8EF8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F60u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8FD8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8FE8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9010u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9078u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F90A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F90C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F90D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F90E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9150u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F91B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9208u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9234u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9244u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9248u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9250u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9268u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9274u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9280u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9294u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F929Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9314u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9328u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9344u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F940Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9410u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9418u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9450u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9474u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F947Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9494u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F950Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9610u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9638u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9680u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9688u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9690u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9698u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9700u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9708u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9710u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9718u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9724u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9730u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F973Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F975Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9768u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F978Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9794u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F979Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9800u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9808u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9814u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F981Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9838u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F985Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9868u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9870u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9878u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9880u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F989Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F98C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F98C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F98CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F98F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F98F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9900u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9908u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9950u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9960u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9970u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F997Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9988u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9994u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99C4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A24u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A34u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A4Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A54u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A5Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A6Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A7Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A9Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9AB8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9BB4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9BC8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9BF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C0Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C38u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C90u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CA0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CA8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CB0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CC8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CE4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CF4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D08u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D0Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D7Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D8Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D9Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9DD0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9DE0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9DF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E50u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E5Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9EA0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9EB0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9EECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9EF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9EFCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9F08u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9F10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9F30u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FB8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FC8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FCCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FD8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FDCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FE8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FF4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FFCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA000u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA00Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA018u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA02Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA030u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA038u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA044u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA04Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA05Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA078u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA098u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA0A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA0ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA0C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA0D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA0E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA0E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA0FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA104u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA110u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA138u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA154u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA1BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA1C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA20Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA220u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA228u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA230u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA248u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA258u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA264u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA280u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA28Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA294u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA298u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA2A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA320u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA364u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA380u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA42Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA450u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA45Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA508u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA53Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA57Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA590u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA608u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA614u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA630u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA63Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA644u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA64Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA654u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA65Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA670u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA694u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA700u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA708u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA70Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA72Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA730u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA738u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA74Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA75Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA778u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA794u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA79Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7C4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA808u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA818u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA834u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA838u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA840u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA85Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA860u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA868u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA87Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA88Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA900u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA91Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA920u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA928u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA93Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA95Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA964u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA968u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA988u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA990u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA994u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA99Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA9B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA9C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA9D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA9F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA9FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA00u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA20u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA34u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA4Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA60u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA6Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA74u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA7Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA98u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAA8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAB0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAC4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAD0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAD8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAE0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB40u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB50u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABB0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABC8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABD0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABDCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABE8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABF4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAC88u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAC94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FACD4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FACDCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FACECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD60u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD90u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FADFCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAE14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAE1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAE40u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAE44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAE9Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAEA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAEACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAF08u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAF10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAF2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAF40u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAFF4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB054u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB074u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB148u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB15Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB18Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB1E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB1ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB1F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB228u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB234u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB240u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB24Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB2D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB2E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB33Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB348u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB354u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB360u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB378u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB380u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB418u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB42Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB47Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB484u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB490u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB498u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB508u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB528u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB53Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB554u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB558u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB560u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB578u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB608u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB610u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB61Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB628u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB630u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB634u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB63Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB660u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB684u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB690u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB6A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB6B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB714u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB790u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB7D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB7E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB834u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB840u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB84Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB854u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB860u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB868u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB874u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB878u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB880u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB898u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB960u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB970u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB978u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB990u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA08u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA24u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA34u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA38u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA4Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB74u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB8Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBBA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBBB0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBBBCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBBC8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC7Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCB4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCC0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCCCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCD8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCE4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCFCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD68u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD84u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD90u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD9Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBDA8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBDB8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBDD0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE00u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE08u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE4Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE54u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBEB4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBEECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBEF4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF0Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF20u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF40u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF74u, &recomp_unit_0125, "recomp_unit_0125");
}
} // namespace psprecomp
