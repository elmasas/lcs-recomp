#include "lcs_controls.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_mouse.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0059[4093] = {
    1, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0,
    0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0,
    0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0,
    0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0,
    0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0,
    0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 84, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0,
    0, 0, 0, 91, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102,
    0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115,
    0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 190, 0, 191, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0,
    0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 216, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0,
    221, 0, 222, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242,
    0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 257,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267,
    0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0,
    0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305,
    306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0,
    314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335,
    0, 0, 0, 0, 0, 0, 0, 336, 337, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 341, 0, 342, 343, 0, 0, 0, 344, 0, 0,
    345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 374, 0, 375, 376, 0, 0, 0, 0,
    377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 384, 0, 0, 0, 385, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 390, 391, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 397, 398, 0, 0, 0, 0, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411,
    0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    417, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 435, 436, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0,
    0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 0, 0, 0,
    460, 0, 461, 0, 0, 0, 0, 462, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465,
    0, 0, 0, 0, 466, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 474, 0, 0, 0, 0, 475, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 0,
    0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0,
    487, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0,
    493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0,
    0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 531,
    0, 532, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 541, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0,
    548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 0,
    564, 0, 565, 0, 0, 0, 566, 0, 567, 0, 0, 0, 568, 569, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0,
    0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577,
    0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 581, 0, 0, 0, 0, 0, 0, 0,
    0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0,
    0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 592,
    0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0,
    610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 616, 617, 0, 0, 0, 0, 618,
    0, 0, 0, 0, 619, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 623, 0, 0, 0, 624, 0, 625, 0, 626, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0, 633, 0, 634, 635, 0, 636, 637, 0, 0, 0, 0, 638,
};
void recomp_unit_0059_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F0000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0059[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F0000;
    case 2u: goto L_088F0004;
    case 3u: goto L_088F000C;
    case 4u: goto L_088F0014;
    case 5u: goto L_088F001C;
    case 6u: goto L_088F0024;
    case 7u: goto L_088F002C;
    case 8u: goto L_088F0034;
    case 9u: goto L_088F003C;
    case 10u: goto L_088F0044;
    case 11u: goto L_088F004C;
    case 12u: goto L_088F005C;
    case 13u: goto L_088F0064;
    case 14u: goto L_088F006C;
    case 15u: goto L_088F0094;
    case 16u: goto L_088F00B0;
    case 17u: goto L_088F00B8;
    case 18u: goto L_088F00C8;
    case 19u: goto L_088F00E0;
    case 20u: goto L_088F00EC;
    case 21u: goto L_088F00F8;
    case 22u: goto L_088F0108;
    case 23u: goto L_088F0118;
    case 24u: goto L_088F0134;
    case 25u: goto L_088F0148;
    case 26u: goto L_088F0160;
    case 27u: goto L_088F0168;
    case 28u: goto L_088F0170;
    case 29u: goto L_088F0188;
    case 30u: goto L_088F0190;
    case 31u: goto L_088F01A8;
    case 32u: goto L_088F01B0;
    case 33u: goto L_088F01C8;
    case 34u: goto L_088F01D0;
    case 35u: goto L_088F01E8;
    case 36u: goto L_088F01F0;
    case 37u: goto L_088F0208;
    case 38u: goto L_088F0210;
    case 39u: goto L_088F0228;
    case 40u: goto L_088F0230;
    case 41u: goto L_088F0248;
    case 42u: goto L_088F0250;
    case 43u: goto L_088F0268;
    case 44u: goto L_088F0270;
    case 45u: goto L_088F0288;
    case 46u: goto L_088F0290;
    case 47u: goto L_088F02A8;
    case 48u: goto L_088F02B0;
    case 49u: goto L_088F02C8;
    case 50u: goto L_088F02D0;
    case 51u: goto L_088F02E8;
    case 52u: goto L_088F02F0;
    case 53u: goto L_088F0308;
    case 54u: goto L_088F0310;
    case 55u: goto L_088F0328;
    case 56u: goto L_088F0330;
    case 57u: goto L_088F0348;
    case 58u: goto L_088F0350;
    case 59u: goto L_088F0368;
    case 60u: goto L_088F0370;
    case 61u: goto L_088F0388;
    case 62u: goto L_088F0390;
    case 63u: goto L_088F0398;
    case 64u: goto L_088F03A0;
    case 65u: goto L_088F03B8;
    case 66u: goto L_088F03C0;
    case 67u: goto L_088F03C8;
    case 68u: goto L_088F03D0;
    case 69u: goto L_088F03D8;
    case 70u: goto L_088F03E0;
    case 71u: goto L_088F0438;
    case 72u: goto L_088F0474;
    case 73u: goto L_088F048C;
    case 74u: goto L_088F0498;
    case 75u: goto L_088F04A8;
    case 76u: goto L_088F04C0;
    case 77u: goto L_088F04CC;
    case 78u: goto L_088F04E4;
    case 79u: goto L_088F0504;
    case 80u: goto L_088F0554;
    case 81u: goto L_088F0568;
    case 82u: goto L_088F0578;
    case 83u: goto L_088F0588;
    case 84u: goto L_088F0598;
    case 85u: goto L_088F059C;
    case 86u: goto L_088F05B8;
    case 87u: goto L_088F05C4;
    case 88u: goto L_088F05E4;
    case 89u: goto L_088F05EC;
    case 90u: goto L_088F05F8;
    case 91u: goto L_088F060C;
    case 92u: goto L_088F0610;
    case 93u: goto L_088F0618;
    case 94u: goto L_088F0620;
    case 95u: goto L_088F0628;
    case 96u: goto L_088F0630;
    case 97u: goto L_088F063C;
    case 98u: goto L_088F064C;
    case 99u: goto L_088F0654;
    case 100u: goto L_088F065C;
    case 101u: goto L_088F066C;
    case 102u: goto L_088F067C;
    case 103u: goto L_088F0688;
    case 104u: goto L_088F0690;
    case 105u: goto L_088F0698;
    case 106u: goto L_088F06A0;
    case 107u: goto L_088F06A8;
    case 108u: goto L_088F06B0;
    case 109u: goto L_088F06C0;
    case 110u: goto L_088F06D0;
    case 111u: goto L_088F06DC;
    case 112u: goto L_088F06E4;
    case 113u: goto L_088F06EC;
    case 114u: goto L_088F06F4;
    case 115u: goto L_088F06FC;
    case 116u: goto L_088F0704;
    case 117u: goto L_088F0714;
    case 118u: goto L_088F0724;
    case 119u: goto L_088F0730;
    case 120u: goto L_088F0740;
    case 121u: goto L_088F0750;
    case 122u: goto L_088F0758;
    case 123u: goto L_088F0768;
    case 124u: goto L_088F0788;
    case 125u: goto L_088F0790;
    case 126u: goto L_088F0798;
    case 127u: goto L_088F07A0;
    case 128u: goto L_088F07A8;
    case 129u: goto L_088F07B4;
    case 130u: goto L_088F07C4;
    case 131u: goto L_088F07CC;
    case 132u: goto L_088F07D4;
    case 133u: goto L_088F07E4;
    case 134u: goto L_088F07F4;
    case 135u: goto L_088F0804;
    case 136u: goto L_088F0814;
    case 137u: goto L_088F0824;
    case 138u: goto L_088F0834;
    case 139u: goto L_088F083C;
    case 140u: goto L_088F0844;
    case 141u: goto L_088F084C;
    case 142u: goto L_088F0868;
    case 143u: goto L_088F08C0;
    case 144u: goto L_088F08E0;
    case 145u: goto L_088F0900;
    case 146u: goto L_088F0908;
    case 147u: goto L_088F0910;
    case 148u: goto L_088F0934;
    case 149u: goto L_088F0958;
    case 150u: goto L_088F09A4;
    case 151u: goto L_088F09AC;
    case 152u: goto L_088F09B4;
    case 153u: goto L_088F09BC;
    case 154u: goto L_088F09C0;
    case 155u: goto L_088F09FC;
    case 156u: goto L_088F0A24;
    case 157u: goto L_088F0A2C;
    case 158u: goto L_088F0A38;
    case 159u: goto L_088F0A44;
    case 160u: goto L_088F0A4C;
    case 161u: goto L_088F0A74;
    case 162u: goto L_088F0A84;
    case 163u: goto L_088F0A9C;
    case 164u: goto L_088F0AAC;
    case 165u: goto L_088F0AB0;
    case 166u: goto L_088F0ABC;
    case 167u: goto L_088F0ADC;
    case 168u: goto L_088F0AEC;
    case 169u: goto L_088F0AF8;
    case 170u: goto L_088F0B04;
    case 171u: goto L_088F0B18;
    case 172u: goto L_088F0B2C;
    case 173u: goto L_088F0B38;
    case 174u: goto L_088F0BB4;
    case 175u: goto L_088F0BB8;
    case 176u: goto L_088F0BD8;
    case 177u: goto L_088F0C18;
    case 178u: goto L_088F0C44;
    case 179u: goto L_088F0C54;
    case 180u: goto L_088F0C5C;
    case 181u: goto L_088F0C64;
    case 182u: goto L_088F0C6C;
    case 183u: goto L_088F0C70;
    case 184u: goto L_088F0C94;
    case 185u: goto L_088F0CBC;
    case 186u: goto L_088F0CCC;
    case 187u: goto L_088F0CD4;
    case 188u: goto L_088F0CDC;
    case 189u: goto L_088F0CE4;
    case 190u: goto L_088F0CE8;
    case 191u: goto L_088F0CF0;
    case 192u: goto L_088F0CFC;
    case 193u: goto L_088F0D54;
    case 194u: goto L_088F0D70;
    case 195u: goto L_088F0D9C;
    case 196u: goto L_088F0DB8;
    case 197u: goto L_088F0DEC;
    case 198u: goto L_088F0DF8;
    case 199u: goto L_088F0E0C;
    case 200u: goto L_088F0E14;
    case 201u: goto L_088F0E24;
    case 202u: goto L_088F0E30;
    case 203u: goto L_088F0E48;
    case 204u: goto L_088F0E58;
    case 205u: goto L_088F0E78;
    case 206u: goto L_088F0E84;
    case 207u: goto L_088F0F14;
    case 208u: goto L_088F0F20;
    case 209u: goto L_088F0F30;
    case 210u: goto L_088F0F40;
    case 211u: goto L_088F0FC8;
    case 212u: goto L_088F0FD4;
    case 213u: goto L_088F1014;
    case 214u: goto L_088F1024;
    case 215u: goto L_088F102C;
    case 216u: goto L_088F1030;
    case 217u: goto L_088F1038;
    case 218u: goto L_088F103C;
    case 219u: goto L_088F1068;
    case 220u: goto L_088F1078;
    case 221u: goto L_088F1080;
    case 222u: goto L_088F1088;
    case 223u: goto L_088F108C;
    case 224u: goto L_088F109C;
    case 225u: goto L_088F10C0;
    case 226u: goto L_088F10DC;
    case 227u: goto L_088F10F8;
    case 228u: goto L_088F111C;
    case 229u: goto L_088F1124;
    case 230u: goto L_088F112C;
    case 231u: goto L_088F1134;
    case 232u: goto L_088F1140;
    case 233u: goto L_088F1148;
    case 234u: goto L_088F1164;
    case 235u: goto L_088F1178;
    case 236u: goto L_088F1194;
    case 237u: goto L_088F11A4;
    case 238u: goto L_088F11C0;
    case 239u: goto L_088F11C8;
    case 240u: goto L_088F11E4;
    case 241u: goto L_088F11EC;
    case 242u: goto L_088F11FC;
    case 243u: goto L_088F120C;
    case 244u: goto L_088F1218;
    case 245u: goto L_088F123C;
    case 246u: goto L_088F1250;
    case 247u: goto L_088F1268;
    case 248u: goto L_088F1278;
    case 249u: goto L_088F1294;
    case 250u: goto L_088F129C;
    case 251u: goto L_088F12AC;
    case 252u: goto L_088F12BC;
    case 253u: goto L_088F12C8;
    case 254u: goto L_088F12D8;
    case 255u: goto L_088F12E0;
    case 256u: goto L_088F12E8;
    case 257u: goto L_088F12FC;
    case 258u: goto L_088F1304;
    case 259u: goto L_088F139C;
    case 260u: goto L_088F13B0;
    case 261u: goto L_088F13B8;
    case 262u: goto L_088F1438;
    case 263u: goto L_088F1440;
    case 264u: goto L_088F1450;
    case 265u: goto L_088F1468;
    case 266u: goto L_088F1470;
    case 267u: goto L_088F147C;
    case 268u: goto L_088F1494;
    case 269u: goto L_088F14A0;
    case 270u: goto L_088F14BC;
    case 271u: goto L_088F14C8;
    case 272u: goto L_088F14E0;
    case 273u: goto L_088F1508;
    case 274u: goto L_088F1538;
    case 275u: goto L_088F1568;
    case 276u: goto L_088F1578;
    case 277u: goto L_088F1584;
    case 278u: goto L_088F1594;
    case 279u: goto L_088F15A0;
    case 280u: goto L_088F15B0;
    case 281u: goto L_088F1650;
    case 282u: goto L_088F1658;
    case 283u: goto L_088F16C0;
    case 284u: goto L_088F16D8;
    case 285u: goto L_088F1734;
    case 286u: goto L_088F173C;
    case 287u: goto L_088F17BC;
    case 288u: goto L_088F17F4;
    case 289u: goto L_088F17FC;
    case 290u: goto L_088F1804;
    case 291u: goto L_088F183C;
    case 292u: goto L_088F1844;
    case 293u: goto L_088F184C;
    case 294u: goto L_088F188C;
    case 295u: goto L_088F18C8;
    case 296u: goto L_088F18D0;
    case 297u: goto L_088F1944;
    case 298u: goto L_088F1978;
    case 299u: goto L_088F19D8;
    case 300u: goto L_088F19E0;
    case 301u: goto L_088F1A08;
    case 302u: goto L_088F1A24;
    case 303u: goto L_088F1A40;
    case 304u: goto L_088F1A5C;
    case 305u: goto L_088F1A7C;
    case 306u: goto L_088F1A80;
    case 307u: goto L_088F1A8C;
    case 308u: goto L_088F1A9C;
    case 309u: goto L_088F1ABC;
    case 310u: goto L_088F1AC4;
    case 311u: goto L_088F1AC8;
    case 312u: goto L_088F1B10;
    case 313u: goto L_088F1B78;
    case 314u: goto L_088F1B80;
    case 315u: goto L_088F1B88;
    case 316u: goto L_088F1C04;
    case 317u: goto L_088F1C0C;
    case 318u: goto L_088F1C14;
    case 319u: goto L_088F1C1C;
    case 320u: goto L_088F1C30;
    case 321u: goto L_088F1C40;
    case 322u: goto L_088F1C44;
    case 323u: goto L_088F1C5C;
    case 324u: goto L_088F1C78;
    case 325u: goto L_088F1C80;
    case 326u: goto L_088F1CB8;
    case 327u: goto L_088F1CE4;
    case 328u: goto L_088F1D2C;
    case 329u: goto L_088F1DB0;
    case 330u: goto L_088F1DD4;
    case 331u: goto L_088F1E0C;
    case 332u: goto L_088F1E14;
    case 333u: goto L_088F1E60;
    case 334u: goto L_088F1E70;
    case 335u: goto L_088F1E7C;
    case 336u: goto L_088F1E9C;
    case 337u: goto L_088F1EA0;
    case 338u: goto L_088F1EAC;
    case 339u: goto L_088F1EB8;
    case 340u: goto L_088F1ED4;
    case 341u: goto L_088F1ED8;
    case 342u: goto L_088F1EE0;
    case 343u: goto L_088F1EE4;
    case 344u: goto L_088F1EF4;
    case 345u: goto L_088F1F00;
    case 346u: goto L_088F1F0C;
    case 347u: goto L_088F1F14;
    case 348u: goto L_088F1F3C;
    case 349u: goto L_088F1F50;
    case 350u: goto L_088F1F58;
    case 351u: goto L_088F1FA4;
    case 352u: goto L_088F1FA8;
    case 353u: goto L_088F1FCC;
    case 354u: goto L_088F1FDC;
    case 355u: goto L_088F1FF8;
    case 356u: goto L_088F2008;
    case 357u: goto L_088F2024;
    case 358u: goto L_088F2030;
    case 359u: goto L_088F203C;
    case 360u: goto L_088F2050;
    case 361u: goto L_088F2058;
    case 362u: goto L_088F2084;
    case 363u: goto L_088F2094;
    case 364u: goto L_088F20AC;
    case 365u: goto L_088F20BC;
    case 366u: goto L_088F20C0;
    case 367u: goto L_088F20E0;
    case 368u: goto L_088F20EC;
    case 369u: goto L_088F20F8;
    case 370u: goto L_088F2104;
    case 371u: goto L_088F2130;
    case 372u: goto L_088F2148;
    case 373u: goto L_088F2158;
    case 374u: goto L_088F2160;
    case 375u: goto L_088F2168;
    case 376u: goto L_088F216C;
    case 377u: goto L_088F2180;
    case 378u: goto L_088F218C;
    case 379u: goto L_088F21A4;
    case 380u: goto L_088F21A8;
    case 381u: goto L_088F22EC;
    case 382u: goto L_088F22F8;
    case 383u: goto L_088F2374;
    case 384u: goto L_088F2388;
    case 385u: goto L_088F2398;
    case 386u: goto L_088F239C;
    case 387u: goto L_088F23CC;
    case 388u: goto L_088F23DC;
    case 389u: goto L_088F23E8;
    case 390u: goto L_088F23F0;
    case 391u: goto L_088F23F4;
    case 392u: goto L_088F2414;
    case 393u: goto L_088F2424;
    case 394u: goto L_088F243C;
    case 395u: goto L_088F244C;
    case 396u: goto L_088F2454;
    case 397u: goto L_088F245C;
    case 398u: goto L_088F2460;
    case 399u: goto L_088F2484;
    case 400u: goto L_088F249C;
    case 401u: goto L_088F24B8;
    case 402u: goto L_088F24CC;
    case 403u: goto L_088F24F0;
    case 404u: goto L_088F2500;
    case 405u: goto L_088F2528;
    case 406u: goto L_088F2544;
    case 407u: goto L_088F254C;
    case 408u: goto L_088F2554;
    case 409u: goto L_088F255C;
    case 410u: goto L_088F2564;
    case 411u: goto L_088F257C;
    case 412u: goto L_088F2584;
    case 413u: goto L_088F259C;
    case 414u: goto L_088F25A8;
    case 415u: goto L_088F25B4;
    case 416u: goto L_088F25E0;
    case 417u: goto L_088F2600;
    case 418u: goto L_088F2604;
    case 419u: goto L_088F2624;
    case 420u: goto L_088F2630;
    case 421u: goto L_088F2640;
    case 422u: goto L_088F2660;
    case 423u: goto L_088F2670;
    case 424u: goto L_088F268C;
    case 425u: goto L_088F26AC;
    case 426u: goto L_088F26B4;
    case 427u: goto L_088F26BC;
    case 428u: goto L_088F26C8;
    case 429u: goto L_088F270C;
    case 430u: goto L_088F2714;
    case 431u: goto L_088F273C;
    case 432u: goto L_088F2740;
    case 433u: goto L_088F2754;
    case 434u: goto L_088F275C;
    case 435u: goto L_088F2770;
    case 436u: goto L_088F2774;
    case 437u: goto L_088F279C;
    case 438u: goto L_088F27B0;
    case 439u: goto L_088F27C8;
    case 440u: goto L_088F27D8;
    case 441u: goto L_088F27F8;
    case 442u: goto L_088F2800;
    case 443u: goto L_088F2808;
    case 444u: goto L_088F2828;
    case 445u: goto L_088F2838;
    case 446u: goto L_088F2878;
    case 447u: goto L_088F28A4;
    case 448u: goto L_088F28D4;
    case 449u: goto L_088F2930;
    case 450u: goto L_088F2944;
    case 451u: goto L_088F2958;
    case 452u: goto L_088F2968;
    case 453u: goto L_088F2978;
    case 454u: goto L_088F2988;
    case 455u: goto L_088F299C;
    case 456u: goto L_088F29C0;
    case 457u: goto L_088F29C8;
    case 458u: goto L_088F29DC;
    case 459u: goto L_088F29E0;
    case 460u: goto L_088F2A00;
    case 461u: goto L_088F2A08;
    case 462u: goto L_088F2A1C;
    case 463u: goto L_088F2A20;
    case 464u: goto L_088F2A74;
    case 465u: goto L_088F2A7C;
    case 466u: goto L_088F2A90;
    case 467u: goto L_088F2A94;
    case 468u: goto L_088F2A9C;
    case 469u: goto L_088F2AB0;
    case 470u: goto L_088F2AC0;
    case 471u: goto L_088F2AC8;
    case 472u: goto L_088F2AD0;
    case 473u: goto L_088F2B84;
    case 474u: goto L_088F2B8C;
    case 475u: goto L_088F2BA0;
    case 476u: goto L_088F2BA4;
    case 477u: goto L_088F2BD8;
    case 478u: goto L_088F2BE0;
    case 479u: goto L_088F2BE8;
    case 480u: goto L_088F2BF0;
    case 481u: goto L_088F2C08;
    case 482u: goto L_088F2C10;
    case 483u: goto L_088F2C24;
    case 484u: goto L_088F2C3C;
    case 485u: goto L_088F2C60;
    case 486u: goto L_088F2C68;
    case 487u: goto L_088F2C80;
    case 488u: goto L_088F2C84;
    case 489u: goto L_088F2CA8;
    case 490u: goto L_088F2CAC;
    case 491u: goto L_088F2CDC;
    case 492u: goto L_088F2CE8;
    case 493u: goto L_088F2D00;
    case 494u: goto L_088F2D08;
    case 495u: goto L_088F2D2C;
    case 496u: goto L_088F2D34;
    case 497u: goto L_088F2D60;
    case 498u: goto L_088F2D6C;
    case 499u: goto L_088F2E38;
    case 500u: goto L_088F306C;
    case 501u: goto L_088F30AC;
    case 502u: goto L_088F30B8;
    case 503u: goto L_088F30D8;
    case 504u: goto L_088F3128;
    case 505u: goto L_088F3130;
    case 506u: goto L_088F3138;
    case 507u: goto L_088F31A0;
    case 508u: goto L_088F3208;
    case 509u: goto L_088F3218;
    case 510u: goto L_088F3274;
    case 511u: goto L_088F327C;
    case 512u: goto L_088F3348;
    case 513u: goto L_088F3364;
    case 514u: goto L_088F3394;
    case 515u: goto L_088F339C;
    case 516u: goto L_088F33A4;
    case 517u: goto L_088F33D4;
    case 518u: goto L_088F33DC;
    case 519u: goto L_088F33E4;
    case 520u: goto L_088F3474;
    case 521u: goto L_088F3490;
    case 522u: goto L_088F34C0;
    case 523u: goto L_088F34C8;
    case 524u: goto L_088F3510;
    case 525u: goto L_088F3518;
    case 526u: goto L_088F3550;
    case 527u: goto L_088F3560;
    case 528u: goto L_088F3568;
    case 529u: goto L_088F3570;
    case 530u: goto L_088F3578;
    case 531u: goto L_088F357C;
    case 532u: goto L_088F3584;
    case 533u: goto L_088F358C;
    case 534u: goto L_088F3598;
    case 535u: goto L_088F35A8;
    case 536u: goto L_088F35B4;
    case 537u: goto L_088F35BC;
    case 538u: goto L_088F35CC;
    case 539u: goto L_088F35D4;
    case 540u: goto L_088F35E0;
    case 541u: goto L_088F3610;
    case 542u: goto L_088F3614;
    case 543u: goto L_088F3620;
    case 544u: goto L_088F363C;
    case 545u: goto L_088F3650;
    case 546u: goto L_088F3660;
    case 547u: goto L_088F3670;
    case 548u: goto L_088F3680;
    case 549u: goto L_088F3688;
    case 550u: goto L_088F3690;
    case 551u: goto L_088F3698;
    case 552u: goto L_088F36A0;
    case 553u: goto L_088F36E8;
    case 554u: goto L_088F3750;
    case 555u: goto L_088F3770;
    case 556u: goto L_088F380C;
    case 557u: goto L_088F3814;
    case 558u: goto L_088F381C;
    case 559u: goto L_088F3834;
    case 560u: goto L_088F3848;
    case 561u: goto L_088F3858;
    case 562u: goto L_088F3860;
    case 563u: goto L_088F3870;
    case 564u: goto L_088F3880;
    case 565u: goto L_088F3888;
    case 566u: goto L_088F3898;
    case 567u: goto L_088F38A0;
    case 568u: goto L_088F38B0;
    case 569u: goto L_088F38B4;
    case 570u: goto L_088F38B8;
    case 571u: goto L_088F38E4;
    case 572u: goto L_088F38F4;
    case 573u: goto L_088F3908;
    case 574u: goto L_088F392C;
    case 575u: goto L_088F3944;
    case 576u: goto L_088F3968;
    case 577u: goto L_088F397C;
    case 578u: goto L_088F39A0;
    case 579u: goto L_088F39BC;
    case 580u: goto L_088F39DC;
    case 581u: goto L_088F39E0;
    case 582u: goto L_088F3A04;
    case 583u: goto L_088F3A10;
    case 584u: goto L_088F3A20;
    case 585u: goto L_088F3A64;
    case 586u: goto L_088F3A6C;
    case 587u: goto L_088F3A8C;
    case 588u: goto L_088F3AB8;
    case 589u: goto L_088F3ADC;
    case 590u: goto L_088F3AE4;
    case 591u: goto L_088F3AEC;
    case 592u: goto L_088F3AFC;
    case 593u: goto L_088F3B0C;
    case 594u: goto L_088F3B30;
    case 595u: goto L_088F3B38;
    case 596u: goto L_088F3B48;
    case 597u: goto L_088F3B58;
    case 598u: goto L_088F3B8C;
    case 599u: goto L_088F3BBC;
    case 600u: goto L_088F3BD0;
    case 601u: goto L_088F3C14;
    case 602u: goto L_088F3C28;
    case 603u: goto L_088F3C30;
    case 604u: goto L_088F3C44;
    case 605u: goto L_088F3C48;
    case 606u: goto L_088F3C54;
    case 607u: goto L_088F3C60;
    case 608u: goto L_088F3C6C;
    case 609u: goto L_088F3C78;
    case 610u: goto L_088F3C80;
    case 611u: goto L_088F3C88;
    case 612u: goto L_088F3CA8;
    case 613u: goto L_088F3CC4;
    case 614u: goto L_088F3CD4;
    case 615u: goto L_088F3CDC;
    case 616u: goto L_088F3CE4;
    case 617u: goto L_088F3CE8;
    case 618u: goto L_088F3CFC;
    case 619u: goto L_088F3D10;
    case 620u: goto L_088F3D14;
    case 621u: goto L_088F3E70;
    case 622u: goto L_088F3E7C;
    case 623u: goto L_088F3F04;
    case 624u: goto L_088F3F14;
    case 625u: goto L_088F3F1C;
    case 626u: goto L_088F3F24;
    case 627u: goto L_088F3F28;
    case 628u: goto L_088F3F50;
    case 629u: goto L_088F3F60;
    case 630u: goto L_088F3F94;
    case 631u: goto L_088F3FAC;
    case 632u: goto L_088F3FBC;
    case 633u: goto L_088F3FC4;
    case 634u: goto L_088F3FCC;
    case 635u: goto L_088F3FD0;
    case 636u: goto L_088F3FD8;
    case 637u: goto L_088F3FDC;
    case 638u: goto L_088F3FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F0000:
    // nop
    goto L_088F0004;
L_088F0004:
    ctx.gpr[31] = (0x088F000Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F000Cu) goto L_088F000C;
    return;
L_088F000C:
    ctx.gpr[31] = (0x088F0014u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 982u, 0x08A97B28u>(ctx, &aot_mem) && ctx.pc == 0x088F0014u) goto L_088F0014;
    return;
L_088F0014:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F004C;
      }
      goto L_088F001C;
    }
