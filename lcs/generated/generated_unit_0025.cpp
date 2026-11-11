#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "decomp.hpp"  // [decomp-hook]
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0025[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0,
    16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 0, 37,
    0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0,
    0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0,
    0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 99, 0, 100,
    0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119,
    0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129,
    0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142,
    143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154,
    0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    228, 0, 229, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250,
    0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264,
    0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279,
    0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288,
    0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 298,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 306, 0, 307, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0,
    0, 333, 0, 0, 0, 334, 0, 335, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0,
    0, 341, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 351, 352, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0,
    365, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 369, 370, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0,
    0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0,
    0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 401, 0, 0,
    402, 0, 0, 403, 404, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0,
    0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0,
    0, 0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 450,
    0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 460, 0, 0, 0,
    461, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 472,
    0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0,
    0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0,
    0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502,
    0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 510, 511, 0, 0, 0, 0,
    512, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0,
    0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0, 524, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 528, 0, 529, 0, 0, 0, 530, 0, 531, 532, 533, 0, 0, 0, 534, 0, 0,
    0, 0, 535, 0, 0, 0, 0, 536, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 541, 0, 542, 0, 0, 0, 543,
    0, 544, 545, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 552, 0,
    0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555,
    0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561,
    0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 566, 567, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0,
    0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0,
    0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590,
    0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604,
    0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0,
    0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0,
    624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0,
    0, 0, 0, 0, 633, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0,
    0, 0, 0, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 0,
    0, 0, 0, 649, 0, 650, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667,
    0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 674, 0, 0, 0, 675, 0,
    0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690,
    0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0,
    0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0,
    703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 716, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 727, 728, 0, 729,
};
void recomp_unit_0025_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08868000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0025[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08868000;
    case 2u: goto L_0886804C;
    case 3u: goto L_08868084;
    case 4u: goto L_088680BC;
    case 5u: goto L_088680E8;
    case 6u: goto L_088680F8;
    case 7u: goto L_0886810C;
    case 8u: goto L_08868114;
    case 9u: goto L_0886813C;
    case 10u: goto L_08868148;
    case 11u: goto L_08868150;
    case 12u: goto L_08868158;
    case 13u: goto L_08868160;
    case 14u: goto L_08868168;
    case 15u: goto L_08868174;
    case 16u: goto L_08868180;
    case 17u: goto L_0886818C;
    case 18u: goto L_08868198;
    case 19u: goto L_088681A4;
    case 20u: goto L_088681AC;
    case 21u: goto L_088681C8;
    case 22u: goto L_08868214;
    case 23u: goto L_0886824C;
    case 24u: goto L_08868298;
    case 25u: goto L_088682C4;
    case 26u: goto L_088682D4;
    case 27u: goto L_088682E8;
    case 28u: goto L_088682F0;
    case 29u: goto L_08868318;
    case 30u: goto L_08868338;
    case 31u: goto L_08868344;
    case 32u: goto L_0886834C;
    case 33u: goto L_08868354;
    case 34u: goto L_0886835C;
    case 35u: goto L_08868364;
    case 36u: goto L_08868370;
    case 37u: goto L_0886837C;
    case 38u: goto L_08868388;
    case 39u: goto L_08868394;
    case 40u: goto L_088683A0;
    case 41u: goto L_088683A8;
    case 42u: goto L_088683C4;
    case 43u: goto L_08868410;
    case 44u: goto L_08868418;
    case 45u: goto L_08868460;
    case 46u: goto L_088684A4;
    case 47u: goto L_088684B4;
    case 48u: goto L_08868528;
    case 49u: goto L_08868568;
    case 50u: goto L_08868570;
    case 51u: goto L_08868594;
    case 52u: goto L_088685C8;
    case 53u: goto L_088685D8;
    case 54u: goto L_088685E0;
    case 55u: goto L_088685E8;
    case 56u: goto L_08868604;
    case 57u: goto L_08868610;
    case 58u: goto L_08868618;
    case 59u: goto L_08868650;
    case 60u: goto L_08868668;
    case 61u: goto L_08868684;
    case 62u: goto L_08868728;
    case 63u: goto L_08868750;
    case 64u: goto L_0886878C;
    case 65u: goto L_088687C0;
    case 66u: goto L_088687C8;
    case 67u: goto L_088687D0;
    case 68u: goto L_0886881C;
    case 69u: goto L_08868838;
    case 70u: goto L_08868854;
    case 71u: goto L_0886886C;
    case 72u: goto L_088688A8;
    case 73u: goto L_088688E4;
    case 74u: goto L_08868908;
    case 75u: goto L_08868918;
    case 76u: goto L_08868920;
    case 77u: goto L_08868928;
    case 78u: goto L_08868930;
    case 79u: goto L_08868938;
    case 80u: goto L_08868940;
    case 81u: goto L_08868948;
    case 82u: goto L_08868954;
    case 83u: goto L_08868960;
    case 84u: goto L_0886896C;
    case 85u: goto L_08868978;
    case 86u: goto L_08868984;
    case 87u: goto L_0886898C;
    case 88u: goto L_088689B8;
    case 89u: goto L_08868A04;
    case 90u: goto L_08868A0C;
    case 91u: goto L_08868A54;
    case 92u: goto L_08868A68;
    case 93u: goto L_08868A90;
    case 94u: goto L_08868AB0;
    case 95u: goto L_08868B08;
    case 96u: goto L_08868B3C;
    case 97u: goto L_08868B64;
    case 98u: goto L_08868B68;
    case 99u: goto L_08868B74;
    case 100u: goto L_08868B7C;
    case 101u: goto L_08868B84;
    case 102u: goto L_08868B8C;
    case 103u: goto L_08868B94;
    case 104u: goto L_08868BA0;
    case 105u: goto L_08868BAC;
    case 106u: goto L_08868BB8;
    case 107u: goto L_08868BC4;
    case 108u: goto L_08868BD0;
    case 109u: goto L_08868BD4;
    case 110u: goto L_08868BF8;
    case 111u: goto L_08868C48;
    case 112u: goto L_08868C74;
    case 113u: goto L_08868C8C;
    case 114u: goto L_08868CAC;
    case 115u: goto L_08868CBC;
    case 116u: goto L_08868CD0;
    case 117u: goto L_08868CE4;
    case 118u: goto L_08868CF4;
    case 119u: goto L_08868CFC;
    case 120u: goto L_08868D14;
    case 121u: goto L_08868D20;
    case 122u: goto L_08868D28;
    case 123u: goto L_08868D3C;
    case 124u: goto L_08868D50;
    case 125u: goto L_08868D60;
    case 126u: goto L_08868D68;
    case 127u: goto L_08868DA0;
    case 128u: goto L_08868DE0;
    case 129u: goto L_08868DFC;
    case 130u: goto L_08868E04;
    case 131u: goto L_08868E0C;
    case 132u: goto L_08868E14;
    case 133u: goto L_08868E1C;
    case 134u: goto L_08868E24;
    case 135u: goto L_08868E2C;
    case 136u: goto L_08868E38;
    case 137u: goto L_08868E44;
    case 138u: goto L_08868E5C;
    case 139u: goto L_08868E64;
    case 140u: goto L_08868E6C;
    case 141u: goto L_08868E74;
    case 142u: goto L_08868E7C;
    case 143u: goto L_08868E80;
    case 144u: goto L_08868E90;
    case 145u: goto L_08868E98;
    case 146u: goto L_08868EA8;
    case 147u: goto L_08868EB0;
    case 148u: goto L_08868EB8;
    case 149u: goto L_08868EC4;
    case 150u: goto L_08868F44;
    case 151u: goto L_08868F50;
    case 152u: goto L_08868F58;
    case 153u: goto L_08868F6C;
    case 154u: goto L_08868F7C;
    case 155u: goto L_08868F84;
    case 156u: goto L_08868F90;
    case 157u: goto L_08868F98;
    case 158u: goto L_08868FA8;
    case 159u: goto L_08868FB8;
    case 160u: goto L_08868FC4;
    case 161u: goto L_08868FD8;
    case 162u: goto L_08868FF4;
    case 163u: goto L_08869000;
    case 164u: goto L_08869008;
    case 165u: goto L_08869020;
    case 166u: goto L_08869044;
    case 167u: goto L_0886904C;
    case 168u: goto L_0886905C;
    case 169u: goto L_08869098;
    case 170u: goto L_088690AC;
    case 171u: goto L_08869100;
    case 172u: goto L_08869108;
    case 173u: goto L_08869110;
    case 174u: goto L_0886911C;
    case 175u: goto L_08869128;
    case 176u: goto L_08869140;
    case 177u: goto L_08869148;
    case 178u: goto L_08869154;
    case 179u: goto L_08869178;
    case 180u: goto L_08869180;
    case 181u: goto L_0886918C;
    case 182u: goto L_088691AC;
    case 183u: goto L_088691B8;
    case 184u: goto L_088691C4;
    case 185u: goto L_088691D0;
    case 186u: goto L_088691DC;
    case 187u: goto L_088691EC;
    case 188u: goto L_088691FC;
    case 189u: goto L_08869214;
    case 190u: goto L_0886921C;
    case 191u: goto L_08869228;
    case 192u: goto L_08869248;
    case 193u: goto L_08869268;
    case 194u: goto L_08869274;
    case 195u: goto L_08869280;
    case 196u: goto L_08869290;
    case 197u: goto L_0886929C;
    case 198u: goto L_088692B4;
    case 199u: goto L_088692BC;
    case 200u: goto L_088692D8;
    case 201u: goto L_088692FC;
    case 202u: goto L_08869310;
    case 203u: goto L_08869328;
    case 204u: goto L_0886933C;
    case 205u: goto L_0886935C;
    case 206u: goto L_088693A4;
    case 207u: goto L_088693C4;
    case 208u: goto L_088693CC;
    case 209u: goto L_088693D4;
    case 210u: goto L_088693E0;
    case 211u: goto L_08869424;
    case 212u: goto L_08869454;
    case 213u: goto L_08869484;
    case 214u: goto L_08869490;
    case 215u: goto L_08869498;
    case 216u: goto L_088694A4;
    case 217u: goto L_088694B0;
    case 218u: goto L_088694BC;
    case 219u: goto L_088694C8;
    case 220u: goto L_088694D4;
    case 221u: goto L_088694E4;
    case 222u: goto L_08869514;
    case 223u: goto L_08869520;
    case 224u: goto L_08869530;
    case 225u: goto L_08869534;
    case 226u: goto L_08869550;
    case 227u: goto L_08869564;
    case 228u: goto L_08869580;
    case 229u: goto L_08869588;
    case 230u: goto L_0886958C;
    case 231u: goto L_088695A8;
    case 232u: goto L_088695C8;
    case 233u: goto L_088695D4;
    case 234u: goto L_088695E4;
    case 235u: goto L_088695F0;
    case 236u: goto L_08869600;
    case 237u: goto L_08869610;
    case 238u: goto L_08869638;
    case 239u: goto L_08869640;
    case 240u: goto L_08869644;
    case 241u: goto L_08869660;
    case 242u: goto L_08869680;
    case 243u: goto L_088696E4;
    case 244u: goto L_0886970C;
    case 245u: goto L_08869720;
    case 246u: goto L_08869740;
    case 247u: goto L_08869754;
    case 248u: goto L_0886976C;
    case 249u: goto L_08869774;
    case 250u: goto L_0886977C;
    case 251u: goto L_0886978C;
    case 252u: goto L_088697A0;
    case 253u: goto L_088697E0;
    case 254u: goto L_088697E8;
    case 255u: goto L_088697FC;
    case 256u: goto L_08869834;
    case 257u: goto L_08869840;
    case 258u: goto L_08869848;
    case 259u: goto L_08869850;
    case 260u: goto L_08869858;
    case 261u: goto L_08869860;
    case 262u: goto L_088698E8;
    case 263u: goto L_08869938;
    case 264u: goto L_0886997C;
    case 265u: goto L_08869984;
    case 266u: goto L_088699B8;
    case 267u: goto L_088699D8;
    case 268u: goto L_08869A58;
    case 269u: goto L_08869AB4;
    case 270u: goto L_08869B00;
    case 271u: goto L_08869B04;
    case 272u: goto L_08869B1C;
    case 273u: goto L_08869B30;
    case 274u: goto L_08869B48;
    case 275u: goto L_08869B4C;
    case 276u: goto L_08869B58;
    case 277u: goto L_08869B64;
    case 278u: goto L_08869B70;
    case 279u: goto L_08869B7C;
    case 280u: goto L_08869B90;
    case 281u: goto L_08869B9C;
    case 282u: goto L_08869BA4;
    case 283u: goto L_08869BB0;
    case 284u: goto L_08869BBC;
    case 285u: goto L_08869BCC;
    case 286u: goto L_08869BDC;
    case 287u: goto L_08869BF4;
    case 288u: goto L_08869BFC;
    case 289u: goto L_08869C04;
    case 290u: goto L_08869C1C;
    case 291u: goto L_08869C24;
    case 292u: goto L_08869C3C;
    case 293u: goto L_08869C44;
    case 294u: goto L_08869C50;
    case 295u: goto L_08869C60;
    case 296u: goto L_08869C68;
    case 297u: goto L_08869C70;
    case 298u: goto L_08869C7C;
    case 299u: goto L_08869C8C;
    case 300u: goto L_08869CA4;
    case 301u: goto L_08869CAC;
    case 302u: goto L_08869CB8;
    case 303u: goto L_08869CC4;
    case 304u: goto L_08869CD0;
    case 305u: goto L_08869CD8;
    case 306u: goto L_08869CDC;
    case 307u: goto L_08869CE4;
    case 308u: goto L_08869CF0;
    case 309u: goto L_08869D0C;
    case 310u: goto L_08869D14;
    case 311u: goto L_08869D4C;
    case 312u: goto L_08869E48;
    case 313u: goto L_08869E54;
    case 314u: goto L_08869E68;
    case 315u: goto L_08869F30;
    case 316u: goto L_08869F5C;
    case 317u: goto L_08869F90;
    case 318u: goto L_0886A038;
    case 319u: goto L_0886A040;
    case 320u: goto L_0886A048;
    case 321u: goto L_0886A0B4;
    case 322u: goto L_0886A0D0;
    case 323u: goto L_0886A0FC;
    case 324u: goto L_0886A108;
    case 325u: goto L_0886A11C;
    case 326u: goto L_0886A128;
    case 327u: goto L_0886A134;
    case 328u: goto L_0886A144;
    case 329u: goto L_0886A154;
    case 330u: goto L_0886A164;
    case 331u: goto L_0886A170;
    case 332u: goto L_0886A178;
    case 333u: goto L_0886A184;
    case 334u: goto L_0886A194;
    case 335u: goto L_0886A19C;
    case 336u: goto L_0886A1A0;
    case 337u: goto L_0886A1BC;
    case 338u: goto L_0886A1E0;
    case 339u: goto L_0886A1F0;
    case 340u: goto L_0886A1F8;
    case 341u: goto L_0886A204;
    case 342u: goto L_0886A20C;
    case 343u: goto L_0886A218;
    case 344u: goto L_0886A224;
    case 345u: goto L_0886A230;
    case 346u: goto L_0886A240;
    case 347u: goto L_0886A24C;
    case 348u: goto L_0886A254;
    case 349u: goto L_0886A260;
    case 350u: goto L_0886A268;
    case 351u: goto L_0886A270;
    case 352u: goto L_0886A274;
    case 353u: goto L_0886A288;
    case 354u: goto L_0886A2AC;
    case 355u: goto L_0886A2B8;
    case 356u: goto L_0886A2C8;
    case 357u: goto L_0886A2E0;
    case 358u: goto L_0886A2FC;
    case 359u: goto L_0886A308;
    case 360u: goto L_0886A31C;
    case 361u: goto L_0886A330;
    case 362u: goto L_0886A354;
    case 363u: goto L_0886A368;
    case 364u: goto L_0886A374;
    case 365u: goto L_0886A380;
    case 366u: goto L_0886A388;
    case 367u: goto L_0886A394;
    case 368u: goto L_0886A3A8;
    case 369u: goto L_0886A3AC;
    case 370u: goto L_0886A3B0;
    case 371u: goto L_0886A3C0;
    case 372u: goto L_0886A3D4;
    case 373u: goto L_0886A3E4;
    case 374u: goto L_0886A3F4;
    case 375u: goto L_0886A408;
    case 376u: goto L_0886A414;
    case 377u: goto L_0886A424;
    case 378u: goto L_0886A448;
    case 379u: goto L_0886A478;
    case 380u: goto L_0886A484;
    case 381u: goto L_0886A49C;
    case 382u: goto L_0886A4A8;
    case 383u: goto L_0886A4B8;
    case 384u: goto L_0886A4C8;
    case 385u: goto L_0886A4D4;
    case 386u: goto L_0886A4DC;
    case 387u: goto L_0886A4E4;
    case 388u: goto L_0886A4F8;
    case 389u: goto L_0886A508;
    case 390u: goto L_0886A518;
    case 391u: goto L_0886A520;
    case 392u: goto L_0886A530;
    case 393u: goto L_0886A534;
    case 394u: goto L_0886A554;
    case 395u: goto L_0886A590;
    case 396u: goto L_0886A5A8;
    case 397u: goto L_0886A5C0;
    case 398u: goto L_0886A5DC;
    case 399u: goto L_0886A5E4;
    case 400u: goto L_0886A5F0;
    case 401u: goto L_0886A5F4;
    case 402u: goto L_0886A600;
    case 403u: goto L_0886A60C;
    case 404u: goto L_0886A610;
    case 405u: goto L_0886A620;
    case 406u: goto L_0886A62C;
    case 407u: goto L_0886A634;
    case 408u: goto L_0886A640;
    case 409u: goto L_0886A648;
    case 410u: goto L_0886A650;
    case 411u: goto L_0886A660;
    case 412u: goto L_0886A670;
    case 413u: goto L_0886A678;
    case 414u: goto L_0886A6A4;
    case 415u: goto L_0886A6C8;
    case 416u: goto L_0886A6D8;
    case 417u: goto L_0886A6EC;
    case 418u: goto L_0886A714;
    case 419u: goto L_0886A71C;
    case 420u: goto L_0886A728;
    case 421u: goto L_0886A734;
    case 422u: goto L_0886A740;
    case 423u: goto L_0886A750;
    case 424u: goto L_0886A75C;
    case 425u: goto L_0886A76C;
    case 426u: goto L_0886A774;
    case 427u: goto L_0886A784;
    case 428u: goto L_0886A79C;
    case 429u: goto L_0886A7DC;
    case 430u: goto L_0886A7E4;
    case 431u: goto L_0886A7F4;
    case 432u: goto L_0886A804;
    case 433u: goto L_0886A814;
    case 434u: goto L_0886A81C;
    case 435u: goto L_0886A82C;
    case 436u: goto L_0886A834;
    case 437u: goto L_0886A840;
    case 438u: goto L_0886A84C;
    case 439u: goto L_0886A854;
    case 440u: goto L_0886A878;
    case 441u: goto L_0886A888;
    case 442u: goto L_0886A898;
    case 443u: goto L_0886A8A0;
    case 444u: goto L_0886A8B0;
    case 445u: goto L_0886A8B8;
    case 446u: goto L_0886A8C4;
    case 447u: goto L_0886A8D4;
    case 448u: goto L_0886A8E4;
    case 449u: goto L_0886A8EC;
    case 450u: goto L_0886A8FC;
    case 451u: goto L_0886A904;
    case 452u: goto L_0886A910;
    case 453u: goto L_0886A91C;
    case 454u: goto L_0886A924;
    case 455u: goto L_0886A934;
    case 456u: goto L_0886A940;
    case 457u: goto L_0886A954;
    case 458u: goto L_0886A964;
    case 459u: goto L_0886A96C;
    case 460u: goto L_0886A970;
    case 461u: goto L_0886A980;
    case 462u: goto L_0886A990;
    case 463u: goto L_0886A998;
    case 464u: goto L_0886A9A4;
    case 465u: goto L_0886A9B0;
    case 466u: goto L_0886A9BC;
    case 467u: goto L_0886A9C4;
    case 468u: goto L_0886A9C8;
    case 469u: goto L_0886A9D8;
    case 470u: goto L_0886A9E8;
    case 471u: goto L_0886A9F0;
    case 472u: goto L_0886A9FC;
    case 473u: goto L_0886AA08;
    case 474u: goto L_0886AA14;
    case 475u: goto L_0886AA1C;
    case 476u: goto L_0886AA28;
    case 477u: goto L_0886AA34;
    case 478u: goto L_0886AA44;
    case 479u: goto L_0886AA54;
    case 480u: goto L_0886AA64;
    case 481u: goto L_0886AA78;
    case 482u: goto L_0886AA8C;
    case 483u: goto L_0886AA9C;
    case 484u: goto L_0886AAA8;
    case 485u: goto L_0886AAB8;
    case 486u: goto L_0886AAC8;
    case 487u: goto L_0886AAD0;
    case 488u: goto L_0886AB00;
    case 489u: goto L_0886AB20;
    case 490u: goto L_0886AB2C;
    case 491u: goto L_0886AB44;
    case 492u: goto L_0886AB50;
    case 493u: goto L_0886AB58;
    case 494u: goto L_0886AB68;
    case 495u: goto L_0886AB74;
    case 496u: goto L_0886AB84;
    case 497u: goto L_0886AB9C;
    case 498u: goto L_0886ABBC;
    case 499u: goto L_0886ABCC;
    case 500u: goto L_0886ABD8;
    case 501u: goto L_0886ABF4;
    case 502u: goto L_0886ABFC;
    case 503u: goto L_0886AC08;
    case 504u: goto L_0886AC10;
    case 505u: goto L_0886AC24;
    case 506u: goto L_0886AC44;
    case 507u: goto L_0886AC4C;
    case 508u: goto L_0886AC54;
    case 509u: goto L_0886AC5C;
    case 510u: goto L_0886AC68;
    case 511u: goto L_0886AC6C;
    case 512u: goto L_0886AC80;
    case 513u: goto L_0886AC88;
    case 514u: goto L_0886ACA4;
    case 515u: goto L_0886ACB4;
    case 516u: goto L_0886ACF4;
    case 517u: goto L_0886AD0C;
    case 518u: goto L_0886AD14;
    case 519u: goto L_0886AD20;
    case 520u: goto L_0886AD44;
    case 521u: goto L_0886AD54;
    case 522u: goto L_0886AD5C;
    case 523u: goto L_0886AD70;
    case 524u: goto L_0886AD78;
    case 525u: goto L_0886ADA0;
    case 526u: goto L_0886ADB0;
    case 527u: goto L_0886ADB8;
    case 528u: goto L_0886ADBC;
    case 529u: goto L_0886ADC4;
    case 530u: goto L_0886ADD4;
    case 531u: goto L_0886ADDC;
    case 532u: goto L_0886ADE0;
    case 533u: goto L_0886ADE4;
    case 534u: goto L_0886ADF4;
    case 535u: goto L_0886AE08;
    case 536u: goto L_0886AE1C;
    case 537u: goto L_0886AE20;
    case 538u: goto L_0886AE48;
    case 539u: goto L_0886AE58;
    case 540u: goto L_0886AE60;
    case 541u: goto L_0886AE64;
    case 542u: goto L_0886AE6C;
    case 543u: goto L_0886AE7C;
    case 544u: goto L_0886AE84;
    case 545u: goto L_0886AE88;
    case 546u: goto L_0886AE8C;
    case 547u: goto L_0886AE9C;
    case 548u: goto L_0886AEB0;
    case 549u: goto L_0886AEC4;
    case 550u: goto L_0886AED8;
    case 551u: goto L_0886AEE4;
    case 552u: goto L_0886AEF8;
    case 553u: goto L_0886AF04;
    case 554u: goto L_0886AF30;
    case 555u: goto L_0886AF7C;
    case 556u: goto L_0886AF84;
    case 557u: goto L_0886AF94;
    case 558u: goto L_0886AFB4;
    case 559u: goto L_0886AFD0;
    case 560u: goto L_0886AFF4;
    case 561u: goto L_0886AFFC;
    case 562u: goto L_0886B008;
    case 563u: goto L_0886B024;
    case 564u: goto L_0886B034;
    case 565u: goto L_0886B040;
    case 566u: goto L_0886B064;
    case 567u: goto L_0886B068;
    case 568u: goto L_0886B090;
    case 569u: goto L_0886B0B0;
    case 570u: goto L_0886B0B4;
    case 571u: goto L_0886B0D0;
    case 572u: goto L_0886B0E4;
    case 573u: goto L_0886B0E8;
    case 574u: goto L_0886B108;
    case 575u: goto L_0886B11C;
    case 576u: goto L_0886B128;
    case 577u: goto L_0886B154;
    case 578u: goto L_0886B15C;
    case 579u: goto L_0886B178;
    case 580u: goto L_0886B184;
    case 581u: goto L_0886B1AC;
    case 582u: goto L_0886B1B4;
    case 583u: goto L_0886B1E0;
    case 584u: goto L_0886B1E8;
    case 585u: goto L_0886B220;
    case 586u: goto L_0886B228;
    case 587u: goto L_0886B244;
    case 588u: goto L_0886B250;
    case 589u: goto L_0886B270;
    case 590u: goto L_0886B27C;
    case 591u: goto L_0886B284;
    case 592u: goto L_0886B28C;
    case 593u: goto L_0886B2A4;
    case 594u: goto L_0886B2B0;
    case 595u: goto L_0886B2BC;
    case 596u: goto L_0886B2C8;
    case 597u: goto L_0886B2D8;
    case 598u: goto L_0886B2EC;
    case 599u: goto L_0886B314;
    case 600u: goto L_0886B338;
    case 601u: goto L_0886B340;
    case 602u: goto L_0886B34C;
    case 603u: goto L_0886B364;
    case 604u: goto L_0886B37C;
    case 605u: goto L_0886B384;
    case 606u: goto L_0886B394;
    case 607u: goto L_0886B3B4;
    case 608u: goto L_0886B3BC;
    case 609u: goto L_0886B3CC;
    case 610u: goto L_0886B404;
    case 611u: goto L_0886B414;
    case 612u: goto L_0886B424;
    case 613u: goto L_0886B43C;
    case 614u: goto L_0886B44C;
    case 615u: goto L_0886B454;
    case 616u: goto L_0886B464;
    case 617u: goto L_0886B484;
    case 618u: goto L_0886B498;
    case 619u: goto L_0886B52C;
    case 620u: goto L_0886B544;
    case 621u: goto L_0886B55C;
    case 622u: goto L_0886B570;
    case 623u: goto L_0886B578;
    case 624u: goto L_0886B580;
    case 625u: goto L_0886B588;
    case 626u: goto L_0886B590;
    case 627u: goto L_0886B598;
    case 628u: goto L_0886B5A0;
    case 629u: goto L_0886B5AC;
    case 630u: goto L_0886B5B8;
    case 631u: goto L_0886B5C4;
    case 632u: goto L_0886B5F0;
    case 633u: goto L_0886B610;
    case 634u: goto L_0886B618;
    case 635u: goto L_0886B620;
    case 636u: goto L_0886B62C;
    case 637u: goto L_0886B634;
    case 638u: goto L_0886B63C;
    case 639u: goto L_0886B644;
    case 640u: goto L_0886B678;
    case 641u: goto L_0886B690;
    case 642u: goto L_0886B698;
    case 643u: goto L_0886B6A4;
    case 644u: goto L_0886B6AC;
    case 645u: goto L_0886B6BC;
    case 646u: goto L_0886B6D8;
    case 647u: goto L_0886B6E8;
    case 648u: goto L_0886B6F4;
    case 649u: goto L_0886B70C;
    case 650u: goto L_0886B714;
    case 651u: goto L_0886B718;
    case 652u: goto L_0886B738;
    case 653u: goto L_0886B800;
    case 654u: goto L_0886B828;
    case 655u: goto L_0886B840;
    case 656u: goto L_0886B860;
    case 657u: goto L_0886B8DC;
    case 658u: goto L_0886B920;
    case 659u: goto L_0886B930;
    case 660u: goto L_0886B940;
    case 661u: goto L_0886B950;
    case 662u: goto L_0886B968;
    case 663u: goto L_0886B978;
    case 664u: goto L_0886B9BC;
    case 665u: goto L_0886B9D4;
    case 666u: goto L_0886B9EC;
    case 667u: goto L_0886B9FC;
    case 668u: goto L_0886BA20;
    case 669u: goto L_0886BA28;
    case 670u: goto L_0886BA2C;
    case 671u: goto L_0886BA44;
    case 672u: goto L_0886BA5C;
    case 673u: goto L_0886BA64;
    case 674u: goto L_0886BA68;
    case 675u: goto L_0886BA78;
    case 676u: goto L_0886BA90;
    case 677u: goto L_0886BA98;
    case 678u: goto L_0886BABC;
    case 679u: goto L_0886BB00;
    case 680u: goto L_0886BB1C;
    case 681u: goto L_0886BB34;
    case 682u: goto L_0886BB4C;
    case 683u: goto L_0886BB60;
    case 684u: goto L_0886BB94;
    case 685u: goto L_0886BB9C;
    case 686u: goto L_0886BBB8;
    case 687u: goto L_0886BBCC;
    case 688u: goto L_0886BBD4;
    case 689u: goto L_0886BBF4;
    case 690u: goto L_0886BBFC;
    case 691u: goto L_0886BC04;
    case 692u: goto L_0886BC0C;
    case 693u: goto L_0886BC28;
    case 694u: goto L_0886BC3C;
    case 695u: goto L_0886BC44;
    case 696u: goto L_0886BC60;
    case 697u: goto L_0886BC74;
    case 698u: goto L_0886BC90;
    case 699u: goto L_0886BCAC;
    case 700u: goto L_0886BCCC;
    case 701u: goto L_0886BCD4;
    case 702u: goto L_0886BCEC;
    case 703u: goto L_0886BD00;
    case 704u: goto L_0886BD1C;
    case 705u: goto L_0886BD3C;
    case 706u: goto L_0886BD44;
    case 707u: goto L_0886BD5C;
    case 708u: goto L_0886BD70;
    case 709u: goto L_0886BDC4;
    case 710u: goto L_0886BDD0;
    case 711u: goto L_0886BDDC;
    case 712u: goto L_0886BDEC;
    case 713u: goto L_0886BE38;
    case 714u: goto L_0886BE44;
    case 715u: goto L_0886BE58;
    case 716u: goto L_0886BE5C;
    case 717u: goto L_0886BEA0;
    case 718u: goto L_0886BEB8;
    case 719u: goto L_0886BEC0;
    case 720u: goto L_0886BED4;
    case 721u: goto L_0886BEE0;
    case 722u: goto L_0886BF98;
    case 723u: goto L_0886BFA8;
    case 724u: goto L_0886BFB8;
    case 725u: goto L_0886BFD0;
    case 726u: goto L_0886BFDC;
    case 727u: goto L_0886BFE8;
    case 728u: goto L_0886BFEC;
    case 729u: goto L_0886BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08868000:
    ctx.gpr[5] = (ctx.gpr[18] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[18] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_0886804C;
L_0886804C:
    ctx.gpr[5] = (1026u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
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
L_08868084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088680BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 649u, 0x08867E20u>(ctx, &aot_mem) && ctx.pc == 0x088680BCu) goto L_088680BC;
    return;
L_088680BC:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088680E8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088680E8u) goto L_088680E8;
    return;
L_088680E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13696)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0886813C;
      }
      goto L_088680F8;
    }