L_088F001C:
    ctx.gpr[31] = (0x088F0024u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F0024u) goto L_088F0024;
    return;
L_088F0024:
    ctx.gpr[31] = (0x088F002Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 902u, 0x08A9777Cu>(ctx, &aot_mem) && ctx.pc == 0x088F002Cu) goto L_088F002C;
    return;
L_088F002C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F004C;
      }
      goto L_088F0034;
    }
L_088F0034:
    ctx.gpr[31] = (0x088F003Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F003Cu) goto L_088F003C;
    return;
L_088F003C:
    ctx.gpr[31] = (0x088F0044u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 942u, 0x08A97950u>(ctx, &aot_mem) && ctx.pc == 0x088F0044u) goto L_088F0044;
    return;
L_088F0044:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F005C;
      }
      goto L_088F004C;
    }
L_088F004C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088F005C;
L_088F005C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0108;
      }
      goto L_088F0064;
    }
L_088F0064:
    ctx.gpr[31] = (0x088F006Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x088F006Cu) goto L_088F006C;
    return;
L_088F006C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F00B8;
      }
      goto L_088F0094;
    }
L_088F0094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F00B8;
      }
      goto L_088F00B0;
    }
L_088F00B0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088F00EC;
      }
      goto L_088F00B8;
    }
L_088F00B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088F00C8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F00C8u) goto L_088F00C8;
    return;
L_088F00C8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_088F00EC;
      }
      goto L_088F00E0;
    }
L_088F00E0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_088F00EC;
L_088F00EC:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088F0108;
      }
      goto L_088F00F8;
    }
L_088F00F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
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
    goto L_088F0108;
L_088F0108:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0134;
      }
      goto L_088F0118;
    }
L_088F0118:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    goto L_088F0134;
L_088F0134:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F03E0;
      }
      goto L_088F0148;
    }
L_088F0148:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(15968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0168;
    }
L_088F0168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0170;
    }
L_088F0170:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0188u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 569u, 0x088EB3D8u>(ctx, &aot_mem) && ctx.pc == 0x088F0188u) goto L_088F0188;
    return;
L_088F0188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0190;
    }
L_088F0190:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F01A8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F0868;
L_088F01A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F01B0;
    }
L_088F01B0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F01C8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F36E8;
L_088F01C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F01D0;
    }
L_088F01D0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F01E8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F1B10;
L_088F01E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F01F0;
    }
L_088F01F0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0208u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 439u, 0x088F6FE0u>(ctx, &aot_mem) && ctx.pc == 0x088F0208u) goto L_088F0208;
    return;
L_088F0208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0210;
    }
L_088F0210:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0228u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 439u, 0x088F6FE0u>(ctx, &aot_mem) && ctx.pc == 0x088F0228u) goto L_088F0228;
    return;
L_088F0228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0230;
    }
L_088F0230:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0248u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 439u, 0x088F6FE0u>(ctx, &aot_mem) && ctx.pc == 0x088F0248u) goto L_088F0248;
    return;
L_088F0248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0250;
    }
L_088F0250:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0268u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F36E8;
L_088F0268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0270;
    }
L_088F0270:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0288u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 603u, 0x088EB97Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0288u) goto L_088F0288;
    return;
L_088F0288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0290;
    }
L_088F0290:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F02A8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 605u, 0x088EBA14u>(ctx, &aot_mem) && ctx.pc == 0x088F02A8u) goto L_088F02A8;
    return;
L_088F02A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F02B0;
    }
L_088F02B0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F02C8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F0868;
L_088F02C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F02D0;
    }
L_088F02D0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F02E8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EB690u>(ctx, &aot_mem) && ctx.pc == 0x088F02E8u) goto L_088F02E8;
    return;
L_088F02E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F02F0;
    }
L_088F02F0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0308u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 20u, 0x088F832Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0308u) goto L_088F0308;
    return;
L_088F0308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0310;
    }
L_088F0310:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0328u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 596u, 0x088EB7FCu>(ctx, &aot_mem) && ctx.pc == 0x088F0328u) goto L_088F0328;
    return;
L_088F0328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0330;
    }
L_088F0330:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0348u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 237u, 0x088F568Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0348u) goto L_088F0348;
    return;
L_088F0348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0350;
    }
L_088F0350:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0368u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 382u, 0x088F66F0u>(ctx, &aot_mem) && ctx.pc == 0x088F0368u) goto L_088F0368;
    return;
L_088F0368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0370;
    }
L_088F0370:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F0388u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 339u, 0x088F6224u>(ctx, &aot_mem) && ctx.pc == 0x088F0388u) goto L_088F0388;
    return;
L_088F0388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F0390;
    }
L_088F0390:
    ctx.gpr[31] = (0x088F0398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 62u, 0x088F8B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0398u) goto L_088F0398;
    return;
L_088F0398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F03A0;
    }
L_088F03A0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088F03B8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7F04u>(ctx, &aot_mem) && ctx.pc == 0x088F03B8u) goto L_088F03B8;
    return;
L_088F03B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F03C0;
    }
L_088F03C0:
    ctx.gpr[31] = (0x088F03C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 197u, 0x088F9C64u>(ctx, &aot_mem) && ctx.pc == 0x088F03C8u) goto L_088F03C8;
    return;
L_088F03C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F03D0;
    }
L_088F03D0:
    ctx.gpr[31] = (0x088F03D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 644u, 0x088EBF80u>(ctx, &aot_mem) && ctx.pc == 0x088F03D8u) goto L_088F03D8;
    return;
L_088F03D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0438;
      }
      goto L_088F03E0;
    }
L_088F03E0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088F0438;
L_088F0438:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x088F0474u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F0474u) goto L_088F0474;
    return;