L_088680F8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[7] = (2229u << 16u);
      if (branch_taken) {
          goto L_0886813C;
      }
      goto L_0886810C;
    }
L_0886810C:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    goto L_08868114;
L_08868114:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[9] = (ctx.gpr[10] - ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[11]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
        goto L_08868114;
    }
    goto L_0886813C;
L_0886813C:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
      if (branch_taken) {
          goto L_088681A4;
      }
      goto L_08868148;
    }
L_08868148:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886818C;
      }
      goto L_08868150;
    }
L_08868150:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08868180;
      }
      goto L_08868158;
    }
L_08868158:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868174;
      }
      goto L_08868160;
    }
L_08868160:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868198;
      }
      goto L_08868168;
    }
L_08868168:
    ctx.gpr[4] = (1028u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_088681AC;
      }
      goto L_08868174;
    }
L_08868174:
    ctx.gpr[4] = (1029u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_088681AC;
      }
      goto L_08868180;
    }
L_08868180:
    ctx.gpr[4] = (1027u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_088681AC;
      }
      goto L_0886818C;
    }
L_0886818C:
    ctx.gpr[4] = (1026u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_088681AC;
      }
      goto L_08868198;
    }
L_08868198:
    ctx.gpr[4] = (1024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_088681AC;
      }
      goto L_088681A4;
    }