L_088F0474:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_088F0498;
      }
      goto L_088F048C;
    }
L_088F048C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088F0498;
L_088F0498:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088F04A8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F04A8u) goto L_088F04A8;
    return;
L_088F04A8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_088F04CC;
      }
      goto L_088F04C0;
    }
L_088F04C0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_088F04CC;
L_088F04CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0504;
      }
      goto L_088F04E4;
    }
L_088F04E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(464));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.gpr[10] = (ctx.gpr[16] + static_cast<std::uint32_t>(196));
    ctx.gpr[31] = (0x088F0504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 552u, 0x088EB15Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0504u) goto L_088F0504;
    return;
L_088F0504:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088F07D4;
      }
      goto L_088F0554;
    }
L_088F0554:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 18u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
        goto L_088F059C;
    }
    goto L_088F0568;
L_088F0568:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
        goto L_088F059C;
    }
    goto L_088F0578;
L_088F0578:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 22u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
        goto L_088F059C;
    }
    goto L_088F0588;
L_088F0588:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0758;
      }
      goto L_088F0598;
    }
L_088F0598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    goto L_088F059C;
L_088F059C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0758;
      }
      goto L_088F05B8;
    }
L_088F05B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0610;
      }
      goto L_088F05C4;
    }
L_088F05C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0610;
      }
      goto L_088F05E4;
    }
L_088F05E4:
    ctx.gpr[31] = (0x088F05ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x088F05ECu) goto L_088F05EC;
    return;
L_088F05EC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F060C;
      }
      goto L_088F05F8;
    }
L_088F05F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-955));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0610;
      }
      goto L_088F060C;
    }
L_088F060C:
    ctx.gpr[17] = (0u | 1u);
    goto L_088F0610;
L_088F0610:
    ctx.gpr[31] = (0x088F0618u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F0618u) goto L_088F0618;
    return;
L_088F0618:
    ctx.gpr[31] = (0x088F0620u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 982u, 0x08A97B28u>(ctx, &aot_mem) && ctx.pc == 0x088F0620u) goto L_088F0620;
    return;
L_088F0620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0654;
      }
      goto L_088F0628;
    }
L_088F0628:
    ctx.gpr[31] = (0x088F0630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088FB014u>(ctx, &aot_mem) && ctx.pc == 0x088F0630u) goto L_088F0630;
    return;
L_088F0630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F064C;
      }
      goto L_088F063C;
    }
L_088F063C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088F064C;
L_088F064C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_088F0758;
      }
      goto L_088F0654;
    }
L_088F0654:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0688;
      }
      goto L_088F065C;
    }
L_088F065C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F067C;
      }
      goto L_088F066C;
    }
L_088F066C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088F067C;
L_088F067C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F0758;
      }
      goto L_088F0688;
    }
L_088F0688:
    ctx.gpr[31] = (0x088F0690u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F0690u) goto L_088F0690;
    return;
L_088F0690:
    ctx.gpr[31] = (0x088F0698u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 902u, 0x08A9777Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0698u) goto L_088F0698;
    return;
L_088F0698:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F06DC;
      }
      goto L_088F06A0;
    }
L_088F06A0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F06DC;
      }
      goto L_088F06A8;
    }
L_088F06A8:
    ctx.gpr[31] = (0x088F06B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 437u, 0x088FB658u>(ctx, &aot_mem) && ctx.pc == 0x088F06B0u) goto L_088F06B0;
    return;
L_088F06B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F06D0;
      }
      goto L_088F06C0;
    }
L_088F06C0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088F06D0;
L_088F06D0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F0758;
      }
      goto L_088F06DC;
    }
L_088F06DC:
    ctx.gpr[31] = (0x088F06E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F06E4u) goto L_088F06E4;
    return;
L_088F06E4:
    ctx.gpr[31] = (0x088F06ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 942u, 0x08A97950u>(ctx, &aot_mem) && ctx.pc == 0x088F06ECu) goto L_088F06EC;
    return;
L_088F06EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0730;
      }
      goto L_088F06F4;
    }
L_088F06F4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0730;
      }
      goto L_088F06FC;
    }
L_088F06FC:
    ctx.gpr[31] = (0x088F0704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 486u, 0x088FBC34u>(ctx, &aot_mem) && ctx.pc == 0x088F0704u) goto L_088F0704;
    return;
L_088F0704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0724;
      }
      goto L_088F0714;
    }
L_088F0714:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088F0724;
L_088F0724:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F0758;
      }
      goto L_088F0730;
    }
L_088F0730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0750;
      }
      goto L_088F0740;
    }
L_088F0740:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088F0750;
L_088F0750:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088F0758;
L_088F0758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F07D4;
      }
      goto L_088F0768;
    }
L_088F0768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F07D4;
      }
      goto L_088F0788;
    }
L_088F0788:
    ctx.gpr[31] = (0x088F0790u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F0790u) goto L_088F0790;
    return;
L_088F0790:
    ctx.gpr[31] = (0x088F0798u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1017u, 0x08A97CDCu>(ctx, &aot_mem) && ctx.pc == 0x088F0798u) goto L_088F0798;
    return;
L_088F0798:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F07CC;
      }
      goto L_088F07A0;
    }
L_088F07A0:
    ctx.gpr[31] = (0x088F07A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088FB014u>(ctx, &aot_mem) && ctx.pc == 0x088F07A8u) goto L_088F07A8;
    return;
L_088F07A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F07C4;
      }
      goto L_088F07B4;
    }
L_088F07B4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088F07C4;
L_088F07C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_088F07D4;
      }
      goto L_088F07CC;
    }
L_088F07CC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088F07D4;
L_088F07D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0844;
      }
      goto L_088F07E4;
    }
L_088F07E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0844;
      }
      goto L_088F07F4;
    }
L_088F07F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0844;
      }
      goto L_088F0804;
    }
L_088F0804:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0844;
      }
      goto L_088F0814;
    }
L_088F0814:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0844;
      }
      goto L_088F0824;
    }
L_088F0824:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0844;
      }
      goto L_088F0834;
    }
L_088F0834:
    ctx.gpr[31] = (0x088F083Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 534u, 0x088EAEDCu>(ctx, &aot_mem) && ctx.pc == 0x088F083Cu) goto L_088F083C;
    return;
L_088F083C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F084C;
      }
      goto L_088F0844;
    }
L_088F0844:
    ctx.gpr[31] = (0x088F084Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 508u, 0x088EAC94u>(ctx, &aot_mem) && ctx.pc == 0x088F084Cu) goto L_088F084C;
    return;
L_088F084C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0868:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-816));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(780), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(796), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32528)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F08E0;
      }
      goto L_088F08C0;
    }
L_088F08C0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-32528), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-32512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32512));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F08E0;
L_088F08E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F09B4;
      }
      goto L_088F0900;
    }
L_088F0900:
    ctx.gpr[31] = (0x088F0908u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088F0908u) goto L_088F0908;
    return;
L_088F0908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F09AC;
      }
      goto L_088F0910;
    }
L_088F0910:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088F0934u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0934u) goto L_088F0934;
    return;
L_088F0934:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F0958u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x088F0958u) goto L_088F0958;
    return;
L_088F0958:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (2232u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(12960));
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22584));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[30] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F09BC;
      }
      goto L_088F09A4;
    }
L_088F09A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F09C0;
      }
      goto L_088F09AC;
    }
L_088F09AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1AC8;
      }
      goto L_088F09B4;
    }
L_088F09B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1AC8;
      }
      goto L_088F09BC;
    }
L_088F09BC:
    ctx.gpr[16] = (0u | 1u);
    goto L_088F09C0;
L_088F09C0:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    ctx.gpr[7] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[6] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088F0A24;
      }
      goto L_088F09FC;
    }
L_088F09FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0A2C;
      }
      goto L_088F0A24;
    }
L_088F0A24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22576)));
    goto L_088F0A2C;
L_088F0A2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0AB0;
      }
      goto L_088F0A38;
    }
L_088F0A38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0A4C;
      }
      goto L_088F0A44;
    }
L_088F0A44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F0AB0;
      }
      goto L_088F0A4C;
    }
L_088F0A4C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22680)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F0A84;
      }
      goto L_088F0A74;
    }
L_088F0A74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F0AB0;
      }
      goto L_088F0A84;
    }
L_088F0A84:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F0AAC;
      }
      goto L_088F0A9C;
    }
L_088F0A9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F0AB0;
      }
      goto L_088F0AAC;
    }
L_088F0AAC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F0AB0;
L_088F0AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[10]);
        goto L_088F0BD8;
    }
    goto L_088F0ABC;
L_088F0ABC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32496)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[7] = (2231u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (2231u << 16u);
      if (branch_taken) {
          goto L_088F0AEC;
      }
      goto L_088F0ADC;
    }
L_088F0ADC:
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-32496), ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F0AEC;
L_088F0AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-32492)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088F0B04;
      }
      goto L_088F0AF8;
    }
L_088F0AF8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-32492), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-32484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F0B04;
L_088F0B04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22684)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0B2C;
      }
      goto L_088F0B18;
    }
L_088F0B18:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-32484), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23648), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_088F0BB4;
      }
      goto L_088F0B2C;
    }
L_088F0B2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(145)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[10]);
        goto L_088F0BB8;
    }
    goto L_088F0B38;
L_088F0B38:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22700)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
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
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-32488)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[16];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-32484)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-32484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23648)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F0BB4;
L_088F0BB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[10]);
    goto L_088F0BB8;
L_088F0BB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-32488)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-32484)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[30] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0CF0;
      }
      goto L_088F0BD8;
    }
L_088F0BD8:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(384)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[30];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x088F0C18u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA660u>(ctx, &aot_mem) && ctx.pc == 0x088F0C18u) goto L_088F0C18;
    return;
L_088F0C18:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088F0C44;
    }
    goto L_088F0C44;
L_088F0C44:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F0C64;
      }
      goto L_088F0C54;
    }
L_088F0C54:
    ctx.gpr[31] = (0x088F0C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 229u, 0x08AF51C0u>(ctx, &aot_mem) && ctx.pc == 0x088F0C5Cu) goto L_088F0C5C;
    return;
L_088F0C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088F0C70;
      }
      goto L_088F0C64;
    }
L_088F0C64:
    ctx.gpr[31] = (0x088F0C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 286u, 0x089D96A0u>(ctx, &aot_mem) && ctx.pc == 0x088F0C6Cu) goto L_088F0C6C;
    return;
L_088F0C6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088F0C70;
L_088F0C70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(388)));
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x088F0C94u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA660u>(ctx, &aot_mem) && ctx.pc == 0x088F0C94u) goto L_088F0C94;
    return;
L_088F0C94:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3176)));
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[14];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
        goto L_088F0CBC;
    }
    goto L_088F0CBC;
L_088F0CBC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F0CDC;
      }
      goto L_088F0CCC;
    }
L_088F0CCC:
    ctx.gpr[31] = (0x088F0CD4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 229u, 0x08AF51C0u>(ctx, &aot_mem) && ctx.pc == 0x088F0CD4u) goto L_088F0CD4;
    return;
L_088F0CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088F0CE8;
      }
      goto L_088F0CDC;
    }
L_088F0CDC:
    ctx.gpr[31] = (0x088F0CE4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 286u, 0x089D96A0u>(ctx, &aot_mem) && ctx.pc == 0x088F0CE4u) goto L_088F0CE4;
    return;