L_088681A4:
    ctx.gpr[4] = (1025u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | ctx.gpr[16]);
    goto L_088681AC;
L_088681AC:
    ctx.gpr[4] = (4736u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(286));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08868214;
      }
      goto L_088681C8;
    }
L_088681C8:
    ctx.gpr[4] = (ctx.gpr[17] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    goto L_08868214;
L_08868214:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
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
L_0886824C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08868298u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 649u, 0x08867E20u>(ctx, &aot_mem) && ctx.pc == 0x08868298u) goto L_08868298;
    return;
L_08868298:
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088682C4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088682C4u) goto L_088682C4;
    return;
L_088682C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13696)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08868318;
      }
      goto L_088682D4;
    }
L_088682D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] << 4u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08868318;
      }
      goto L_088682E8;
    }
L_088682E8:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    goto L_088682F0;
L_088682F0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
        goto L_088682F0;
    }
    goto L_08868318;
L_08868318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08868338u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08868338u) goto L_08868338;
    return;
L_08868338:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
      if (branch_taken) {
          goto L_088683A0;
      }
      goto L_08868344;
    }
L_08868344:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08868388;
      }
      goto L_0886834C;
    }
L_0886834C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0886837C;
      }
      goto L_08868354;
    }
L_08868354:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868370;
      }
      goto L_0886835C;
    }
L_0886835C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868394;
      }
      goto L_08868364;
    }
L_08868364:
    ctx.gpr[4] = (1028u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_088683A8;
      }
      goto L_08868370;
    }
L_08868370:
    ctx.gpr[4] = (1029u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_088683A8;
      }
      goto L_0886837C;
    }
L_0886837C:
    ctx.gpr[4] = (1027u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_088683A8;
      }
      goto L_08868388;
    }
L_08868388:
    ctx.gpr[4] = (1026u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_088683A8;
      }
      goto L_08868394;
    }
L_08868394:
    ctx.gpr[4] = (1024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_088683A8;
      }
      goto L_088683A0;
    }
L_088683A0:
    ctx.gpr[4] = (1025u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[18]);
    goto L_088683A8;
L_088683A8:
    ctx.gpr[4] = (4736u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4382));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08868410;
      }
      goto L_088683C4;
    }
L_088683C4:
    ctx.gpr[4] = (ctx.gpr[22] >> 8u);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[22] & ctx.gpr[5]);
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[17]);
    goto L_08868410;
L_08868410:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 8u);
      if (branch_taken) {
          goto L_08868460;
      }
      goto L_08868418;
    }
L_08868418:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[19] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[17]);
    goto L_08868460;
L_08868460:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
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
L_088684A4:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08868528;
      }
      goto L_088684B4;
    }
L_088684B4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08868568;
      }
      goto L_08868528;
    }
L_08868528:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08868568;
L_08868568:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088685E0;
      }
      goto L_08868594;
    }
L_08868594:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5296), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2848));
      if (branch_taken) {
          goto L_088685E8;
      }
      goto L_088685C8;
    }
L_088685C8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088685D8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088685D8u) goto L_088685D8;
    return;
L_088685D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868604;
      }
      goto L_088685E0;
    }
L_088685E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08868668;
      }
      goto L_088685E8;
    }
L_088685E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08868604u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2784));
    goto L_08868C74;
L_08868604:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08868610u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088684A4;
L_08868610:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868650;
      }
      goto L_08868618;
    }
L_08868618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2784)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2784));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08868650;
L_08868650:
    ctx.gpr[4] = (0u | 479u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5304), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5296)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5300), ctx.gpr[17]);
    goto L_08868668;
L_08868668:
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
L_08868684:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(1), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(5), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(9), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(17), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(21), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(25), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(33), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(37), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(41), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(49), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(53), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(57), ctx.gpr[3]));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[9] = ((ctx.gpr[9] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[11] = ((ctx.gpr[11] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[24] = ((ctx.gpr[24] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[25] = ((ctx.gpr[25] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[3] = ((ctx.gpr[3] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088687C8;
      }
      goto L_08868750;
    }
L_08868750:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5168));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x0886878Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2848));
    goto L_08868684;
L_0886878C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5296)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5304)));
    ctx.gpr[6] = (4608u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088687D0;
      }
      goto L_088687C0;
    }
L_088687C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886881C;
      }
      goto L_088687C8;
    }
L_088687C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08868838;
      }
      goto L_088687D0;
    }