L_088F0CE4:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088F0CE8;
L_088F0CE8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23648), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088F0CF0;
L_088F0CF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0D70;
      }
      goto L_088F0CFC;
    }
L_088F0CFC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(22640), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 60000u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22644), ctx.gpr[4]);
    ctx.gpr[4] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22652), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0D70;
      }
      goto L_088F0D54;
    }
L_088F0D54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F0D70;
L_088F0D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088F0D9Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 609u, 0x088EBB74u>(ctx, &aot_mem) && ctx.pc == 0x088F0D9Cu) goto L_088F0D9C;
    return;
L_088F0D9C:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0FC8;
      }
      goto L_088F0DB8;
    }
L_088F0DB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (2231u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32512));
      if (branch_taken) {
          goto L_088F0E14;
      }
      goto L_088F0DEC;
    }
L_088F0DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0E14;
      }
      goto L_088F0DF8;
    }
L_088F0DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F0E0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 42u, 0x08AA83C4u>(ctx, &aot_mem) && ctx.pc == 0x088F0E0Cu) goto L_088F0E0C;
    return;
L_088F0E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0E24;
      }
      goto L_088F0E14;
    }
L_088F0E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    goto L_088F0E24;
L_088F0E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0E48;
      }
      goto L_088F0E30;
    }
L_088F0E30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23652)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F0E48;
L_088F0E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0F14;
      }
      goto L_088F0E58;
    }
L_088F0E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0F14;
      }
      goto L_088F0E78;
    }
L_088F0E78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0F14;
      }
      goto L_088F0E84;
    }
L_088F0E84:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0FC8;
      }
      goto L_088F0F14;
    }
L_088F0F14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0F30;
      }
      goto L_088F0F20;
    }
L_088F0F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F0F40;
      }
      goto L_088F0F30;
    }
L_088F0F30:
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0FC8;
      }
      goto L_088F0F40;
    }
L_088F0F40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22092)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088F0FC8;
L_088F0FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F12D8;
      }
      goto L_088F0FD4;
    }
L_088F0FD4:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32512));
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[28])) && ctx.fpr[24] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F102C;
      }
      goto L_088F1014;
    }
L_088F1014:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088F1030;
    }
    goto L_088F1024;
L_088F1024:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[28] - ctx.fpr[20];
      if (branch_taken) {
          goto L_088F103C;
      }
      goto L_088F102C;
    }
L_088F102C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F1030;
L_088F1030:
    ctx.gpr[31] = (0x088F1038u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F1038u) goto L_088F1038;
    return;
L_088F1038:
    ctx.fpr[24] = ctx.fpr[0] - ctx.fpr[20];
    goto L_088F103C;
L_088F103C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1080;
      }
      goto L_088F1068;
    }
L_088F1068:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[28])) && ctx.fpr[13] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1080;
      }
      goto L_088F1078;
    }
L_088F1078:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_088F108C;
      }
      goto L_088F1080;
    }
L_088F1080:
    ctx.gpr[31] = (0x088F1088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F1088u) goto L_088F1088;
    return;
L_088F1088:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088F108C;
L_088F108C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F10C0;
      }
      goto L_088F109C;
    }
L_088F109C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088F111C;
      }
      goto L_088F10C0;
    }
L_088F10C0:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088F10DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x088F10DCu) goto L_088F10DC;
    return;
L_088F10DC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088F10F8;
    }
    goto L_088F10F8;
L_088F10F8:
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_088F111C;
L_088F111C:
    ctx.gpr[31] = (0x088F1124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1124u) goto L_088F1124;
    return;
L_088F1124:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088F1140;
      }
      goto L_088F112C;
    }
L_088F112C:
    ctx.gpr[31] = (0x088F1134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1134u) goto L_088F1134;
    return;
L_088F1134:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1148;
      }
      goto L_088F1140;
    }
L_088F1140:
    ctx.fpr[22] = ctx.fpr[26] + ctx.fpr[24];
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[30];
    goto L_088F1148;
L_088F1148:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1178;
      }
      goto L_088F1164;
    }
L_088F1164:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088F11A4;
      }
      goto L_088F1178;
    }
L_088F1178:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F11A4;
      }
      goto L_088F1194;
    }
L_088F1194:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_088F11A4;
L_088F11A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22560)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F11C8;
      }
      goto L_088F11C0;
    }
L_088F11C0:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088F11C8;
L_088F11C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F11EC;
      }
      goto L_088F11E4;
    }
L_088F11E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088F1218;
      }
      goto L_088F11EC;
    }
L_088F11EC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F120C;
      }
      goto L_088F11FC;
    }
L_088F11FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F1218;
      }
      goto L_088F120C;
    }
L_088F120C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F1218;
L_088F1218:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1250;
      }
      goto L_088F123C;
    }
L_088F123C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
      if (branch_taken) {
          goto L_088F1278;
      }
      goto L_088F1250;
    }
L_088F1250:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1278;
      }
      goto L_088F1268;
    }
L_088F1268:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    goto L_088F1278;
L_088F1278:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F129C;
      }
      goto L_088F1294;
    }
L_088F1294:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088F12C8;
      }
      goto L_088F129C;
    }
L_088F129C:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F12BC;
      }
      goto L_088F12AC;
    }
L_088F12AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F12C8;
      }
      goto L_088F12BC;
    }
L_088F12BC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F12C8;
L_088F12C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1438;
      }
      goto L_088F12D8;
    }
L_088F12D8:
    ctx.gpr[31] = (0x088F12E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F12E0u) goto L_088F12E0;
    return;
L_088F12E0:
    lcs::lcs_camera_tick();
    ctx.gpr[31] = (0x088F12E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 266u, 0x08A98B08u>(ctx, &aot_mem) && ctx.pc == 0x088F12E8u) goto L_088F12E8;
    return;
L_088F12E8:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088F12FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F12FCu) goto L_088F12FC;
    return;
L_088F12FC:
    ctx.gpr[31] = (0x088F1304u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 281u, 0x08A98C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1304u) goto L_088F1304;
    return;
L_088F1304:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22556)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[16];
    ctx.gpr[4] = (15762u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18725u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15663u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 35577u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23656)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F13B8;
      }
      goto L_088F139C;
    }
L_088F139C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F13B8;
      }
      goto L_088F13B0;
    }
L_088F13B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23660)));
    goto L_088F13B8;
L_088F13B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = lcs::lcs_mouse_aim_turn_angle(ctx.fpr[14],
        std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196))));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = lcs::lcs_mouse_aim_pitch_angle(ctx.fpr[12],
        std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196))));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22648), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F1438;
L_088F1438:
    ctx.gpr[31] = (0x088F1440u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088F1440u) goto L_088F1440;
    return;
L_088F1440:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088F1468;
      }
      goto L_088F1450;
    }
L_088F1450:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F1468;
L_088F1468:
    ctx.gpr[31] = (0x088F1470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1470u) goto L_088F1470;
    return;
L_088F1470:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F14C8;
      }
      goto L_088F147C;
    }
L_088F147C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F14A0;
      }
      goto L_088F1494;
    }
L_088F1494:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F14C8;
      }
      goto L_088F14A0;
    }
L_088F14A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F14C8;
      }
      goto L_088F14BC;
    }
L_088F14BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F14C8;
L_088F14C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1538;
      }
      goto L_088F14E0;
    }
L_088F14E0:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088F1508;
    }
    goto L_088F1508;
L_088F1508:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_088F1568;
      }
      goto L_088F1538;
    }
L_088F1538:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    goto L_088F1568;
L_088F1568:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088F1578u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x088F1578u) goto L_088F1578;
    return;
L_088F1578:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088F1584u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x088F1584u) goto L_088F1584;
    return;
L_088F1584:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088F1594u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x088F1594u) goto L_088F1594;
    return;
L_088F1594:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088F15A0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x088F15A0u) goto L_088F15A0;
    return;
L_088F15A0:
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088F15B0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x088F15B0u) goto L_088F15B0;
    return;
L_088F15B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8004), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x088F1650u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1650u) goto L_088F1650;
    return;
L_088F1650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1978;
      }
      goto L_088F1658;
    }
L_088F1658:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_088F184C;
      }
      goto L_088F16C0;
    }
L_088F16C0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F184C;
      }
      goto L_088F16D8;
    }
L_088F16D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8004), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x088F1734u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1734u) goto L_088F1734;
    return;
L_088F1734:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1804;
      }
      goto L_088F173C;
    }
L_088F173C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F17FC;
      }
      goto L_088F17BC;
    }
L_088F17BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088F17F4;
    }
    goto L_088F17F4;
L_088F17F4:
    ctx.gpr[31] = (0x088F17FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x088F17FCu) goto L_088F17FC;
    return;
L_088F17FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1844;
      }
      goto L_088F1804;
    }
L_088F1804:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088F183C;
    }
    goto L_088F183C;
L_088F183C:
    ctx.gpr[31] = (0x088F1844u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x088F1844u) goto L_088F1844;
    return;
L_088F1844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F18D0;
      }
      goto L_088F184C;
    }
L_088F184C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
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
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F18D0;
      }
      goto L_088F188C;
    }
L_088F188C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088F18C8;
    }
    goto L_088F18C8;
L_088F18C8:
    ctx.gpr[31] = (0x088F18D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x088F18D0u) goto L_088F18D0;
    return;
L_088F18D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1978;
      }
      goto L_088F1944;
    }
L_088F1944:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22068)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22040)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088F1978u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1978u) goto L_088F1978;
    return;
L_088F1978:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8004), 0u);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25810)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F19E0;
      }
      goto L_088F19D8;
    }
L_088F19D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F19E0;
      }
      goto L_088F19E0;
    }
L_088F19E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1A80;
      }
      goto L_088F1A08;
    }
L_088F1A08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (17078u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1A80;
      }
      goto L_088F1A24;
    }
L_088F1A24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (50218u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1A80;
      }
      goto L_088F1A40;
    }
L_088F1A40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (50198u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1A80;
      }
      goto L_088F1A5C;
    }
L_088F1A5C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (16835u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1A80;
      }
      goto L_088F1A7C;
    }
L_088F1A7C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F1A80;
L_088F1A80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x088F1A8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 110u, 0x088ECFC0u>(ctx, &aot_mem) && ctx.pc == 0x088F1A8Cu) goto L_088F1A8C;
    return;
L_088F1A8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22040)));
    ctx.gpr[31] = (0x088F1A9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 79u, 0x088ECB20u>(ctx, &aot_mem) && ctx.pc == 0x088F1A9Cu) goto L_088F1A9C;
    return;
L_088F1A9C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088F1ABCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 99u, 0x088ECE50u>(ctx, &aot_mem) && ctx.pc == 0x088F1ABCu) goto L_088F1ABC;
    return;
L_088F1ABC:
    ctx.gpr[31] = (0x088F1AC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 89u, 0x088ECCE4u>(ctx, &aot_mem) && ctx.pc == 0x088F1AC4u) goto L_088F1AC4;
    return;
L_088F1AC4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    goto L_088F1AC8;
L_088F1AC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(780)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(788)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(796)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 6u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088F1C14;
      }
      goto L_088F1B78;
    }
L_088F1B78:
    ctx.gpr[31] = (0x088F1B80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088F1B80u) goto L_088F1B80;
    return;
L_088F1B80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1C0C;
      }
      goto L_088F1B88;
    }
L_088F1B88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(416));
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22716));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[6]);
    ctx.gpr[23] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[7]);
    ctx.gpr[6] = (16329u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(512));
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088F1C1C;
      }
      goto L_088F1C04;
    }
L_088F1C04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F1C44;
      }
      goto L_088F1C0C;
    }
L_088F1C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F36A0;
      }
      goto L_088F1C14;
    }
L_088F1C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F36A0;
      }
      goto L_088F1C1C;
    }
L_088F1C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[31] = (0x088F1C30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x088F1C30u) goto L_088F1C30;
    return;
L_088F1C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[31] = (0x088F1C40u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 603u, 0x088735A0u>(ctx, &aot_mem) && ctx.pc == 0x088F1C40u) goto L_088F1C40;
    return;
L_088F1C40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), ctx.gpr[19]);
    goto L_088F1C44;
L_088F1C44:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
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
    ctx.gpr[31] = (0x088F1C5Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F1C5Cu) goto L_088F1C5C;
    return;
L_088F1C5C:
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22897)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_088F1C80;
      }
      goto L_088F1C78;
    }
L_088F1C78:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22897), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(23664), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088F1C80;
L_088F1C80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[5]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
        goto L_088F1CB8;
    }
    goto L_088F1CB8;
L_088F1CB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[20]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23668)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[10] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1EE0;
      }
      goto L_088F1CE4;
    }
L_088F1CE4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088F1D2Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x088F1D2Cu) goto L_088F1D2C;
    return;
L_088F1D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.gpr[4] = (15918u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088F1DB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x088F1DB0u) goto L_088F1DB0;
    return;
L_088F1DB0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (0u | 5u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088F1DD4;
L_088F1DD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x088F1E0Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1E0Cu) goto L_088F1E0C;
    return;
L_088F1E0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1EA0;
      }
      goto L_088F1E14;
    }
L_088F1E14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (0x088F1E60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 608u, 0x088735E8u>(ctx, &aot_mem) && ctx.pc == 0x088F1E60u) goto L_088F1E60;
    return;
L_088F1E60:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1EA0;
      }
      goto L_088F1E70;
    }
L_088F1E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1E9C;
      }
      goto L_088F1E7C;
    }
L_088F1E7C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23664)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F1E9C;
L_088F1E9C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088F1EA0;
L_088F1EA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088F1EACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1EACu) goto L_088F1EAC;
    return;
L_088F1EAC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088F1DD4;
      }
      goto L_088F1EB8;
    }
L_088F1EB8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[23] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[30];
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_088F1ED8;
      }
      goto L_088F1ED4;
    }
L_088F1ED4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_088F1ED8;
L_088F1ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_088F1EE4;
      }
      goto L_088F1EE0;
    }
L_088F1EE0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_088F1EE4;
L_088F1EE4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23668)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1F00;
      }
      goto L_088F1EF4;
    }
L_088F1EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23668)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23668), ctx.gpr[5]);
    goto L_088F1F00;
L_088F1F00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1F14;
      }
      goto L_088F1F0C;
    }
L_088F1F0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(23664), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_088F1F3C;
      }
      goto L_088F1F14;
    }
L_088F1F14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23664)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23664)));
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(23664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F1F3C;
L_088F1F3C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
        goto L_088F1F58;
    }
    goto L_088F1F50;
L_088F1F50:
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    goto L_088F1F58;
L_088F1F58:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(316)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22672)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088F1FA8;
      }
      goto L_088F1FA4;
    }
L_088F1FA4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_088F1FA8;
L_088F1FA8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22672), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[16])) && ctx.fpr[14] == ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F1FDC;
      }
      goto L_088F1FCC;
    }
L_088F1FCC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(244)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F2030;
      }
      goto L_088F1FDC;
    }
L_088F1FDC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[16])) && ctx.fpr[14] == ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088F2008;
    }
    goto L_088F1FF8;
L_088F1FF8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F2030;
      }
      goto L_088F2008;
    }
L_088F2008:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[16])) && ctx.fpr[14] == ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2030;
      }
      goto L_088F2024;
    }
L_088F2024:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F2030;
L_088F2030:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_088F20C0;
      }
      goto L_088F203C;
    }
L_088F203C:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2058;
      }
      goto L_088F2050;
    }
L_088F2050:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F20C0;
      }
      goto L_088F2058;
    }
L_088F2058:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22680)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2094;
      }
      goto L_088F2084;
    }
L_088F2084:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F20C0;
      }
      goto L_088F2094;
    }
L_088F2094:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F20BC;
      }
      goto L_088F20AC;
    }
L_088F20AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F20C0;
      }
      goto L_088F20BC;
    }
L_088F20BC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F20C0;
L_088F20C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_088F20E0;
    }
    goto L_088F20E0;
L_088F20E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F2104;
      }
      goto L_088F20EC;
    }
L_088F20EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(82)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2104;
      }
      goto L_088F20F8;
    }
L_088F20F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(83)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F22F8;
      }
      goto L_088F2104;
    }
L_088F2104:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(22896), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22676), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F218C;
      }
      goto L_088F2130;
    }
L_088F2130:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088F2160;
      }
      goto L_088F2148;
    }
L_088F2148:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[28])) && ctx.fpr[13] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_088F2160;
      }
      goto L_088F2158;
    }
L_088F2158:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[24];
      if (branch_taken) {
          goto L_088F216C;
      }
      goto L_088F2160;
    }
L_088F2160:
    ctx.gpr[31] = (0x088F2168u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F2168u) goto L_088F2168;
    return;
L_088F2168:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[24];
    goto L_088F216C;
L_088F216C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(83)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_088F218C;
      }
      goto L_088F2180;
    }
L_088F2180:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F218C;
L_088F218C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F21A8;
      }
      goto L_088F21A4;
    }
L_088F21A4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088F21A8;
L_088F21A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
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
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
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
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(576), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F22F8;
      }
      goto L_088F22EC;
    }
L_088F22EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F22F8;
L_088F22F8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
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
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F239C;
      }
      goto L_088F2374;
    }
L_088F2374:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F239C;
      }
      goto L_088F2388;
    }
L_088F2388:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088F2398;
    }
    goto L_088F2398;
L_088F2398:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F239C;
L_088F239C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(416)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F23E8;
      }
      goto L_088F23CC;
    }
L_088F23CC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[28])) && ctx.fpr[13] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F23E8;
      }
      goto L_088F23DC;
    }
L_088F23DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
      if (branch_taken) {
          goto L_088F23F4;
      }
      goto L_088F23E8;
    }
L_088F23E8:
    ctx.gpr[31] = (0x088F23F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F23F0u) goto L_088F23F0;
    return;
L_088F23F0:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    goto L_088F23F4;
L_088F23F4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2424;
      }
      goto L_088F2414;
    }
L_088F2414:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    goto L_088F2424;
L_088F2424:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088F2454;
      }
      goto L_088F243C;
    }
L_088F243C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[28])) && ctx.fpr[13] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2454;
      }
      goto L_088F244C;
    }
L_088F244C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
      if (branch_taken) {
          goto L_088F2460;
      }
      goto L_088F2454;
    }
L_088F2454:
    ctx.gpr[31] = (0x088F245Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F245Cu) goto L_088F245C;
    return;
L_088F245C:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    goto L_088F2460;
L_088F2460:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[20];
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F249C;
      }
      goto L_088F2484;
    }
L_088F2484:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[28];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[20];
      if (branch_taken) {
          goto L_088F24CC;
      }
      goto L_088F249C;
    }
L_088F249C:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F24CC;
      }
      goto L_088F24B8;
    }
L_088F24B8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[20];
    goto L_088F24CC;
L_088F24CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088F24F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088F24F0u) goto L_088F24F0;
    return;
L_088F24F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_088F2528;
      }
      goto L_088F2500;
    }
L_088F2500:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
        goto L_088F257C;
    }
    goto L_088F2528;
L_088F2528:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F2544u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 140u, 0x08850DD0u>(ctx, &aot_mem) && ctx.pc == 0x088F2544u) goto L_088F2544;
    return;
L_088F2544:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
        goto L_088F257C;
    }
    goto L_088F254C;
L_088F254C:
    ctx.gpr[31] = (0x088F2554u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F2554u) goto L_088F2554;
    return;
L_088F2554:
    ctx.gpr[31] = (0x088F255Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 9u, 0x08A98040u>(ctx, &aot_mem) && ctx.pc == 0x088F255Cu) goto L_088F255C;
    return;
L_088F255C:
    // Free aim keeps the camera where the mouse put it.
    if (!lcs::lcs_auto_aim()) ctx.gpr[2] = 0u;
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
        goto L_088F257C;
    }
    goto L_088F2564;
L_088F2564:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(22896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    goto L_088F257C;
L_088F257C:
    ctx.gpr[31] = (0x088F2584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 206u, 0x08A98890u>(ctx, &aot_mem) && ctx.pc == 0x088F2584u) goto L_088F2584;
    return;
L_088F2584:
    if (!lcs::lcs_auto_aim()) ctx.gpr[2] = 0u;
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[16] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088F25A8;
      }
      goto L_088F259C;
    }
L_088F259C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(22896), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F2604;
      }
      goto L_088F25A8;
    }
L_088F25A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(22896)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2604;
      }
      goto L_088F25B4;
    }
L_088F25B4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2600;
      }
      goto L_088F25E0;
    }
L_088F25E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2604;
      }
      goto L_088F2600;
    }
L_088F2600:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(22896), static_cast<std::uint8_t>(0u));
    goto L_088F2604;
L_088F2604:
    ctx.gpr[5] = (16445u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 58446u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2640;
      }
      goto L_088F2624;
    }
L_088F2624:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(22896)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2640;
      }
      goto L_088F2630;
    }
L_088F2630:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[16])) && ctx.fpr[13] == ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2774;
      }
      goto L_088F2640;
    }
L_088F2640:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(22896)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2670;
      }
      goto L_088F2660;
    }
L_088F2660:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[16])) && ctx.fpr[13] == ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F26BC;
      }
      goto L_088F2670;
    }
L_088F2670:
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23680)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088F268C;
    }
    goto L_088F268C;
L_088F268C:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23684)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[16])) && ctx.fpr[13] == ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F26B4;
      }
      goto L_088F26AC;
    }
L_088F26AC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_088F26B4;
L_088F26B4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088F2740;
      }
      goto L_088F26BC;
    }
L_088F26BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2714;
      }
      goto L_088F26C8;
    }
L_088F26C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1264)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088F270C;
    }
    goto L_088F270C;
L_088F270C:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088F2740;
      }
      goto L_088F2714;
    }
L_088F2714:
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
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088F273C;
    }
    goto L_088F273C;
L_088F273C:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_088F2740;
L_088F2740:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F275C;
      }
      goto L_088F2754;
    }
L_088F2754:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088F2774;
      }
      goto L_088F275C;
    }
L_088F275C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2774;
      }
      goto L_088F2770;
    }
L_088F2770:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F2774;
L_088F2774:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F27B0;
      }
      goto L_088F279C;
    }
L_088F279C:
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_088F27D8;
      }
      goto L_088F27B0;
    }
L_088F27B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F27D8;
      }
      goto L_088F27C8;
    }
L_088F27C8:
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_088F27D8;
L_088F27D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[20] = ctx.fpr[28] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // How far the follow camera swings toward where the player walks. Not while free-aiming: strafing walks sideways,
    // and only the mouse turns the aim.
    if (lcs::lcs_free_aim_active()) ctx.fpr[12] = 0.0f;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F2800;
      }
      goto L_088F27F8;
    }