L_088687D0:
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    goto L_0886881C;
L_0886881C:
    ctx.gpr[4] = (1026u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08868838;
L_08868838:
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
L_08868854:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5296), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5300), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886886C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08868940;
      }
      goto L_088688A8;
    }
L_088688A8:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5168));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x088688E4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2848));
    goto L_08868684;
L_088688E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08868908u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08868908u) goto L_08868908;
    return;
L_08868908:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
      if (branch_taken) {
          goto L_08868984;
      }
      goto L_08868918;
    }
L_08868918:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886896C;
      }
      goto L_08868920;
    }
L_08868920:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08868960;
      }
      goto L_08868928;
    }
L_08868928:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08868948;
      }
      goto L_08868930;
    }
L_08868930:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868954;
      }
      goto L_08868938;
    }
L_08868938:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868978;
      }
      goto L_08868940;
    }
L_08868940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08868A68;
      }
      goto L_08868948;
    }
L_08868948:
    ctx.gpr[5] = (1028u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886898C;
      }
      goto L_08868954;
    }
L_08868954:
    ctx.gpr[5] = (1029u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886898C;
      }
      goto L_08868960;
    }
L_08868960:
    ctx.gpr[5] = (1027u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886898C;
      }
      goto L_0886896C;
    }
L_0886896C:
    ctx.gpr[5] = (1026u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886898C;
      }
      goto L_08868978;
    }
L_08868978:
    ctx.gpr[5] = (1024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886898C;
      }
      goto L_08868984;
    }
L_08868984:
    ctx.gpr[5] = (1025u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
    goto L_0886898C;
L_0886898C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5304)));
    ctx.gpr[6] = (4608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5296)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08868A04;
      }
      goto L_088689B8;
    }
L_088689B8:
    ctx.gpr[5] = (ctx.gpr[20] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08868A04;
L_08868A04:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 8u);
      if (branch_taken) {
          goto L_08868A54;
      }
      goto L_08868A0C;
    }
L_08868A0C:
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[19] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08868A54;
L_08868A54:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08868A68;
L_08868A68:
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
L_08868A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08868AB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088684A4;
L_08868AB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2784)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2784));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 479u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5304), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[18] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08868B68;
      }
      goto L_08868B3C;
    }
L_08868B3C:
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x08868B64u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2848));
    goto L_08868684;
L_08868B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    goto L_08868B68;
L_08868B68:
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (1025u << 16u);
      if (branch_taken) {
          goto L_08868BD0;
      }
      goto L_08868B74;
    }
L_08868B74:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08868BB8;
      }
      goto L_08868B7C;
    }
L_08868B7C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08868BAC;
      }
      goto L_08868B84;
    }
L_08868B84:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868BA0;
      }
      goto L_08868B8C;
    }
L_08868B8C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868BC4;
      }
      goto L_08868B94;
    }
L_08868B94:
    ctx.gpr[5] = (1028u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BD4;
      }
      goto L_08868BA0;
    }
L_08868BA0:
    ctx.gpr[5] = (1029u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BD4;
      }
      goto L_08868BAC;
    }
L_08868BAC:
    ctx.gpr[5] = (1027u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BD4;
      }
      goto L_08868BB8;
    }
L_08868BB8:
    ctx.gpr[5] = (1026u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BD4;
      }
      goto L_08868BC4;
    }
L_08868BC4:
    ctx.gpr[5] = (1024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_08868BD4;
      }
      goto L_08868BD0;
    }
L_08868BD0:
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[16]);
    goto L_08868BD4;
L_08868BD4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5304)));
    ctx.gpr[6] = (4608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08868C48;
      }
      goto L_08868BF8;
    }
L_08868BF8:
    ctx.gpr[5] = (ctx.gpr[17] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5168));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08868C48;
L_08868C48:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
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
L_08868C74:
    ctx.set_vfpu_scalar_bits_ct<34u>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<66u>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<98u>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08868C8C;
L_08868C8C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_08868C8C;
      }
      goto L_08868CAC;
    }
L_08868CAC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868CBC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868CD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08868CE4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5312), 0u);
    goto L_08868D3C;
L_08868CE4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868CF4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08868D14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 757u, 0x08A07CF0u>(ctx, &aot_mem) && ctx.pc == 0x08868D14u) goto L_08868D14;
    return;
L_08868D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868D28;
      }
      goto L_08868D20;
    }
L_08868D20:
    ctx.gpr[31] = (0x08868D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 357u, 0x0883989Cu>(ctx, &aot_mem) && ctx.pc == 0x08868D28u) goto L_08868D28;
    return;
L_08868D28:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868D3C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868D50:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08868D68;
      }
      goto L_08868D60;
    }
L_08868D60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5312)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3004));
    goto L_08868D68;
L_08868D68:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(5312), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.hi);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868DA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.hi);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868E04;
      }
      goto L_08868DFC;
    }
L_08868DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08868E80;
      }
      goto L_08868E04;
    }
L_08868E04:
    ctx.gpr[31] = (0x08868E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 354u, 0x08839870u>(ctx, &aot_mem) && ctx.pc == 0x08868E0Cu) goto L_08868E0C;
    return;
L_08868E0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868E24;
      }
      goto L_08868E14;
    }
L_08868E14:
    ctx.gpr[31] = (0x08868E1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 714u, 0x08A07A50u>(ctx, &aot_mem) && ctx.pc == 0x08868E1Cu) goto L_08868E1C;
    return;
L_08868E1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868E2C;
      }
      goto L_08868E24;
    }
L_08868E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08868E80;
      }
      goto L_08868E2C;
    }
L_08868E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08868E38u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 349u, 0x088397C8u>(ctx, &aot_mem) && ctx.pc == 0x08868E38u) goto L_08868E38;
    return;
L_08868E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08868E44u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 709u, 0x08A07970u>(ctx, &aot_mem) && ctx.pc == 0x08868E44u) goto L_08868E44;
    return;
L_08868E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -6008 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6009 ? 1u : 0u);
      if (branch_taken) {
          goto L_08868E6C;
      }
      goto L_08868E5C;
    }
L_08868E5C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868E6C;
      }
      goto L_08868E64;
    }
L_08868E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08868E80;
      }
      goto L_08868E6C;
    }
L_08868E6C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868E7C;
      }
      goto L_08868E74;
    }
L_08868E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08868E80;
      }
      goto L_08868E7C;
    }
L_08868E7C:
    ctx.gpr[2] = (0u | 3u);
    goto L_08868E80;
L_08868E80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868E90:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868E98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08868EB8;
      }
      goto L_08868EA8;
    }
L_08868EA8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868EB8;
      }
      goto L_08868EB0;
    }
L_08868EB0:
    ctx.gpr[31] = (0x08868EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08868EB8u) goto L_08868EB8;
    return;
L_08868EB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868EC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5392), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5392));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[31] = (0x08868F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08868F44u) goto L_08868F44;
    return;
L_08868F44:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08868F50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4288));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F50u) goto L_08868F50;
    return;
L_08868F50:
    ctx.gpr[31] = (0x08868F58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F58u) goto L_08868F58;
    return;
L_08868F58:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4276));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x08868F6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4264));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F6Cu) goto L_08868F6C;
    return;
L_08868F6C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364), ctx.gpr[2]);
    ctx.gpr[31] = (0x08868F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08868F7Cu) goto L_08868F7C;
    return;
L_08868F7C:
    ctx.gpr[31] = (0x08868F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08868F84u) goto L_08868F84;
    return;
L_08868F84:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08868F90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F90u) goto L_08868F90;
    return;
L_08868F90:
    ctx.gpr[31] = (0x08868F98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F98u) goto L_08868F98;
    return;
L_08868F98:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4248));
    ctx.gpr[31] = (0x08868FA8u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08868FA8u) goto L_08868FA8;
    return;
L_08868FA8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7360), ctx.gpr[2]);
    ctx.gpr[31] = (0x08868FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08868FB8u) goto L_08868FB8;
    return;
L_08868FB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868FC4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5392), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5392));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868FD8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5464)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869000;
      }
      goto L_08868FF4;
    }
L_08868FF4:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08869008;
      }
      goto L_08869000;
    }
L_08869000:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869008;
L_08869008:
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08869020;
    }
    goto L_08869020;
L_08869020:
    ctx.gpr[5] = (17029u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 21845u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08869044;
    }
    goto L_08869044;
L_08869044:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886904C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5392));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886905C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_0886933C;
      }
      goto L_08869098;
    }
L_08869098:
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[8] + static_cast<std::uint32_t>(5392));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0886933C;
      }
      goto L_088690AC;
    }
L_088690AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(5392), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886921C;
      }
      goto L_08869100;
    }
L_08869100:
    ctx.gpr[31] = (0x08869108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F85Cu>(ctx, &aot_mem) && ctx.pc == 0x08869108u) goto L_08869108;
    return;
L_08869108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886921C;
      }
      goto L_08869110;
    }
L_08869110:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[31] = (0x0886911Cu);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0886911Cu) goto L_0886911C;
    return;
L_0886911C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(664))))));
    ctx.gpr[31] = (0x08869128u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x08869128u) goto L_08869128;
    return;
L_08869128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08869178;
      }
      goto L_08869140;
    }
L_08869140:
    ctx.gpr[31] = (0x08869148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 207u, 0x08A35414u>(ctx, &aot_mem) && ctx.pc == 0x08869148u) goto L_08869148;
    return;
L_08869148:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08869154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 105u, 0x088A8570u>(ctx, &aot_mem) && ctx.pc == 0x08869154u) goto L_08869154;
    return;
L_08869154:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088691AC;
      }
      goto L_08869178;
    }
L_08869178:
    ctx.gpr[31] = (0x08869180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 207u, 0x08A35414u>(ctx, &aot_mem) && ctx.pc == 0x08869180u) goto L_08869180;
    return;
L_08869180:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x0886918Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x0886918Cu) goto L_0886918C;
    return;
L_0886918C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088691AC;
L_088691AC:
    ctx.gpr[4] = (0u | 225u);
    ctx.gpr[31] = (0x088691B8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088691B8u) goto L_088691B8;
    return;
L_088691B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(664))))));
    ctx.gpr[31] = (0x088691C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 652u, 0x088A7E10u>(ctx, &aot_mem) && ctx.pc == 0x088691C4u) goto L_088691C4;
    return;
L_088691C4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869214;
      }
      goto L_088691D0;
    }
L_088691D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_088691FC;
    }
    goto L_088691DC;
L_088691DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x088691ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088691ECu) goto L_088691EC;
    return;
L_088691EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088691FC;
L_088691FC:
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[22];
    goto L_08869214;
L_08869214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088692FC;
      }
      goto L_0886921C;
    }
L_0886921C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088692BC;
      }
      goto L_08869228;
    }
L_08869228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088692BC;
      }
      goto L_08869248;
    }
L_08869248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08869268u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869268u) goto L_08869268;
    return;
L_08869268:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088692B4;
      }
      goto L_08869274;
    }
L_08869274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886929C;
      }
      goto L_08869280;
    }
L_08869280:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(41));
    ctx.gpr[31] = (0x08869290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08869290u) goto L_08869290;
    return;
L_08869290:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886929C;
L_0886929C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088692B4;
L_088692B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088692FC;
      }
      goto L_088692BC;
    }
L_088692BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088692FC;
      }
      goto L_088692D8;
    }
L_088692D8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2044)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    goto L_088692FC;
L_088692FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08869310;
    }
    goto L_08869310;
L_08869310:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08869328u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 442u, 0x08862A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08869328u) goto L_08869328;
    return;
L_08869328:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0886933Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 440u, 0x088629F4u>(ctx, &aot_mem) && ctx.pc == 0x0886933Cu) goto L_0886933C;
    return;
L_0886933C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886935C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088693CC;
      }
      goto L_088693A4;
    }
L_088693A4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5464)));
    ctx.gpr[16] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_088693D4;
      }
      goto L_088693C4;
    }
L_088693C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869484;
      }
      goto L_088693CC;
    }
L_088693CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D14;
      }
      goto L_088693D4;
    }
L_088693D4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088693E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x088693E0u) goto L_088693E0;
    return;
L_088693E0:
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5464)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08869424;
    }
    goto L_08869424;
L_08869424:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (17392u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17288u << 16u);
    ctx.gpr[31] = (0x08869454u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08869454u) goto L_08869454;
    return;
L_08869454:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5464)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08869484u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(5464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 872u, 0x08AD378Cu>(ctx, &aot_mem) && ctx.pc == 0x08869484u) goto L_08869484;
    return;
L_08869484:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869B70;
      }
      goto L_08869490;
    }
L_08869490:
    ctx.gpr[31] = (0x08869498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08869498u) goto L_08869498;
    return;
L_08869498:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088694A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088694A4u) goto L_088694A4;
    return;
L_088694A4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088694B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088694B0u) goto L_088694B0;
    return;
L_088694B0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088694BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088694BCu) goto L_088694BC;
    return;
L_088694BC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x088694C8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088694C8u) goto L_088694C8;
    return;
L_088694C8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088694D4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088694D4u) goto L_088694D4;
    return;
L_088694D4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08869754;
      }
      goto L_088694E4;
    }
L_088694E4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x08869514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08869514u) goto L_08869514;
    return;
L_08869514:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08869534;
    }
    goto L_08869520;
L_08869520:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088696E4;
      }
      goto L_08869530;
    }
L_08869530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08869534;
L_08869534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_0886958C;
    }
    goto L_08869550;
L_08869550:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08869564u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 436u, 0x088D5EECu>(ctx, &aot_mem) && ctx.pc == 0x08869564u) goto L_08869564;
    return;
L_08869564:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2044)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08869580;
    }
    goto L_08869580;
L_08869580:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088696E4;
      }
      goto L_08869588;
    }
L_08869588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_0886958C;
L_0886958C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08869644;
    }
    goto L_088695A8;
L_088695A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088695C8u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088695C8u) goto L_088695C8;
    return;
L_088695C8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08869638;
      }
      goto L_088695D4;
    }
L_088695D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088695E4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 142u, 0x08980A50u>(ctx, &aot_mem) && ctx.pc == 0x088695E4u) goto L_088695E4;
    return;
L_088695E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08869610;
    }
    goto L_088695F0;
L_088695F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[31] = (0x08869600u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08869600u) goto L_08869600;
    return;
L_08869600:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08869610;
L_08869610:
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08869638;
    }
    goto L_08869638;
L_08869638:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088696E4;
      }
      goto L_08869640;
    }
L_08869640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08869644;
L_08869644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_088696E4;
    }
    goto L_08869660;
L_08869660:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08869680u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869680u) goto L_08869680;
    return;
L_08869680:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.gpr[4] = (16040u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_088696E4;
L_088696E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08869754;
      }
      goto L_0886970C;
    }
L_0886970C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08869720u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 442u, 0x08862A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08869720u) goto L_08869720;
    return;
L_08869720:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5460)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08869740;
    }
    goto L_08869740;
L_08869740:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08869754u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 440u, 0x088629F4u>(ctx, &aot_mem) && ctx.pc == 0x08869754u) goto L_08869754;
    return;
L_08869754:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886976Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0886976Cu) goto L_0886976C;
    return;
L_0886976C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869B4C;
      }
      goto L_08869774;
    }
L_08869774:
    ctx.gpr[31] = (0x0886977Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0886977Cu) goto L_0886977C;
    return;
L_0886977C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3229)));
    ctx.gpr[5] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088697E8;
      }
      goto L_0886978C;
    }
L_0886978C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7360)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088697A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088697A0u) goto L_088697A0;
    return;
L_088697A0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[9] = (16736u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[10] = (17280u << 16u);
    ctx.gpr[11] = (17184u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[31] = (0x088697E0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 339u, 0x08A264E0u>(ctx, &aot_mem) && ctx.pc == 0x088697E0u) goto L_088697E0;
    return;
L_088697E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869B4C;
      }
      goto L_088697E8;
    }
L_088697E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088697FCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088697FCu) goto L_088697FC;
    return;
L_088697FC:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[5] = (16508u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 17166u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08869984;
      }
      goto L_08869834;
    }
L_08869834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869984;
      }
      goto L_08869840;
    }
L_08869840:
    ctx.gpr[31] = (0x08869848u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F85Cu>(ctx, &aot_mem) && ctx.pc == 0x08869848u) goto L_08869848;
    return;
L_08869848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869984;
      }
      goto L_08869850;
    }
L_08869850:
    ctx.gpr[31] = (0x08869858u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08869858u) goto L_08869858;
    return;
L_08869858:
    ctx.gpr[31] = (0x08869860u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3032)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08869860u) goto L_08869860;
    return;
L_08869860:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3024)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[4] = (16040u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[8] = (48972u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[8] = (16640u << 16u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[2];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    ctx.gpr[31] = (0x088698E8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 339u, 0x08A264E0u>(ctx, &aot_mem) && ctx.pc == 0x088698E8u) goto L_088698E8;
    return;
L_088698E8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.gpr[7] = (0u | 158u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08869938u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 339u, 0x08A264E0u>(ctx, &aot_mem) && ctx.pc == 0x08869938u) goto L_08869938;
    return;
L_08869938:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[30];
    ctx.gpr[31] = (0x0886997Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 339u, 0x08A264E0u>(ctx, &aot_mem) && ctx.pc == 0x0886997Cu) goto L_0886997C;
    return;
L_0886997C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_08869B04;
      }
      goto L_08869984;
    }
L_08869984:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15779u << 16u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088699B8;
    }
    goto L_088699B8;
L_088699B8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088699D8;
    }
    goto L_088699D8;
L_088699D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (16204u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[7] = (48972u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[18];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[18] = ctx.fpr[13] + ctx.fpr[18];
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x08869A58u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 371u, 0x08A26A50u>(ctx, &aot_mem) && ctx.pc == 0x08869A58u) goto L_08869A58;
    return;
L_08869A58:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[7] = (16508u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (ctx.gpr[7] | 17166u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.gpr[7] = (0u | 158u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08869AB4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 371u, 0x08A26A50u>(ctx, &aot_mem) && ctx.pc == 0x08869AB4u) goto L_08869AB4;
    return;
L_08869AB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[30];
    ctx.gpr[31] = (0x08869B00u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 371u, 0x08A26A50u>(ctx, &aot_mem) && ctx.pc == 0x08869B00u) goto L_08869B00;
    return;
L_08869B00:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_08869B04;
L_08869B04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869B30;
      }
      goto L_08869B1C;
    }
L_08869B1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08869B4C;
      }
      goto L_08869B30;
    }
L_08869B30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869B4C;
      }
      goto L_08869B48;
    }
L_08869B48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08869B4C;
L_08869B4C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08869B58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08869B58u) goto L_08869B58;
    return;
L_08869B58:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08869B64u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08869B64u) goto L_08869B64;
    return;
L_08869B64:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08869B70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08869B70u) goto L_08869B70;
    return;
L_08869B70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D14;
      }
      goto L_08869B7C;
    }
L_08869B7C:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08869B90u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x08869B90u) goto L_08869B90;
    return;
L_08869B90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D14;
      }
      goto L_08869B9C;
    }
L_08869B9C:
    ctx.gpr[31] = (0x08869BA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 186u, 0x08A352A8u>(ctx, &aot_mem) && ctx.pc == 0x08869BA4u) goto L_08869BA4;
    return;
L_08869BA4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D14;
      }
      goto L_08869BB0;
    }
L_08869BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08869BDC;
    }
    goto L_08869BBC;
L_08869BBC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(201));
    ctx.gpr[31] = (0x08869BCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08869BCCu) goto L_08869BCC;
    return;
L_08869BCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(201)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08869BDC;
L_08869BDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869D14;
      }
      goto L_08869BF4;
    }
L_08869BF4:
    ctx.gpr[31] = (0x08869BFCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08869BFCu) goto L_08869BFC;
    return;
L_08869BFC:
    ctx.gpr[31] = (0x08869C04u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08869C04u) goto L_08869C04;
    return;
L_08869C04:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08869C1Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08869C1Cu) goto L_08869C1C;
    return;
L_08869C1C:
    ctx.gpr[31] = (0x08869C24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08869C24u) goto L_08869C24;
    return;
L_08869C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_08869C68;
      }
      goto L_08869C3C;
    }
L_08869C3C:
    ctx.gpr[31] = (0x08869C44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 207u, 0x08A35414u>(ctx, &aot_mem) && ctx.pc == 0x08869C44u) goto L_08869C44;
    return;
L_08869C44:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08869C50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 105u, 0x088A8570u>(ctx, &aot_mem) && ctx.pc == 0x08869C50u) goto L_08869C50;
    return;
L_08869C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08869C60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08869C60u) goto L_08869C60;
    return;
L_08869C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869C8C;
      }
      goto L_08869C68;
    }
L_08869C68:
    ctx.gpr[31] = (0x08869C70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 207u, 0x08A35414u>(ctx, &aot_mem) && ctx.pc == 0x08869C70u) goto L_08869C70;
    return;
L_08869C70:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08869C7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x08869C7Cu) goto L_08869C7C;
    return;
L_08869C7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[31] = (0x08869C8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08869C8Cu) goto L_08869C8C;
    return;
L_08869C8C:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x08869CA4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08869CA4u) goto L_08869CA4;
    return;
L_08869CA4:
    ctx.gpr[31] = (0x08869CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08869CACu) goto L_08869CAC;
    return;
L_08869CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08869CE4;
      }
      goto L_08869CB8;
    }
L_08869CB8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08869CC4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08869CC4u) goto L_08869CC4;
    return;
L_08869CC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869CDC;
      }
      goto L_08869CD0;
    }
L_08869CD0:
    ctx.gpr[31] = (0x08869CD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08869CD8u) goto L_08869CD8;
    return;
L_08869CD8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08869CDC;
L_08869CDC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08869CE4;
L_08869CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08869CF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4232));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08869CF0u) goto L_08869CF0;
    return;
L_08869CF0:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (17224u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08869D0Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08869D0Cu) goto L_08869D0C;
    return;
L_08869D0C:
    ctx.gpr[31] = (0x08869D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08869D14u) goto L_08869D14;
    return;
L_08869D14:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5332)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5328)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(5336), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5356)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5368)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(5364)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5372), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5380), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(5344), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(5340), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(5348), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(5352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(5360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2227u << 16u);
    ctx.gpr[17] = (2227u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5392));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08869E48u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(5384), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08868E90;
L_08869E48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08869E54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5488));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08869E54u) goto L_08869E54;
    return;
L_08869E54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869E68:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5508)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5504)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5536)));
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
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(5512), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(5532)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(5540), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(5548), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(5520), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(5516), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(5524), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(5528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5544), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(5552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869F30:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869F5C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869F90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0886A038u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D474u>(ctx, &aot_mem) && ctx.pc == 0x0886A038u) goto L_0886A038;
    return;
L_0886A038:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A048;
      }
      goto L_0886A040;
    }
L_0886A040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A0B4;
      }
      goto L_0886A048;
    }
L_0886A048:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (0u | 1u);
    goto L_0886A0B4;
L_0886A0B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A0D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A0FCu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A0FCu) goto L_0886A0FC;
    return;
L_0886A0FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A108u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 548u, 0x08A4BD14u>(ctx, &aot_mem) && ctx.pc == 0x0886A108u) goto L_0886A108;
    return;
L_0886A108:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A11Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A11Cu) goto L_0886A11C;
    return;
L_0886A11C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886A194;
      }
      goto L_0886A128;
    }
L_0886A128:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A134u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A134u) goto L_0886A134;
    return;
L_0886A134:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A144u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x0886A144u) goto L_0886A144;
    return;
L_0886A144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A154u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A154u) goto L_0886A154;
    return;
L_0886A154:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A164u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 50u, 0x0890C488u>(ctx, &aot_mem) && ctx.pc == 0x0886A164u) goto L_0886A164;
    return;
L_0886A164:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A170u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0886A170u) goto L_0886A170;
    return;
L_0886A170:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A19C;
      }
      goto L_0886A178;
    }
L_0886A178:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A184u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886A184u) goto L_0886A184;
    return;
L_0886A184:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A128;
      }
      goto L_0886A194;
    }
L_0886A194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A1A0;
      }
      goto L_0886A19C;
    }
L_0886A19C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0886A1A0;
L_0886A1A0:
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
L_0886A1BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A1E0u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A1E0u) goto L_0886A1E0;
    return;
L_0886A1E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A1F0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A1F0u) goto L_0886A1F0;
    return;
L_0886A1F0:
    ctx.gpr[31] = (0x0886A1F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A1F8u) goto L_0886A1F8;
    return;
L_0886A1F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A204u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 82u, 0x0890C708u>(ctx, &aot_mem) && ctx.pc == 0x0886A204u) goto L_0886A204;
    return;
L_0886A204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A270;
      }
      goto L_0886A20C;
    }
L_0886A20C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A218u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A218u) goto L_0886A218;
    return;