L_088F27F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088F2808;
      }
      goto L_088F2800;
    }
L_088F2800:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F2808;
L_088F2808:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(424)));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(424)));
        goto L_088F2828;
    }
    goto L_088F2828;
L_088F2828:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088F2838;
    }
    goto L_088F2838;
L_088F2838:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2968;
      }
      goto L_088F2878;
    }
L_088F2878:
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
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2968;
      }
      goto L_088F28A4;
    }
L_088F28A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088F28D4;
    }
    goto L_088F28D4;
L_088F28D4:
    ctx.gpr[4] = (16050u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2944;
      }
      goto L_088F2930;
    }
L_088F2930:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088F2968;
      }
      goto L_088F2944;
    }
L_088F2944:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2968;
      }
      goto L_088F2958;
    }
L_088F2958:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
    goto L_088F2968;
L_088F2968:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(22896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F29E0;
      }
      goto L_088F2978;
    }
L_088F2978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F29E0;
      }
      goto L_088F2988;
    }
L_088F2988:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088F299C;
    }
    goto L_088F299C;
L_088F299C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[24];
    // The follow camera pulls its pitch toward a pitch it works out from where the player is. While free-aiming, and
    // moving and firing at once, that pull ran to the 85 degree limit and the camera ended up looking at the ground. Only
    // the mouse turns the aim: no pull (the pitch counterpart of the swing zeroed below for the yaw).
    if (lcs::lcs_free_aim_active()) ctx.fpr[12] = 0.0f;
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F29C8;
      }
      goto L_088F29C0;
    }
L_088F29C0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088F29E0;
      }
      goto L_088F29C8;
    }
L_088F29C8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F29E0;
      }
      goto L_088F29DC;
    }
L_088F29DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F29E0;
L_088F29E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
        goto L_088F2A08;
    }
    goto L_088F2A00;
L_088F2A00:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F2A20;
      }
      goto L_088F2A08;
    }
L_088F2A08:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2A20;
      }
      goto L_088F2A1C;
    }
L_088F2A1C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F2A20;
L_088F2A20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.fpr[16] = ctx.fpr[24] - ctx.fpr[16];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2A7C;
      }
      goto L_088F2A74;
    }
L_088F2A74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F2A94;
      }
      goto L_088F2A7C;
    }
L_088F2A7C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2A94;
      }
      goto L_088F2A90;
    }
L_088F2A90:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F2A94;
L_088F2A94:
    ctx.gpr[31] = (0x088F2A9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 300u, 0x08A98D3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2A9Cu) goto L_088F2A9C;
    return;
L_088F2A9C:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[31] = (0x088F2AB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 320u, 0x08A98E3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2AB0u) goto L_088F2AB0;
    return;
L_088F2AB0:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[31] = (0x088F2AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 190u, 0x089D591Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2AC0u) goto L_088F2AC0;
    return;
L_088F2AC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2AD0;
      }
      goto L_088F2AC8;
    }
L_088F2AC8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F2AD0;
L_088F2AD0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22556)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (15762u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18725u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[4] = (15663u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 35577u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[20];
      if (branch_taken) {
          goto L_088F2B8C;
      }
      goto L_088F2B84;
    }
L_088F2B84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088F2BA4;
      }
      goto L_088F2B8C;
    }
L_088F2B8C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2BA4;
      }
      goto L_088F2BA0;
    }
L_088F2BA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F2BA4;
L_088F2BA4:
    ctx.fpr[12] = lcs::lcs_mouse_camera_turn_speed(ctx.fpr[12],
        std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144))));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    { const float keep = lcs::lcs_camera_smoothing(ctx.fpr[20]);
      const float take = keep == ctx.fpr[20] ? ctx.fpr[26] : 1.0f - keep;
      ctx.fpr[13] = keep * ctx.fpr[13];
      ctx.fpr[12] = take * ctx.fpr[12]; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2BE0;
      }
      goto L_088F2BD8;
    }
L_088F2BD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F2BE0;
L_088F2BE0:
    ctx.gpr[31] = (0x088F2BE8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 491u, 0x088EABACu>(ctx, &aot_mem) && ctx.pc == 0x088F2BE8u) goto L_088F2BE8;
    return;
L_088F2BE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2C08;
      }
      goto L_088F2BF0;
    }
L_088F2BF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F2C08;
L_088F2C08:
    ctx.gpr[31] = (0x088F2C10u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088F2C10u) goto L_088F2C10;
    return;
L_088F2C10:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088F2C3C;
      }
      goto L_088F2C24;
    }
L_088F2C24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F2C3C;
L_088F2C3C:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(192)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2C68;
      }
      goto L_088F2C60;
    }
L_088F2C60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088F2C84;
      }
      goto L_088F2C68;
    }
L_088F2C68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2C84;
      }
      goto L_088F2C80;
    }
L_088F2C80:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088F2C84;
L_088F2C84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2CAC;
      }
      goto L_088F2CA8;
    }
L_088F2CA8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F2CAC;
L_088F2CAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(192)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = lcs::lcs_mouse_camera_pitch_speed(ctx.fpr[12], ctx.fpr[15]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
        goto L_088F2CE8;
    }
    goto L_088F2CDC;
L_088F2CDC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F2D08;
      }
      goto L_088F2CE8;
    }
L_088F2CE8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2D08;
      }
      goto L_088F2D00;
    }
L_088F2D00:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F2D08;
L_088F2D08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23672)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F2D34;
      }
      goto L_088F2D2C;
    }
L_088F2D2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23672)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F2D34;
L_088F2D34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23676)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_088F2D6C;
      }
      goto L_088F2D60;
    }
L_088F2D60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23676)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (2230u << 16u);
    goto L_088F2D6C;
L_088F2D6C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23676), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x088F2E38u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 99u, 0x088ECE50u>(ctx, &aot_mem) && ctx.pc == 0x088F2E38u) goto L_088F2E38;
    return;
L_088F2E38:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
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
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8004), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088F34C8;
      }
      goto L_088F306C;
    }
L_088F306C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x088F30ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x088F30ACu) goto L_088F30AC;
    return;
L_088F30AC:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F34C8;
      }
      goto L_088F30B8;
    }
L_088F30B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23668), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F3130;
      }
      goto L_088F30D8;
    }
L_088F30D8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    ctx.gpr[31] = (0x088F3128u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3128u) goto L_088F3128;
    return;
L_088F3128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F31A0;
      }
      goto L_088F3130;
    }
L_088F3130:
    ctx.gpr[31] = (0x088F3138u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 489u, 0x088EAB24u>(ctx, &aot_mem) && ctx.pc == 0x088F3138u) goto L_088F3138;
    return;
L_088F3138:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22068)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088F31A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088F31A0u) goto L_088F31A0;
    return;
L_088F31A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F33E4;
      }
      goto L_088F3208;
    }
L_088F3208:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F33E4;
      }
      goto L_088F3218;
    }
L_088F3218:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8004), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x088F3274u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3274u) goto L_088F3274;
    return;
L_088F3274:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F33A4;
      }
      goto L_088F327C;
    }
L_088F327C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088F3348u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3348u) goto L_088F3348;
    return;
L_088F3348:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F339C;
      }
      goto L_088F3364;
    }
L_088F3364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088F3394;
    }
    goto L_088F3394;
L_088F3394:
    ctx.gpr[31] = (0x088F339Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x088F339Cu) goto L_088F339C;
    return;
L_088F339C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F33DC;
      }
      goto L_088F33A4;
    }
L_088F33A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088F33D4;
    }
    goto L_088F33D4;
L_088F33D4:
    ctx.gpr[31] = (0x088F33DCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x088F33DCu) goto L_088F33DC;
    return;
L_088F33DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F34C8;
      }
      goto L_088F33E4;
    }
L_088F33E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088F3474u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3474u) goto L_088F3474;
    return;
L_088F3474:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F34C8;
      }
      goto L_088F3490;
    }
L_088F3490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088F34C0;
    }
    goto L_088F34C0;
L_088F34C0:
    ctx.gpr[31] = (0x088F34C8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x088F34C8u) goto L_088F34C8;
    return;
L_088F34C8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088F3510u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x088F3510u) goto L_088F3510;
    return;
L_088F3510:
    ctx.gpr[31] = (0x088F3518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x088F3518u) goto L_088F3518;
    return;
L_088F3518:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8004), 0u);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088F3550u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA660u>(ctx, &aot_mem) && ctx.pc == 0x088F3550u) goto L_088F3550;
    return;
L_088F3550:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25810)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3570;
      }
      goto L_088F3560;
    }
L_088F3560:
    ctx.gpr[31] = (0x088F3568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3568u) goto L_088F3568;
    return;
L_088F3568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
      if (branch_taken) {
          goto L_088F357C;
      }
      goto L_088F3570;
    }
L_088F3570:
    ctx.gpr[31] = (0x088F3578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3578u) goto L_088F3578;
    return;
L_088F3578:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    goto L_088F357C;
L_088F357C:
    ctx.gpr[31] = (0x088F3584u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 608u, 0x088735E8u>(ctx, &aot_mem) && ctx.pc == 0x088F3584u) goto L_088F3584;
    return;
L_088F3584:
    ctx.gpr[31] = (0x088F358Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 103u, 0x088ECF34u>(ctx, &aot_mem) && ctx.pc == 0x088F358Cu) goto L_088F358C;
    return;
L_088F358C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1132)));
    ctx.gpr[31] = (0x088F3598u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 110u, 0x088ECFC0u>(ctx, &aot_mem) && ctx.pc == 0x088F3598u) goto L_088F3598;
    return;
L_088F3598:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088F35A8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x088F35A8u) goto L_088F35A8;
    return;
L_088F35A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088F35B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x088F35B4u) goto L_088F35B4;
    return;
L_088F35B4:
    ctx.gpr[31] = (0x088F35BCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 99u, 0x088ECE50u>(ctx, &aot_mem) && ctx.pc == 0x088F35BCu) goto L_088F35BC;
    return;
L_088F35BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088F35CCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x088F35CCu) goto L_088F35CC;
    return;
L_088F35CC:
    ctx.gpr[31] = (0x088F35D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x088F35D4u) goto L_088F35D4;
    return;
L_088F35D4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088F35E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x088F35E0u) goto L_088F35E0;
    return;
L_088F35E0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22676)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088F3614;
      }
      goto L_088F3610;
    }
L_088F3610:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22676), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F3614;
L_088F3614:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x088F3620u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x088F3620u) goto L_088F3620;
    return;
L_088F3620:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088F3660;
      }
      goto L_088F363C;
    }
L_088F363C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[31] = (0x088F3650u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x088F3650u) goto L_088F3650;
    return;
L_088F3650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[31] = (0x088F3660u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 603u, 0x088735A0u>(ctx, &aot_mem) && ctx.pc == 0x088F3660u) goto L_088F3660;
    return;
L_088F3660:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 2u);
        goto L_088F3670;
    }
    goto L_088F3670;
L_088F3670:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088F3680u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 17u, 0x088FC250u>(ctx, &aot_mem) && ctx.pc == 0x088F3680u) goto L_088F3680;
    return;
L_088F3680:
    ctx.gpr[31] = (0x088F3688u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F3688u) goto L_088F3688;
    return;