L_0886A218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A224u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A224u) goto L_0886A224;
    return;
L_0886A224:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A230u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A230u) goto L_0886A230;
    return;
L_0886A230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A240u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 50u, 0x0890C488u>(ctx, &aot_mem) && ctx.pc == 0x0886A240u) goto L_0886A240;
    return;
L_0886A240:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A24Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0886A24Cu) goto L_0886A24C;
    return;
L_0886A24C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A268;
      }
      goto L_0886A254;
    }
L_0886A254:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A260u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886A260u) goto L_0886A260;
    return;
L_0886A260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A1F8;
      }
      goto L_0886A268;
    }
L_0886A268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886A274;
      }
      goto L_0886A270;
    }
L_0886A270:
    ctx.gpr[2] = (0u | 0u);
    goto L_0886A274;
L_0886A274:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A2ACu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A2ACu) goto L_0886A2AC;
    return;
L_0886A2AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A2B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 548u, 0x08A4BD14u>(ctx, &aot_mem) && ctx.pc == 0x0886A2B8u) goto L_0886A2B8;
    return;
L_0886A2B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A2C8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x0886A2C8u) goto L_0886A2C8;
    return;
L_0886A2C8:
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
L_0886A2E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A2FCu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A2FCu) goto L_0886A2FC;
    return;
L_0886A2FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A308u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x0886A308u) goto L_0886A308;
    return;
L_0886A308:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A31Cu);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 530u, 0x08A4BC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A31Cu) goto L_0886A31C;
    return;
L_0886A31C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A354u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x0886A354u) goto L_0886A354;
    return;
L_0886A354:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A368u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A368u) goto L_0886A368;
    return;
L_0886A368:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A374u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 548u, 0x08A4BD14u>(ctx, &aot_mem) && ctx.pc == 0x0886A374u) goto L_0886A374;
    return;
L_0886A374:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886A388;
      }
      goto L_0886A380;
    }
L_0886A380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886A3B0;
      }
      goto L_0886A388;
    }
L_0886A388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A394u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x0886A394u) goto L_0886A394;
    return;
L_0886A394:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A3AC;
      }
      goto L_0886A3A8;
    }
L_0886A3A8:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_0886A3AC;
L_0886A3AC:
    ctx.gpr[20] = (0u | 3u);
    goto L_0886A3B0;
L_0886A3B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A3C0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 530u, 0x08A4BC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A3C0u) goto L_0886A3C0;
    return;
L_0886A3C0:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A408;
      }
      goto L_0886A3D4;
    }
L_0886A3D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A3E4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A3E4u) goto L_0886A3E4;
    return;
L_0886A3E4:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A3F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x0886A3F4u) goto L_0886A3F4;
    return;
L_0886A3F4:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A3D4;
      }
      goto L_0886A408;
    }
L_0886A408:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A414u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A414u) goto L_0886A414;
    return;
L_0886A414:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A424u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x0886A424u) goto L_0886A424;
    return;
L_0886A424:
    ctx.gpr[2] = (0u | 0u);
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
L_0886A448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A478u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A478u) goto L_0886A478;
    return;
L_0886A478:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A484u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 548u, 0x08A4BD14u>(ctx, &aot_mem) && ctx.pc == 0x0886A484u) goto L_0886A484;
    return;
L_0886A484:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x0886A49Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 460u, 0x08A4B7FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A49Cu) goto L_0886A49C;
    return;
L_0886A49C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886A4DC;
      }
      goto L_0886A4A8;
    }
L_0886A4A8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A4B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 530u, 0x08A4BC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A4B8u) goto L_0886A4B8;
    return;
L_0886A4B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A4C8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A4C8u) goto L_0886A4C8;
    return;
L_0886A4C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A4E4;
      }
      goto L_0886A4D4;
    }
L_0886A4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A518;
      }
      goto L_0886A4DC;
    }
L_0886A4DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A534;
      }
      goto L_0886A4E4;
    }
L_0886A4E4:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A4F8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A4F8u) goto L_0886A4F8;
    return;
L_0886A4F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A508u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x0886A508u) goto L_0886A508;
    return;
L_0886A508:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A4E4;
      }
      goto L_0886A518;
    }
L_0886A518:
    ctx.gpr[31] = (0x0886A520u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A520u) goto L_0886A520;
    return;
L_0886A520:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A530u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x0886A530u) goto L_0886A530;
    return;
L_0886A530:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0886A534;
L_0886A534:
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
L_0886A554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A590u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4148));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 444u, 0x08A4B700u>(ctx, &aot_mem) && ctx.pc == 0x0886A590u) goto L_0886A590;
    return;
L_0886A590:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A5A8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 460u, 0x08A4B7FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A5A8u) goto L_0886A5A8;
    return;
L_0886A5A8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0886A5C0u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 460u, 0x08A4B7FCu>(ctx, &aot_mem) && ctx.pc == 0x0886A5C0u) goto L_0886A5C0;
    return;
L_0886A5C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0886A5DCu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886A5DCu) goto L_0886A5DC;
    return;
L_0886A5DC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886A5F4;
      }
      goto L_0886A5E4;
    }
L_0886A5E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A5F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 548u, 0x08A4BD14u>(ctx, &aot_mem) && ctx.pc == 0x0886A5F0u) goto L_0886A5F0;
    return;
L_0886A5F0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0886A5F4;
L_0886A5F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A600u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 17u, 0x08A4C150u>(ctx, &aot_mem) && ctx.pc == 0x0886A600u) goto L_0886A600;
    return;
L_0886A600:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2225u << 16u);
      if (branch_taken) {
          goto L_0886A670;
      }
      goto L_0886A60C;
    }
L_0886A60C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4144));
    goto L_0886A610;
L_0886A610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A620u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A620u) goto L_0886A620;
    return;
L_0886A620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A62Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B7CCu>(ctx, &aot_mem) && ctx.pc == 0x0886A62Cu) goto L_0886A62C;
    return;
L_0886A62C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0886A640;
      }
      goto L_0886A634;
    }
L_0886A634:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A640u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x0886A640u) goto L_0886A640;
    return;
L_0886A640:
    ctx.gpr[31] = (0x0886A648u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 6u, 0x08A4C078u>(ctx, &aot_mem) && ctx.pc == 0x0886A648u) goto L_0886A648;
    return;
L_0886A648:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0886A660;
      }
      goto L_0886A650;
    }
L_0886A650:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886A660u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 593u, 0x08A4BFACu>(ctx, &aot_mem) && ctx.pc == 0x0886A660u) goto L_0886A660;
    return;
L_0886A660:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A610;
      }
      goto L_0886A670;
    }
L_0886A670:
    ctx.gpr[31] = (0x0886A678u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 3u, 0x08A4C040u>(ctx, &aot_mem) && ctx.pc == 0x0886A678u) goto L_0886A678;
    return;
L_0886A678:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A6A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A6C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x0886A6C8u) goto L_0886A6C8;
    return;
L_0886A6C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A6D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x0886A6D8u) goto L_0886A6D8;
    return;
L_0886A6D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A6EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A714u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0886A714u) goto L_0886A714;
    return;
L_0886A714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A774;
      }
      goto L_0886A71C;
    }
L_0886A71C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886A728u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A728u) goto L_0886A728;
    return;
L_0886A728:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886A734u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A734u) goto L_0886A734;
    return;
L_0886A734:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x0886A740u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A740u) goto L_0886A740;
    return;
L_0886A740:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886A750u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 50u, 0x0890C488u>(ctx, &aot_mem) && ctx.pc == 0x0886A750u) goto L_0886A750;
    return;
L_0886A750:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886A75Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x0886A75Cu) goto L_0886A75C;
    return;
L_0886A75C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886A76Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886A76Cu) goto L_0886A76C;
    return;
L_0886A76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0886A784;
      }
      goto L_0886A774;
    }
L_0886A774:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A784u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 603u, 0x0890B864u>(ctx, &aot_mem) && ctx.pc == 0x0886A784u) goto L_0886A784;
    return;
L_0886A784:
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
L_0886A79C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886AAD0;
      }
      goto L_0886A7DC;
    }
L_0886A7DC:
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4116));
    goto L_0886A7E4;
L_0886A7E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A7F4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A7F4u) goto L_0886A7F4;
    return;
L_0886A7F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A804u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A804u) goto L_0886A804;
    return;
L_0886A804:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886A814u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_0886A6EC;
L_0886A814:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[23]);
      if (branch_taken) {
          goto L_0886A834;
      }
      goto L_0886A81C;
    }
L_0886A81C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0886A82Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_0886A6A4;
L_0886A82C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A840;
      }
      goto L_0886A834;
    }
L_0886A834:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A840u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886A840u) goto L_0886A840;
    return;
L_0886A840:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886A854;
      }
      goto L_0886A84C;
    }
L_0886A84C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AAD0;
      }
      goto L_0886A854;
    }
L_0886A854:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A878u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A878u) goto L_0886A878;
    return;
L_0886A878:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A888u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A888u) goto L_0886A888;
    return;
L_0886A888:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x0886A898u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886A6EC;
L_0886A898:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A8B8;
      }
      goto L_0886A8A0;
    }
L_0886A8A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886A8B0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_0886A6A4;
L_0886A8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A910;
      }
      goto L_0886A8B8;
    }
L_0886A8B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A8C4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886A8C4u) goto L_0886A8C4;
    return;
L_0886A8C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A8D4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A8D4u) goto L_0886A8D4;
    return;
L_0886A8D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886A8E4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_0886A6EC;
L_0886A8E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A904;
      }
      goto L_0886A8EC;
    }
L_0886A8EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886A8FCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_0886A6A4;
L_0886A8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A910;
      }
      goto L_0886A904;
    }
L_0886A904:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A910u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886A910u) goto L_0886A910;
    return;
L_0886A910:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886A924;
      }
      goto L_0886A91C;
    }
L_0886A91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AAD0;
      }
      goto L_0886A924;
    }
L_0886A924:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A934u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A934u) goto L_0886A934;
    return;
L_0886A934:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A940u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0886A940u) goto L_0886A940;
    return;
L_0886A940:
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A954u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A954u) goto L_0886A954;
    return;
L_0886A954:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886A964u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_0886A6A4;
L_0886A964:
    ctx.gpr[20] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    goto L_0886A96C;
L_0886A96C:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_0886A970;
L_0886A970:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A980u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A980u) goto L_0886A980;
    return;
L_0886A980:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886A990u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_0886A6EC;
L_0886A990:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A9C4;
      }
      goto L_0886A998;
    }
L_0886A998:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886A9B0;
      }
      goto L_0886A9A4;
    }
L_0886A9A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A9B0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x0886A9B0u) goto L_0886A9B0;
    return;
L_0886A9B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886A9BCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886A9BCu) goto L_0886A9BC;
    return;
L_0886A9BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0886A970;
      }
      goto L_0886A9C4;
    }
L_0886A9C4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_0886A9C8;
L_0886A9C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886A9D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886A9D8u) goto L_0886A9D8;
    return;
L_0886A9D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x0886A9E8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886A6EC;
L_0886A9E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AA1C;
      }
      goto L_0886A9F0;
    }
L_0886A9F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886AA08;
      }
      goto L_0886A9FC;
    }
L_0886A9FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886AA08u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x0886AA08u) goto L_0886AA08;
    return;
L_0886AA08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886AA14u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886AA14u) goto L_0886AA14;
    return;
L_0886AA14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886A9C8;
      }
      goto L_0886AA1C;
    }
L_0886AA1C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AA8C;
      }
      goto L_0886AA28;
    }
L_0886AA28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886AA34u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886AA34u) goto L_0886AA34;
    return;
L_0886AA34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886AA44u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886AA44u) goto L_0886AA44;
    return;
L_0886AA44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886AA54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0886AA54u) goto L_0886AA54;
    return;
L_0886AA54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0886AA64u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0886A6A4;
L_0886AA64:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AAA8;
      }
      goto L_0886AA78;
    }
L_0886AA78:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0886AAB8;
      }
      goto L_0886AA8C;
    }
L_0886AA8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886AA9Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886A6A4;
L_0886AA9C:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886A96C;
      }
      goto L_0886AAA8;
    }
L_0886AAA8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    goto L_0886AAB8;
L_0886AAB8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886AAC8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0886A79C;
L_0886AAC8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A7E4;
      }
      goto L_0886AAD0;
    }
L_0886AAD0:
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
L_0886AB00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886AB20u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886AB20u) goto L_0886AB20;
    return;
L_0886AB20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886AB2Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 548u, 0x08A4BD14u>(ctx, &aot_mem) && ctx.pc == 0x0886AB2Cu) goto L_0886AB2C;
    return;
L_0886AB2C:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x0886AB44u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4148));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 425u, 0x08A4B594u>(ctx, &aot_mem) && ctx.pc == 0x0886AB44u) goto L_0886AB44;
    return;
L_0886AB44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886AB50u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0886AB50u) goto L_0886AB50;
    return;
L_0886AB50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0886AB68;
      }
      goto L_0886AB58;
    }
L_0886AB58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0886AB68u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x0886AB68u) goto L_0886AB68;
    return;
L_0886AB68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886AB74u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0886AB74u) goto L_0886AB74;
    return;
L_0886AB74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0886AB84u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_0886A79C;
L_0886AB84:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AB9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886ABBCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13344));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 488u, 0x08A4B984u>(ctx, &aot_mem) && ctx.pc == 0x0886ABBCu) goto L_0886ABBC;
    return;
L_0886ABBC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ABCC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ABD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886AC10;
      }
      goto L_0886ABF4;
    }
L_0886ABF4:
    ctx.gpr[31] = (0x0886ABFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0886AC80;
L_0886ABFC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AC10;
      }
      goto L_0886AC08;
    }
L_0886AC08:
    ctx.gpr[31] = (0x0886AC10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x0886AC10u) goto L_0886AC10;
    return;
L_0886AC10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AC24:
    if (lcs::decomp::run<0x0886AC24u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0886AC4C;
      }
      goto L_0886AC44;
    }
L_0886AC44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886AC6C;
      }
      goto L_0886AC4C;
    }
L_0886AC4C:
    ctx.gpr[31] = (0x0886AC54u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B9BCu;
    return;
L_0886AC54:
    ctx.gpr[31] = (0x0886AC5Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B9B4u;
    return;
L_0886AC5C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x0886AC68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886AED8;
L_0886AC68:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0886AC6C;
L_0886AC6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AC80:
    if (lcs::decomp::run<0x0886AC80u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AC88:
    if (lcs::decomp::run<0x0886AC88u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0886AD0C;
      }
      goto L_0886ACA4;
    }
L_0886ACA4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x0886ACB4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0B9C4u;
    return;
L_0886ACB4:
    ctx.gpr[4] = (16298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886AD14;
      }
      goto L_0886ACF4;
    }
L_0886ACF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0886AD20;
      }
      goto L_0886AD0C;
    }
L_0886AD0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC4;
      }
      goto L_0886AD14;
    }
L_0886AD14:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0886AD20;
L_0886AD20:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886AD44;
L_0886AD44:
    ctx.gpr[7] = (ctx.gpr[17] << (ctx.gpr[5] & 31u));
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[7]);
    if (ctx.gpr[7] == 0u) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0886AD5C;
    }
    goto L_0886AD54;
L_0886AD54:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886AD5C;
      }
      goto L_0886AD5C;
    }
L_0886AD5C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AD44;
      }
      goto L_0886AD70;
    }
L_0886AD70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886AD78;
L_0886AD78:
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(18)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-128));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886ADC4;
      }
      goto L_0886ADA0;
    }
L_0886ADA0:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
        goto L_0886ADB8;
    }
    goto L_0886ADB0;
L_0886ADB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886ADBC;
      }
      goto L_0886ADB8;
    }
L_0886ADB8:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_0886ADBC;
L_0886ADBC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_0886ADE4;
      }
      goto L_0886ADC4;
    }
L_0886ADC4:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
        goto L_0886ADDC;
    }
    goto L_0886ADD4;
L_0886ADD4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886ADE0;
      }
      goto L_0886ADDC;
    }
L_0886ADDC:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_0886ADE0;
L_0886ADE0:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_0886ADE4;
L_0886ADE4:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AE08;
      }
      goto L_0886ADF4;
    }
L_0886ADF4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0886AE08;
    }
    goto L_0886AE08;
L_0886AE08:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AD78;
      }
      goto L_0886AE1C;
    }
L_0886AE1C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0886AE20;
L_0886AE20:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-128));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AE6C;
      }
      goto L_0886AE48;
    }
L_0886AE48:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
        goto L_0886AE60;
    }
    goto L_0886AE58;
L_0886AE58:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886AE64;
      }
      goto L_0886AE60;
    }
L_0886AE60:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_0886AE64;
L_0886AE64:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_0886AE8C;
      }
      goto L_0886AE6C;
    }
L_0886AE6C:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
        goto L_0886AE84;
    }
    goto L_0886AE7C;
L_0886AE7C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886AE88;
      }
      goto L_0886AE84;
    }
L_0886AE84:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_0886AE88;
L_0886AE88:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_0886AE8C;
L_0886AE8C:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AEB0;
      }
      goto L_0886AE9C;
    }
L_0886AE9C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0886AEB0;
    }
    goto L_0886AEB0;
L_0886AEB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AE20;
      }
      goto L_0886AEC4;
    }
L_0886AEC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AED8:
    if (lcs::decomp::run<0x0886AED8u>(rt, ctx)) { jump_target = ctx.gpr[31]; local_pc = jump_target; if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } ctx.pc = jump_target; return; }  // [decomp-hook]
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0886AEE4;
L_0886AEE4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AEE4;
      }
      goto L_0886AEF8;
    }
L_0886AEF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AF04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886AF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 310u, 0x08ACA17Cu>(ctx, &aot_mem) && ctx.pc == 0x0886AF30u) goto L_0886AF30;
    return;
L_0886AF30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13416)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13416), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    goto L_0886AF7C;
L_0886AF7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AFB4;
      }
      goto L_0886AF84;
    }
L_0886AF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886AFB4;
      }
      goto L_0886AF94;
    }
L_0886AF94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_0886AF7C;
      }
      goto L_0886AFB4;
    }
L_0886AFB4:
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
L_0886AFD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886AFF4u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    goto L_0886B024;
L_0886AFF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B008;
      }
      goto L_0886AFFC;
    }
L_0886AFFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886B008u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886B15C;
L_0886B008:
    ctx.gpr[2] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
L_0886B024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B034u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    goto L_0886B040;
L_0886B034:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B040:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0886B090;
      }
      goto L_0886B064;
    }
L_0886B064:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0886B068;
L_0886B068:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    if (ctx.gpr[4] != ctx.gpr[8]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0886B068;
    }
    goto L_0886B090;
L_0886B090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[8] = (2230u << 16u);
      if (branch_taken) {
          goto L_0886B108;
      }
      goto L_0886B0B0;
    }
L_0886B0B0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4000));
    goto L_0886B0B4;
L_0886B0B4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == ctx.gpr[11]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0886B0E8;
    }
    goto L_0886B0D0;
L_0886B0D0:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0886B0D0;
      }
      goto L_0886B0E4;
    }
L_0886B0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0886B0E8;
L_0886B0E8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886B0B4;
      }
      goto L_0886B108;
    }
L_0886B108:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0886B154;
      }
      goto L_0886B11C;
    }
L_0886B11C:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0886B128;
L_0886B128:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    if (ctx.gpr[4] != ctx.gpr[8]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0886B128;
    }
    goto L_0886B154;
L_0886B154:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B15C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B178u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 715u, 0x08AA3578u>(ctx, &aot_mem) && ctx.pc == 0x0886B178u) goto L_0886B178;
    return;
L_0886B178:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B184:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13420)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4128));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13420), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B1AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B1B4:
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
L_0886B1E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B1E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0886B228;
      }
      goto L_0886B220;
    }
L_0886B220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B2EC;
      }
      goto L_0886B228;
    }
L_0886B228:
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2225u << 16u);
      if (branch_taken) {
          goto L_0886B2EC;
      }
      goto L_0886B244;
    }
L_0886B244:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4044));
    ctx.gpr[19] = (2230u << 16u);
    goto L_0886B250;
L_0886B250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29296)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B28C;
      }
      goto L_0886B270;
    }
L_0886B270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B28C;
      }
      goto L_0886B27C;
    }
L_0886B27C:
    ctx.gpr[31] = (0x0886B284u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B284u) goto L_0886B284;
    return;
L_0886B284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0886B28C;
L_0886B28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B2D8;
      }
      goto L_0886B2A4;
    }
L_0886B2A4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886B2B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B2B0u) goto L_0886B2B0;
    return;
L_0886B2B0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B2C8;
      }
      goto L_0886B2BC;
    }
L_0886B2BC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886B2C8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0886B1B4;
L_0886B2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_0886B2D8;
L_0886B2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B250;
      }
      goto L_0886B2EC;
    }
L_0886B2EC:
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
L_0886B314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0886B34C;
      }
      goto L_0886B338;
    }
L_0886B338:
    ctx.gpr[31] = (0x0886B340u);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[16]);
    goto L_0886B1E8;
L_0886B340:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0886B338;
      }
      goto L_0886B34C;
    }
L_0886B34C:
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
L_0886B364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B37Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0886B1E0;
L_0886B37C:
    ctx.gpr[31] = (0x0886B384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B1E8;
L_0886B384:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B3B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20000));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x0886B3B4u) goto L_0886B3B4;
    return;
L_0886B3B4:
    ctx.gpr[31] = (0x0886B3BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B314;
L_0886B3BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B3CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (94u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16384));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B404u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x0886B404u) goto L_0886B404;
    return;
L_0886B404:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886B414u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4008));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x0886B414u) goto L_0886B414;
    return;
L_0886B414:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0886B424u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x0886B424u) goto L_0886B424;
    return;
L_0886B424:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[31] = (0x0886B43Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x0886B43Cu) goto L_0886B43C;
    return;
L_0886B43C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886B44Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x0886B44Cu) goto L_0886B44C;
    return;
L_0886B44C:
    ctx.gpr[31] = (0x0886B454u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x0886B454u) goto L_0886B454;
    return;
L_0886B454:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886B464u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 560u, 0x08AD6A18u>(ctx, &aot_mem) && ctx.pc == 0x0886B464u) goto L_0886B464;
    return;
L_0886B464:
    ctx.gpr[4] = (18260u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16711));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0886B484u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0886AFD0;
L_0886B484:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886B698;
      }
      goto L_0886B498;
    }
L_0886B498:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15308), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15304), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15296), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15320), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15324), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7356), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13564), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20716), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20724), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0886B52Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 111u, 0x08A28DA0u>(ctx, &aot_mem) && ctx.pc == 0x0886B52Cu) goto L_0886B52C;
    return;
L_0886B52C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x0886B544u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 669u, 0x0892FFACu>(ctx, &aot_mem) && ctx.pc == 0x0886B544u) goto L_0886B544;
    return;
L_0886B544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20948), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x0886B55Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 406u, 0x08986588u>(ctx, &aot_mem) && ctx.pc == 0x0886B55Cu) goto L_0886B55C;
    return;
L_0886B55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5144), ctx.gpr[4]);
    ctx.gpr[31] = (0x0886B570u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 350u, 0x08876D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B570u) goto L_0886B570;
    return;
L_0886B570:
    ctx.gpr[31] = (0x0886B578u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 369u, 0x089C5860u>(ctx, &aot_mem) && ctx.pc == 0x0886B578u) goto L_0886B578;
    return;
L_0886B578:
    ctx.gpr[31] = (0x0886B580u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 423u, 0x08A8A88Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B580u) goto L_0886B580;
    return;
L_0886B580:
    ctx.gpr[31] = (0x0886B588u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 265u, 0x088D5340u>(ctx, &aot_mem) && ctx.pc == 0x0886B588u) goto L_0886B588;
    return;
L_0886B588:
    ctx.gpr[31] = (0x0886B590u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 658u, 0x08887614u>(ctx, &aot_mem) && ctx.pc == 0x0886B590u) goto L_0886B590;
    return;
L_0886B590:
    ctx.gpr[31] = (0x0886B598u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 266u, 0x08A257B8u>(ctx, &aot_mem) && ctx.pc == 0x0886B598u) goto L_0886B598;
    return;
L_0886B598:
    ctx.gpr[31] = (0x0886B5A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 268u, 0x08A257CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B5A0u) goto L_0886B5A0;
    return;
L_0886B5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x0886B5ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 326u, 0x08ACA2F0u>(ctx, &aot_mem) && ctx.pc == 0x0886B5ACu) goto L_0886B5AC;
    return;
L_0886B5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x0886B5B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 265u, 0x08AB1418u>(ctx, &aot_mem) && ctx.pc == 0x0886B5B8u) goto L_0886B5B8;
    return;
L_0886B5B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x0886B5C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 255u, 0x0890DB74u>(ctx, &aot_mem) && ctx.pc == 0x0886B5C4u) goto L_0886B5C4;
    return;