L_088F3688:
    ctx.gpr[31] = (0x088F3690u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1017u, 0x08A97CDCu>(ctx, &aot_mem) && ctx.pc == 0x088F3690u) goto L_088F3690;
    return;
L_088F3690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F36A0;
      }
      goto L_088F3698;
    }
L_088F3698:
    ctx.gpr[31] = (0x088F36A0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 89u, 0x088ECCE4u>(ctx, &aot_mem) && ctx.pc == 0x088F36A0u) goto L_088F36A0;
    return;
L_088F36A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F36E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1008), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1020), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F3814;
      }
      goto L_088F3750;
    }
L_088F3750:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[9]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x088F3770u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F3770u) goto L_088F3770;
    return;
L_088F3770:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12960));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22900));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[7]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 192u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17036u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(968), ctx.gpr[7]);
    ctx.gpr[7] = (16329u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(416));
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(512));
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[7]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[10]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(432));
    ctx.gpr[9] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-7960));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088F381C;
      }
      goto L_088F380C;
    }
L_088F380C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088F3834;
      }
      goto L_088F3814;
    }
L_088F3814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 236u, 0x088F5644u>(ctx, &aot_mem); return;
      }
      goto L_088F381C;
    }
L_088F381C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_088F3834;
L_088F3834:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F3858;
      }
      goto L_088F3848;
    }
L_088F3848:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-955));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F3860;
      }
      goto L_088F3858;
    }
L_088F3858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_088F38B4;
      }
      goto L_088F3860;
    }
L_088F3860:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 212u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F3880;
      }
      goto L_088F3870;
    }
L_088F3870:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 211u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F3888;
      }
      goto L_088F3880;
    }
L_088F3880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_088F38B4;
      }
      goto L_088F3888;
    }
L_088F3888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F38A0;
      }
      goto L_088F3898;
    }
L_088F3898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F38B4;
      }
      goto L_088F38A0;
    }
L_088F38A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), ctx.gpr[30]);
        goto L_088F38B8;
    }
    goto L_088F38B0;
L_088F38B0:
    ctx.gpr[19] = (0u | 4u);
    goto L_088F38B4;
L_088F38B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), ctx.gpr[30]);
    goto L_088F38B8;
L_088F38B8:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    ctx.gpr[31] = (0x088F38E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x088F38E4u) goto L_088F38E4;
    return;
L_088F38E4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088F38F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 150u, 0x088ED218u>(ctx, &aot_mem) && ctx.pc == 0x088F38F4u) goto L_088F38F4;
    return;
L_088F38F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
      if (branch_taken) {
          goto L_088F392C;
      }
      goto L_088F3908;
    }
L_088F3908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F39DC;
      }
      goto L_088F392C;
    }
L_088F392C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3968;
      }
      goto L_088F3944;
    }
L_088F3944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22196));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F39DC;
      }
      goto L_088F3968;
    }
L_088F3968:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F39A0;
      }
      goto L_088F397C;
    }
L_088F397C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F39DC;
      }
      goto L_088F39A0;
    }
L_088F39A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088F39E0;
    }
    goto L_088F39BC;
L_088F39BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22236));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F39DC;
L_088F39DC:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F39E0;
L_088F39E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[24] + ctx.fpr[30];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x088F3A04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x088F3A04u) goto L_088F3A04;
    return;
L_088F3A04:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F3A6C;
      }
      goto L_088F3A10;
    }
L_088F3A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088F3A6C;
      }
      goto L_088F3A20;
    }
L_088F3A20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22408)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x088F3A64u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3A64u) goto L_088F3A64;
    return;
L_088F3A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3AB8;
      }
      goto L_088F3A6C;
    }
L_088F3A6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3AB8;
      }
      goto L_088F3A8C;
    }
L_088F3A8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[20];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23716)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F3AB8;
L_088F3AB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3AFC;
      }
      goto L_088F3ADC;
    }
L_088F3ADC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088F3AEC;
      }
      goto L_088F3AE4;
    }
L_088F3AE4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F3AFC;
      }
      goto L_088F3AEC;
    }
L_088F3AEC:
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088F3AFC;
L_088F3AFC:
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_088F3B0C;
    }
    goto L_088F3B0C;
L_088F3B0C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3B38;
      }
      goto L_088F3B30;
    }
L_088F3B30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088F3C48;
      }
      goto L_088F3B38;
    }
L_088F3B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (17096u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F3B58;
      }
      goto L_088F3B48;
    }
L_088F3B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F3BBC;
      }
      goto L_088F3B58;
    }
L_088F3B58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(968)));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22708)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3BBC;
      }
      goto L_088F3B8C;
    }
L_088F3B8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22708)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F3BBC;
L_088F3BBC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3C14;
      }
      goto L_088F3BD0;
    }
L_088F3BD0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22712)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[22];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088F3C14;
L_088F3C14:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3C30;
      }
      goto L_088F3C28;
    }
L_088F3C28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F3C48;
      }
      goto L_088F3C30;
    }
L_088F3C30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3C48;
      }
      goto L_088F3C44;
    }
L_088F3C44:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088F3C48;
L_088F3C48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3C88;
      }
      goto L_088F3C54;
    }
L_088F3C54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(82)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3C88;
      }
      goto L_088F3C60;
    }
L_088F3C60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(83)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3C88;
      }
      goto L_088F3C6C;
    }
L_088F3C6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088F3C78u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088F3C78u) goto L_088F3C78;
    return;
L_088F3C78:
    ctx.gpr[31] = (0x088F3C80u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 238u, 0x08A989F8u>(ctx, &aot_mem) && ctx.pc == 0x088F3C80u) goto L_088F3C80;
    return;
L_088F3C80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3E7C;
      }
      goto L_088F3C88;
    }
L_088F3C88:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088F3D14;
    }
    goto L_088F3CA8;
L_088F3CA8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088F3CDC;
      }
      goto L_088F3CC4;
    }
L_088F3CC4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[26])) && ctx.fpr[13] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3CDC;
      }
      goto L_088F3CD4;
    }
L_088F3CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
      if (branch_taken) {
          goto L_088F3CE8;
      }
      goto L_088F3CDC;
    }
L_088F3CDC:
    ctx.gpr[31] = (0x088F3CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F3CE4u) goto L_088F3CE4;
    return;
L_088F3CE4:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[28];
    goto L_088F3CE8;
L_088F3CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(83)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_088F3D10;
      }
      goto L_088F3CFC;
    }
L_088F3CFC:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F3D10;
L_088F3D10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F3D14;
L_088F3D14:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
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
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
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
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(576), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3E7C;
      }
      goto L_088F3E70;
    }
L_088F3E70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F3E7C;
L_088F3E7C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(420)));
      if (branch_taken) {
          goto L_088F3F1C;
      }
      goto L_088F3F04;
    }
L_088F3F04:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[26])) && ctx.fpr[13] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3F1C;
      }
      goto L_088F3F14;
    }
L_088F3F14:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
      if (branch_taken) {
          goto L_088F3F28;
      }
      goto L_088F3F1C;
    }
L_088F3F1C:
    ctx.gpr[31] = (0x088F3F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F3F24u) goto L_088F3F24;
    return;
L_088F3F24:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[28];
    goto L_088F3F28;
L_088F3F28:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F3F60;
      }
      goto L_088F3F50;
    }
L_088F3F50:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    goto L_088F3F60;
L_088F3F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(968)));
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
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3FD8;
      }
      goto L_088F3F94;
    }
L_088F3F94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_088F3FC4;
      }
      goto L_088F3FAC;
    }
L_088F3FAC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[26])) && ctx.fpr[13] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F3FC4;
      }
      goto L_088F3FBC;
    }
L_088F3FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
      if (branch_taken) {
          goto L_088F3FD0;
      }
      goto L_088F3FC4;
    }
L_088F3FC4:
    ctx.gpr[31] = (0x088F3FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088F3FCCu) goto L_088F3FCC;
    return;
L_088F3FCC:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[28];
    goto L_088F3FD0;
L_088F3FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3FDC;
      }
      goto L_088F3FD8;
    }
L_088F3FD8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088F3FDC;
L_088F3FDC:
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 1u, 0x088F4004u>(ctx, &aot_mem); return;
      }
      goto L_088F3FF0;
    }
L_088F3FF0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 3u, 0x088F4028u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 1u, 0x088F4004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0059(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0059_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_59(Runtime &runtime) {
    runtime.register_generated_unit(59u, 0x088F0000u, 16384u, &recomp_unit_0059, &recomp_unit_0059_entry);
    runtime.register_function(0x088F0000u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0004u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F000Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0014u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F001Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0024u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F002Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0034u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F003Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0044u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F004Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F005Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0064u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F006Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0094u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0108u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0118u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0134u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0148u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0160u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0168u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0170u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0188u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0190u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0208u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0210u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0228u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0230u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0248u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0250u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0268u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0270u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0288u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0290u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0308u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0310u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0328u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0330u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0348u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0350u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0368u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0370u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0388u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0390u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0398u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0438u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0474u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F048Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0498u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0504u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0554u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0568u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0578u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0588u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0598u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F059Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F060Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0610u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0618u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0620u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0628u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0630u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F063Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F064Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0654u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F065Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F066Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F067Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0688u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0690u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0698u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0704u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0714u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0724u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0730u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0740u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0750u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0758u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0768u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0788u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0790u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0798u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0804u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0814u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0824u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0834u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F083Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0844u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F084Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0868u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0900u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0908u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0910u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0934u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0958u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0ABCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0ADCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B04u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CFCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1014u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1024u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F102Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1030u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1038u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F103Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1068u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1078u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1080u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1088u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F108Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F109Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F111Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1124u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F112Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1134u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1140u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1148u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1164u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1178u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1194u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F120Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1218u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F123Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1250u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1268u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1278u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1294u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F129Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1304u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F139Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1438u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1440u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1450u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1468u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1470u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F147Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1494u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1508u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1538u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1568u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1578u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1584u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1594u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1650u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1658u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1734u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F173Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1804u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F183Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1844u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F184Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F188Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1944u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1978u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1ABCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C04u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1DB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1DD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EA0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1ED4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1ED8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2008u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2024u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2030u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F203Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2050u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2058u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2084u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2094u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2104u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2130u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2148u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2158u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2160u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2168u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F216Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2180u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F218Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2374u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2388u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2398u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F239Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2414u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2424u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F243Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F244Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2454u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F245Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2460u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2484u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F249Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2500u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2528u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2544u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F254Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2554u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F255Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2564u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F257Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2584u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F259Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2600u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2604u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2624u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2630u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2640u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2660u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2670u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F268Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F270Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2714u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F273Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2740u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2754u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F275Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2770u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2774u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F279Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2800u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2808u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2828u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2838u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2878u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2930u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2944u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2958u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2968u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2978u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2988u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F299Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BA0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D34u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F306Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3128u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3130u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3138u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3208u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3218u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3274u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F327Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3348u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3364u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3394u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F339Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3474u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3490u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3510u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3518u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3550u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3560u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3568u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3570u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3578u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F357Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3584u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F358Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3598u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3610u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3614u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3620u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F363Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3650u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3660u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3670u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3680u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3688u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3690u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3698u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3750u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3770u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F380Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3814u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F381Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3834u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3848u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3858u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3860u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3870u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3880u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3888u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3898u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3908u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F392Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3944u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3968u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F397Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A04u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3ADCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AFCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CFCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F04u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FF0u, &recomp_unit_0059, "recomp_unit_0059");
}
} // namespace psprecomp