L_0886B5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24020), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7352), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[31] = (0x0886B5F0u);
    ctx.gpr[6] = (0u | 11248u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0886B5F0u) goto L_0886B5F0;
    return;
L_0886B5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25804), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7404), ctx.gpr[4]);
    ctx.gpr[31] = (0x0886B610u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 293u, 0x0894DA00u>(ctx, &aot_mem) && ctx.pc == 0x0886B610u) goto L_0886B610;
    return;
L_0886B610:
    ctx.gpr[31] = (0x0886B618u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 257u, 0x088258B0u>(ctx, &aot_mem) && ctx.pc == 0x0886B618u) goto L_0886B618;
    return;
L_0886B618:
    ctx.gpr[31] = (0x0886B620u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 38u, 0x08824560u>(ctx, &aot_mem) && ctx.pc == 0x0886B620u) goto L_0886B620;
    return;
L_0886B620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0886B62Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 81u, 0x08A28BF0u>(ctx, &aot_mem) && ctx.pc == 0x0886B62Cu) goto L_0886B62C;
    return;
L_0886B62C:
    ctx.gpr[31] = (0x0886B634u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 742u, 0x0896F998u>(ctx, &aot_mem) && ctx.pc == 0x0886B634u) goto L_0886B634;
    return;
L_0886B634:
    ctx.gpr[31] = (0x0886B63Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 97u, 0x0891480Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B63Cu) goto L_0886B63C;
    return;
L_0886B63C:
    ctx.gpr[31] = (0x0886B644u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 326u, 0x08AA58A4u>(ctx, &aot_mem) && ctx.pc == 0x0886B644u) goto L_0886B644;
    return;
L_0886B644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3568), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25752), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7380), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[31] = (0x0886B678u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7384), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 436u, 0x089C5C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B678u) goto L_0886B678;
    return;
L_0886B678:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[17] = (0u | 182u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B6AC;
      }
      goto L_0886B690;
    }
L_0886B690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0886B6BC;
      }
      goto L_0886B698;
    }
L_0886B698:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0886B6A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3964));
    goto L_0886B1B4;
L_0886B6A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B718;
      }
      goto L_0886B6AC;
    }
L_0886B6AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_0886B6BC;
L_0886B6BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0886B6D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3896));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886B6D8u) goto L_0886B6D8;
    return;
L_0886B6D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B6F4;
      }
      goto L_0886B6E8;
    }
L_0886B6E8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    goto L_0886B6F4;
L_0886B6F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0886B70Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886B70Cu) goto L_0886B70C;
    return;
L_0886B70C:
    ctx.gpr[31] = (0x0886B714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 397u, 0x089864D0u>(ctx, &aot_mem) && ctx.pc == 0x0886B714u) goto L_0886B714;
    return;
L_0886B714:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_0886B718;
L_0886B718:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B738:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13428)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13424)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(13456)));
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
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(13432), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(13452)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(13460), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(13468), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13440), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13436), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(13444), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(13448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13464), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(13472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B800:
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
L_0886B828:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_0886B840;
L_0886B840:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B840;
      }
      goto L_0886B860;
    }
L_0886B860:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4384), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4384));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4416));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B8DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(150));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
      if (branch_taken) {
          goto L_0886B950;
      }
      goto L_0886B920;
    }
L_0886B920:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
        goto L_0886B940;
    }
    goto L_0886B930;
L_0886B930:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886B940;
      }
      goto L_0886B940;
    }
L_0886B940:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(0u));
    goto L_0886B950;
L_0886B950:
    ctx.gpr[4] = (15379u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 29884u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2230u << 16u);
    goto L_0886B968;
L_0886B968:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B9BC;
      }
      goto L_0886B978;
    }
L_0886B978:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(272));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8144)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0886B9BCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B9BCu) goto L_0886B9BC;
    return;
L_0886B9BC:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B968;
      }
      goto L_0886B9D4;
    }
L_0886B9D4:
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25056));
    goto L_0886B9EC;
L_0886B9EC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA2C;
      }
      goto L_0886B9FC;
    }
L_0886B9FC:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886BA20u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 654u, 0x0884EB24u>(ctx, &aot_mem) && ctx.pc == 0x0886BA20u) goto L_0886BA20;
    return;
L_0886BA20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA2C;
      }
      goto L_0886BA28;
    }
L_0886BA28:
    ctx.gpr[18] = (0u | 16u);
    goto L_0886BA2C;
L_0886BA2C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B9EC;
      }
      goto L_0886BA44;
    }
L_0886BA44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA64;
      }
      goto L_0886BA5C;
    }
L_0886BA5C:
    ctx.gpr[31] = (0x0886BA64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 15u, 0x0886C3B8u>(ctx, &aot_mem) && ctx.pc == 0x0886BA64u) goto L_0886BA64;
    return;
L_0886BA64:
    ctx.gpr[4] = (0u | 0u);
    goto L_0886BA68;
L_0886BA68:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA98;
      }
      goto L_0886BA78;
    }
L_0886BA78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA68;
      }
      goto L_0886BA90;
    }
L_0886BA90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0886BA98;
      }
      goto L_0886BA98;
    }
L_0886BA98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BABC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2768));
    goto L_0886BB1C;
L_0886BB1C:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0886BB34u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_0886B828;
L_0886BB34:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BB1C;
      }
      goto L_0886BB4C;
    }
L_0886BB4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0886BB94;
L_0886BB94:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0886BBCC;
      }
      goto L_0886BB9C;
    }
L_0886BB9C:
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0886BBCC;
      }
      goto L_0886BBB8;
    }
L_0886BBB8:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886BB94;
      }
      goto L_0886BBCC;
    }
L_0886BBCC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BBFC;
      }
      goto L_0886BBD4;
    }
L_0886BBD4:
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886BBF4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886BABC;
L_0886BBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC74;
      }
      goto L_0886BBFC;
    }
L_0886BBFC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0886BC04;
L_0886BC04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0886BC3C;
      }
      goto L_0886BC0C;
    }
L_0886BC0C:
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC3C;
      }
      goto L_0886BC28;
    }
L_0886BC28:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886BC04;
      }
      goto L_0886BC3C;
    }
L_0886BC3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC74;
      }
      goto L_0886BC44;
    }
L_0886BC44:
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0886BC60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0886B828;
L_0886BC60:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886BC74u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886BABC;
L_0886BC74:
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
L_0886BC90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0886BCAC;
L_0886BCAC:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BCD4;
      }
      goto L_0886BCCC;
    }
L_0886BCCC:
    ctx.gpr[31] = (0x0886BCD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0886B8DC;
L_0886BCD4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BCAC;
      }
      goto L_0886BCEC;
    }
L_0886BCEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BD00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0886BD1C;
L_0886BD1C:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD44;
      }
      goto L_0886BD3C;
    }
L_0886BD3C:
    ctx.gpr[31] = (0x0886BD44u);
    // nop
    goto L_0886BD70;
L_0886BD44:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD1C;
      }
      goto L_0886BD5C;
    }
L_0886BD5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BD70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 8u);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BDC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0886BDC4u) goto L_0886BDC4;
    return;
L_0886BDC4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0886BDD0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0886BDD0u) goto L_0886BDD0;
    return;
L_0886BDD0:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0886BDDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0886BDDCu) goto L_0886BDDC;
    return;
L_0886BDDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7348)));
    ctx.gpr[31] = (0x0886BDECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0886BDECu) goto L_0886BDEC;
    return;
L_0886BDEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16576u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13524)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(4416));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13524), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886BE5C;
      }
      goto L_0886BE38;
    }
L_0886BE38:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13524)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0886BE44;
L_0886BE44:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886BE44;
      }
      goto L_0886BE58;
    }
L_0886BE58:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13524), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886BE5C;
L_0886BE5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13524)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4416), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
        goto L_0886BEB8;
    }
    goto L_0886BEA0;
L_0886BEA0:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
      if (branch_taken) {
          goto L_0886BEC0;
      }
      goto L_0886BEB8;
    }
L_0886BEB8:
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    goto L_0886BEC0;
L_0886BEC0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886BEE0;
      }
      goto L_0886BED4;
    }
L_0886BED4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_0886BEE0;
L_0886BEE0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[30] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[30] + static_cast<std::uint32_t>(116));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4384));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    goto L_0886BF98;
L_0886BF98:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 8u, 0x0886C2CCu>(ctx, &aot_mem); return;
      }
      goto L_0886BFA8;
    }
L_0886BFA8:
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 8u, 0x0886C2CCu>(ctx, &aot_mem); return;
      }
      goto L_0886BFB8;
    }
L_0886BFB8:
    ctx.gpr[9] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[17] << 4u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[20] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0886BFE8;
      }
      goto L_0886BFD0;
    }
L_0886BFD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_0886BFEC;
      }
      goto L_0886BFDC;
    }
L_0886BFDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BFEC;
      }
      goto L_0886BFE8;
    }
L_0886BFE8:
    ctx.gpr[12] = (0u | 1u);
    goto L_0886BFEC;
L_0886BFEC:
    if (ctx.gpr[23] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
        (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 2u, 0x0886C070u>(ctx, &aot_mem); return;
    }
    goto L_0886BFF4;
L_0886BFF4:
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.pc = 0x0886C000u; return;
}

void recomp_unit_0025(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0025_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_25(Runtime &runtime) {
    runtime.register_generated_unit(25u, 0x08868000u, 16384u, &recomp_unit_0025, &recomp_unit_0025_entry);
    runtime.register_function(0x08868000u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886804Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868084u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886810Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868114u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886813Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868148u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868150u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868158u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868160u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868168u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868174u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868180u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886818Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868198u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868214u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886824Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868298u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868318u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868338u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868344u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886834Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868354u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886835Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868364u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868370u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886837Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868388u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868394u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868410u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868418u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868460u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868528u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868568u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868570u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868594u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868604u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868610u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868618u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868650u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868668u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868684u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868728u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868750u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886878Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886881Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868838u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868854u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886886Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868908u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868918u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868920u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868928u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868930u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868938u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868940u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868948u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868954u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868960u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886896Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868978u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868984u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886898Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869000u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869008u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869020u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869044u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886904Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886905Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869098u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869100u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869108u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869110u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886911Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869128u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869140u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869148u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869154u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869178u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869180u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886918Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869214u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886921Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869228u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869248u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869268u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869274u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869280u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869290u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886929Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869310u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869328u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886933Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886935Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869424u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869454u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869484u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869490u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869498u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869514u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869520u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869530u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869534u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869550u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869564u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869580u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869588u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886958Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869600u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869610u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869638u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869640u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869644u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869660u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869680u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886970Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869720u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869740u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869754u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886976Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869774u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886977Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886978Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869834u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869840u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869848u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869850u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869858u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869860u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869938u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886997Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869984u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088699B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088699D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869AB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A038u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A040u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A048u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A108u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A11Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A128u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A134u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A144u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A154u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A164u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A170u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A178u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A184u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A194u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A19Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A204u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A20Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A218u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A224u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A230u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A240u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A24Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A254u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A260u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A268u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A270u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A274u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A288u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A308u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A31Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A330u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A354u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A368u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A374u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A380u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A388u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A394u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A408u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A414u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A424u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A448u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A478u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A484u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A49Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A508u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A518u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A520u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A530u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A534u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A554u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A590u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A600u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A60Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A610u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A620u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A62Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A634u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A640u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A648u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A650u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A660u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A670u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A678u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A714u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A71Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A728u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A734u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A740u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A750u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A75Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A76Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A774u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A784u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A79Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A804u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A814u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A81Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A82Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A834u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A840u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A84Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A854u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A878u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A888u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A898u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A904u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A910u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A91Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A924u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A934u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A940u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A954u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A964u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A96Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A970u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A980u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A990u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A998u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AED8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B008u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B024u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B034u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B040u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B064u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B068u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B090u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B108u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B11Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B128u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B154u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B15Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B178u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B184u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B220u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B228u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B244u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B250u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B270u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B27Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B284u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B28Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B314u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B338u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B340u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B34Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B364u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B37Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B384u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B394u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B404u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B414u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B424u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B43Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B44Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B454u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B464u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B484u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B498u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B52Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B544u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B55Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B570u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B578u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B580u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B588u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B590u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B598u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B610u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B618u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B620u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B62Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B634u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B63Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B644u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B678u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B690u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B698u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B70Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B714u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B718u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B738u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B800u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B828u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B840u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B860u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B920u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B930u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B940u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B950u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B968u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B978u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BABCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BED4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFF4u, &recomp_unit_0025, "recomp_unit_0025");
}
} // namespace psprecomp
